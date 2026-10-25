// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140de7ba2 FUN_140de7ba2 body=584 status=ok
// SIG undefined FUN_140de7ba2(void)

ulonglong FUN_140de7ba2(longlong *param_1,int param_2,longlong *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  
  cVar1 = (**(code **)(*param_1 + 0x498))();
  if ((param_4 == 0) && (cVar1 == '\x03')) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (((char)param_1[0xad] == '\x01') && (0 < (int)param_1[8])) {
      lVar6 = *(longlong *)param_1[7];
      if ((lVar6 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar6);
      }
      else if (lVar6 == 0) goto LAB_140de7db6;
      if (*(int *)(lVar6 + 0xe0) != param_2) {
        puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        *puVar4 = &PTR_FUN_14b970e70;
        *(int *)(puVar4 + 4) = param_2;
        *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
        FUN_14113cb0e(lVar6,puVar4);
      }
    }
    goto LAB_140de7db6;
  }
  uVar8 = 0;
  if ((param_4 != 0) || (*param_3 != DAT_14c9658a8)) goto LAB_140de7db6;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar5 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"gbx.Input.PoolAllGamepadsToFirstPlayer",1);
  if (plVar5 == (longlong *)0x0) {
LAB_140de7cf3:
    bVar2 = (**(code **)(*param_1 + 0x498))(param_1);
    if ((bVar2 < 9) && ((0x1a0U >> (bVar2 & 0x1f) & 1) != 0)) {
      if (param_1[0xaa] != 0) {
        cVar1 = FUN_14128c696();
        if (cVar1 == '\0') goto LAB_140de7d33;
      }
      if ((int)param_1[0xaf] <= *(int *)((longlong)param_1 + 0x5a4)) goto LAB_140de7d33;
      if (param_1[6] == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_1[6] + 0x360);
      }
      lVar6 = FUN_147d7ff84(DAT_14cb0d2b0,uVar7,param_2);
      if (lVar6 != 0) goto LAB_140de7db4;
      FUN_148d318f0(param_1,param_2);
LAB_140de7d8c:
      uVar8 = 1;
      goto LAB_140de7db6;
    }
LAB_140de7d33:
    if (*(code **)(*param_1 + 0x498) == (code *)&LAB_14015c36e) {
      cVar1 = (char)param_1[0x42];
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x498))(param_1);
    }
    if (((cVar1 == '\b') && (param_1[6] != 0)) &&
       ((lVar6 = *(longlong *)(param_1[6] + 0x360), lVar6 != 0 &&
        (*(longlong *)(lVar6 + 0x1f0) != 0)))) {
      lVar6 = FUN_14116599c();
      if (lVar6 != 0) {
        FUN_148d910da(lVar6,param_2);
        goto LAB_140de7d8c;
      }
    }
  }
  else {
    iVar3 = (**(code **)(*plVar5 + 0xb0))(plVar5);
    if ((((iVar3 == 0) || (param_1[6] == 0)) ||
        (lVar6 = *(longlong *)(param_1[6] + 0x360), lVar6 == 0)) ||
       (*(longlong *)(lVar6 + 0x1f0) == 0)) goto LAB_140de7cf3;
    plVar5 = (longlong *)FUN_14116599c();
    if (plVar5 == (longlong *)0x0) goto LAB_140de7cf3;
    cVar1 = (**(code **)(*plVar5 + 0x2c0))(plVar5);
    if (cVar1 != '\0') goto LAB_140de7cf3;
  }
LAB_140de7db4:
  uVar8 = 0;
LAB_140de7db6:
  return uVar8 & 0xffffffff;
}



// FUNCTION 140de7dea FUN_140de7dea body=373 status=ok
// SIG undefined FUN_140de7dea(void)

void FUN_140de7dea(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  (**(code **)(*param_1 + 0x478))();
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0xffffffffffffffff;
  if (*(longlong *)(param_2 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_2 + 0x100) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x100) + 0x50));
  }
  *(undefined4 *)(param_2 + 0xd0) = 0;
  if (*(longlong *)(param_2 + 200) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x90) = 0;
  if (*(int *)(param_2 + 0x94) != 0) {
    FUN_140de7f60((longlong *)(param_2 + 0x88),0);
  }
  *(undefined8 *)(param_2 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  if (0x80 < *(uint *)(param_2 + 0xb4)) {
    *(undefined4 *)(param_2 + 0xb4) = 0x80;
    FUN_1446efbd8(param_2 + 0x98,0);
  }
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_2 + 0x88);
  if (puVar1 == (undefined8 *)0x0) goto LAB_140de7ef4;
  while( true ) {
    FUN_1400020a8(puVar1);
LAB_140de7ef4:
    puVar1 = *(undefined8 **)(param_2 + 0x78);
    if (puVar1 == (undefined8 *)0x0) break;
    *(undefined8 *)(param_2 + 0x78) = *puVar1;
    if (puVar1[4] != 0) {
      plVar2 = puVar1 + 8;
      if ((longlong *)puVar1[6] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar1[6];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_2 + 0x30) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x50));
    return;
  }
  return;
}



// FUNCTION 140de7f60 FUN_140de7f60 body=113 status=ok
// SIG undefined FUN_140de7f60(void)

void FUN_140de7f60(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,0x10);
  }
  return;
}



// FUNCTION 140de7fd2 FUN_140de7fd2 body=40 status=ok
// SIG undefined FUN_140de7fd2(void)

undefined8 FUN_140de7fd2(undefined8 param_1,int param_2)

{
  FUN_140de7ffa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140de7ffa FUN_140de7ffa body=102 status=ok
// SIG undefined FUN_140de7ffa(void)

void FUN_140de7ffa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7f0ed0;
  param_1[0x72] = &PTR_FUN_14b7f1510;
  param_1[0x73] = &PTR_FUN_14b7f15b0;
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  FUN_14063adfa(param_1 + 0x91);
  FUN_14028f4a8(param_1 + 0x76);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140de8068 FUN_140de8068 body=471 status=ok
// SIG undefined FUN_140de8068(void)

undefined8 * FUN_140de8068(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0x43c80000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 6) = 0x43c80000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x27103f800000;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x15) = 10000;
  *(undefined4 *)(param_1 + 0x20) = 10000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x23) = 10000;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  param_1[0x32] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f000000;
  *(undefined2 *)(param_1 + 0x34) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1a2) = 0;
  *(byte *)((longlong)param_1 + 0x1a3) = (*(byte *)((longlong)param_1 + 0x1a3) & 0xf8) + 1;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x1010001;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x1a9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  FUN_140de8240(param_1 + 4,L"r.grass.DensityQualityLevel",L"ViewDistanceQuality");
  FUN_14030806e(param_1 + 0x13,L"r.grass.DensityQualityLevel",L"ViewDistanceQuality");
  FUN_14030806e(param_1 + 0x21,L"r.grass.DensityQualityLevel",L"ViewDistanceQuality");
  return param_1;
}



// FUNCTION 140de8240 FUN_140de8240 body=125 status=ok
// SIG undefined FUN_140de8240(void)

void FUN_140de8240(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(&local_28);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de82cc FUN_140de82cc body=36 status=ok
// SIG undefined FUN_140de82cc(void)

undefined8 FUN_140de82cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140de82fe FUN_140de82fe body=31 status=ok
// SIG undefined FUN_140de82fe(void)

undefined8 FUN_140de82fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140de831e FUN_140de831e body=534 status=ok
// SIG undefined FUN_140de831e(void)

void FUN_140de831e(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar3 = *(longlong *)(lVar3 + 0x3db8), lVar3 != 0)) {
      lVar1 = FUN_140e447e6(lVar3,param_2);
      if (lVar1 != 0) {
        lVar2 = FUN_141218c3a(lVar3);
        if (lVar1 == lVar2) {
          lVar1 = FUN_140e44844(lVar1);
          if (lVar1 != 0) {
            lVar2 = FUN_1457b1050(lVar1);
            if (lVar2 != 0) {
              lVar3 = FUN_1457b1034(lVar3);
              if (lVar3 != 0) {
                if ((longlong)*(int *)(lVar1 + 0xd0) != 0) {
                  lVar3 = *(longlong *)(lVar1 + 200);
                  lVar2 = (longlong)*(int *)(lVar1 + 0xd0) << 5;
                  do {
                    uVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
                    FUN_140de8536(lVar3,uVar4);
                    lVar3 = lVar3 + 0x20;
                    lVar2 = lVar2 + -0x20;
                  } while (lVar2 != 0);
                }
                local_40 = lVar1 + 0x88;
                local_48 = (code *)0x100000000;
                local_38 = 0xffffffff;
                local_30 = 0;
                if (*(int *)(lVar1 + 0xa0) != 0) {
                  FUN_1449c0562(&local_48);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de8536 FUN_140de8536 body=264 status=ok
// SIG undefined FUN_140de8536(void)

ulonglong FUN_140de8536(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_140de867c();
  if ((lVar5 == 0) || (uVar8 = 0, *(int *)(lVar5 + 0x20) == 0)) {
    uVar7 = 0;
  }
  else {
    local_70 = param_2;
    local_68 = FUN_140dfc108(param_2);
    local_60 = 0;
    puStack_58 = &DAT_3f800000ffffffff;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    iVar4 = *(int *)(lVar5 + 0x20);
    if ((longlong)iVar4 == 0) {
      iVar4 = 0;
      iVar6 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar5 + 0x18);
      lVar9 = 0;
      iVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar9);
        if (plVar2 != (longlong *)0x0) {
          bVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,&local_70);
          iVar6 = iVar6 + (uint)(bVar3 ^ 1);
        }
        lVar9 = lVar9 + 0x18;
      } while ((longlong)iVar4 * 0x18 != lVar9);
      iVar4 = *(int *)(lVar5 + 0x20);
      uVar8 = (undefined4)uStack_40;
    }
    uVar7 = CONCAT71((int7)((ulonglong)lVar5 >> 8),iVar6 == iVar4);
    FUN_140de863f(local_48,uVar8);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de863f FUN_140de863f body=60 status=ok
// SIG undefined FUN_140de863f(void)

void FUN_140de863f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1447a1747(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140de867c FUN_140de867c body=136 status=ok
// SIG undefined FUN_140de867c(void)

void FUN_140de867c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_140c52150();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    return;
  }
  return;
}



// FUNCTION 140de8704 FUN_140de8704 body=169 status=ok
// SIG undefined FUN_140de8704(void)

void FUN_140de8704(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_358 [40];
  undefined1 local_330 [776];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar4 = 0;
  lVar3 = param_1;
  if (param_1 == 0x1c8) {
    lVar3 = lVar4;
  }
  FUN_140048e76(local_330,lVar3);
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x118);
    if (uVar1 == 0) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
    }
    lVar4 = *(longlong *)(param_2 + 200 + (ulonglong)uVar2 * 8);
  }
  FUN_140de87ae(local_330,lVar4,param_3,1);
  FUN_140048db6(local_330);
  if ((local_28 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140de87ae FUN_140de87ae body=828 status=ok
// SIG undefined FUN_140de87ae(void)

void FUN_140de87ae(ulonglong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_2 + 0x28;
  if (param_2 == 0) {
    lVar6 = 0;
  }
  iVar4 = ((param_4 ^ 1) & 0xff) * 2;
  uVar1 = *(int *)(param_2 + 0x80) - 3;
  if ((uVar1 < 0x3e) && ((0x2942958a284aca33U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) {
    iVar4 = *(int *)(&DAT_14a355730 + (ulonglong)uVar1 * 4);
  }
  iVar2 = *(int *)(param_2 + 0x84);
  local_50 = param_3;
  if (iVar2 == 1) {
    if ((*(int *)(param_2 + 0x80) == 0) || ((*(byte *)(param_2 + 0xa0) & 1) != 0)) {
      local_28 = *(undefined8 *)(param_2 + 0xa0);
      local_48 = *(undefined4 *)(param_2 + 0x80);
      uStack_44 = *(undefined4 *)(param_2 + 0x84);
      uStack_40 = *(undefined4 *)(param_2 + 0x88);
      uStack_3c = *(undefined4 *)(param_2 + 0x8c);
      local_38 = *(undefined4 *)(param_2 + 0x90);
      uStack_34 = *(undefined4 *)(param_2 + 0x94);
      uStack_30 = *(undefined4 *)(param_2 + 0x98);
      uStack_2c = *(undefined4 *)(param_2 + 0x9c);
      puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar5 + 9;
      if ((undefined8 *)param_1[1] < puVar7) {
        FUN_140023dd8(param_1,0x50);
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar5 + 9;
      }
      *param_1 = (ulonglong)puVar7;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar5;
      param_1[6] = (ulonglong)(puVar5 + 1);
      puVar5[1] = 0;
      *puVar5 = &PTR_FUN_14a354928;
      puVar5[2] = param_2;
      puVar5[3] = param_3;
      *(undefined4 *)(puVar5 + 4) = local_48;
      *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_44;
      *(undefined4 *)(puVar5 + 5) = uStack_40;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_3c;
      *(undefined4 *)(puVar5 + 6) = local_38;
      *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_34;
      *(undefined4 *)(puVar5 + 7) = uStack_30;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_2c;
      puVar5[8] = local_28;
LAB_140de88c5:
      if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    uVar3 = *(undefined4 *)(param_2 + 0x90);
    if (iVar4 == 2) {
      local_58 = 1;
      FUN_140118dbb(param_1,param_2,uVar3,1);
    }
    else if (iVar4 == 0) {
      local_58 = 1;
      FUN_140119514(param_1,param_2,uVar3,1);
    }
    else {
      local_58 = 1;
      FUN_143153667(param_1,param_2,uVar3,1);
    }
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x20);
    if (iVar2 == 4) {
      if (iVar4 == 2) {
        local_58 = 1;
        FUN_140048f60(param_1,param_2);
      }
      else if (iVar4 == 0) {
        local_58 = 1;
        FUN_140e5da0e(param_1,param_2);
      }
      else {
        local_58 = 1;
        FUN_143154acd(param_1,param_2,
                      *(ulonglong *)(lVar6 + 0x68) >> (*(byte *)(param_2 + 0x88) & 0x3f),
                      *(uint *)(lVar6 + 0x70) >> (*(byte *)(param_2 + 0x88) & 0x1f));
      }
    }
    else if (iVar2 == 8) {
      local_58 = *(undefined4 *)(param_2 + 0x90);
      if (iVar4 == 2) {
        FUN_14108ec93(param_1,param_2);
      }
      else if (iVar4 == 1) {
        FUN_143155481(param_1,param_2);
      }
      else {
        FUN_143154fa3(param_1,param_2,
                      *(ulonglong *)(lVar6 + 0x68) >> (*(byte *)(param_2 + 0x88) & 0x3f),
                      *(uint *)(lVar6 + 0x70) >> (*(byte *)(param_2 + 0x88) & 0x1f));
      }
    }
    else {
      if (iVar2 != 5) goto LAB_140de88c5;
      local_58 = *(undefined4 *)(param_2 + 0x90);
      if (iVar4 == 0) {
        FUN_1413e2e1d(param_1,param_2);
      }
      else if (iVar4 == 1) {
        FUN_1414249a6(param_1,param_2);
      }
      else {
        FUN_1414244d0(param_1,param_2,
                      *(ulonglong *)(lVar6 + 0x68) >> (*(byte *)(param_2 + 0x88) & 0x3f),
                      *(uint *)(lVar6 + 0x70) >> (*(byte *)(param_2 + 0x88) & 0x1f));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 140de8aee FUN_140de8aee body=1445 status=ok
// SIG undefined FUN_140de8aee(void)

int * FUN_140de8aee(longlong *param_1,int *param_2,ulonglong *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1446efaca(param_1,iVar16);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar7 = iVar20 + 1;
    iVar10 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar10 = iVar20;
    }
    if (iVar10 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar4 = iVar20;
        }
        else {
          uVar15 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar15) {
              uVar17 = uVar15;
            }
          }
          else {
            uVar17 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar17 << 2,0);
          iVar4 = (int)(uVar9 >> 2);
          iVar7 = -0x20;
          if ((int)uVar15 <= iVar4) {
            iVar7 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar13,iVar4);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar4 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar4 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar13;
        }
        bVar6 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar4 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar5 = (longlong)iVar16;
    iVar20 = *(int *)(*param_1 + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 6) = iVar20;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x10) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar15 = 1;
  puVar8 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar8 = puVar1;
  }
  iVar20 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar20 = iVar16;
  }
  puVar8[iVar20 >> 5] = puVar8[iVar20 >> 5] | 1 << ((byte)iVar16 & 0x1f);
  lVar19 = *param_1;
  lVar5 = lVar5 * 0x10;
  uVar9 = *param_3;
  *(ulonglong *)(lVar19 + lVar5) = uVar9;
  *(undefined4 *)(lVar19 + 8 + lVar5) = 0xffffffff;
  uVar17 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar18 != 0) && (uVar18 != 1)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar20 != -1) {
      do {
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar20 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar20 * 0x10) == uVar9) {
          *puVar2 = uVar9;
          FUN_140de9094(param_1,iVar16);
          iVar16 = iVar20;
          goto LAB_140de8cc5;
        }
        iVar20 = (int)puVar2[1];
      } while (iVar20 != -1);
    }
  }
  if (3 < uVar18) {
    uVar9 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar15 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    *(uint *)(lVar19 + lVar5 + 0xc) = uVar17;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(lVar19 + lVar5 + 8) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar16;
    goto LAB_140de8cc5;
  }
  *(uint *)(param_1 + 9) = uVar15;
  plVar13 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar13,0,0,4);
    uVar15 = *(uint *)(param_1 + 9);
  }
  plVar12 = param_1 + 7;
  if (uVar15 == 1) {
    if (*plVar13 != 0) {
      FUN_1446efa72(plVar13,0,0,4);
    }
LAB_140de8d69:
    uVar17 = 0;
    do {
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      *(undefined4 *)((longlong)plVar13 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar17) * 4) =
           0xffffffff;
      uVar17 = uVar17 + 1;
    } while (uVar15 != uVar17);
  }
  else {
    if (uVar15 == 0) goto LAB_140de8cc5;
    FUN_1446efa72(plVar13,0,uVar15,4);
    if (0 < (int)uVar15) goto LAB_140de8d69;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar9 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      uVar9 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar9;
      }
      iVar7 = 0;
      do {
        if (uVar14 == uVar9) goto LAB_140de8cc5;
        iVar7 = iVar7 + 0x20;
        uVar15 = puVar8[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar9 = 0;
      iVar7 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar21 = uVar14 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar4 = (iVar7 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar4) {
      iVar4 = iVar20;
    }
  }
  if (iVar4 < iVar20) {
    uVar15 = 0xffffffff;
    do {
      lVar5 = *param_1;
      lVar19 = (longlong)iVar4 * 0x10;
      uVar17 = ((uint)(*(ulonglong *)(lVar5 + lVar19) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar5 + lVar19) >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar21 = (longlong)(int)(uVar17 >> 0x10 ^ uVar17) & (longlong)(int)param_1[9] - 1U;
      iVar20 = (int)uVar21;
      *(int *)(lVar5 + 0xc + lVar19) = iVar20;
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      *(undefined4 *)(lVar5 + 8 + lVar19) =
           *(undefined4 *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar12;
      }
      *(int *)((longlong)plVar13 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar15 = ~(uint)uVar14 & uVar15;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar4 = (int)uVar9;
      lVar5 = (longlong)iVar4;
      uVar17 = puVar8[lVar5] & uVar15;
      if (uVar17 == 0) {
        iVar10 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar10 = iVar20 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar4) {
          iVar11 = iVar4;
        }
        if (iVar10 <= iVar4) break;
        lVar19 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar17 = puVar8[lVar5 + lVar19 + 1];
          if (uVar17 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar11 - lVar5 == lVar19) goto LAB_140de8cc5;
        }
        uVar9 = (ulonglong)(iVar4 + (int)lVar19 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar17 & uVar17);
      uVar21 = uVar14 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = (iVar7 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar20);
  }
LAB_140de8cc5:
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 140de9094 FUN_140de9094 body=114 status=ok
// SIG undefined FUN_140de9094(void)

void FUN_140de9094(longlong *param_1,int param_2)

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



// FUNCTION 140de9106 FUN_140de9106 body=62 status=ok
// SIG undefined FUN_140de9106(void)

bool FUN_140de9106(ushort param_1)

{
  undefined4 *puVar1;
  
  if ((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)param_1 * 0x3c + 1) & 2) != 0) {
    puVar1 = &DAT_14ca96c28;
    if (DAT_14ca96c78 != (undefined4 *)0x0) {
      puVar1 = DAT_14ca96c78;
    }
    return ((uint)puVar1[param_1 >> 5] >> (param_1 & 0x1f) & 1) != 0;
  }
  return false;
}



// FUNCTION 140de9144 FUN_140de9144 body=103 status=ok
// SIG undefined FUN_140de9144(void)

ulonglong FUN_140de9144(longlong param_1)

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
LAB_140de918e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140de918e;
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



// FUNCTION 140de91b2 FUN_140de91b2 body=155 status=ok
// SIG undefined FUN_140de91b2(void)

void FUN_140de91b2(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  longlong local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    if (*(longlong *)(param_1 + 0x3e0) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x3b0);
      if ((lVar1 == 0) || ((*(byte *)(*(longlong *)(param_1 + 0x298) + 99) & 2) != 0))
      goto LAB_140de9211;
      local_10 = &local_20;
      lVar3 = lVar1 + 0x80;
      plVar4 = &local_18;
      puVar2 = &LAB_1432e042a;
      local_20 = lVar1;
    }
    else {
      local_28 = &local_18;
      lVar3 = param_1 + 0x3b8;
      plVar4 = &local_30;
      puVar2 = &LAB_1432e0400;
      local_18 = param_1;
    }
    *plVar4 = (longlong)puVar2;
    FUN_140de924e(lVar3);
  }
LAB_140de9211:
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de924e FUN_140de924e body=632 status=ok
// SIG undefined FUN_140de924e(void)

void FUN_140de924e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_c8 [36];
  undefined1 local_a4 [4];
  ulonglong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((char)param_1[2] == '\0') {
    *(undefined1 *)(param_1 + 2) = 1;
    iVar11 = DAT_14c761008;
    do {
      if ((int)param_1[1] < 1) break;
      iVar9 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      do {
        if (*(int *)(*param_1 + 8 + (longlong)iVar9 * 0x10) == 0) {
LAB_140de9433:
          FUN_1457b112e(param_1,iVar9,1);
        }
        else {
          plVar10 = (longlong *)(*param_1 + (longlong)iVar9 * 0x10);
          if (((longlong *)*plVar10 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*(longlong *)*plVar10 + 0x30))(), cVar3 == '\0'))
          goto LAB_140de9433;
          if ((((int)plVar10[1] == 0) || ((longlong *)*plVar10 == (longlong *)0x0)) ||
             (uVar4 = (**(code **)(*(longlong *)*plVar10 + 8))(), local_a0 = uVar4, uVar4 == 0)) {
LAB_140de94af:
            iVar9 = iVar9 + 1;
          }
          else {
            if ((int)uStack_90 != local_64) {
              uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
              uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
              puVar8 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar8 = local_60;
              }
              for (iVar1 = *(int *)(puVar8 + (ulonglong)(local_50 - 1U & (uVar6 >> 0x10 ^ uVar6)) *
                                             4); iVar1 != -1;
                  iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_98 + 8)) {
                if (*(ulonglong *)(local_98 + (longlong)iVar1 * 0x10) == uVar4) goto LAB_140de94af;
              }
            }
            lVar5 = FUN_1411def2e();
            if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
LAB_140de93b5:
              if (((int)plVar10[1] != 0) && ((longlong *)*plVar10 != (longlong *)0x0)) {
                (**(code **)(*(longlong *)*plVar10 + 0x60))();
              }
              FUN_1457b112e(param_1,iVar9,1);
            }
            else {
              puVar7 = DAT_14cab36a8;
              if (DAT_14cab36a8 == (undefined *)0x0) {
                puVar7 = &DAT_14cab3698;
              }
              if ((*(uint *)(puVar7 + (ulonglong)(*(ushort *)(uVar4 + 0x208) >> 5) * 4) >>
                   (*(ushort *)(uVar4 + 0x208) & 0x1f) & 1) == 0) goto LAB_140de93b5;
              iVar9 = iVar9 + 1;
            }
            FUN_1457b12ce(&local_98,local_a4,&local_a0,0);
          }
        }
      } while (iVar9 < (int)param_1[1]);
      (*(code *)*param_2)(param_2[1]);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140603fbe(&local_98);
      bVar2 = 1 < iVar11;
      iVar11 = iVar11 + -1;
    } while (bVar2);
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de94c8 FUN_140de94c8 body=164 status=ok
// SIG undefined FUN_140de94c8(void)

void FUN_140de94c8(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140de956e(param_1,iVar1);
    }
    if (uVar3 != 0) {
      lVar2 = (longlong)iVar1 * 0x60 + *param_1 + 0x59;
      do {
        *(undefined2 *)(lVar2 + -1) = 0x100;
        *(undefined8 *)(lVar2 + -0x59) = 0;
        *(undefined8 *)(lVar2 + -0x51) = 0;
        *(undefined8 *)(lVar2 + -0x49) = 0;
        *(undefined8 *)(lVar2 + -0x41) = 0;
        *(undefined8 *)(lVar2 + -0x39) = 0;
        *(undefined8 *)(lVar2 + -0x31) = 0;
        *(undefined8 *)(lVar2 + -0x29) = 0;
        *(undefined8 *)(lVar2 + -0x21) = 0;
        *(undefined8 *)(lVar2 + -0x19) = 0;
        *(undefined8 *)(lVar2 + -0x11) = 0;
        *(undefined1 *)(lVar2 + -9) = 0;
        lVar2 = lVar2 + 0x60;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148215342(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140de956e FUN_140de956e body=272 status=ok
// SIG undefined FUN_140de956e(void)

void FUN_140de956e(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140de9684 FUN_140de9684 body=57 status=ok
// SIG undefined FUN_140de9684(void)

void FUN_140de9684(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69458 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69458 = FUN_140002ddd(FUN_146520744,uVar1,L"GpsTest_IsDead");
  }
  return;
}



// FUNCTION 140de96be FUN_140de96be body=76 status=ok
// SIG undefined FUN_140de96be(void)

undefined8 FUN_140de96be(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140de970a(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140de96ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140de970a FUN_140de970a body=191 status=ok
// SIG undefined FUN_140de970a(void)

longlong FUN_140de970a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140de97ca();
  lVar3 = *param_1;
  if (DAT_14cb8d9a0 != DAT_14cb8d9cc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb8d9d0;
    if (DAT_14cb8d9d8 != (undefined *)0x0) {
      puVar7 = DAT_14cb8d9d8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb8d9e0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb8d998 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb8d990;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140de97ca FUN_140de97ca body=152 status=ok
// SIG undefined FUN_140de97ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140de97ca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8d9e8) {
    FUN_144b3d300(&DAT_14cb8d9e8);
    if (DAT_14cb8d9e8 == -1) {
      DAT_14cb8d9b8 = 0;
      DAT_14cb8d9c0 = 0;
      DAT_14cb8d998 = 0;
      _DAT_14cb8d9a0 = 0;
      _DAT_14cb8d9c4 = 0xffffffff00000080;
      DAT_14cb8d9cc = 0;
      DAT_14cb8d9d8 = 0;
      DAT_14cb8d9e0 = 0;
      atexit(FUN_143e5648a);
      _Init_thread_footer(&DAT_14cb8d9e8);
      return;
    }
  }
  return;
}



// FUNCTION 140de9862 FUN_140de9862 body=103 status=ok
// SIG undefined FUN_140de9862(void)

ulonglong FUN_140de9862(longlong param_1)

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
LAB_140de98ac:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140de98ac;
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



// FUNCTION 140de9934 FUN_140de9934 body=117 status=ok
// SIG undefined FUN_140de9934(void)

void FUN_140de9934(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*param_2 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        uVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
        FUN_140de99aa(uVar1,param_1 + 0x3c,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140de99aa FUN_140de99aa body=127 status=ok
// SIG undefined FUN_140de99aa(void)

void FUN_140de99aa(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    bVar5 = 0;
    do {
      bVar3 = FUN_140de9a2a(*(undefined8 *)(lVar2 + lVar4),param_2,param_3);
      bVar5 = bVar5 | bVar3;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    if ((bVar5 & 1) != 0) {
      return;
    }
  }
  FUN_140de9a2a(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
  return;
}



// FUNCTION 140de9a2a FUN_140de9a2a body=860 status=ok
// SIG undefined FUN_140de9a2a(void)

undefined8 FUN_140de9a2a(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  LPVOID pvVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  void *_Dst;
  ulonglong _Size;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 *local_70;
  undefined8 local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_42 = param_3;
  if (((param_1 == (longlong *)0x0) || (param_1[2] == 0)) ||
     (lVar6 = FUN_1400796d0(param_1[2],*param_2,1), lVar6 == 0)) {
    uVar10 = 0;
    goto LAB_140de9c44;
  }
  DVar5 = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    DVar5 = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar11 = DAT_14c7585d0 != 0xffffffff;
    DVar3 = DVar5;
    if (bVar11) {
      DVar4 = DAT_14c7585d0;
      DVar3 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar3;
    UNLOCK();
    if (bVar11) {
      TlsFree(DVar5);
      DVar5 = DVar4;
    }
  }
  pvVar7 = TlsGetValue(DVar5);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = (LPVOID)FUN_140036a08(&local_70);
    FUN_140fddf04(pvVar7);
    TlsSetValue(DVar5,pvVar7);
  }
  local_70 = (undefined8 *)((longlong)pvVar7 + 0x10);
  local_68 = *(undefined8 *)((longlong)pvVar7 + 0x10);
  local_60 = *(longlong *)((longlong)pvVar7 + 0x20);
  local_58 = '\0';
  local_50 = *(undefined8 *)((longlong)pvVar7 + 0x28);
  *(undefined8 ***)((longlong)pvVar7 + 0x28) = &local_70;
  *(int *)((longlong)pvVar7 + 0x30) = *(int *)((longlong)pvVar7 + 0x30) + 1;
  if (*(longlong *)(lVar6 + 0x50) == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Size = (ulonglong)*(ushort *)(lVar6 + 0xb6);
    DVar5 = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      DVar5 = TlsAlloc();
      DVar4 = 0xffffffff;
      LOCK();
      bVar11 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = DVar5;
      if (bVar11) {
        DVar4 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar11) {
        TlsFree(DVar5);
        DVar5 = DVar4;
      }
    }
    pvVar7 = TlsGetValue(DVar5);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = (LPVOID)FUN_140036a08(&local_41);
      FUN_140fddf04(pvVar7);
      TlsSetValue(DVar5,pvVar7);
    }
    puVar1 = (ulonglong *)((longlong)pvVar7 + 0x10);
    _Dst = (void *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0xfU & 0xfffffffffffffff0);
    uVar8 = (longlong)_Dst + _Size;
    if (*(ulonglong *)((longlong)pvVar7 + 0x18) < uVar8) {
      FUN_140023dd8(puVar1);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar8 = (longlong)_Dst + _Size;
    }
    *puVar1 = uVar8;
    memset(_Dst,0,_Size);
    lVar2 = *(longlong *)(lVar6 + 0x50);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_14067a048;
      local_90 = 0;
      local_98 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    puVar9 = *(undefined8 **)(lVar2 + 8);
    if (DAT_14c951cd8 == 0) {
      bVar11 = puVar9 != (undefined8 *)0x0;
      if (puVar9 != &DAT_14c951cd0 && bVar11) {
        do {
          puVar9 = (undefined8 *)puVar9[6];
          bVar11 = puVar9 != (undefined8 *)0x0;
          if (puVar9 == &DAT_14c951cd0) break;
        } while (puVar9 != (undefined8 *)0x0);
      }
      if (bVar11) goto LAB_140de9bd4;
    }
    else if ((puVar9[3] & DAT_14c951cd8) != 0) {
LAB_140de9bd4:
      memcpy((void *)((longlong)*(int *)(lVar2 + 0x44) + (longlong)_Dst),&local_42,
             (longlong)*(int *)(lVar2 + 0x34) * (longlong)*(int *)(lVar2 + 0x30));
    }
  }
  (**(code **)(*param_1 + 0x248))(param_1,lVar6,_Dst);
  if (local_58 == '\0') {
    local_58 = '\x01';
    *(int *)(local_70 + 4) = *(int *)(local_70 + 4) + -1;
    if (local_60 != local_70[2]) {
      FUN_14004673c();
    }
    *local_70 = local_68;
    local_70[3] = local_50;
  }
  uVar10 = 1;
LAB_140de9c44:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 140de9d88 FUN_140de9d88 body=244 status=ok
// SIG undefined FUN_140de9d88(void)

void FUN_140de9d88(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + -0x400;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 8))();
    lVar4 = FUN_140de9e7e();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      local_30 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        local_30 = param_2;
      }
      goto LAB_140de9df0;
    }
  }
  local_30 = (longlong *)0x0;
LAB_140de9df0:
  *(longlong **)(param_1 + 0x22b0) = local_30;
  FUN_140de9eb8(param_1);
  lVar3 = FUN_1447210f0(lVar1);
  if ((lVar3 != 0) &&
     (((bVar2 = *(byte *)(lVar3 + 0x152), bVar2 == 1 ||
       ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
      (*(longlong *)(param_1 + 0x22b0) != 0)))) {
    if (*(char *)(*(longlong *)(param_1 + 0x22b0) + 0x4d4) == '\x01') {
      FUN_140fe6de2(lVar1);
    }
    else {
      FUN_148d420f0(lVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140de9e7e FUN_140de9e7e body=57 status=ok
// SIG undefined FUN_140de9e7e(void)

void FUN_140de9e7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3fd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3fd8 = FUN_140002ddd(FUN_1465bc47d,uVar1,L"GrapplePointDef");
  }
  return;
}



// FUNCTION 140de9eb8 FUN_140de9eb8 body=252 status=ok
// SIG undefined FUN_140de9eb8(void)

void FUN_140de9eb8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_140de9fb6();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_140de9f22;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140de9f22:
  *(longlong **)(param_1 + 0x2270) = plVar4;
  FUN_140655f5e(param_1,param_2);
  if (*(longlong *)(param_1 + 0x2270) != 0) {
    local_38 = 0;
    local_30 = 0x1800000000;
    FUN_14024dbd6(param_1 + -0x400,local_f8,0);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de9fb6 FUN_140de9fb6 body=57 status=ok
// SIG undefined FUN_140de9fb6(void)

void FUN_140de9fb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3fc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3fc0 = FUN_140002ddd(FUN_1465bc421,uVar1,L"GrappleableObjectDef");
  }
  return;
}



// FUNCTION 140de9ff0 FUN_140de9ff0 body=1115 status=ok
// SIG undefined FUN_140de9ff0(void)

bool FUN_140de9ff0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  short *psVar1;
  short *psVar2;
  ushort *puVar3;
  ushort uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_140834900(param_2);
    FUN_140bdd9c6(param_1,param_3,0);
    lVar13 = *(longlong *)(param_1 + 0x18);
    while (lVar13 != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      psVar1 = (short *)((longlong)puVar8 + 0xc);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined2 *)((longlong)puVar8 + 0xc) = 0xffff;
      puVar8[4] = 0;
      puVar8[5] = 0xf;
      *(undefined2 *)(puVar8 + 6) = 0xffff;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = lVar13;
      if (*(int *)(lVar13 + 0x30) < 1) {
LAB_140dea2ff:
        iVar15 = 0;
      }
      else {
        if (*(int *)(lVar13 + 0x30) != 1) {
          *psVar1 = -2;
          goto LAB_140dea2ff;
        }
        lVar5 = *(longlong *)(lVar13 + 0x28);
        iVar15 = 0;
        if (*(int *)(lVar5 + 0x18) - 1U < 0x10) {
          *psVar1 = 0;
          local_78 = *(undefined4 *)(lVar5 + 0x18);
          lVar13 = *(longlong *)(lVar5 + 0x10);
          if (*(longlong *)(lVar5 + 0x10) == 0) {
            lVar13 = lVar5;
          }
          FUN_14493566c(psVar1,0,lVar13,0);
          lVar13 = *(longlong *)(param_1 + 0x18);
          iVar15 = 1;
        }
      }
      if (*(longlong *)(lVar13 + 0x18) != 0) {
        plVar11 = (longlong *)(lVar13 + 8);
        if (0xf < *(ulonglong *)(lVar13 + 0x20)) {
          plVar11 = (longlong *)*plVar11;
        }
        FUN_1446ddc76(&local_68,plVar11,1);
        *(undefined8 *)((longlong)puVar8 + 4) = local_68;
        iVar15 = iVar15 + 1;
      }
      plVar11 = (longlong *)param_2[2];
      if (plVar11 != (longlong *)0x0) {
        if (iVar15 == 2) {
          if ((int)plVar11[0xb] != *(int *)((longlong)plVar11 + 0x84)) {
            plVar10 = plVar11 + 0x11;
            if ((longlong *)plVar11[0x12] != (longlong *)0x0) {
              plVar10 = (longlong *)plVar11[0x12];
            }
            iVar15 = *(int *)((longlong)plVar10 +
                             (ulonglong)((int)plVar11[0x13] - 1U & (int)*psVar1) * 4);
            if (iVar15 != -1) {
              do {
                psVar2 = (short *)(plVar11[10] + (longlong)iVar15 * 0x14);
                if (*psVar2 == *psVar1) {
                  if (psVar2 + 2 != (short *)0x0 && psVar2 != (short *)0x0) {
                    *(undefined1 *)puVar8 = 1;
                    uVar9 = *(undefined8 *)(psVar2 + 2);
                    goto LAB_140dea402;
                  }
                  break;
                }
                iVar15 = *(int *)(psVar2 + 6);
              } while (iVar15 != -1);
            }
          }
        }
        else if (iVar15 == 1) {
          lVar13 = *(longlong *)((longlong)puVar8 + 4);
          uVar4 = *(ushort *)((longlong)puVar8 + 0xc);
          if (lVar13 == 0) {
            if ((-1 < (short)uVar4) && ((int)plVar11[0xb] != *(int *)((longlong)plVar11 + 0x84))) {
              plVar10 = plVar11 + 0x11;
              if ((longlong *)plVar11[0x12] != (longlong *)0x0) {
                plVar10 = (longlong *)plVar11[0x12];
              }
              iVar15 = *(int *)((longlong)plVar10 +
                               (ulonglong)((int)plVar11[0x13] + 0x7fffU & (uint)uVar4) * 4);
              if (iVar15 != -1) {
                do {
                  puVar3 = (ushort *)(plVar11[10] + (longlong)iVar15 * 0x14);
                  if (*puVar3 == uVar4) {
                    if (puVar3 + 2 != (ushort *)0x0 && puVar3 != (ushort *)0x0) {
                      *(undefined1 *)puVar8 = 1;
                      uVar9 = *(undefined8 *)(puVar3 + 2);
LAB_140dea402:
                      *(undefined8 *)((longlong)puVar8 + 4) = uVar9;
                    }
                    break;
                  }
                  iVar15 = *(int *)(puVar3 + 6);
                } while (iVar15 != -1);
              }
            }
          }
          else if ((uVar4 == 0xffff) && ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34))) {
            uVar6 = (uint)((ulonglong)lVar13 >> 0x10);
            uVar12 = (uint)lVar13 & 0xffff;
            plVar10 = plVar11 + 7;
            if ((longlong *)plVar11[8] != (longlong *)0x0) {
              plVar10 = (longlong *)plVar11[8];
            }
            iVar15 = *(int *)((longlong)plVar10 +
                             (ulonglong)
                             ((int)plVar11[9] - 1U &
                             (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar12) +
                             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4)) * 4);
            if (iVar15 != -1) {
              do {
                plVar10 = (longlong *)(*plVar11 + (longlong)iVar15 * 0x14);
                if (*plVar10 == lVar13) {
                  if (plVar10 + 1 != (longlong *)0x0 && plVar10 != (longlong *)0x0) {
                    *(undefined1 *)puVar8 = 1;
                    *(short *)((longlong)puVar8 + 0xc) = (short)plVar10[1];
                  }
                  break;
                }
                iVar15 = *(int *)((longlong)plVar10 + 0xc);
              } while (iVar15 != -1);
            }
          }
        }
      }
      psVar1 = (short *)(puVar8 + 6);
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48);
      if (lVar13 == 0) {
        *psVar1 = -1;
      }
      else if (*(longlong *)(lVar13 + 0x40) == 0) {
        FUN_1401d7e14(puVar8 + 2,lVar13 + 8);
        if (0 < *(int *)(lVar13 + 0x30)) {
          *psVar1 = -2;
          if ((*(int *)(lVar13 + 0x30) == 1) &&
             (lVar5 = *(longlong *)(lVar13 + 0x28), *(int *)(lVar5 + 0x18) - 1U < 0x10)) {
            *psVar1 = 0;
            local_78 = *(undefined4 *)(lVar5 + 0x18);
            lVar14 = *(longlong *)(lVar5 + 0x10);
            if (*(longlong *)(lVar5 + 0x10) == 0) {
              lVar14 = lVar5;
            }
            FUN_14493566c(psVar1,0,lVar14,0);
            if (*psVar1 != -2) goto LAB_140dea189;
          }
          FUN_1407e148c(puVar8 + 7,(longlong *)(lVar13 + 0x28));
        }
      }
      else {
        *psVar1 = -3;
      }
LAB_140dea189:
      iVar15 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar15 + 1U) {
        FUN_140dea44c(param_2,iVar15);
      }
      *(undefined8 **)(*param_2 + (longlong)iVar15 * 8) = puVar8;
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40);
      *(longlong *)(param_1 + 0x18) = lVar13;
    }
    bVar7 = 0 < (int)param_2[1];
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dea44c FUN_140dea44c body=353 status=ok
// SIG undefined FUN_140dea44c(void)

void FUN_140dea44c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140dea4d1;
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
LAB_140dea4d1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140dea5ae FUN_140dea5ae body=230 status=ok
// SIG undefined FUN_140dea5ae(void)

void FUN_140dea5ae(longlong param_1,float param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_140dea724(param_1,param_3);
  if ((((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
       (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24))) &&
      ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
    fVar3 = (float)FUN_140dea694(param_1);
    fVar5 = fVar3;
    if (0.0 < *(float *)(param_1 + 0x18)) {
      fVar4 = fVar3 - *(float *)(param_1 + 0x1c);
      if (1e-08 <= fVar4 * fVar4) {
        param_2 = *(float *)(param_1 + 0x18) * param_2;
        if (1.0 <= param_2) {
          param_2 = 1.0;
        }
        if (param_2 <= 0.0) {
          param_2 = 0.0;
        }
        fVar5 = *(float *)(param_1 + 0x1c) + fVar4 * param_2;
      }
    }
    *(float *)(param_1 + 0x1c) = fVar5;
    *(double *)(param_3 + 0x40) = (double)(fVar5 - fVar3) + *(double *)(param_3 + 0x40);
  }
  return;
}



// FUNCTION 140dea694 FUN_140dea694 body=144 status=ok
// SIG undefined FUN_140dea694(void)

float FUN_140dea694(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if ((((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x24))) &&
      ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    fVar4 = *(float *)(lVar3 + 0x39c);
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    lVar3 = *(longlong *)(lVar3 + 0x438);
    if (lVar3 != 0) {
      fVar4 = fVar4 + (float)*(double *)(lVar3 + 0x290) * *(float *)(lVar3 + 0x640);
    }
  }
  return fVar4;
}



// FUNCTION 140dea724 FUN_140dea724 body=197 status=ok
// SIG undefined FUN_140dea724(void)

void FUN_140dea724(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (((param_2 == 0) || (lVar2 = *(longlong *)(param_2 + 0x28), lVar2 == 0)) ||
     (*(longlong *)(lVar2 + 0xe0) == 0)) {
    return;
  }
  if (((((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        ((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x24))))))) &&
      ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (*(longlong *)(lVar2 + 0xe0) == *plVar6)) {
    return;
  }
  lVar4 = FUN_144a7cacc();
  lVar2 = *(longlong *)(lVar2 + 0xe0);
  if (lVar2 != 0) {
    lVar5 = 0;
    if ((lVar4 == 0) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_140dea7d7;
    if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar5 = lVar2;
      }
      goto LAB_140dea7d7;
    }
  }
  lVar5 = 0;
LAB_140dea7d7:
  FUN_14485c47a((uint *)(param_1 + 0x20),lVar5);
  return;
}



// FUNCTION 140dea9c3 FUN_140dea9c3 body=177 status=ok
// SIG undefined FUN_140dea9c3(void)

undefined8 FUN_140dea9c3(undefined8 param_1)

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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140deaa76();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140deaa76 FUN_140deaa76 body=228 status=ok
// SIG undefined FUN_140deaa76(void)

longlong FUN_140deaa76(void)

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
  if (DAT_14caa8ab8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a65942;
    local_38 = &LAB_1474898e3;
    local_40 = FUN_141795c6e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/ChaosSolverEngine",L"ChaosGameplayEventDispatcher",&DAT_14caa8ab8,
                  &DAT_1474898e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8ab8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140deab5c FUN_140deab5c body=2923 status=ok
// SIG undefined FUN_140deab5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140deab5c(longlong param_1,longlong param_2)

{
  int *piVar1;
  double dVar2;
  double dVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char cVar18;
  int iVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  code *pcVar26;
  double *pdVar27;
  double *pdVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_348 [32];
  ulonglong local_328;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  double local_2f8 [2];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [24];
  longlong local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168 [2];
  longlong *local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  undefined2 uStack_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong local_e0;
  double dVar3;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  pcVar26 = *(code **)(param_2 + 0x110);
  if (pcVar26 != (code *)0x0) {
    local_290 = *(longlong *)(param_1 + 0xaf8);
    if ((local_290 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      pcVar26 = *(code **)(param_2 + 0x110);
    }
    plVar24 = (longlong *)(param_2 + 0x130);
    if (*(longlong **)(param_2 + 0x120) != (longlong *)0x0) {
      plVar24 = *(longlong **)(param_2 + 0x120);
    }
    uVar20 = (**(code **)(*plVar24 + 8))();
    cVar18 = (*pcVar26)(uVar20,&local_290);
    if (cVar18 == '\0') goto LAB_140deacd8;
  }
  lVar21 = FUN_140deb6c8(param_1,param_2);
  if (*(char *)(param_1 + 0xfd8) == '\x01') {
    if (*(longlong *)(param_1 + 0xaf8) == 0) {
LAB_140deb201:
      lVar25 = 0;
    }
    else {
      lVar22 = FUN_14069636a();
      lVar21 = *(longlong *)(param_1 + 0xaf8);
      if (lVar21 == 0) goto LAB_140deb201;
      lVar25 = 0;
      if ((lVar22 != 0) && (lVar5 = *(longlong *)(lVar21 + 0x10), lVar5 != 0)) {
        if (*(int *)(lVar5 + 0x38) < *(int *)(lVar22 + 0x38)) goto LAB_140deb201;
        lVar25 = 0;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) ==
            lVar22 + 0x30) {
          lVar25 = lVar21;
        }
      }
    }
    lVar21 = *(longlong *)(param_1 + 0xb0);
    if (lVar21 == 0) {
      lVar21 = FUN_1448abda6(param_1);
    }
    if ((((lVar25 == 0) || (lVar21 == 0)) || (*(char *)(lVar25 + 0x488) != '\x01')) ||
       (*(double *)(lVar21 + 0x6d0) - *(double *)(param_1 + 0xfe0) < *(double *)(lVar25 + 0x490)))
    goto LAB_140deacd8;
  }
  lVar22 = *(longlong *)(param_1 + 0xfd0);
  if ((lVar22 == 0) ||
     ((*(longlong *)(param_1 + 0xb0) == 0 && (lVar21 = FUN_1448abda6(param_1), lVar21 == 0))))
  goto LAB_140deacd8;
  auVar46 = _DAT_149934d80;
  pdVar27 = (double *)(lVar22 + 0x410);
  pdVar28 = local_2f8;
  for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
    *pdVar28 = *pdVar27;
    pdVar27 = pdVar27 + 1;
    pdVar28 = pdVar28 + 1;
  }
  if (*(char *)(param_2 + 0x10c) == '\0') {
    local_108 = *(double *)(param_2 + 0x28) + (double)local_2d8._0_8_;
    local_2d8._8_8_ = *(double *)(param_2 + 0x30) + (double)local_2d8._8_8_;
    local_2c8 = *(double *)(param_2 + 0x38) + local_2c8;
    dStack_2c0 = dStack_2c0 + 0.0;
LAB_140deb1ed:
    local_2d8._0_8_ = local_108;
  }
  else {
    auVar33 = *(undefined1 (*) [16])(param_1 + 0x280);
    dVar6 = auVar33._0_8_;
    dVar12 = auVar33._8_8_;
    auVar34 = *(undefined1 (*) [16])(param_1 + 0x290);
    dVar8 = auVar34._0_8_;
    dVar11 = auVar34._8_8_;
    dVar9 = local_2b8._0_8_;
    dVar32 = local_2b8._8_8_;
    dVar10 = local_2a8._0_8_;
    auVar33 = minpd(local_2b8,auVar33);
    auVar39 = minpd(local_2a8._0_16_,auVar34);
    auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
    auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
    iVar19 = movmskpd((int)lVar21,auVar34);
    auVar33._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
    uVar23 = movmskpd(0,auVar33);
    if ((uVar23 & 0x3fffffff) != 0 || iVar19 != 0) {
      dVar2 = *(double *)(param_1 + 0x240);
      dVar3 = *(double *)(param_1 + 0x248);
      dVar4 = *(double *)(param_1 + 0x250);
      dVar37 = dVar3 + dVar3;
      dVar41 = dVar4 + dVar4;
      dVar40 = dVar2 * (dVar2 + dVar2);
      local_198 = (1.0 - (dVar40 + dVar3 * dVar37)) * dVar8;
      dVar45 = *(double *)(param_1 + 0x240) * dVar41;
      dVar31 = *(double *)(param_1 + 600);
      dVar42 = dVar41 * dVar31;
      dVar44 = (dVar2 + dVar2) * *(double *)(param_1 + 600);
      dVar31 = dVar37 * dVar31;
      local_1a8 = (dVar31 + dVar45) * dVar8;
      dVar11 = dVar11 * local_2a8._8_8_;
      dVar40 = (DAT_149934d80._8_8_ - (dVar4 * dVar41 + dVar40)) * dVar12;
      dVar43 = (dVar37 * dVar2 + dVar42) * dVar6;
      local_1b8 = (dVar41 * dVar3 + dVar44) * dVar12;
      dStack_1a0 = (dVar41 * dVar3 - dVar44) * dVar8;
      local_1d8 = (dVar45 - dVar31) * dVar6;
      local_1e8._8_4_ = SUB84(dVar43,0);
      local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar4 * dVar41 + dVar3 * dVar37)) * dVar6;
      local_1e8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar40,0);
      local_1c8._0_8_ = (dVar37 * dVar2 - dVar42) * dVar12;
      local_1c8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = *(undefined8 *)(param_1 + 0x260);
      uStack_180 = *(undefined8 *)(param_1 + 0x268);
      local_178 = *(undefined8 *)(param_1 + 0x270);
      uStack_170 = 0x3ff0000000000000;
      dVar40 = local_2f8[1] + local_2f8[1];
      dVar43 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
      dVar31 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
      local_218 = (1.0 - (dVar31 + local_2f8[1] * dVar40)) * dVar10;
      dVar45 = (local_2f8[0] + local_2f8[0]) * (double)local_2e8._8_8_;
      local_228 = (dVar40 * (double)local_2e8._8_8_ + local_2f8[0] * dVar43) * dVar10;
      dStack_220 = (dVar43 * local_2f8[1] - dVar45) * dVar10;
      dVar12 = dVar12 * dVar32;
      local_268 = ((double)DAT_149934d80 -
                  ((double)local_2e8._0_8_ * dVar43 + local_2f8[1] * dVar40)) * dVar9;
      dVar31 = (DAT_149934d80._8_8_ - ((double)local_2e8._0_8_ * dVar43 + dVar31)) * dVar32;
      dStack_260 = (dVar40 * local_2f8[0] + dVar43 * (double)local_2e8._8_8_) * dVar9;
      local_238 = (dVar43 * local_2f8[1] + dVar45) * dVar32;
      local_258 = (local_2f8[0] * dVar43 - dVar40 * (double)local_2e8._8_8_) * dVar9;
      uStack_250 = 0;
      local_248._8_4_ = SUB84(dVar31,0);
      local_248._0_8_ = (dVar40 * local_2f8[0] - dVar43 * (double)local_2e8._8_8_) * dVar32;
      local_248._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      uStack_230 = 0;
      uStack_210 = 0;
      local_208 = (double)local_2d8._0_8_;
      dStack_200 = (double)local_2d8._8_8_;
      local_1f8 = local_2c8;
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(local_168);
      FUN_144a1c686(local_168,0x3e45798ee0000000);
      auVar39._8_8_ = -(ulonglong)(0.0 <= dVar12);
      auVar39._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar9);
      auVar33 = blendvpd(_DAT_149936790,auVar46,auVar39);
      uVar29 = -(ulonglong)(0.0 <= dVar8 * dVar10);
      dVar32 = (double)(~uVar29 & 0xbff0000000000000 | uVar29 & 0x3ff0000000000000);
      dVar31 = auVar33._0_8_;
      local_158 = (longlong *)((double)local_158 * dVar31);
      local_168[1] = local_168[1] * dVar31;
      local_168[0] = local_168[0] * dVar31;
      dVar31 = auVar33._8_8_;
      local_138 = local_138 * dVar31;
      local_140 = local_140 * dVar31;
      local_148 = dVar31 * local_148;
      local_118 = local_118 * dVar32;
      local_120 = local_120 * dVar32;
      local_128 = dVar32 * local_128;
      FUN_14481fd10(&local_288,local_168);
      dVar32 = local_278 * local_278 + local_288 * local_288;
      dVar31 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar35._0_8_ = dVar32 + dVar31;
      auVar35._8_8_ = dVar32 + dVar31;
      auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
      auVar33 = sqrtpd(auVar35,auVar35);
      auVar46 = divpd(auVar46,auVar33);
      auVar47._0_8_ = auVar46._0_8_ * local_278;
      auVar47._8_8_ = auVar46._8_8_ * dStack_270;
      local_2f8[0] = (double)((ulonglong)(local_288 * auVar46._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
      local_2f8[1] = (double)((ulonglong)(dStack_280 * auVar46._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
      local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar30);
      local_2b8._8_4_ = SUB84(dVar12,0);
      local_2b8._0_8_ = dVar6 * dVar9;
      local_2b8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      local_2a8._8_4_ = SUB84(dVar11,0);
      local_2a8._0_8_ = dVar8 * dVar10;
      local_2a8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_2d8._8_8_ = CONCAT44(uStack_fc,CONCAT22(uStack_fe,uStack_100));
      local_2c8 = (double)CONCAT44(uStack_f4,uStack_f8);
      dStack_2c0 = 0.0;
      goto LAB_140deb1ed;
    }
    dVar14 = *(double *)(param_1 + 0x240);
    dVar15 = *(double *)(param_1 + 0x248);
    dVar16 = *(double *)(param_1 + 0x250);
    dVar17 = *(double *)(param_1 + 600);
    dVar40 = *(double *)(param_1 + 600);
    dVar31 = *(double *)(param_1 + 600);
    dVar43 = *(double *)(param_1 + 0x240);
    dVar45 = *(double *)(param_1 + 0x240);
    dVar41 = dVar43 * local_2f8[1];
    dVar42 = dVar45 * local_2f8[0];
    dVar2 = *(double *)(param_1 + 0x248);
    dVar3 = *(double *)(param_1 + 0x248);
    dVar44 = local_2f8[0] * dVar2;
    dVar13 = local_2f8[1] * dVar3;
    dVar4 = *(double *)(param_1 + 0x250);
    dVar37 = *(double *)(param_1 + 0x250);
    dVar36 = local_2f8[0] * dVar37;
    dVar38 = (double)local_2e8._8_8_ * dVar4;
    local_2f8[0] = local_2f8[1] * dVar4 * -1.0 +
                   (double)local_2e8._0_8_ * dVar2 +
                   (double)local_2e8._8_8_ * dVar43 * 1.0 + local_2f8[0] * dVar40;
    local_2f8[1] = dVar36 * 1.0 +
                   (double)local_2e8._8_8_ * dVar3 +
                   (double)local_2e8._0_8_ * dVar45 * -1.0 + local_2f8[1] * dVar31;
    dVar4 = (double)local_2d8._0_8_ * dVar6;
    local_2d8._8_8_ = (double)local_2d8._8_8_ * dVar12;
    local_2c8 = local_2c8 * dVar8;
    dStack_2c0 = dStack_2c0 * dVar11;
    dVar43 = (double)local_2d8._8_8_ * dVar14 - dVar15 * dVar4;
    dVar45 = local_2c8 * dVar15 - dVar16 * (double)local_2d8._8_8_;
    dVar2 = dVar4 * dVar16 - dVar14 * local_2c8;
    dVar36 = dStack_2c0 * dVar17 - dVar17 * dStack_2c0;
    dVar45 = dVar45 + dVar45;
    dVar2 = dVar2 + dVar2;
    dVar43 = dVar43 + dVar43;
    dVar36 = dVar36 + dVar36;
    dVar3 = (dVar45 * dVar16 - dVar43 * dVar14) + dVar31 * dVar2 + (double)local_2d8._8_8_ +
            *(double *)(param_1 + 0x268);
    local_2c8 = (dVar2 * dVar14 - dVar15 * dVar45) + dVar40 * dVar43 + local_2c8 +
                *(double *)(param_1 + 0x270);
    dStack_2c0 = (dVar36 * dVar17 - dVar36 * dVar17) + dVar31 * dVar36 + dStack_2c0 +
                 *(double *)(param_1 + 0x278);
    local_2e8._8_8_ =
         (double)local_2e8._0_8_ * dVar37 * -1.0 +
         ((dVar42 * -1.0 + (double)local_2e8._8_8_ * dVar31) - dVar13);
    local_2e8._0_8_ = dVar38 * 1.0 + ((dVar41 * 1.0 + (double)local_2e8._0_8_ * dVar40) - dVar44);
    local_2d8._8_4_ = SUB84(dVar3,0);
    local_2d8._0_8_ =
         (dVar43 * dVar15 - dVar16 * dVar2) + dVar40 * dVar45 + dVar4 + *(double *)(param_1 + 0x260)
    ;
    local_2d8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_2b8._8_8_ = dVar32 * dVar12;
    local_2b8._0_8_ = dVar9 * dVar6;
    local_2a8._8_8_ = local_2a8._8_8_ * dVar11;
    local_2a8._0_8_ = dVar10 * dVar8;
  }
  uVar20 = *(undefined8 *)(lVar22 + 0x3e0);
  lVar21 = *(longlong *)(param_1 + 0xb0);
  if (lVar21 == 0) {
    lVar21 = FUN_1448abda6(param_1);
  }
  local_328 = local_328 & 0xffffffffffffff00;
  local_320 = CONCAT71(local_320._1_7_,1);
  uVar20 = FUN_1405837ac(lVar21,uVar20,local_2f8,1);
  local_168[0] = (double)((ulonglong)local_168[0] & 0xffffffffffffff00);
  local_140 = (double)((ulonglong)local_140 & 0xffffffff00000000);
  FUN_1456bb102(local_168,param_1);
  local_1e8._0_12_ = *(undefined1 (*) [12])(lVar22 + 1000);
  FUN_140e99737(uVar20,local_1e8,local_168);
  FUN_1448173f8(&local_140);
  if ((local_168[0]._0_1_ == '\x03') && (local_158 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_158 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_158 + 0x10))();
    }
  }
  uVar29 = *(ulonglong *)(param_1 + 0xa8);
  pdVar27 = local_2f8;
  pdVar28 = local_168;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *pdVar28 = *pdVar27;
    pdVar27 = pdVar27 + 1;
    pdVar28 = pdVar28 + 1;
  }
  local_108 = 5.26354424712089e-315;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  dVar6 = *(double *)(lVar22 + 0x470);
  uVar20 = FUN_14477b664(*(undefined8 *)(lVar22 + 0x478));
  uVar20 = FUN_14477b664(uVar20);
  auVar46 = local_1e8;
  uVar7 = *(ulonglong *)(lVar22 + 0x480);
  local_1e8._0_4_ = local_1e8._1_4_ << 8;
  local_1e8._12_4_ = auVar46._12_4_;
  local_1e8._4_8_ = 0;
  local_1d8 = dVar6;
  uVar20 = FUN_14477b664(uVar20);
  uStack_1d0 = FUN_14477b664(uVar20);
  local_1c8._8_8_ = 0;
  local_1c8._0_8_ = uVar7;
  lVar21 = *(longlong *)(param_1 + 0xb0);
  if (lVar21 == 0) {
    lVar21 = FUN_1448abda6(param_1);
  }
  local_320 = 0;
  local_328 = uVar29;
  FUN_140cb5d65(&local_310,lVar21,local_1e8,local_168);
  local_310 = 0;
  local_308 = 0xffffffffffffffff;
  if ((local_1c8._8_8_ != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_1c8._8_8_ + 0x50));
  }
  if ((*(longlong *)(param_1 + 0xfc0) != 0) &&
     (plVar24 = *(longlong **)(param_1 + 0xfc8), plVar24 != (longlong *)0x0)) {
    (**(code **)(*plVar24 + 0x10))(plVar24,param_1 + 0xaf0,param_2);
  }
  *(undefined1 *)(param_1 + 0xfd8) = 1;
  lVar21 = *(longlong *)(param_1 + 0xb0);
  if (lVar21 == 0) {
    lVar21 = FUN_1448abda6(param_1);
  }
  *(undefined8 *)(param_1 + 0xfe0) = *(undefined8 *)(lVar21 + 0x6d0);
LAB_140deacd8:
  if ((local_e0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140deb6c8 FUN_140deb6c8 body=3277 status=ok
// SIG undefined FUN_140deb6c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140deb6c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar27;
  undefined1 auVar26 [16];
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  float fVar50;
  double dVar51;
  double dVar53;
  undefined1 auVar52 [16];
  uint uVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auStack_2d8 [40];
  undefined4 local_2b0;
  float local_2ac;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [8];
  undefined8 *local_1b0;
  undefined1 local_140 [64];
  longlong local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  dVar11 = *(double *)(param_2 + 0x28);
  dVar12 = *(double *)(param_2 + 0x30);
  dVar49 = *(double *)(param_2 + 0x38);
  lVar15 = DAT_14cb24ad0;
  if (DAT_14cb24ad0 == 0) {
    plVar20 = (longlong *)FUN_145a7712c();
    lVar15 = plVar20[0x22];
    if (plVar20[0x22] == 0) {
      (**(code **)(*plVar20 + 1000))(plVar20);
      lVar15 = plVar20[0x22];
    }
  }
  DAT_14cb24ad0 = lVar15;
  lVar15 = DAT_14cb24ad0;
  dVar48 = *(double *)(param_2 + 0x98) - *(double *)(param_2 + 0x80);
  dVar23 = *(double *)(param_2 + 0x90) - *(double *)(param_2 + 0x78);
  dVar41 = *(double *)(param_2 + 0x88) - *(double *)(param_2 + 0x70);
  dVar2 = dVar48 * dVar48 + dVar41 * dVar41 + dVar23 * dVar23;
  if ((dVar2 != 1.0) || (NAN(dVar2))) {
    if (9.99999993922529e-09 <= dVar2) {
      dVar2 = 1.0 / SQRT(dVar2);
      dVar48 = dVar48 * dVar2;
      dVar23 = dVar23 * dVar2;
      dVar41 = dVar41 * dVar2;
      goto LAB_140deb806;
    }
    dVar41 = DAT_14c8464e0;
    uVar29 = DAT_14c8464e0._8_4_;
    uVar54 = DAT_14c8464e0._12_4_;
    dVar48 = DAT_14c8464f0;
  }
  else {
LAB_140deb806:
    uVar29 = SUB84(dVar23,0);
    uVar54 = (uint)((ulonglong)dVar23 >> 0x20);
  }
  dVar2 = (double)((ulonglong)uVar54 << 0x20);
  fVar22 = *(float *)(param_2 + 0x100);
  uVar30 = *(undefined4 *)(param_2 + 0x104);
  lVar1 = *(longlong *)(param_1 + 0xaf8);
  dVar4 = dVar11;
  dVar45 = dVar12;
  dVar23 = dVar49;
  if (lVar1 == 0) {
    local_2a8 = (double)CONCAT71(local_2a8._1_7_,*(byte *)(DAT_14cb24ad0 + 0x8c));
    fVar50 = fVar22;
  }
  else {
    if (*(char *)(lVar1 + 0xe4) == '\x01') {
      dVar13 = *(double *)(param_1 + 0x240);
      dVar14 = *(double *)(param_1 + 0x248);
      local_278 = *(double *)(param_1 + 0x250);
      dStack_270 = *(double *)(param_1 + 600);
      local_258 = *(double *)(param_1 + 0x260);
      dStack_250 = *(double *)(param_1 + 0x268);
      local_268 = *(double *)(param_1 + 0x270);
      uStack_260 = *(undefined8 *)(param_1 + 0x278);
      dVar51 = dVar11 - local_258;
      dVar53 = dVar12 - dStack_250;
      uStack_290 = 0;
      dVar2 = dVar49 - local_268;
      dVar9 = -dVar13;
      dVar10 = -dVar14;
      dVar24 = local_278 * -1.0;
      dVar27 = dStack_270 * 1.0;
      dVar23 = dVar53 * dVar9 - dVar51 * dVar10;
      dVar4 = dVar2 * dVar10 - dVar53 * dVar24;
      dVar43 = dVar51 * dVar24 - dVar2 * dVar9;
      dVar4 = dVar4 + dVar4;
      dVar43 = dVar43 + dVar43;
      dVar23 = dVar23 + dVar23;
      local_288 = *(undefined1 (*) [16])(param_1 + 0x280);
      dVar55 = local_288._0_8_;
      dVar56 = local_288._8_8_;
      auVar52 = divpd(_DAT_149934d80,local_288);
      dVar45 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar55)) & auVar52._0_8_);
      dVar47 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar56)) & auVar52._8_8_);
      dVar42 = *(double *)(param_1 + 0x290);
      dVar44 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar42)) & (ulonglong)(1.0 / dVar42)
                       );
      dVar46 = (double)CONCAT44(uVar54,uVar29) * dVar9 - dVar41 * dVar10;
      dVar5 = dVar48 * dVar10 - (double)CONCAT44(uVar54,uVar29) * dVar24;
      dVar57 = dVar41 * dVar24 - dVar48 * dVar9;
      dVar5 = dVar5 + dVar5;
      dVar57 = dVar57 + dVar57;
      dVar46 = dVar46 + dVar46;
      local_248._0_8_ = ((dVar46 * dVar10 - dVar57 * dVar24) + dVar27 * dVar5 + dVar41) * dVar45;
      local_248._8_8_ =
           (dVar13 * dVar46 + dVar24 * dVar5 + dVar27 * dVar57 + (double)CONCAT44(uVar54,uVar29)) *
           dVar47;
      uVar21 = (ulonglong)*(byte *)(param_1 + 0xfa8) ^ 1;
      dVar41 = (double)*(float *)(param_1 + 0xfa4) * *(double *)(local_248 + uVar21 * 8);
      auVar26._0_8_ = -(ulonglong)(uVar21 == 0);
      auVar26._8_8_ = -(ulonglong)(uVar21 == 1);
      auVar52._8_8_ = dVar41;
      auVar52._0_8_ = dVar41;
      auVar52 = blendvpd(local_248,auVar52,auVar26);
      dVar41 = (double)(1.0 - *(float *)(lVar1 + 0xe8));
      dVar45 = ((dVar23 * dVar10 - dVar43 * dVar24) + dVar27 * dVar4 + dVar51) * dVar45 * dVar41 *
               dVar55;
      dVar51 = (dVar13 * dVar23 + dVar24 * dVar4 + dVar27 * dVar43 + dVar53) * dVar47 * dVar41 *
               dVar56;
      dVar24 = (dVar23 * dVar27 + dVar2 + (dVar43 * dVar9 - dVar4 * dVar10)) * dVar44 * dVar41 *
               dVar42;
      dVar43 = dVar51 * dVar13 - dVar14 * dVar45;
      dVar47 = dVar24 * dVar14 - local_278 * dVar51;
      dVar23 = dVar45 * local_278 - dVar13 * dVar24;
      dVar47 = dVar47 + dVar47;
      dVar23 = dVar23 + dVar23;
      dVar2 = *(double *)(param_1 + 600);
      dVar41 = *(double *)(param_1 + 600);
      dVar43 = dVar43 + dVar43;
      dVar4 = (dVar43 * dVar14 - dVar23 * local_278) + dVar2 * dVar47 + dVar45 + local_258;
      dVar45 = (local_278 * dVar47 - dVar13 * dVar43) + dVar41 * dVar23 + dVar51 + dStack_250;
      dVar23 = dVar43 * dVar2 + dVar24 + (dVar23 * dVar13 - dVar47 * dVar14) + local_268;
      dVar55 = auVar52._0_8_ * dVar55;
      dVar56 = auVar52._8_8_ * dVar56;
      dVar42 = (dVar46 * dVar27 + dVar48 + (dVar57 * dVar9 - dVar5 * dVar10)) * dVar44 * dVar42;
      dVar46 = dVar56 * dVar13 - dVar14 * dVar55;
      dVar47 = dVar42 * dVar14 - local_278 * dVar56;
      dVar48 = dVar55 * local_278 - dVar13 * dVar42;
      dVar47 = dVar47 + dVar47;
      dVar48 = dVar48 + dVar48;
      dVar46 = dVar46 + dVar46;
      dVar43 = dVar46 * dVar2 + dVar42 + (dVar48 * dVar13 - dVar47 * dVar14);
      dVar55 = (dVar46 * dVar14 - dVar48 * local_278) + dVar2 * dVar47 + dVar55;
      dVar56 = (local_278 * dVar47 - dVar13 * dVar46) + dVar41 * dVar48 + dVar56;
      dVar41 = -dVar55;
      dVar48 = 0.0;
      if (0.0 <= dVar43) {
        dVar48 = dVar43;
      }
      dVar2 = -dVar56;
      uVar29 = SUB84(dVar56,0);
      dVar55 = dVar48 * dVar48 + dVar55 * dVar55 + dVar56 * dVar56;
      local_2b0 = uVar30;
      local_2ac = fVar22;
      local_2a8 = dVar11;
      dStack_2a0 = dVar12;
      local_298 = dVar49;
      if (9.99999993922529e-09 < dVar55) {
        dVar55 = 1.0 / SQRT(dVar55);
        dVar41 = dVar41 * dVar55;
        dVar2 = dVar2 * dVar55;
        uVar29 = SUB84(dVar2,0);
        dVar48 = dVar48 * dVar55;
      }
    }
    local_2a8 = (double)CONCAT71(local_2a8._1_7_,
                                 *(byte *)(DAT_14cb24ad0 + 0x8c) | *(byte *)(lVar1 + 0xec));
    fVar50 = fVar22 * *(float *)(lVar1 + 0xf4);
    fVar22 = *(float *)(lVar1 + 0xf0) * fVar22;
  }
  uVar32 = (undefined4)((ulonglong)dVar45 >> 0x20);
  uVar31 = SUB84(dVar45,0);
  puVar16 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_149f62b40;
  puVar16[2] = 0x3f800000;
  puVar16[3] = 0x3f800000;
  *(float *)(puVar16 + 4) = fVar22;
  puVar16[5] = dVar11;
  puVar16[6] = dVar12;
  puVar16[7] = dVar49;
  *(undefined4 *)(puVar16 + 8) = 1;
  puVar17 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_149f613b0;
  *(undefined4 *)(puVar17 + 2) = 4;
  puVar18 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_149f5fd00;
  puVar18[2] = puVar16;
  puVar18[3] = puVar17;
  *(undefined4 *)(puVar18 + 4) = 1;
  puVar16 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar16 = &PTR_FUN_14a3fdee0;
  puVar16[1] = 0x200000001;
  *(undefined4 *)(puVar16 + 2) = 0;
  FUN_1403c2146(local_1b8,1,puVar18,puVar16);
  FUN_1403c27ec(param_1,local_1b8);
  local_f8 = 0;
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(local_140);
  if (local_1b0 != (undefined8 *)0x0) {
    (**(code **)*local_1b0)(local_1b0,1);
  }
  puVar16 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar16 = &PTR_FUN_14a3fdee0;
  puVar16[1] = 0x200000000;
  *(undefined4 *)(puVar16 + 2) = 0;
  puVar17 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar33 = *(undefined4 *)(param_2 + 0x108);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_149f62b40;
  *(undefined4 *)(puVar17 + 2) = uVar33;
  *(undefined8 *)((longlong)puVar17 + 0x14) = 0x3f80000000000000;
  *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
  *(float *)(puVar17 + 4) = fVar22;
  puVar17[5] = dVar11;
  puVar17[6] = dVar12;
  puVar17[7] = dVar49;
  *(undefined4 *)(puVar17 + 8) = 0;
  FUN_1403c2146(local_1b8,3,puVar17,puVar16);
  FUN_1403c27ec(param_1,local_1b8);
  local_f8 = 0;
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(local_140);
  if (local_1b0 != (undefined8 *)0x0) {
    (**(code **)*local_1b0)(local_1b0,1);
  }
  puVar16 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar16[1] = 0;
  if (local_2a8._0_1_ == '\0') {
    *puVar16 = &PTR_FUN_149f62ae0;
    *(undefined4 *)(puVar16 + 2) = uVar30;
    auVar7._8_4_ = uVar31;
    auVar7._0_8_ = dVar4;
    auVar7._12_4_ = uVar32;
    *(undefined1 (*) [16])(puVar16 + 3) = auVar7;
    puVar16[5] = dVar23;
    puVar17 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_149f62b40;
    puVar17[2] = 0x3f800000;
    puVar17[3] = 0x3f800000;
    *(float *)(puVar17 + 4) = fVar50;
    auVar8._8_4_ = uVar31;
    auVar8._0_8_ = dVar4;
    auVar8._12_4_ = uVar32;
    *(undefined1 (*) [16])(puVar17 + 5) = auVar8;
    puVar17[7] = dVar23;
    *(undefined4 *)(puVar17 + 8) = 0;
    if (*(char *)(lVar15 + 0x78) != '\x01') goto LAB_140dec207;
    fVar22 = *(float *)(lVar15 + 0x84) * *(float *)(lVar15 + 0x88);
    local_1f8 = *(undefined4 *)(param_1 + 0x240);
    uStack_1f4 = *(undefined4 *)(param_1 + 0x244);
    uStack_1f0 = *(undefined4 *)(param_1 + 0x248);
    uStack_1ec = *(undefined4 *)(param_1 + 0x24c);
    local_1e8 = *(undefined4 *)(param_1 + 0x250);
    uStack_1e4 = *(undefined4 *)(param_1 + 0x254);
    uStack_1e0 = *(undefined4 *)(param_1 + 600);
    uStack_1dc = *(undefined4 *)(param_1 + 0x25c);
    local_1d8 = *(undefined4 *)(param_1 + 0x260);
    uStack_1d4 = *(undefined4 *)(param_1 + 0x264);
    uStack_1d0 = *(undefined4 *)(param_1 + 0x268);
    uStack_1cc = *(undefined4 *)(param_1 + 0x26c);
    local_1c8 = *(undefined8 *)(param_1 + 0x270);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x278);
    puVar18 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    uVar25 = *(undefined8 *)(lVar15 + 0x7c);
    puVar18[1] = 0;
    *puVar18 = &PTR_FUN_149f61590;
    puVar18[2] = uVar25;
    uVar25 = CONCAT44(uStack_1f4,local_1f8);
    uVar28 = CONCAT44(uStack_1ec,uStack_1f0);
    uVar29 = local_1e8;
    uVar30 = uStack_1e4;
    uVar31 = uStack_1e0;
    uVar32 = uStack_1dc;
    uVar33 = local_1d8;
    uVar34 = uStack_1d4;
    uVar35 = uStack_1d0;
    uVar36 = uStack_1cc;
    uVar37 = (undefined4)local_1c8;
    uVar38 = local_1c8._4_4_;
    uVar39 = (undefined4)uStack_1c0;
    uVar40 = uStack_1c0._4_4_;
  }
  else {
    *puVar16 = &PTR_FUN_149f62a30;
    *(undefined4 *)(puVar16 + 2) = uVar30;
    auVar3._8_4_ = uVar29;
    auVar3._0_8_ = dVar41;
    auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(puVar16 + 3) = auVar3;
    puVar16[5] = dVar48;
    puVar17 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_149f62b40;
    puVar17[2] = 0x3f800000;
    puVar17[3] = 0x3f800000;
    *(float *)(puVar17 + 4) = fVar50;
    auVar6._8_4_ = uVar31;
    auVar6._0_8_ = dVar4;
    auVar6._12_4_ = uVar32;
    *(undefined1 (*) [16])(puVar17 + 5) = auVar6;
    puVar17[7] = dVar23;
    *(undefined4 *)(puVar17 + 8) = 0;
    if (*(char *)(lVar15 + 0x78) != '\x01') goto LAB_140dec207;
    fVar22 = *(float *)(lVar15 + 0x84) * *(float *)(lVar15 + 0x88);
    local_238 = *(undefined4 *)(param_1 + 0x240);
    uStack_234 = *(undefined4 *)(param_1 + 0x244);
    uStack_230 = *(undefined4 *)(param_1 + 0x248);
    uStack_22c = *(undefined4 *)(param_1 + 0x24c);
    local_228 = *(undefined4 *)(param_1 + 0x250);
    uStack_224 = *(undefined4 *)(param_1 + 0x254);
    uStack_220 = *(undefined4 *)(param_1 + 600);
    uStack_21c = *(undefined4 *)(param_1 + 0x25c);
    local_218 = *(undefined4 *)(param_1 + 0x260);
    uStack_214 = *(undefined4 *)(param_1 + 0x264);
    uStack_210 = *(undefined4 *)(param_1 + 0x268);
    uStack_20c = *(undefined4 *)(param_1 + 0x26c);
    local_208 = *(undefined8 *)(param_1 + 0x270);
    uStack_200 = *(undefined8 *)(param_1 + 0x278);
    puVar18 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    uVar25 = *(undefined8 *)(lVar15 + 0x7c);
    puVar18[1] = 0;
    *puVar18 = &PTR_FUN_149f61590;
    puVar18[2] = uVar25;
    uVar25 = CONCAT44(uStack_234,local_238);
    uVar28 = CONCAT44(uStack_22c,uStack_230);
    uVar29 = local_228;
    uVar30 = uStack_224;
    uVar31 = uStack_220;
    uVar32 = uStack_21c;
    uVar33 = local_218;
    uVar34 = uStack_214;
    uVar35 = uStack_210;
    uVar36 = uStack_20c;
    uVar37 = (undefined4)local_208;
    uVar38 = local_208._4_4_;
    uVar39 = (undefined4)uStack_200;
    uVar40 = uStack_200._4_4_;
  }
  dVar49 = (double)fVar22;
  puVar18[4] = uVar25;
  puVar18[5] = uVar28;
  *(undefined4 *)(puVar18 + 6) = uVar29;
  *(undefined4 *)((longlong)puVar18 + 0x34) = uVar30;
  *(undefined4 *)(puVar18 + 7) = uVar31;
  *(undefined4 *)((longlong)puVar18 + 0x3c) = uVar32;
  *(undefined4 *)(puVar18 + 8) = uVar33;
  *(undefined4 *)((longlong)puVar18 + 0x44) = uVar34;
  *(undefined4 *)(puVar18 + 9) = uVar35;
  *(undefined4 *)((longlong)puVar18 + 0x4c) = uVar36;
  *(undefined4 *)(puVar18 + 10) = uVar37;
  *(undefined4 *)((longlong)puVar18 + 0x54) = uVar38;
  *(undefined4 *)(puVar18 + 0xb) = uVar39;
  *(undefined4 *)((longlong)puVar18 + 0x5c) = uVar40;
  puVar18[0xc] = dVar49;
  puVar18[0xd] = dVar49;
  puVar18[0xe] = dVar49;
  puVar18[0xf] = 0;
  puVar19 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar19[1] = 0;
  *puVar19 = &PTR_FUN_149f62ba0;
  *(undefined4 *)(puVar19 + 2) = 0x3f800000;
  puVar19[3] = puVar18;
  puVar19[4] = puVar16;
  puVar19[5] = 0;
  *(undefined4 *)(puVar19 + 6) = 0;
  puVar16 = puVar19;
LAB_140dec207:
  puVar18 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_149f62ba0;
  *(undefined4 *)(puVar18 + 2) = 0x3f800000;
  puVar18[3] = puVar17;
  puVar18[4] = puVar16;
  puVar18[5] = 0;
  *(undefined4 *)(puVar18 + 6) = 0;
  puVar16 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar16 = &PTR_FUN_14a3fdee0;
  puVar16[1] = 0x200000000;
  *(undefined4 *)(puVar16 + 2) = 0;
  FUN_1403c2146(local_1b8,5,puVar18,puVar16);
  FUN_1403c27ec(param_1,local_1b8);
  local_f8 = 0;
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(local_140);
  if (local_1b0 != (undefined8 *)0x0) {
    (**(code **)*local_1b0)(local_1b0,1);
  }
  if ((local_f0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dec39c FUN_140dec39c body=57 status=ok
// SIG undefined FUN_140dec39c(void)

void FUN_140dec39c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae960 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae960 = FUN_140002ddd(FUN_1465ec3c2,uVar1,L"OakSingularityAudioProvider");
  }
  return;
}



// FUNCTION 140dec3d5 FUN_140dec3d5 body=2006 status=ok
// SIG undefined FUN_140dec3d5(void)

void FUN_140dec3d5(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  float fVar8;
  DWORD DVar9;
  DWORD DVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined ***pppuVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auStack_c8 [32];
  code **local_a8;
  code *local_98;
  int local_90;
  undefined ***local_88;
  undefined **local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140ded3be();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  lVar5 = DAT_14cb0b518;
  bVar6 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_140dec515;
    bVar6 = DAT_14c8442b8 & 1;
  }
  if (bVar6 != 0) goto LAB_140dec515;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar4 + 0xc60);
  if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar11 == 2)) {
    uVar17 = 0;
  }
  else if (iVar11 == 1) {
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    uVar17 = (ulonglong)(DVar9 != DVar10);
  }
  else {
    uVar17 = 1;
  }
  fVar8 = DAT_14cb0ce04;
  fVar22 = *(float *)(lVar5 + uVar17 * 4);
  if (15.0 <= fVar22) {
    fVar22 = 15.0;
  }
  if (fVar22 <= -15.0) {
    fVar22 = -15.0;
  }
  if ((DAT_14cb0ce04 != fVar22) || (NAN(DAT_14cb0ce04) || NAN(fVar22))) {
    DAT_14cb0ce04 = fVar22;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0ce10) && (FUN_144b3d300(&DAT_14cb0ce10), DAT_14cb0ce10 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar15 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MaxAnisotropy",1);
    if (plVar15 == (longlong *)0x0) {
      DAT_14cb0ce08 = (int *)0x0;
    }
    else {
      DAT_14cb0ce08 = (int *)(**(code **)(*plVar15 + 0x68))(plVar15);
    }
    _Init_thread_footer(&DAT_14cb0ce10);
  }
  iVar11 = *DAT_14cb0ce08;
  if (DAT_14c761e1c == *DAT_14cb0ce08) {
    iVar11 = DAT_14c761e1c;
    if ((fVar8 == fVar22) && (!NAN(fVar8) && !NAN(fVar22))) goto LAB_140dec515;
  }
  DAT_14c761e1c = iVar11;
  FUN_1457b177c(&local_98);
  uVar17 = (ulonglong)local_88 & 0xffffffff;
  if ((-1 < (int)local_88) && ((int)local_88 < local_90)) {
    do {
      (**(code **)(**(longlong **)(local_98 + (uVar17 & 0xffffffff) * 8) + 0x3a8))();
      uVar17 = (longlong)(int)local_88;
      do {
        uVar21 = uVar17;
        uVar17 = uVar21 + 1;
        local_88 = (undefined ***)CONCAT44(local_88._4_4_,(int)uVar17);
        if ((longlong)local_90 <= (longlong)uVar17) break;
      } while (*(longlong *)(local_98 + uVar17 * 8) == 0);
    } while ((-2 < (longlong)uVar21) && ((int)uVar17 < local_90));
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = DAT_14cb053c8;
  plVar15 = DAT_14cb053c0;
  if ((DAT_14ca83900 != 0) && (DAT_14cb053c0 != (longlong *)0x0 || DAT_14cb053c8 != (longlong *)0x0)
     ) {
    piVar1 = (int *)(lVar4 + 0xc60);
    iVar11 = *piVar1;
    if (DAT_14c86a9fc == 0) {
      if (iVar11 != 2) {
        if (iVar11 != 1) goto LAB_140dec602;
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_140dec607;
        goto LAB_140dec66a;
      }
    }
    else {
LAB_140dec602:
      if (iVar11 != 0x10) {
LAB_140dec66a:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *piVar1, iVar11 == 2)) goto LAB_140dec607;
          if (iVar11 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (DVar9 == DVar10) goto LAB_140dec607;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar13 = (uint *)*puVar2;
          if (puVar13 != (uint *)0x0) goto LAB_140dec7cd;
          while( true ) {
            uVar16 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar16 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar16 | 1;
              __tlregdtor(&LAB_143768c26);
            }
            lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar12 = *(undefined4 **)(lVar5 + 0x310);
            *(undefined8 *)(lVar5 + 0x310) = 0;
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar12 = 0xffffffff;
            *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            FUN_140217a48(puVar2);
            puVar13 = (uint *)*puVar2;
LAB_140dec7cd:
            puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar20 + 0x17);
            uVar16 = puVar13[0x12];
            if (puVar19 <= puVar13 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
              LOCK();
              uVar3 = *puVar13;
              *puVar13 = *puVar13 + uVar16 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar16) != 0xffffffff) break;
              puVar13 = (uint *)*puVar2;
              *puVar13 = 0xffffffff;
              *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
              puVar13[0x12] = 0;
              *puVar2 = puVar13;
              puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
              puVar19 = (uint *)(puVar20 + 0x17);
              uVar16 = 0;
              if (puVar19 <= puVar13 + 0x4000) {
                uVar16 = 1;
                goto LAB_140dec84d;
              }
            }
          }
          uVar16 = uVar16 + 1;
LAB_140dec84d:
          *(uint **)(puVar13 + 0x10) = puVar19;
          puVar13[0x12] = uVar16;
          iVar11 = 0;
          FUN_1447247dc(puVar20,0);
          *puVar20 = &PTR_FUN_14aae6578;
          puVar20[0x15] = plVar15;
          puVar20[0x16] = plVar7;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar16 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
              uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
              iVar11 = 0;
            }
            else {
              uVar17 = 2;
            }
          }
          else {
            iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar17 = 5;
          }
          if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
          }
          puVar20[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar20[9] = puVar20;
          puVar20[10] = puVar20;
          lVar5 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar5 == 0) {
            uVar21 = 1;
            if ((char)uVar17 != '\x06') {
              uVar21 = uVar17;
            }
            uVar17 = uVar21;
            uVar14 = 0;
          }
          else {
            if ((char)uVar17 == '\x06') {
              uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
            }
            uVar14 = *(undefined8 *)(lVar5 + 0x30);
          }
          puVar20[0xf] = uVar14;
          puVar20[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar20 + 0x1c) = iVar11;
          if (puVar20 == (undefined8 *)0x0) {
            local_98 = (code *)CONCAT71(local_98._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
            UNLOCK();
            local_98 = (code *)CONCAT71(local_98._1_7_,1);
            FUN_1447439e4(puVar20);
            LOCK();
            piVar1 = (int *)(puVar20 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar20)(puVar20,1);
            }
          }
        }
        else {
          local_88 = (undefined ***)0x0;
          local_78 = &PTR_LAB_14aae6510;
          local_70 = plVar15;
          local_68 = plVar7;
          local_98 = FUN_1437698b0;
          local_a8 = &local_98;
          FUN_14005a792(&DAT_14ca9a440,L"RefreshSharedSamplerStatesCommand",&DAT_14cb0d25c);
          if (local_98 != (code *)0x0) {
            pppuVar18 = local_88;
            if (local_88 == (undefined ***)0x0) {
              pppuVar18 = &local_78;
            }
            (*(code *)(*pppuVar18)[2])();
          }
        }
        goto LAB_140dec643;
      }
    }
LAB_140dec607:
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      (**(code **)(*plVar15 + 8))(plVar15,&DAT_14ca85100);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*plVar7 + 8))(plVar7,&DAT_14ca85100);
    }
  }
LAB_140dec643:
  FUN_140dedef8(0);
LAB_140dec515:
  FUN_140dedfac();
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140decbac();
  return;
}



// FUNCTION 140decbac FUN_140decbac body=380 status=ok
// SIG undefined FUN_140decbac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140decbac(void)

{
  longlong *plVar1;
  char cVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  int local_38;
  int local_34;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c867cd8 == '\x01') {
    _DAT_14cb0d27c = DAT_14c867ce8;
    DAT_14cb0d284 = 2;
    DAT_14cb0d288 = '\0';
  }
  else {
    (**(code **)(*DAT_14cb0cb58 + 0xc0))(DAT_14cb0cb58,&local_30);
    local_3c = DAT_14cb0d284;
    puVar3 = local_30;
    if (local_28 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    cVar2 = FUN_140decd29(puVar3,&local_34,&local_38,&local_3c);
    if (cVar2 != '\0') {
      iVar4 = (local_3c != 1) + 1;
      if (local_3c == 0) {
        iVar4 = 0;
      }
      if ((((DAT_14cb0d27c != local_34) || (DAT_14cb0d280 != local_38)) || (DAT_14cb0d284 != iVar4))
         || (DAT_14cb0d288 == '\x01')) {
        _DAT_14cb0d27c = CONCAT44(local_38,local_34);
        DAT_14cb0d288 = '\0';
        DAT_14cb0d284 = iVar4;
        FUN_1457b18a4(local_34,local_38);
        if (((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) &&
           (*(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x100) != 0)) {
          FUN_145d03cb4(L"Resizing viewport due to setres change, %d x %d\n",local_34,local_38);
          plVar1 = *(longlong **)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x100);
          (**(code **)(*plVar1 + 8))(plVar1,local_34,local_38,iVar4);
        }
      }
    }
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140decd29 FUN_140decd29 body=1245 status=ok
// SIG undefined FUN_140decd29(void)

undefined8 FUN_140decd29(short *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  wchar_t *pwVar14;
  uint uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined8 uStack_70;
  wchar_t *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_1 != 0) {
    FUN_140056680(&local_60,param_1);
    FUN_140ded208(&local_60,&local_78);
    pwVar14 = local_78;
    local_58 = (int)uStack_70;
    uVar15 = (int)uStack_70 - 1;
    if ((int)uStack_70 == 0) {
      uVar15 = 0;
    }
    if (0 < (int)uVar15) {
      uVar5 = 0;
      do {
        local_78[uVar5] = (ushort)((ushort)local_78[uVar5] - 0x41 < 0x1a) * 0x20 + local_78[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar15 != uVar5);
    }
    uVar13 = uStack_70._4_4_;
    local_54 = uStack_70._4_4_;
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    bVar16 = local_60 != (wchar_t *)0x0;
    local_60 = pwVar14;
    if (bVar16) {
      FUN_1400020a8();
      local_60 = pwVar14;
      local_54 = uVar13;
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    pwVar14 = local_60;
    if (local_58 == 0) {
      pwVar14 = L"";
    }
    dVar19 = _wtof(pwVar14);
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    pwVar14 = L"";
    if (local_58 != 0) {
      pwVar14 = local_60;
    }
    pwVar14 = wcschr(pwVar14,L'x');
    bVar16 = true;
    if (pwVar14 != (wchar_t *)0x0) {
      pwVar14 = local_60;
      if (local_58 == 0) {
        pwVar14 = L"";
      }
      pwVar14 = wcschr(pwVar14,L'x');
      pwVar14 = pwVar14 + 1;
      FUN_14020fad6(&local_78,pwVar14);
      FUN_140ded208(&local_78,&local_88);
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_88;
      uStack_70 = CONCAT44(local_7c,local_80);
      if ((pwVar14 == (wchar_t *)0x0) || (uVar15 = local_80 - 2, 0x7ffffffe < uVar15))
      goto LAB_140ded091;
      uVar8 = local_80 - 1;
      if (uVar8 <= uVar15) {
        uVar15 = uVar8;
      }
      FUN_14006620a(&local_88,local_88 + uVar15,uVar8 - uVar15);
      iVar9 = (int)uStack_70 + -1;
      pwVar2 = local_78;
      if ((int)uStack_70 == 0) {
        iVar9 = 0;
        pwVar2 = L"";
      }
      iVar4 = 2;
      if (2 < iVar9) {
        iVar4 = iVar9;
      }
      FUN_14006620a(&local_98,pwVar2 + (iVar4 - 2U),iVar9 - (iVar4 - 2U));
      uVar13 = *param_4;
      cVar1 = FUN_1405b43cc(&local_88);
      if (cVar1 == '\0') {
        puVar6 = local_98;
        if (local_90 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        lVar7 = 0;
        while( true ) {
          uVar10 = *(ushort *)((longlong)puVar6 + lVar7);
          uVar5 = (ulonglong)uVar10;
          uVar11 = *(ushort *)((longlong)&DAT_14aae1aa2 + lVar7);
          if (uVar10 != uVar11) break;
          if (uVar10 == 0) goto LAB_140decfaf;
LAB_140decf7f:
          lVar7 = lVar7 + 2;
        }
        if ((uVar11 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar12]) goto LAB_140decf7f;
        }
        if (uVar10 != uVar11) {
          pwVar2 = local_88;
          if (local_80 == 0) {
            pwVar2 = L"";
          }
          lVar7 = 0;
          goto LAB_140ded106;
        }
LAB_140decfaf:
        iVar9 = -2;
        uVar13 = 1;
        goto LAB_140decfba;
      }
      goto LAB_140ded02e;
    }
    goto LAB_140ded091;
  }
  goto LAB_140ded1b3;
LAB_140ded106:
  uVar10 = *(ushort *)((longlong)pwVar2 + lVar7);
  uVar5 = (ulonglong)uVar10;
  uVar11 = *(ushort *)((longlong)&DAT_149fc3c34 + lVar7);
  if (uVar10 == uVar11) {
    if (uVar10 == 0) goto LAB_140ded18d;
LAB_140ded11b:
    lVar7 = lVar7 + 2;
    goto LAB_140ded106;
  }
  if ((uVar11 | uVar10) < 0x80) {
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar12 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar12]) goto LAB_140ded11b;
  }
  if (uVar10 != uVar11) {
    lVar7 = 0;
    goto LAB_140ded151;
  }
LAB_140ded18d:
  iVar9 = -1;
  uVar13 = 0;
  goto LAB_140decfba;
LAB_140ded151:
  uVar10 = *(ushort *)((longlong)pwVar2 + lVar7);
  uVar15 = (uint)uVar10;
  uVar11 = *(ushort *)((longlong)&DAT_14aae1aa8 + lVar7);
  uVar8 = (uint)uVar11;
  if (uVar10 != uVar11) {
    if ((uVar11 | uVar10) < 0x80) {
      uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar10];
      uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar11]) goto LAB_140ded165;
    }
    iVar9 = uVar15 - uVar8;
    goto LAB_140ded19c;
  }
  if (uVar10 == 0) goto LAB_140ded19a;
LAB_140ded165:
  lVar7 = lVar7 + 2;
  goto LAB_140ded151;
LAB_140ded19a:
  iVar9 = 0;
LAB_140ded19c:
  if (iVar9 == 0) {
    uVar13 = 2;
  }
  iVar9 = -(uint)(iVar9 == 0);
LAB_140decfba:
  uVar15 = (int)uStack_70 - 1;
  if ((int)uStack_70 == 0) {
    uVar15 = 0;
  }
  uVar8 = iVar9 + uVar15;
  if ((int)uVar15 <= (int)(iVar9 + uVar15)) {
    uVar8 = uVar15;
  }
  uVar5 = (ulonglong)uVar8;
  if ((int)uVar8 < 1) {
    uVar5 = 0;
  }
  uVar15 = uVar15 - (int)uVar5;
  if (0 < (int)uVar15) {
    iVar9 = (int)uStack_70 - (uVar15 + (int)uVar5);
    if (iVar9 != 0) {
      memmove(local_78 + uVar5,local_78 + uVar5 + uVar15,(longlong)iVar9 * 2);
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 - uVar15);
  }
  FUN_140ded26a(&local_78);
  FUN_140ded312(&local_78);
LAB_140ded02e:
  cVar1 = FUN_1405b43cc(&local_78);
  if (cVar1 == '\0') {
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    fVar17 = (float)dVar19;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    dVar19 = _wtof(pwVar14);
    fVar18 = (float)dVar19;
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    *param_2 = (int)(longlong)fVar17;
    *param_3 = (int)(longlong)fVar18;
    *param_4 = uVar13;
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    bVar16 = false;
  }
LAB_140ded091:
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = 1;
  if (bVar16) {
LAB_140ded1b3:
    uVar3 = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ded208 FUN_140ded208 body=98 status=ok
// SIG undefined FUN_140ded208(void)

undefined8 * FUN_140ded208(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FUN_140ded26a(param_2);
  FUN_140ded312(param_2);
  return param_2;
}



// FUNCTION 140ded26a FUN_140ded26a body=167 status=ok
// SIG undefined FUN_140ded26a(void)

void FUN_140ded26a(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = (int)param_1[1] - 1;
  if ((int)param_1[1] == 0) {
    uVar4 = 0;
  }
  uVar5 = (ulonglong)uVar4;
  uVar6 = uVar4 + 1;
  do {
    uVar7 = (int)uVar4 >> 0x1f & uVar4;
    if ((int)uVar5 < 1) break;
    lVar1 = uVar5 * 2;
    uVar5 = uVar5 - 1;
    iVar2 = iswspace(*(wint_t *)(*param_1 + -2 + lVar1));
    uVar6 = uVar6 - 1;
    uVar7 = uVar6;
  } while (iVar2 != 0);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar4 = iVar3 - uVar7;
  if ((int)uVar4 < 1) {
    return;
  }
  iVar3 = iVar2 - (uVar4 + uVar7);
  if (iVar3 != 0) {
    _Dst = (void *)((longlong)(int)uVar7 * 2 + *param_1);
    memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar4 * 2),(longlong)iVar3 * 2);
    iVar2 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar2 - uVar4;
  FUN_1449649ae(param_1);
  return;
}



// FUNCTION 140ded312 FUN_140ded312 body=172 status=ok
// SIG undefined FUN_140ded312(void)

void FUN_140ded312(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar2 = (int)param_1[1];
  lVar3 = 0;
  if (iVar2 - 2U < 0x7fffffff) {
    lVar3 = 0;
    do {
      iVar1 = iswspace(*(wint_t *)(*param_1 + lVar3 * 2));
      iVar2 = (int)param_1[1];
      if (iVar1 == 0) break;
      lVar3 = lVar3 + 1;
      iVar1 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar1 = 0;
      }
    } while (lVar3 < iVar1);
  }
  uVar4 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  if ((int)(uint)lVar3 < (int)uVar4) {
    uVar4 = (uint)lVar3;
  }
  if ((int)uVar4 < 1) {
    return;
  }
  if (iVar2 - uVar4 != 0) {
    memmove((void *)*param_1,(void *)(*param_1 + (ulonglong)uVar4 * 2),
            (longlong)(int)(iVar2 - uVar4) * 2);
    iVar2 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar2 - uVar4;
  FUN_1449649ae(param_1);
  return;
}



// FUNCTION 140ded3be FUN_140ded3be body=2873 status=ok
// SIG undefined FUN_140ded3be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ded3be(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  bool bVar17;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd88) && (FUN_144b3d300(&DAT_14cb0cd88), DAT_14cb0cd88 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.EnableHDROutput",1);
    if (plVar11 == (longlong *)0x0) {
      _DAT_14cb0cd80 = 0;
    }
    else {
      _DAT_14cb0cd80 = (**(code **)(*plVar11 + 0x68))(plVar11);
    }
    _Init_thread_footer(&DAT_14cb0cd88);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd98) && (FUN_144b3d300(&DAT_14cb0cd98), DAT_14cb0cd98 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.HDR.Display.MinLuminanceLog10",1);
    if (plVar11 == (longlong *)0x0) {
      DAT_14cb0cd90 = (undefined4 *)0x0;
    }
    else {
      DAT_14cb0cd90 = (undefined4 *)(**(code **)(*plVar11 + 0x70))(plVar11);
    }
    _Init_thread_footer(&DAT_14cb0cd98);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cda8) && (FUN_144b3d300(&DAT_14cb0cda8), DAT_14cb0cda8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.Display.MidLuminance",1);
    if (plVar11 == (longlong *)0x0) {
      DAT_14cb0cda0 = (undefined4 *)0x0;
    }
    else {
      DAT_14cb0cda0 = (undefined4 *)(**(code **)(*plVar11 + 0x70))(plVar11);
    }
    _Init_thread_footer(&DAT_14cb0cda8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cdb8) && (FUN_144b3d300(&DAT_14cb0cdb8), DAT_14cb0cdb8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.Display.MaxLuminance",1);
    if (plVar11 == (longlong *)0x0) {
      DAT_14cb0cdb0 = (undefined4 *)0x0;
    }
    else {
      DAT_14cb0cdb0 = (undefined4 *)(**(code **)(*plVar11 + 0x68))(plVar11);
    }
    _Init_thread_footer(&DAT_14cb0cdb8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cdc8) && (FUN_144b3d300(&DAT_14cb0cdc8), DAT_14cb0cdc8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.HDR.Aces.SceneColorMultiplier",1);
    if (plVar11 == (longlong *)0x0) {
      DAT_14cb0cdc0 = (undefined4 *)0x0;
    }
    else {
      DAT_14cb0cdc0 = (undefined4 *)(**(code **)(*plVar11 + 0x70))(plVar11);
    }
    _Init_thread_footer(&DAT_14cb0cdc8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cdd8) && (FUN_144b3d300(&DAT_14cb0cdd8), DAT_14cb0cdd8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.Aces.GamutCompression",1);
    if (plVar11 == (longlong *)0x0) {
      DAT_14cb0cdd0 = 0;
    }
    else {
      DAT_14cb0cdd0 = (**(code **)(*plVar11 + 0x70))(plVar11);
    }
    _Init_thread_footer(&DAT_14cb0cdd8);
  }
  if (DAT_14ca84df4 == 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cde0) &&
     (FUN_144b3d300(&DAT_14cb0cde0), puVar3 = DAT_14cb0cd90, DAT_14cb0cde0 == -1)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar12 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar12 = (ulonglong)(bVar6 ^ 1);
    }
    DAT_14cb0cddc = (float)puVar3[uVar12];
    _Init_thread_footer(&DAT_14cb0cde0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cde8) &&
     (FUN_144b3d300(&DAT_14cb0cde8), puVar3 = DAT_14cb0cda0, DAT_14cb0cde8 == -1)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar12 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar12 = (ulonglong)(bVar6 ^ 1);
    }
    DAT_14cb0cde4 = (float)puVar3[uVar12];
    _Init_thread_footer(&DAT_14cb0cde8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cdf0) &&
     (FUN_144b3d300(&DAT_14cb0cdf0), puVar3 = DAT_14cb0cdb0, DAT_14cb0cdf0 == -1)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar12 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar12 = (ulonglong)(bVar6 ^ 1);
    }
    DAT_14cb0cdec = puVar3[uVar12];
    _Init_thread_footer(&DAT_14cb0cdf0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cdf8) &&
     (FUN_144b3d300(&DAT_14cb0cdf8), puVar3 = DAT_14cb0cdc0, DAT_14cb0cdf8 == -1)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar12 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar12 = (ulonglong)(bVar6 ^ 1);
    }
    DAT_14cb0cdf4 = (float)puVar3[uVar12];
    _Init_thread_footer(&DAT_14cb0cdf8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0ce00) &&
     (FUN_144b3d300(&DAT_14cb0ce00), lVar15 = DAT_14cb0cdd0, DAT_14cb0ce00 == -1)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar12 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar12 = (ulonglong)(bVar6 ^ 1);
    }
    DAT_14cb0cdfc = *(float *)(lVar15 + uVar12 * 4);
    _Init_thread_footer(&DAT_14cb0ce00);
  }
  uVar7 = FUN_140348454();
  lVar15 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 == 0) {
LAB_140ded5a3:
    iVar14 = 1000;
  }
  else {
    lVar10 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar10 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar5 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar15 + 0x2c8) == 0) goto LAB_140ded5a3;
      lVar10 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar10 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar10 = *(longlong *)(lVar5 + 0x2c8);
      }
    }
    if ((*(char *)(lVar10 + 0x10c) != '\x01') || (iVar14 = *(int *)(lVar10 + 0x110), iVar14 == 0))
    goto LAB_140ded5a3;
  }
  puVar3 = DAT_14cb0cd90;
  cVar13 = (char)uVar7;
  if (DAT_14ca84f22 == cVar13) {
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar1 = *(int *)(lVar15 + 0xc60);
    if (iVar1 == 0x40000002) {
      uVar12 = 0;
    }
    else {
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar1 != 2)) {
        if (iVar1 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          bVar17 = DVar8 == DVar9;
        }
        else {
          bVar17 = false;
        }
      }
      uVar12 = (ulonglong)(bVar17 ^ 1);
    }
    puVar4 = DAT_14cb0cda0;
    piVar16 = (int *)(lVar15 + 0xc60);
    if (ABS(DAT_14cb0cddc - (float)puVar3[uVar12]) <= 1e-08) {
      iVar1 = *piVar16;
      if (iVar1 == 0x40000002) {
        uVar12 = 0;
      }
      else {
        bVar17 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar1 != 2)) {
          if (iVar1 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            bVar17 = DVar8 == DVar9;
          }
          else {
            bVar17 = false;
          }
        }
        uVar12 = (ulonglong)(bVar17 ^ 1);
      }
      iVar1 = DAT_14cb0cdec;
      puVar3 = DAT_14cb0cdb0;
      if (ABS(DAT_14cb0cde4 - (float)puVar4[uVar12]) <= 1e-08) {
        iVar2 = *piVar16;
        if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
          uVar12 = 0;
        }
        else if (iVar2 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          uVar12 = (ulonglong)(DVar8 != DVar9);
        }
        else {
          uVar12 = 1;
        }
        puVar4 = DAT_14cb0cdc0;
        if ((iVar1 == puVar3[uVar12]) && (iVar14 == DAT_14c761e18)) {
          iVar1 = *piVar16;
          if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
            uVar12 = 0;
          }
          else if (iVar1 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            uVar12 = (ulonglong)(DVar8 != DVar9);
          }
          else {
            uVar12 = 1;
          }
          lVar15 = DAT_14cb0cdd0;
          if (ABS(DAT_14cb0cdf4 - (float)puVar4[uVar12]) <= 1e-08) {
            iVar1 = *piVar16;
            if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
              uVar12 = 0;
            }
            else if (iVar1 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              uVar12 = (ulonglong)(DVar8 != DVar9);
            }
            else {
              uVar12 = 1;
            }
            if (ABS(DAT_14cb0cdfc - *(float *)(lVar15 + uVar12 * 4)) <= 1e-08) {
              return;
            }
          }
        }
      }
    }
  }
  else {
    piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  }
  FUN_14742873d(uVar7,iVar14,0);
  puVar3 = DAT_14cb0cd90;
  DAT_14ca84f22 = cVar13;
  if (*piVar16 == 0x40000002) {
    DAT_14cb0cddc = (float)*DAT_14cb0cd90;
LAB_140dedc63:
    DAT_14cb0cde4 = (float)*DAT_14cb0cda0;
LAB_140dedc76:
    DAT_14cb0cdec = *DAT_14cb0cdb0;
LAB_140dedc85:
    DAT_14cb0cdf4 = (float)*DAT_14cb0cdc0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    puVar4 = DAT_14cb0cda0;
    DAT_14cb0cddc = (float)puVar3[bVar6 ^ 1];
    if (*piVar16 == 0x40000002) goto LAB_140dedc63;
    bVar6 = FUN_144a61b4f();
    puVar3 = DAT_14cb0cdb0;
    DAT_14cb0cde4 = (float)puVar4[bVar6 ^ 1];
    if (*piVar16 == 0x40000002) goto LAB_140dedc76;
    bVar6 = FUN_144a61b4f();
    puVar4 = DAT_14cb0cdc0;
    DAT_14cb0cdec = puVar3[bVar6 ^ 1];
    if (*piVar16 == 0x40000002) goto LAB_140dedc85;
    bVar6 = FUN_144a61b4f();
    lVar15 = DAT_14cb0cdd0;
    DAT_14cb0cdf4 = (float)puVar4[bVar6 ^ 1];
    if (*piVar16 != 0x40000002) {
      bVar6 = FUN_144a61b4f();
      uVar12 = (ulonglong)(bVar6 ^ 1);
      goto LAB_140dedc9a;
    }
  }
  uVar12 = 0;
  lVar15 = DAT_14cb0cdd0;
LAB_140dedc9a:
  DAT_14cb0cdfc = (float)*(undefined4 *)(lVar15 + uVar12 * 4);
  DAT_14c761e18 = iVar14;
  return;
}



// FUNCTION 140dedef8 FUN_140dedef8 body=179 status=ok
// SIG undefined FUN_140dedef8(void)

void FUN_140dedef8(undefined4 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1457b1826(&local_30,0x10,1,0x200000);
  uVar2 = (ulonglong)local_20;
  if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
    do {
      plVar1 = *(longlong **)(local_30 + (uVar2 & 0xffffffff) * 8);
      (**(code **)(*plVar1 + 0x568))(plVar1,param_1);
      uVar2 = (longlong)(int)local_20;
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
        local_20 = (uint)uVar2;
        if ((longlong)local_28 <= (longlong)uVar2) break;
      } while (*(longlong *)(local_30 + uVar2 * 8) == 0);
    } while ((-2 < (longlong)uVar3) && ((int)local_20 < local_28));
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dedfac FUN_140dedfac body=5337 status=ok
// SIG undefined FUN_140dedfac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dedfac(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  byte bVar10;
  ulonglong uVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  undefined ***pppuVar21;
  uint *puVar22;
  ulonglong uVar23;
  char cVar24;
  undefined8 *puVar25;
  undefined2 uVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_1d8 [32];
  undefined1 **local_1b8;
  undefined2 local_1b0;
  byte local_1ad;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  ulonglong local_198;
  undefined2 local_190;
  undefined1 local_18e;
  undefined2 local_18c;
  undefined1 local_18a;
  code *local_188;
  undefined8 local_178;
  undefined **local_168;
  code *local_160;
  undefined1 *local_148 [2];
  undefined ***local_138;
  undefined **local_128;
  undefined1 *local_120;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar26 = DAT_14cb0cc2a;
  plVar18 = DAT_14c8407a8;
  local_18c = DAT_14cb0cbf5;
  local_18a = DAT_14cb0cbf7;
  local_190 = _DAT_14cb0cc01;
  local_18e = DAT_14cb0cc03;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cc48) && (FUN_144b3d300(&DAT_14cb0cc48), DAT_14cb0cc48 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))(plVar18,L"r.CookOutUnusedDetailModeComponents",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cc40 = (undefined4 *)0x0;
    }
    else {
      DAT_14cb0cc40 = (undefined4 *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cc48);
  }
  local_19c = *DAT_14cb0cc40;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cc58) && (FUN_144b3d300(&DAT_14cb0cc58), DAT_14cb0cc58 == -1)) {
    plVar17 = (longlong *)(**(code **)(*plVar18 + 200))(plVar18,L"r.DetailMode",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cc50 = (int *)0x0;
    }
    else {
      DAT_14cb0cc50 = (int *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cc58);
  }
  local_1ac = *DAT_14cb0cc50;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cc68) && (FUN_144b3d300(&DAT_14cb0cc68), DAT_14cb0cc68 == -1)) {
    plVar17 = (longlong *)(**(code **)(*plVar18 + 200))(plVar18,L"r.MaxAnisotropy",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cc60 = (undefined4 *)0x0;
    }
    else {
      DAT_14cb0cc60 = (undefined4 *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cc68);
  }
  local_1a0 = *DAT_14cb0cc60;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cc78) && (FUN_144b3d300(&DAT_14cb0cc78), DAT_14cb0cc78 == -1)) {
    plVar17 = (longlong *)(**(code **)(*plVar18 + 200))(plVar18,L"r.Shadow.MaxResolution",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cc70 = (int *)0x0;
    }
    else {
      DAT_14cb0cc70 = (int *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cc78);
  }
  local_1a4 = *DAT_14cb0cc70;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cc88) && (FUN_144b3d300(&DAT_14cb0cc88), DAT_14cb0cc88 == -1)) {
    plVar17 = (longlong *)(**(code **)(*plVar18 + 200))(plVar18,L"r.Shadow.MaxCSMResolution",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cc80 = (int *)0x0;
    }
    else {
      DAT_14cb0cc80 = (int *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cc88);
  }
  local_1a8 = *DAT_14cb0cc80;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cc98) && (FUN_144b3d300(&DAT_14cb0cc98), DAT_14cb0cc98 == -1)) {
    plVar17 = (longlong *)(**(code **)(*plVar18 + 200))(plVar18,L"r.ViewDistanceScale",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cc90 = (float *)0x0;
    }
    else {
      DAT_14cb0cc90 = (float *)(**(code **)(*plVar17 + 0x70))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cc98);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cca8) && (FUN_144b3d300(&DAT_14cb0cca8), DAT_14cb0cca8 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))(plVar18,L"r.ViewDistanceScale.ApplySecondaryScale",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cca0 = (int *)0x0;
    }
    else {
      DAT_14cb0cca0 = (int *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cca8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0ccb8) && (FUN_144b3d300(&DAT_14cb0ccb8), DAT_14cb0ccb8 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))(plVar18,L"r.ViewDistanceScale.SecondaryScale",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0ccb0 = (float *)0x0;
    }
    else {
      DAT_14cb0ccb0 = (float *)(**(code **)(*plVar17 + 0x70))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0ccb8);
  }
  if (*DAT_14cb0cca0 < 1) {
    fVar35 = 1.0;
  }
  else {
    fVar35 = *DAT_14cb0ccb0;
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
  }
  fVar29 = *DAT_14cb0cc90;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0ccc8) && (FUN_144b3d300(&DAT_14cb0ccc8), DAT_14cb0ccc8 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))(plVar18,L"r.ViewDistanceScale.FieldOfViewMinAngle",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0ccc0 = (float *)0x0;
    }
    else {
      DAT_14cb0ccc0 = (float *)(**(code **)(*plVar17 + 0x70))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0ccc8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0ccd8) && (FUN_144b3d300(&DAT_14cb0ccd8), DAT_14cb0ccd8 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))
                        (plVar18,L"r.ViewDistanceScale.FieldOfViewMinAngleScale",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0ccd0 = (float *)0x0;
    }
    else {
      DAT_14cb0ccd0 = (float *)(**(code **)(*plVar17 + 0x70))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0ccd8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cce8) && (FUN_144b3d300(&DAT_14cb0cce8), DAT_14cb0cce8 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))(plVar18,L"r.ViewDistanceScale.FieldOfViewMaxAngle",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cce0 = (float *)0x0;
    }
    else {
      DAT_14cb0cce0 = (float *)(**(code **)(*plVar17 + 0x70))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cce8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0ccf8) && (FUN_144b3d300(&DAT_14cb0ccf8), DAT_14cb0ccf8 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))
                        (plVar18,L"r.ViewDistanceScale.FieldOfViewMaxAngleScale",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0ccf0 = (float *)0x0;
    }
    else {
      DAT_14cb0ccf0 = (float *)(**(code **)(*plVar17 + 0x70))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0ccf8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd08) && (FUN_144b3d300(&DAT_14cb0cd08), DAT_14cb0cd08 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))(plVar18,L"r.ViewDistanceScale.FieldOfViewAffectsHLOD",1)
    ;
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cd00 = (int *)0x0;
    }
    else {
      DAT_14cb0cd00 = (int *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cd08);
  }
  fVar32 = *DAT_14cb0ccc0;
  fVar31 = *DAT_14cb0ccd0;
  fVar30 = *DAT_14cb0cce0;
  local_1ad = *DAT_14cb0cd00 != 0;
  fVar33 = *DAT_14cb0ccf0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd18) && (FUN_144b3d300(&DAT_14cb0cd18), DAT_14cb0cd18 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar17 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MaterialQualityLevel",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cd10 = (int *)0x0;
    }
    else {
      DAT_14cb0cd10 = (int *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cd18);
  }
  iVar19 = 3;
  if (*DAT_14cb0cd10 < 3) {
    iVar19 = *DAT_14cb0cd10;
  }
  cVar24 = '\0';
  if (0 < iVar19) {
    cVar24 = (char)iVar19;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd28) && (FUN_144b3d300(&DAT_14cb0cd28), DAT_14cb0cd28 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb0cd20 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.StaticMeshLODDistanceScale",1);
    _Init_thread_footer(&DAT_14cb0cd28);
  }
  fVar28 = (float)(**(code **)(*DAT_14cb0cd20 + 0xb8))();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd38) && (FUN_144b3d300(&DAT_14cb0cd38), DAT_14cb0cd38 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))(plVar18,L"r.ViewDistanceScale.SkeletalMeshOverlay",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cd30 = (float *)0x0;
    }
    else {
      DAT_14cb0cd30 = (float *)(**(code **)(*plVar17 + 0x70))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cd38);
  }
  fVar34 = *DAT_14cb0cd30;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd48) && (FUN_144b3d300(&DAT_14cb0cd48), DAT_14cb0cd48 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))(plVar18,L"r.gbx.Nanite.GlobalWPODisableDistance",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cd40 = (int *)0x0;
    }
    else {
      DAT_14cb0cd40 = (int *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cd48);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd58) && (FUN_144b3d300(&DAT_14cb0cd58), DAT_14cb0cd58 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))
                        (plVar18,L"r.gbx.Nanite.GlobalShadowWPODisableDistance",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cd50 = (int *)0x0;
    }
    else {
      DAT_14cb0cd50 = (int *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cd58);
  }
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  iVar19 = *DAT_14cb0cd40;
  iVar6 = *DAT_14cb0cd50;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd68) && (FUN_144b3d300(&DAT_14cb0cd68), DAT_14cb0cd68 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar18 + 200))(plVar18,L"r.Shadow.GbxDisableShadowOnLowEnd",1);
    if (plVar17 == (longlong *)0x0) {
      DAT_14cb0cd60 = (char *)0x0;
    }
    else {
      DAT_14cb0cd60 = (char *)(**(code **)(*plVar17 + 0x60))(plVar17);
    }
    _Init_thread_footer(&DAT_14cb0cd68);
  }
  fVar29 = fVar29 * fVar35;
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  cVar4 = *DAT_14cb0cd60;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cd78) && (FUN_144b3d300(&DAT_14cb0cd78), DAT_14cb0cd78 == -1)) {
    plVar18 = (longlong *)
              (**(code **)(*plVar18 + 200))
                        (plVar18,L"r.Shadow.GbxDisableSkeletalMeshShadowOnLowEnd",1);
    if (plVar18 == (longlong *)0x0) {
      DAT_14cb0cd70 = (char *)0x0;
    }
    else {
      DAT_14cb0cd70 = (char *)(**(code **)(*plVar18 + 0x60))(plVar18);
    }
    _Init_thread_footer(&DAT_14cb0cd78);
  }
  fVar35 = fVar29 * fVar29;
  fVar34 = fVar34 * fVar29;
  cVar5 = *DAT_14cb0cd70;
  if ((((local_1ac == DAT_14cb0cbf8) && (DAT_14cb0cc00 == cVar24)) && (local_1a4 == DAT_14cb0cc04))
     && (local_1a8 == DAT_14cb0cc08)) {
    if ((fVar29 == DAT_14cb0cc0c) && (!NAN(fVar29) && !NAN(DAT_14cb0cc0c))) {
      if ((fVar35 == _DAT_14cb0cc10) && (!NAN(fVar35) && !NAN(_DAT_14cb0cc10))) {
        if ((((fVar28 == DAT_14cb0cc18) && (!NAN(fVar28) && !NAN(DAT_14cb0cc18))) &&
            (iVar19 == DAT_14cb0cc20)) &&
           (((iVar6 == DAT_14cb0cc24 && (cVar4 == DAT_14cb0cc28)) && (cVar5 == DAT_14cb0cc29)))) {
          if (((fVar34 == _DAT_14cb0cc1c) && (!NAN(fVar34) && !NAN(_DAT_14cb0cc1c))) &&
             (DAT_14cb0cbf4 != '\0')) goto LAB_140dee8d2;
        }
      }
    }
  }
  if (360.0 <= fVar32) {
    fVar32 = 360.0;
  }
  if (360.0 <= fVar30) {
    fVar30 = 360.0;
  }
  if (DAT_14cb0cc00 != cVar24) {
    local_1b0 = uVar26;
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar7 = *(int *)(lVar8 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar7 != 2) {
        if (iVar7 != 1) goto LAB_140dee55f;
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        if (DVar12 == DVar13) goto LAB_140dee564;
        goto LAB_140dee592;
      }
    }
    else {
LAB_140dee55f:
      if (iVar7 != 0x10) {
LAB_140dee592:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar8 + 0xc60), iVar7 == 2))
          goto LAB_140dee564;
          if (iVar7 == 1) {
            DVar12 = FUN_140ad26c0();
            DVar13 = GetCurrentThreadId();
            if (DVar12 == DVar13) goto LAB_140dee564;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar15 = (uint *)*puVar2;
          if (puVar15 != (uint *)0x0) goto LAB_140deea06;
          while( true ) {
            uVar20 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar20 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar20 | 1;
              __tlregdtor(&LAB_143768c26);
            }
            lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar14 = *(undefined4 **)(lVar8 + 0x310);
            *(undefined8 *)(lVar8 + 0x310) = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            FUN_140217a48(puVar2);
            puVar15 = (uint *)*puVar2;
LAB_140deea06:
            puVar25 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar22 = (uint *)(puVar25 + 0x16);
            uVar20 = puVar15[0x12];
            if (puVar22 <= puVar15 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar3 = *puVar15;
              *puVar15 = *puVar15 + uVar20 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar20) != 0xffffffff) break;
              puVar15 = (uint *)*puVar2;
              *puVar15 = 0xffffffff;
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
              puVar15[0x12] = 0;
              *puVar2 = puVar15;
              puVar25 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
              puVar22 = (uint *)(puVar25 + 0x16);
              uVar20 = 0;
              if (puVar22 <= puVar15 + 0x4000) {
                uVar20 = 1;
                goto LAB_140deea86;
              }
            }
          }
          uVar20 = uVar20 + 1;
LAB_140deea86:
          *(uint **)(puVar15 + 0x10) = puVar22;
          puVar15[0x12] = uVar20;
          FUN_1447247dc(puVar25,0);
          *puVar25 = &PTR_FUN_14aae64e8;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar20 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
              uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
            }
            else {
              uVar27 = 2;
            }
            uVar23 = 0;
          }
          else {
            uVar27 = 5;
            uVar23 = (ulonglong)
                     ((DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4));
          }
          if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
            local_198 = uVar23;
            (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
            uVar23 = local_198;
          }
          uVar26 = local_1b0;
          puVar25[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar25[9] = puVar25;
          puVar25[10] = puVar25;
          lVar8 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar8 == 0) {
            uVar11 = 1;
            if ((char)uVar27 != '\x06') {
              uVar11 = uVar27;
            }
            uVar27 = uVar11;
            uVar16 = 0;
          }
          else {
            if ((char)uVar27 == '\x06') {
              uVar27 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
            }
            uVar16 = *(undefined8 *)(lVar8 + 0x30);
          }
          puVar25[0xf] = uVar16;
          puVar25[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar25 + 0x1c) = (int)uVar23;
          if (puVar25 == (undefined8 *)0x0) {
            local_148[0] = (undefined1 *)CONCAT71(local_148[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
            UNLOCK();
            local_148[0] = (undefined1 *)CONCAT71(local_148[0]._1_7_,1);
            FUN_1447439e4(puVar25);
            LOCK();
            piVar1 = (int *)(puVar25 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar25)(puVar25,1);
            }
          }
        }
        else {
          local_1b8 = local_148;
          local_138 = (undefined ***)0x0;
          local_128 = &PTR_LAB_14a2b3190;
          local_120 = &LAB_143769626;
          local_148[0] = &LAB_142ea45a2;
          FUN_14005a792(&DAT_14ca9a440,L"UpdateDeferredCachedUniformExpressions",&DAT_14cb0d258);
          uVar26 = local_1b0;
          if (local_148[0] != (undefined1 *)0x0) {
            pppuVar21 = local_138;
            if (local_138 == (undefined ***)0x0) {
              pppuVar21 = &local_128;
            }
            (*(code *)(*pppuVar21)[2])();
            uVar26 = local_1b0;
          }
        }
        goto LAB_140dee63b;
      }
    }
LAB_140dee564:
    FUN_140eb1606(&DAT_14ca85100,0);
    uVar26 = local_1b0;
  }
LAB_140dee63b:
  bVar10 = local_1ad;
  if (fVar32 <= 0.0) {
    fVar32 = 0.0;
  }
  if (fVar31 <= 0.0) {
    fVar31 = 0.0;
  }
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  if (fVar33 <= 0.0) {
    fVar33 = 0.0;
  }
  FUN_14080c2b4();
  cVar9 = DAT_14cb0cc00;
  uVar20 = (uint)bVar10;
  if ((DAT_14cb0cbf4 == '\0') ||
     (((((local_1ac == DAT_14cb0cbf8 && (iVar19 == DAT_14cb0cc20)) && (iVar6 == DAT_14cb0cc24)) &&
       ((cVar4 == DAT_14cb0cc28 && (cVar5 == DAT_14cb0cc29)))) && (DAT_14cb0cc00 == cVar24)))) {
    DAT_14cb0cbf4 = '\x01';
    DAT_14cb0cbf5 = local_18c;
    DAT_14cb0cbf7 = local_18a;
    DAT_14cb0cbf8 = local_1ac;
    _DAT_14cb0cbfc = local_19c;
    _DAT_14cb0cc01 = local_190;
    DAT_14cb0cc03 = local_18e;
    DAT_14cb0cc04 = local_1a4;
    DAT_14cb0cc08 = local_1a8;
    _DAT_14cb0cc2c = local_1a0;
    DAT_14cb0cc00 = cVar24;
    DAT_14cb0cc0c = fVar29;
    _DAT_14cb0cc10 = fVar35;
    DAT_14cb0cc14 = uVar20;
    DAT_14cb0cc18 = fVar28;
    _DAT_14cb0cc1c = fVar34;
    DAT_14cb0cc20 = iVar19;
    DAT_14cb0cc24 = iVar6;
    DAT_14cb0cc28 = cVar4;
    DAT_14cb0cc29 = cVar5;
    DAT_14cb0cc2a = uVar26;
    DAT_14cb0cc30 = fVar32;
    DAT_14cb0cc34 = fVar31;
    DAT_14cb0cc38 = fVar30;
    DAT_14cb0cc3c = fVar33;
  }
  else {
    FUN_14165273a(local_148);
    DAT_14cb0cbf4 = '\x01';
    DAT_14cb0cbf5 = local_18c;
    DAT_14cb0cbf7 = local_18a;
    DAT_14cb0cbf8 = local_1ac;
    _DAT_14cb0cbfc = local_19c;
    _DAT_14cb0cc01 = local_190;
    DAT_14cb0cc03 = local_18e;
    DAT_14cb0cc04 = local_1a4;
    DAT_14cb0cc08 = local_1a8;
    _DAT_14cb0cc2c = local_1a0;
    DAT_14cb0cc00 = cVar24;
    DAT_14cb0cc0c = fVar29;
    _DAT_14cb0cc10 = fVar35;
    DAT_14cb0cc14 = uVar20;
    DAT_14cb0cc18 = fVar28;
    _DAT_14cb0cc1c = fVar34;
    DAT_14cb0cc20 = iVar19;
    DAT_14cb0cc24 = iVar6;
    DAT_14cb0cc28 = cVar4;
    DAT_14cb0cc29 = cVar5;
    DAT_14cb0cc2a = uVar26;
    DAT_14cb0cc30 = fVar32;
    DAT_14cb0cc34 = fVar31;
    DAT_14cb0cc38 = fVar30;
    DAT_14cb0cc3c = fVar33;
    if (cVar9 != cVar24) {
      FUN_141512f02(0,0);
      FUN_14589d308(1,0);
    }
    FUN_1416525c2(local_148);
  }
  if (cVar9 != cVar24) {
    local_178 = 0;
    local_168 = &PTR_LAB_149e16f80;
    local_160 = FUN_1437697b0;
    local_188 = FUN_140d11fbe;
    FUN_1407461b0(DAT_14c7585c8);
  }
LAB_140dee8d2:
  if ((local_e0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140def486 FUN_140def486 body=139 status=ok
// SIG undefined FUN_140def486(void)

void FUN_140def486(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = FUN_140def512();
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 200);
    if (lVar1 != 0) {
      uVar3 = (uint)lVar1;
      if ((int)(uVar3 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
        lVar4 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x28);
        }
        if ((*(uint *)(lVar4 + (ulonglong)((uVar3 & 0xffffff) >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0
           ) {
          lVar4 = *(longlong *)(lVar2 + 8);
          lVar5 = (ulonglong)(uVar3 & 0xffffff) * 0x70;
          if (((lVar4 + lVar5 != 0) && (*(longlong *)(lVar4 + 0x60 + lVar5) == lVar1)) &&
             (*(char *)(lVar4 + 1 + lVar5) != '\x04')) {
            FUN_1405a424c(lVar2);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}



// FUNCTION 140def512 FUN_140def512 body=152 status=ok
// SIG undefined FUN_140def512(void)

undefined8 FUN_140def512(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c))) &&
        ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) &&
       ((lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(), lVar2 != 0 &&
        (lVar2 = FUN_1447210f0(lVar2), lVar2 != 0)))) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      return *puVar3;
    }
  }
  return 0;
}



// FUNCTION 140def5aa FUN_140def5aa body=133 status=ok
// SIG undefined FUN_140def5aa(void)

void FUN_140def5aa(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b1dcf30;
  *(undefined1 *)(param_2 + 0xc) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined2 *)(param_2 + 0xb) = 0;
  *(undefined1 *)((longlong)param_2 + 0x62) = 1;
  *(undefined4 *)((longlong)param_2 + 100) = 1;
  param_2[0xd] = 0x4270000041a00000;
  param_2[0xe] = 0x3f4ccccd3dcccccd;
  FUN_140def630(param_2 + 0xf);
  return;
}



// FUNCTION 140def630 FUN_140def630 body=380 status=ok
// SIG undefined FUN_140def630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_140def630(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_38 [32];
  uint local_18 [2];
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  UNLOCK();
  auVar7._4_12_ = in_XMM0._4_12_;
  auVar7._0_4_ = ((float)(DAT_14c8450b0 & 0xff) * 1.40625) / 60.0;
  auVar11 = roundss(in_XMM2,auVar7,9);
  fVar6 = auVar7._0_4_ - auVar11._0_4_;
  local_18[0] = 0x3f800000;
  local_18[1] = 0;
  auVar13._0_12_ = ZEXT812(0x3f800000);
  auVar13._12_4_ = 0;
  local_10 = 1.0 - fVar6;
  local_c = fVar6 + -1.0 + 1.0;
  uVar5 = (ulonglong)auVar11._0_4_;
  uVar5 = (ulonglong)(uint)((int)uVar5 + (int)((uVar5 & 0xffffffff) / 6) * -6);
  auVar7 = insertps(ZEXT416(local_18[*(uint *)(&DAT_149e1b580 + uVar5 * 0xc)]),
                    local_18[*(uint *)(&DAT_149e1b584 + uVar5 * 0xc)],0x10);
  auVar7 = insertps(auVar7,local_18[*(uint *)(&DAT_149e1b588 + uVar5 * 0xc)],0x20);
  auVar7 = insertps(auVar7,auVar13,0x30);
  auVar7 = maxps(auVar7,_DAT_149e1a200);
  auVar7 = minps(auVar7,_DAT_149e1a210);
  fVar6 = auVar7._0_4_;
  fVar8 = auVar7._4_4_;
  fVar9 = auVar7._8_4_;
  auVar10._4_4_ =
       *(undefined4 *)
        (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar8 + -0x39000000) >> 0x14) * 4);
  auVar10._0_4_ =
       *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar6 + 0xc7000000U >> 0x14) * 4);
  auVar10._8_4_ =
       *(undefined4 *)
        (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar9 + -0x39000000) >> 0x14) * 4);
  auVar10._12_4_ = 0;
  auVar12._0_4_ = (uint)fVar6 >> 0xc;
  auVar12._4_4_ = (uint)fVar8 >> 0xc;
  auVar12._8_4_ = (uint)fVar9 >> 0xc;
  auVar12._12_4_ = (uint)auVar7._12_4_ >> 0xc;
  auVar13 = pmaddwd(auVar12 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar10);
  auVar11._4_4_ = (int)(fVar8 * 0.0 + 0.5) | auVar13._4_4_ >> 0x10;
  auVar11._12_4_ = (int)(auVar7._12_4_ * 255.0 + 0.5) | auVar13._12_4_ >> 0x10;
  auVar11._0_4_ = (int)(fVar9 * 0.0 + 0.5) | auVar13._8_4_ >> 0x10;
  auVar11._8_4_ = (int)(fVar6 * 0.0 + 0.5) | auVar13._0_4_ >> 0x10;
  auVar7 = packssdw(auVar11,auVar11);
  sVar1 = auVar7._0_2_;
  sVar2 = auVar7._2_2_;
  sVar3 = auVar7._4_2_;
  sVar4 = auVar7._6_2_;
  DAT_14c8450b0 = DAT_14c8450b0 + 0x9d;
  *param_1 = CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar7[6] - (0xff < sVar4),
                      CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar7[4] - (0xff < sVar3),
                               CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar7[2] - (0xff < sVar2),
                                        (0 < sVar1) * (sVar1 < 0x100) * auVar7[0] - (0xff < sVar1)))
                     );
  uVar5 = local_8 ^ (ulonglong)auStack_38;
  if (uVar5 == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar5);
}



// FUNCTION 140def7ae FUN_140def7ae body=445 status=ok
// SIG undefined FUN_140def7ae(void)

undefined8
FUN_140def7ae(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    lVar2 = FUN_1400f6f32(lVar2);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) {
      lVar3 = FUN_140d1732e(lVar2,param_2 + 0x18);
      if (lVar3 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_60 = &local_40;
          local_40 = FUN_141030f22;
          local_50 = FUN_14081d0ea;
          local_58 = &LAB_1459f2e4c;
          local_68 = &LAB_148c39de3;
          local_70 = &LAB_1457a9eb2;
          local_78 = &DAT_149e063b2;
          local_80 = 0;
          local_88 = 0x10000004;
          local_90 = 0x10;
          local_98 = (longlong *)CONCAT44(local_98._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          lVar3 = FUN_14030d330(lVar3);
          if (lVar3 != 0) {
            lVar3 = FUN_140cee904(lVar3);
            if (lVar3 != 0) {
              uVar1 = FUN_140def96c(lVar2,param_2 + 0x18);
              local_98 = param_1 + 0xf;
              FUN_140def9c6(lVar3,param_4,param_5,uVar1);
              uVar4 = 1;
              goto LAB_140def89f;
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_140def89f:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140def96c FUN_140def96c body=89 status=ok
// SIG undefined FUN_140def96c(void)

undefined4 FUN_140def96c(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  uVar2 = 0xffffffff;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar3 != 0) && (*(uint *)(lVar3 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar3 + 4)) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar3 + 2) * 8);
        } while (-1 < *(short *)(lVar3 + 4));
        if (lVar3 == 0) {
          return 0xffffffff;
        }
      }
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8);
      }
    }
  }
  return uVar2;
}



// FUNCTION 140def9c6 FUN_140def9c6 body=140 status=ok
// SIG undefined FUN_140def9c6(void)

void FUN_140def9c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  PSRWLOCK local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_3;
  if (*param_5 == 0) {
    plVar2 = (longlong *)FUN_140defa54();
  }
  else {
    plVar2 = (longlong *)FUN_1409801a0();
  }
  lVar1 = *plVar2;
  SRWLock = (PSRWLOCK)(lVar1 + 0x28);
  local_38 = 0;
  local_40 = SRWLock;
  AcquireSRWLockShared(SRWLock);
  local_30 = lVar1;
  FUN_140defaca(&local_28,&local_40);
  ReleaseSRWLockShared(SRWLock);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140defa54 FUN_140defa54 body=116 status=ok
// SIG undefined FUN_140defa54(void)

longlong FUN_140defa54(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402815f4(param_1,&local_28);
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
    return local_28 + 0x640;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140defaca FUN_140defaca body=580 status=ok
// SIG undefined FUN_140defaca(void)

void FUN_140defaca(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  FUN_14009b010(&local_78,3,0);
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != &DAT_14c9a1308) {
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)puVar5[1];
    *puVar5 = local_78;
    puVar5[1] = plStack_70;
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
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 8) != 0) {
    plVar3 = (longlong *)*param_1;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    cVar4 = '\0';
    FUN_14009b010(&local_78,2,0);
    if (*plVar3 != 0) {
      local_98 = 0;
      cVar4 = FUN_14014191c(*plVar3,&DAT_14cbd8440,&local_78,0);
    }
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (cVar4 != '\0') {
      puVar5 = (undefined8 *)FUN_14039d0c8(*param_1,&DAT_14cbd8440);
      FUN_1411656cc(puVar5);
      lVar7 = (longlong)(int)(*(longlong **)(param_2 + 0x10))[1];
      if (lVar7 != 0) {
        lVar6 = **(longlong **)(param_2 + 0x10);
        lVar7 = lVar7 << 4;
        do {
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          FUN_14009b010(&local_88,1,0);
          FUN_14000bbd8(&local_78,lVar6);
          if (local_88 != 0) {
            FUN_1402afb64(local_88,&local_78);
          }
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          local_98 = 0;
          FUN_140141db6(*puVar5,&local_88,0,0);
          plVar3 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar6 = lVar6 + 0x10;
          lVar7 = lVar7 + -0x10;
        } while (lVar7 != 0);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140defd10 FUN_140defd10 body=355 status=ok
// SIG undefined FUN_140defd10(void)

void FUN_140defd10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_1405246fa();
  if (cVar3 == '\0') {
    FUN_140defe74(param_1);
    FUN_1400a4600(param_1 + 0x38);
    lVar1 = *(longlong *)(param_1 + 0x298);
    if (lVar1 != 0) {
      lVar4 = FUN_14098e070();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (*(char *)(lVar1 + 0xa2) == '\x01')) {
        FUN_14495448a(local_30,L"GbxMomentNodeState_PlayCutscene",*(undefined4 *)(param_1 + 0x878));
        FUN_1415b967e(0,local_30);
      }
    }
    FUN_140defefc(param_1);
  }
  else {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,3,0x10);
    puVar2 = local_28;
    local_20 = 3;
    *local_28 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar4;
    *local_28 = &PTR_FUN_14b4249f0;
    local_28[3] = 0;
    FUN_14485c47a(local_28 + 3,param_1);
    puVar2[4] = &LAB_14895220e;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_14621550a(param_1,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140defe74 FUN_140defe74 body=135 status=ok
// SIG undefined FUN_140defe74(void)

void FUN_140defe74(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x3b0);
  if (lVar1 == 0) goto LAB_140defecb;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != 0) goto LAB_140defeb0;
    local_20 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_140defeb0:
    local_20 = param_1 + 0x210;
  }
  local_28 = param_1;
  FUN_140a1af52(lVar1,&local_28,1);
LAB_140defecb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140defefc FUN_140defefc body=1494 status=ok
// SIG undefined FUN_140defefc(void)

void FUN_140defefc(longlong *param_1)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_178 [40];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120 [2];
  undefined8 local_110 [5];
  undefined1 auStack_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d0 [6];
  int local_a0;
  float local_9c;
  longlong local_98 [2];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((param_1[0x44] != 0) && ((longlong *)param_1[0x45] != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)param_1[0x45] + 0x10))(), cVar4 == '\0'))
  goto LAB_140df03cc;
  cVar4 = FUN_1405246fa(param_1);
  if (cVar4 != '\0') {
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    puVar9 = local_88;
    local_80 = 3;
    *local_88 = &PTR_LAB_14a1c8830;
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
    local_88[2] = lVar6;
    *local_88 = &PTR_FUN_14a491670;
    local_88[3] = 0;
    iVar10 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_88 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar10 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar10 = *(int *)(lVar5 + 0x10);
        bVar11 = iVar10 == 0;
        if (bVar11) {
          *(int *)(lVar5 + 0x10) = iVar8;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar10 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar9 + 0x1c) = iVar10;
    puVar9[4] = &LAB_147578092;
    *(undefined4 *)(puVar9 + 5) = 0;
    FUN_14621550a(param_1,&local_88);
    goto LAB_140df03cc;
  }
  if ((((char)param_1[0x52] == '\x01') || (param_1[0x53] == 0)) ||
     (cVar4 = (**(code **)(*param_1 + 0x2d0))(param_1), cVar4 == '\0')) goto LAB_140df03cc;
  FUN_14179f158(param_1,local_98,1);
  *(undefined1 *)(param_1 + 0x52) = 1;
  fVar12 = *(float *)(param_1 + 0x59);
  if ((*(byte *)((longlong)param_1 + 0x294) & 1) != 0) {
    fVar12 = -fVar12;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_a0);
  fVar1 = *(float *)(param_1 + 100);
  if (((*(int *)((longlong)param_1 + 0x31c) != local_a0) || (fVar1 != local_9c)) ||
     (NAN(fVar1) || NAN(local_9c))) {
    if ((((int)param_1[0x54] == *(int *)((longlong)param_1 + 0x31c)) && (fVar1 == 0.0)) &&
       (fVar12 < 0.0)) {
      puVar9 = local_110;
      (**(code **)(*param_1 + 0x2c8))(param_1,&local_128);
      local_120[0] = local_128;
      puVar7 = local_120;
      goto LAB_140df005b;
    }
  }
  else if (0.0 < fVar12) {
    puVar9 = local_d0;
    local_e0 = (undefined4)param_1[0x54];
    local_dc = 0;
    puVar7 = (undefined8 *)&local_e0;
LAB_140df005b:
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined1 *)(puVar7 + 7) = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined8 *)((longlong)puVar9 + 0x1d) = 0;
    *(undefined2 *)((longlong)puVar7 + 0x39) = 1;
    *(undefined1 *)((longlong)puVar7 + 0x3b) = 1;
    FUN_1405244c0(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x2d4) == '\x02') {
    FUN_14633e310(param_1 + 0x5c);
  }
  *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) | 2;
  *(undefined1 *)(param_1 + 0x52) = 1;
  plVar3 = (longlong *)param_1[0x7a];
  lVar5 = param_1[0x61];
  lVar6 = *(longlong *)((longlong)param_1 + 0x31c);
  if (plVar3 + 1 != &local_78) {
    local_78._0_4_ = (undefined4)lVar6;
    local_78._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
    uStack_70._0_4_ = (undefined4)lVar5;
    uStack_70._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
    *(undefined4 *)(plVar3 + 1) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar3 + 0xc) = local_78._4_4_;
    *(undefined4 *)(plVar3 + 2) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)plVar3 + 0x14) = uStack_70._4_4_;
    *(undefined1 *)(plVar3 + 3) = 1;
  }
  local_78 = lVar6;
  uStack_70 = lVar5;
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_78);
  if ((char)param_1[99] == '\0') {
    if ((char)param_1[0x85] == '\0') {
      fVar12 = (float)(**(code **)(*DAT_14cb0d2b0 + 0x300))();
      param_1[0x84] = (longlong)(double)fVar12;
      *(undefined1 *)(param_1 + 0x85) = 1;
    }
    lVar5 = param_1[0x61];
    (**(code **)(*DAT_14cb0d2b0 + 0x308))
              (DAT_14cb0d2b0,1.0 / ((float)(int)((ulonglong)lVar5 >> 0x20) / (float)(int)lVar5));
    if (DAT_14cab3ae0 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cab3b10) && (FUN_144b3d300(&DAT_14cab3b10), DAT_14cab3b10 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cab3b08 =
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DynamicRes.FrameTimeBudget",1);
        _Init_thread_footer(&DAT_14cab3b10);
      }
      FUN_140635f48(DAT_14cab3b08);
      *(undefined1 *)(param_1 + 0x86) = 1;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x32c) == '\x01') &&
     (*(int *)((longlong)param_1 + 0x324) == (int)*(undefined8 *)((longlong)param_1 + 0x31c))) {
    fVar12 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x31c) >> 0x20);
    if ((*(float *)(param_1 + 0x65) != fVar12) || (NAN(*(float *)(param_1 + 0x65)) || NAN(fVar12)))
    goto LAB_140df0213;
  }
  else {
LAB_140df0213:
    FUN_1432db21e(param_1 + 0x61,&local_150);
    local_42 = 0;
    local_78 = CONCAT44(uStack_14c,local_150);
    uStack_70 = CONCAT44(uStack_144,uStack_148);
    local_68 = local_140;
    uStack_60 = uStack_138;
    local_58 = local_130;
    (**(code **)(*param_1 + 0x2c0))(param_1,&local_78,1);
  }
  FUN_140de91b2(param_1);
  cVar4 = FUN_1402d76c0(param_1);
  if (cVar4 != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x38c) = *(undefined8 *)((longlong)param_1 + 0x31c);
    *(char *)((longlong)param_1 + 0x394) = (char)param_1[0x52];
    param_1[0x73] = *(longlong *)((longlong)param_1 + 0x2ac);
  }
  if ((*(byte *)((longlong)param_1 + 0x294) & 1) == 0) {
    lVar5 = 0x230;
    iVar10 = (int)param_1[0x47];
  }
  else {
    lVar5 = 0x240;
    iVar10 = (int)param_1[0x49];
  }
  if (0 < iVar10) {
    FUN_1447cd2ec(lVar5 + (longlong)param_1,0);
  }
  FUN_1447f69b6(param_1 + 0x8e);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
LAB_140df03cc:
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140df04de FUN_140df04de body=165 status=ok
// SIG undefined FUN_140df04de(void)

undefined8 * FUN_140df04de(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14b0b0f20;
  param_1[5] = &PTR_FUN_14b0b1920;
  param_1[6] = &PTR_LAB_14b0b1960;
  param_1[0x55] = &PTR_FUN_14b0b19b0;
  param_1[0x56] = &PTR_FUN_14b0b1a30;
  param_1[0x57] = &PTR_FUN_14b0b1a40;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x644) = 0;
  param_1[0xc9] = 2;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  return param_1;
}



// FUNCTION 140df058c FUN_140df058c body=106 status=ok
// SIG undefined FUN_140df058c(void)

undefined8 * FUN_140df058c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b105bd0;
  *(undefined2 *)(param_1 + 2) = 0;
  FUN_140265f12();
  param_1[4] = &DAT_14cb83310;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = &PTR_FUN_14b1828b0;
  FUN_140265f12();
  param_1[8] = &DAT_14cb83310;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = &PTR_FUN_14b1828b0;
  return param_1;
}



// FUNCTION 140df060c FUN_140df060c body=213 status=ok
// SIG undefined FUN_140df060c(void)

void FUN_140df060c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  
  *(undefined2 *)((longlong)param_1 + 0x2ea) = *(undefined2 *)((longlong)param_1 + 0x19c);
  cVar1 = (char)param_1[0x15];
  if (cVar1 == (char)param_1[0x5d]) {
    lVar2 = param_1[0xf];
    if (lVar2 != 0) {
      uVar3 = *(ushort *)((longlong)param_1 + 0x19e);
      if (*(ushort *)(param_1 + 0x12d) != uVar3) {
        if ((*(byte *)(lVar2 + 0x144) & 4) != 0) {
          uVar3 = uVar3 & ~*(ushort *)(lVar2 + 0x146);
        }
        if (*(ushort *)(param_1 + 0x12d) != uVar3) {
          *(ushort *)(param_1 + 0x12d) = uVar3;
          (**(code **)(*param_1 + 0x410))(param_1);
        }
      }
      if ((*(byte *)((longlong)param_1 + 0x311) & 8) != 0) {
        lVar2 = param_1[0x50];
        lVar4 = FUN_1405faa04(param_1 + 0x38);
        if (lVar2 != lVar4) {
          *(byte *)((longlong)param_1 + 0x311) = *(byte *)((longlong)param_1 + 0x311) & 0xf7;
        }
      }
    }
    return;
  }
  *(char *)(param_1 + 0x5d) = cVar1;
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x308))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140df06ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2d0))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140df06da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e0))(param_1);
  return;
}



// FUNCTION 140df06e2 FUN_140df06e2 body=513 status=ok
// SIG undefined FUN_140df06e2(void)

bool FUN_140df06e2(uint *param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [34];
  byte local_86;
  byte local_85;
  int local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60 [2];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((char)param_1[4] == '\0') {
    if (param_1[1] != 0) {
      uVar1 = *param_1;
      bVar13 = false;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140df0757;
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar5 != 0) && (*(uint *)(lVar5 + 0x10) == param_1[1])) {
        bVar13 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
        goto LAB_140df0757;
      }
    }
  }
  else {
    lVar5 = *(longlong *)param_1;
    if (lVar5 != 0) {
      iVar2 = *(int *)(lVar5 + 0x10);
      lVar10 = (longlong)iVar2;
      if (lVar10 != 0) {
        lVar12 = *(longlong *)(lVar5 + 8);
        local_68 = lVar5;
        bVar3 = FUN_140df06e2(lVar12);
        local_70 = lVar12 + 0x18;
        iVar6 = 0;
        iVar7 = 0;
        local_78 = lVar12;
        do {
          local_85 = bVar3;
          local_86 = local_85 ^ 1;
          lVar5 = (longlong)iVar7;
          iVar11 = iVar7 + 1;
          if (iVar7 + 1 < iVar2) {
            iVar11 = iVar2;
          }
          local_80 = lVar5 * 3;
          lVar12 = local_70 + lVar5 * 0x18;
          bVar3 = local_85 & 1;
          iVar8 = iVar7;
          local_84 = iVar6;
          do {
            lVar5 = lVar5 + 1;
            iVar9 = iVar11;
            if (lVar10 <= lVar5) break;
            bVar4 = FUN_140df06e2(lVar12);
            iVar8 = iVar8 + 1;
            lVar12 = lVar12 + 0x18;
            iVar9 = iVar8;
          } while (bVar3 == bVar4);
          iVar6 = local_84;
          bVar3 = local_86;
          iVar11 = iVar9 - iVar7;
          if ((local_85 & 1) == 0) {
            FUN_140513519(local_78 + local_80 * 8,iVar11);
            iVar6 = local_84;
            bVar3 = local_86;
          }
          else {
            if (local_84 != iVar7) {
              memmove((void *)(local_78 + (longlong)local_84 * 0x18),
                      (void *)(local_78 + local_80 * 8),(longlong)iVar11 * 0x18);
            }
            iVar6 = iVar6 + iVar11;
          }
          iVar7 = iVar9;
        } while (lVar5 < lVar10);
        *(int *)(local_68 + 0x10) = iVar6;
        bVar13 = true;
        if (0 < *(int *)(*(longlong *)param_1 + 0x10)) goto LAB_140df0757;
      }
      local_50 = 0xff;
      FUN_140513334(local_60);
      local_60[0] = 0;
      local_50 = 0;
      FUN_140513298(param_1,local_60);
      FUN_140513334(local_60);
    }
  }
  bVar13 = false;
LAB_140df0757:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar13;
}



// FUNCTION 140df08e4 FUN_140df08e4 body=1043 status=ok
// SIG undefined FUN_140df08e4(void)

void FUN_140df08e4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  
  if (*(longlong *)(param_1 + 0x658) != 0) {
    iVar1 = *(int *)(param_3 + 0x128);
    *(uint *)(param_3 + 0x128) = iVar1 + 1U;
    if (*(uint *)(param_3 + 300) < iVar1 + 1U) {
      FUN_1401acddc(param_3,iVar1);
    }
    lVar14 = *(longlong *)(param_3 + 0x120);
    if (*(longlong *)(param_3 + 0x120) == 0) {
      lVar14 = param_3;
    }
    lVar11 = (longlong)iVar1 * 0x48;
    FUN_1447244c4(lVar14 + lVar11,1);
    lVar14 = *(longlong *)(param_3 + 0x120);
    if (*(longlong *)(param_3 + 0x120) == 0) {
      lVar14 = param_3;
    }
    puVar4 = (undefined1 *)(lVar14 + lVar11);
    *puVar4 = 1;
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_1 + 0x658);
    iVar1 = *(int *)(puVar4 + 0x40);
    *(uint *)(puVar4 + 0x40) = iVar1 + 1U;
    if (*(uint *)(puVar4 + 0x44) < iVar1 + 1U) {
      FUN_140df0cf8(puVar4 + 0x18,iVar1);
    }
    puVar17 = *(undefined1 **)(lVar14 + lVar11 + 0x38);
    puVar4 = puVar4 + 0x18;
    if (puVar17 != (undefined1 *)0x0) {
      puVar4 = puVar17;
    }
    *(undefined **)(puVar4 + (longlong)iVar1 * 0x10) = &DAT_14cb49b70;
    *(undefined8 *)(puVar4 + (longlong)iVar1 * 0x10 + 8) = 0;
    *(undefined8 *)(lVar14 + lVar11 + 0x10) = *param_2;
  }
  iVar1 = *(int *)(param_1 + 0x798);
  if (iVar1 == 0) {
    uVar15 = 1;
    uVar12 = 0;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x790);
    if (*(uint **)(param_1 + 0x790) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x780);
    }
    uVar16 = *puVar5;
    if (uVar16 == 0) {
      iVar13 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar13 = iVar1 + -1;
      }
      uVar12 = 0;
      uVar10 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar10 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar10 == uVar12) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar5[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar10 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar9) {
      iVar9 = iVar1;
    }
  }
  if (iVar9 != iVar1) {
    uVar16 = 0xffffffff;
    iVar3 = iVar1;
    do {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x770) + (longlong)iVar9 * 0x10);
      if (lVar14 != 0) {
        iVar9 = *(int *)(param_3 + 0x128);
        *(uint *)(param_3 + 0x128) = iVar9 + 1U;
        if (*(uint *)(param_3 + 300) < iVar9 + 1U) {
          FUN_1401acddc(param_3,iVar9);
        }
        lVar11 = *(longlong *)(param_3 + 0x120);
        if (*(longlong *)(param_3 + 0x120) == 0) {
          lVar11 = param_3;
        }
        lVar2 = (longlong)iVar9 * 0x48;
        FUN_1447244c4(lVar11 + lVar2,1);
        lVar11 = *(longlong *)(param_3 + 0x120);
        if (*(longlong *)(param_3 + 0x120) == 0) {
          lVar11 = param_3;
        }
        puVar4 = (undefined1 *)(lVar11 + lVar2);
        puVar17 = puVar4 + 0x18;
        *puVar4 = 1;
        *(longlong *)(puVar4 + 8) = lVar14;
        iVar9 = *(int *)(puVar4 + 0x40);
        *(uint *)(puVar4 + 0x40) = iVar9 + 1U;
        if (*(uint *)(puVar4 + 0x44) < iVar9 + 1U) {
          FUN_140df0cf8(puVar17,iVar9);
        }
        lVar11 = lVar11 + lVar2;
        puVar4 = *(undefined1 **)(lVar11 + 0x38);
        if (*(undefined1 **)(lVar11 + 0x38) == (undefined1 *)0x0) {
          puVar4 = puVar17;
        }
        *(undefined **)(puVar4 + (longlong)iVar9 * 0x10) = &DAT_14cb49b70;
        *(undefined8 *)(puVar4 + (longlong)iVar9 * 0x10 + 8) = 0;
        iVar9 = *(int *)(lVar11 + 0x40);
        *(uint *)(lVar11 + 0x40) = iVar9 + 1U;
        if (*(uint *)(lVar11 + 0x44) < iVar9 + 1U) {
          FUN_140df0cf8(puVar17,iVar9);
        }
        puVar4 = *(undefined1 **)(lVar11 + 0x38);
        if (*(undefined1 **)(lVar11 + 0x38) == (undefined1 *)0x0) {
          puVar4 = puVar17;
        }
        *(undefined **)(puVar4 + (longlong)iVar9 * 0x10) = &DAT_14cb49c50;
        *(undefined8 *)(puVar4 + (longlong)iVar9 * 0x10 + 8) = 0;
        iVar9 = *(int *)(lVar11 + 0x40);
        *(uint *)(lVar11 + 0x40) = iVar9 + 1U;
        if (*(uint *)(lVar11 + 0x44) < iVar9 + 1U) {
          FUN_140df0cf8(puVar17,iVar9);
        }
        if (*(undefined1 **)(lVar11 + 0x38) != (undefined1 *)0x0) {
          puVar17 = *(undefined1 **)(lVar11 + 0x38);
        }
        *(undefined **)(puVar17 + (longlong)iVar9 * 0x10) = &DAT_14cb49d30;
        *(undefined8 *)(puVar17 + (longlong)iVar9 * 0x10 + 8) = 0;
        *(undefined8 *)(lVar11 + 0x10) = *param_2;
        iVar3 = *(int *)(param_1 + 0x798);
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar5 = *(uint **)(param_1 + 0x790);
      if (*(uint **)(param_1 + 0x790) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x780);
      }
      iVar9 = (int)uVar12;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar5[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar9 < iVar7) {
          lVar11 = 0;
          do {
            uVar6 = puVar5[lVar14 + lVar11 + 1];
            if (uVar6 != 0) {
              uVar12 = (ulonglong)(iVar9 + (int)lVar11 + 1);
              uVar16 = 0xffffffff;
              goto LAB_140df0b10;
            }
            iVar13 = iVar13 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar8 - lVar14 != lVar11);
          uVar16 = 0xffffffff;
          iVar9 = iVar8;
        }
        uVar12 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar3;
      }
      else {
LAB_140df0b10:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar10 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar9) {
          iVar9 = iVar3;
        }
      }
    } while (iVar9 != iVar1);
  }
  return;
}



// FUNCTION 140df0cf8 FUN_140df0cf8 body=273 status=ok
// SIG undefined FUN_140df0cf8(void)

void FUN_140df0cf8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 3) {
      uVar4 = 2;
    }
    else {
      if (*(uint *)(param_1 + 0x2c) < 3) {
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
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar4 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_140047b96(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140df0e0a FUN_140df0e0a body=40 status=ok
// SIG undefined FUN_140df0e0a(void)

undefined8 FUN_140df0e0a(undefined8 param_1,int param_2)

{
  FUN_140df0e32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140df0e32 FUN_140df0e32 body=172 status=ok
// SIG undefined FUN_140df0e32(void)

void FUN_140df0e32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b322ee0;
  FUN_1403e0ff1(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3b] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (*(int *)((longlong)param_1 + 500) != 0) {
    FUN_140115c12(param_1 + 0x3d,0);
  }
  param_1[0x3c] = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  return;
}



// FUNCTION 140df0ede FUN_140df0ede body=311 status=ok
// SIG undefined FUN_140df0ede(void)

undefined8 FUN_140df0ede(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140df100e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140df100e;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_140df100e:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140df0fb7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140df0fb7;
    }
  }
  uVar6 = 0;
LAB_140df0fb7:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df1016 FUN_140df1016 body=950 status=ok
// SIG undefined FUN_140df1016(void)

void FUN_140df1016(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  undefined1 local_c0 [16];
  double local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  
  plVar1 = DAT_14c98e618;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x15a) != '\0') goto LAB_140df1358;
  if ((int)DAT_14c98e618[99] < 1) {
    lVar7 = 0;
LAB_140df10a3:
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar7 = *(longlong *)DAT_14c98e618[0x62];
    plVar6 = (longlong *)((longlong *)DAT_14c98e618[0x62])[1];
    if (plVar6 == (longlong *)0x0) goto LAB_140df10a3;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  lVar5 = FUN_141169abc(param_1);
  if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x148) != 0)) {
    if (lVar7 != 0) {
      cVar4 = FUN_1408025c4(lVar7,10);
      if ((cVar4 == '\0') && (*(char *)(param_1 + 0x159) == '\0')) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        if (local_b0 != 0.0) {
          if ((*(byte *)((longlong)local_b0 + 0x369) & 2) == 0) {
            fVar12 = *(float *)((longlong)local_b0 + 0x380);
            fVar9 = *(float *)((longlong)local_b0 + 900);
            fVar8 = *(float *)((longlong)local_b0 + 0x394) + fVar9;
            fVar11 = *(float *)((longlong)local_b0 + 0x390) + fVar12;
          }
          else {
            fVar11 = *(float *)((longlong)local_b0 + 0x390);
            fVar8 = *(float *)((longlong)local_b0 + 0x394);
            fVar12 = 0.0;
            fVar9 = 0.0;
          }
          fVar9 = (fVar8 - fVar9) * 0.5 + fVar9;
          fVar12 = (fVar11 - fVar12) * 0.5 + fVar12;
          FUN_141653418(lVar7,10,(int)fVar12,(int)fVar9);
          *(undefined1 *)(param_1 + 0x159) = 1;
          local_c8 = (double)fVar9;
          local_d0 = (double)fVar12;
          FUN_1418eaa16(lVar5,local_c0);
          FUN_144190306(lVar5,local_c0);
        }
        plVar1 = local_a8;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_a8)(local_a8);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
    }
    if ((param_4 == 0) &&
       (1e-08 < ABS(SQRT(*(float *)(param_3 + 0x30) * *(float *)(param_3 + 0x30) +
                         *(float *)(param_3 + 0x34) * *(float *)(param_3 + 0x34))))) {
      if (*(char *)(lVar5 + 0x808) == '\x01') {
        FUN_148e25bae(param_1);
      }
      else {
        fVar12 = (float)FUN_140e35aec(param_1);
        fVar8 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                      *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20));
        fVar10 = *(float *)(param_2 + 0x1c) * fVar8;
        fVar11 = -*(float *)(param_2 + 0x24) * fVar8;
        fVar9 = -*(float *)(param_2 + 0x20) * fVar8;
        fVar8 = fVar8 * *(float *)(param_2 + 0x28);
        local_a8 = (longlong *)
                   (double)((fVar9 * *(float *)(param_3 + 0x20) +
                             fVar10 * *(float *)(param_3 + 0x24) +
                            (-*(float *)(param_2 + 0x2c) * fVar9 -
                            fVar10 * *(float *)(param_2 + 0x30))) * fVar12);
        local_b0 = (double)((fVar8 * *(float *)(param_3 + 0x20) +
                             fVar11 * *(float *)(param_3 + 0x24) +
                            (-*(float *)(param_2 + 0x2c) * fVar8 -
                            *(float *)(param_2 + 0x30) * fVar11)) * fVar12);
        FUN_1418eaa16(lVar5,local_c0);
        FUN_144190306(lVar5,local_c0);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_140df1358:
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df13ce FUN_140df13ce body=73 status=ok
// SIG undefined FUN_140df13ce(void)

undefined8 * FUN_140df13ce(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_14035606c(param_1 + 0x1e0);
  if (lVar1 == 0) {
    *param_2 = 0x3f800000;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
    (**(code **)(*plVar2 + 0x98))(plVar2,param_2);
  }
  return param_2;
}



// FUNCTION 140df1426 FUN_140df1426 body=40 status=ok
// SIG undefined FUN_140df1426(void)

undefined8 FUN_140df1426(undefined8 param_1,int param_2)

{
  FUN_140df144e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140df144e FUN_140df144e body=127 status=ok
// SIG undefined FUN_140df144e(void)

void FUN_140df144e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4a6a30;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140df14dc FUN_140df14dc body=31 status=ok
// SIG undefined FUN_140df14dc(void)

undefined8 FUN_140df14dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140df14fb FUN_140df14fb body=63 status=ok
// SIG undefined FUN_140df14fb(void)

void FUN_140df14fb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140df153a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7f30c0;
  puVar1[0x94] = &PTR_FUN_14b7f3720;
  puVar1[0x95] = &PTR_FUN_14b7f37c0;
  return;
}



// FUNCTION 140df153a FUN_140df153a body=297 status=ok
// SIG undefined FUN_140df153a(void)

undefined8 * FUN_140df153a(undefined8 *param_1)

{
  FUN_140df1664();
  *param_1 = &PTR_FUN_14b16b6e0;
  param_1[0x94] = &PTR_FUN_14b16bd40;
  param_1[0x95] = &PTR_FUN_14b16bde0;
  param_1[0x96] = 0;
  param_1[0x97] = &DAT_14a171d50;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x98] = &DAT_14cb70058;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 2;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x534) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined8 *)((longlong)param_1 + 0x551) = 0;
  *(undefined8 *)((longlong)param_1 + 0x559) = 0;
  *(undefined4 *)((longlong)param_1 + 0x52b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0xaf) = 2;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5a1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  param_1[0xbe] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x5f9) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  return param_1;
}



// FUNCTION 140df1664 FUN_140df1664 body=749 status=ok
// SIG undefined FUN_140df1664(void)

undefined8 * FUN_140df1664(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab517e0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0x200000000;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x401) = 0;
  *(undefined1 *)((longlong)param_1 + 0x409) = 1;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0x45fa0000;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x457a0000;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined2 *)(param_1 + 0x86) = 2;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0x44610000;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x447a0000;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  FUN_1405bab3a(param_1,1);
  FUN_1405e47c6(param_1,0);
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfb;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
    if (param_1[0x7f] == 0) {
      plVar3 = param_1 + 0x7d;
      param_1[0x80] = &DAT_14cb1af88;
      param_1[0x7f] = param_1;
      lVar1 = DAT_14cb1af88;
      while( true ) {
        param_1[0x7d] = lVar1;
        LOCK();
        lVar2 = *(longlong *)param_1[0x80];
        bVar4 = lVar1 == lVar2;
        if (bVar4) {
          *(longlong *)param_1[0x80] = (longlong)plVar3;
          lVar2 = lVar1;
        }
        UNLOCK();
        if (bVar4) break;
        param_1[0x7d] = lVar2;
        lVar1 = *(longlong *)param_1[0x80];
      }
      if (*plVar3 != 0) {
        *(longlong **)(*plVar3 + 8) = plVar3;
      }
    }
    FUN_14472eae2(param_1,1);
  }
  FUN_1446f470e(&local_28,L"RootComponent",1);
  if (DAT_14cac7648 == 0) {
    local_40 = &local_20;
    local_20 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_143242436;
    local_48 = &LAB_14789ef1f;
    local_50 = &LAB_1417b008f;
    local_58 = L"Engine";
    local_60 = 0x8000000000;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = CONCAT31(local_78._1_3_,1);
  plVar3 = (longlong *)FUN_14048696c(param_1,local_28,DAT_14cac7648,DAT_14cac7648);
  if ((plVar3 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_140df185d;
  }
  else {
    FUN_1456cec3c(plVar3);
    param_1[0x39] = plVar3;
  }
  (**(code **)(*plVar3 + 0x588))(plVar3,0);
LAB_140df185d:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140df1974 FUN_140df1974 body=203 status=ok
// SIG undefined FUN_140df1974(void)

undefined8 * FUN_140df1974(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14b4578c0;
  if (param_1[0x13] != 0) {
    LOCK();
    *(int *)(param_1[0x14] + 8) = *(int *)(param_1[0x14] + 8) + -1;
    UNLOCK();
    plVar2 = param_1 + 0x11;
    puVar4 = (undefined8 *)param_1[0x14];
    if (param_1[0x11] == 0) {
      uVar6 = 0;
      puVar7 = puVar4;
    }
    else {
      *(undefined8 *)(param_1[0x11] + 8) = 0;
      uVar6 = param_1[0x11];
      puVar7 = (undefined8 *)param_1[0x14];
    }
    LOCK();
    plVar3 = (longlong *)*puVar7;
    if (plVar2 == plVar3) {
      *puVar7 = uVar6;
    }
    UNLOCK();
    if (plVar2 != plVar3) {
      while ((longlong *)param_1[0x12] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar5 = *plVar2;
      *(longlong *)param_1[0x12] = lVar5;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 8) = param_1[0x12];
      }
    }
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *plVar2 = 0;
    param_1[0x12] = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_140df1a40(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140df1a40 FUN_140df1a40 body=76 status=ok
// SIG undefined FUN_140df1a40(void)

void FUN_140df1a40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acd2330;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140df1a8c FUN_140df1a8c body=208 status=ok
// SIG undefined FUN_140df1a8c(void)

longlong FUN_140df1a8c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0xe0;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xe0) == *param_3) {
          if (lVar2 != 0) goto LAB_140df1ae7;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0xd0);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140df1b5e(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0xe0 + *param_1;
LAB_140df1ae7:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 0x10;
}



// FUNCTION 140df1b5e FUN_140df1b5e body=302 status=ok
// SIG undefined FUN_140df1b5e(void)

undefined4 *
FUN_140df1b5e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140df1f3c(param_1,local_58);
  FUN_140df1d3c(param_4,local_50);
  *(undefined4 *)(local_50 + 0xd0) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140df1c8e(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 0xd4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0xd0) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140df222e(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df1c8e FUN_140df1c8e body=174 status=ok
// SIG undefined FUN_140df1c8e(void)

void FUN_140df1c8e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0xe0);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0xe0) == *param_3) {
          memmove(_Dst,param_3,0xd0);
          FUN_140cba31e(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)_Dst + 0xd0);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140df1cb8;
    }
  }
  uVar1 = 0;
LAB_140df1cb8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140df1d3c FUN_140df1d3c body=197 status=ok
// SIG undefined FUN_140df1d3c(void)

undefined4 * FUN_140df1d3c(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_68 = 0;
  local_60 = 0x100;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_140df1e02(param_2 + 4,&local_e8);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df1e02 FUN_140df1e02 body=313 status=ok
// SIG undefined FUN_140df1e02(void)

longlong * FUN_140df1e02(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar7 = &DAT_14c846480;
  plVar8 = param_1 + 4;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar8 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar8 = plVar8 + 1;
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  lVar6 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *param_2;
    }
  }
  bVar5 = DAT_14c950c29;
  *param_1 = lVar6;
  lVar6 = param_2[1];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[1];
    }
  }
  param_1[1] = lVar6;
  param_1[2] = param_2[2];
  plVar7 = param_2 + 4;
  plVar8 = param_1 + 4;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar8 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar8 = plVar8 + 1;
  }
  param_1[0x10] = param_2[0x10];
  lVar6 = param_2[0x11];
  lVar1 = param_2[0x12];
  lVar2 = param_2[0x13];
  lVar3 = param_2[0x14];
  uVar4 = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined8 *)((longlong)param_1 + 0xa4) = *(undefined8 *)((longlong)param_2 + 0xa4);
  *(undefined8 *)((longlong)param_1 + 0xac) = uVar4;
  param_1[0x13] = lVar2;
  param_1[0x14] = lVar3;
  param_1[0x11] = lVar6;
  param_1[0x12] = lVar1;
  return param_1;
}



// FUNCTION 140df1f3c FUN_140df1f3c body=481 status=ok
// SIG undefined FUN_140df1f3c(void)

int * FUN_140df1f3c(longlong *param_1,int *param_2)

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
      FUN_140df211e(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0xe0);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0xe0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0xe0 + *param_1;
  return param_2;
}



// FUNCTION 140df211e FUN_140df211e body=271 status=ok
// SIG undefined FUN_140df211e(void)

void FUN_140df211e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
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
    uVar5 = lVar4 * 0xe0;
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
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0xe0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140df222e FUN_140df222e body=646 status=ok
// SIG undefined FUN_140df222e(void)

void FUN_140df222e(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140df2291;
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
LAB_140df2291:
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
      lVar13 = (longlong)iVar12 * 0xe0;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xd4 + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0xd0 + lVar13) =
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



// FUNCTION 140df24ba FUN_140df24ba body=228 status=ok
// SIG undefined FUN_140df24ba(void)

longlong FUN_140df24ba(void)

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
  if (DAT_14cb68e78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14874b45a;
    local_40 = &LAB_140f0db45;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x520;
    FUN_14081cfa3(L"/Script/GbxGame",L"GoreLimb",&DAT_14cb68e78,FUN_14651e74e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68e78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df25a0 FUN_140df25a0 body=941 status=ok
// SIG undefined FUN_140df25a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140df25a0(longlong *param_1,float param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined8 local_168 [12];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_108._0_4_ = param_2;
    uVar8 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar8,local_108);
    lVar9 = FUN_1447210f0(param_1);
    if (lVar9 != 0) {
      uVar8 = FUN_14119d0a4(lVar9);
      FUN_140e65914(uVar8,param_1);
    }
  }
  if (((int)param_1[0x76] != 0) && ((longlong *)param_1[0x75] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0x75] + 0x60))();
  }
  if (((param_1[0x78] != 0) && (*(char *)((longlong)param_1 + 0x524) == '\0')) &&
     (lVar9 = param_1[0xa6], lVar9 != 0)) {
    param_2 = param_2 + *(float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0xa4) = param_2;
    fVar12 = *(float *)(lVar9 + 0x60);
    fVar14 = fVar12;
    if (fVar12 <= param_2) {
      *(float *)(param_1 + 0xa4) = fVar12;
      *(undefined1 *)((longlong)param_1 + 0x524) = 1;
      fVar14 = *(float *)(lVar9 + 0x60);
      param_2 = fVar12;
    }
    param_2 = param_2 / fVar14;
    if (0.5 <= param_2) {
      fVar12 = powf(1.0 - (param_2 + param_2 + -1.0),*(float *)(lVar9 + 100));
      fVar12 = (1.0 - fVar12) * 0.5 + 0.5;
    }
    else {
      fVar12 = powf(param_2 + param_2,*(float *)(lVar9 + 100));
      fVar12 = (fVar12 + 0.0) * 0.5;
    }
    dVar6 = (double)param_1[0x9a];
    dVar7 = (double)param_1[0x8c];
    dVar2 = (double)param_1[0x8e];
    dVar3 = (double)param_1[0x9c];
    dVar16 = (double)(fVar12 + 0.0);
    dVar15 = ((double)param_1[0x9b] - (double)param_1[0x8d]) * dVar16 + (double)param_1[0x8d];
    local_88 = param_1[0x96];
    lStack_80 = param_1[0x97];
    local_78 = param_1[0x98];
    lStack_70 = param_1[0x99];
    local_a8 = param_1[0x88];
    lStack_a0 = param_1[0x89];
    local_98 = param_1[0x8a];
    lStack_90 = param_1[0x8b];
    FUN_144a44da6(local_108);
    dVar17 = (double)local_f8._0_8_ * (double)local_f8._0_8_ +
             (double)local_108._0_8_ * (double)local_108._0_8_;
    dVar20 = (double)local_f8._8_8_ * (double)local_f8._8_8_ +
             (double)local_108._8_8_ * (double)local_108._8_8_;
    auVar18._0_8_ = dVar17 + dVar20;
    auVar18._8_8_ = dVar17 + dVar20;
    auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
    auVar19 = sqrtpd(auVar18,auVar18);
    auVar19 = divpd(_DAT_149934d80,auVar19);
    auVar21._0_8_ = auVar19._0_8_ * (double)local_f8._0_8_;
    auVar21._8_8_ = auVar19._8_8_ * (double)local_f8._8_8_;
    uVar5 = (ulonglong)((double)local_108._8_8_ * auVar19._8_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
    local_f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar21,auVar13);
    fVar14 = *(float *)(param_1 + 0x94);
    fVar1 = *(float *)(param_1 + 0xa2);
    local_108._8_4_ = (int)uVar5;
    local_108._0_8_ =
         (ulonglong)((double)local_108._0_8_ * auVar19._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
    local_108._12_4_ = (int)(uVar5 >> 0x20);
    local_e8._8_4_ = SUB84(dVar15,0);
    local_e8._0_8_ = (dVar6 - dVar7) * dVar16 + dVar7;
    local_e8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    uStack_c0 = (undefined4)DAT_14c846518;
    uStack_bc = (undefined4)((ulonglong)DAT_14c846518 >> 0x20);
    uStack_d0 = 0;
    local_c8 = (undefined4)DAT_14c846510;
    uStack_c4 = DAT_14c846510._4_4_;
    local_b8 = DAT_14c846520;
    uStack_b0 = 0;
    local_178 = 0;
    local_d8 = (dVar3 - dVar2) * dVar16 + dVar2;
    FUN_1413d4c10(param_1,local_108,0,0);
    *(float *)(param_1[0x78] + 0x38c) = (fVar1 - fVar14) * (fVar12 + 0.0) + fVar14;
  }
  plVar4 = (longlong *)param_1[0x81];
  if (plVar4 != (longlong *)0x0) {
    puVar10 = &DAT_14c846480;
    if (param_1[0x39] != 0) {
      puVar10 = (undefined8 *)(param_1[0x39] + 0x240);
    }
    puVar11 = local_168;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    (**(code **)(*plVar4 + 0x50))(plVar4);
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140df2970 FUN_140df2970 body=58 status=ok
// SIG undefined FUN_140df2970(void)

void FUN_140df2970(longlong *param_1,int param_2)

{
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    param_2 = param_2 + (int)param_1[0xc];
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (*(int *)((longlong)param_1 + 100) < param_2) {
      FUN_140df29ac(param_1 + 9);
      return;
    }
  }
  return;
}



// FUNCTION 140df29ac FUN_140df29ac body=211 status=ok
// SIG undefined FUN_140df29ac(void)

void FUN_140df29ac(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (1 < param_2) {
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
    uVar1 = (uint)(uVar2 >> 4);
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar4 = uVar1;
    }
  }
  if (uVar4 != *(uint *)(param_1 + 0x1c)) {
    *(uint *)(param_1 + 0x1c) = uVar4;
    FUN_1404dd288(param_1,*(undefined4 *)(param_1 + 0x18),uVar4,0x10);
    return;
  }
  return;
}



// FUNCTION 140df2a80 FUN_140df2a80 body=219 status=ok
// SIG undefined FUN_140df2a80(void)

longlong * FUN_140df2a80(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0xd0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aba46f0;
  plVar1 = plVar3 + 2;
  FUN_140df2bfe(plVar1,param_2,param_3);
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_140df2b5c(&local_40,plVar1);
  plVar1 = local_38;
  *param_1 = (longlong)local_40;
  param_1[1] = (longlong)local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df2b5c FUN_140df2b5c body=162 status=ok
// SIG undefined FUN_140df2b5c(void)

void FUN_140df2b5c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140df2b9b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140df2b9b;
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
LAB_140df2b9b:
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
                    /* WARNING: Could not recover jumptable at 0x000140df2bfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140df2bfe FUN_140df2bfe body=272 status=ok
// SIG undefined FUN_140df2bfe(void)

undefined8 * FUN_140df2bfe(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ab9f0f0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14aba0f40;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xd) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x6c) = iVar2;
  param_1[0xe] = 0;
  param_1[0xe] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  FUN_144b469b0((longlong)param_1 + 0x84);
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  return param_1;
}



// FUNCTION 140df2d0e FUN_140df2d0e body=1412 status=ok
// SIG undefined FUN_140df2d0e(void)

longlong * FUN_140df2d0e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  float *pfVar5;
  code *pcVar6;
  float *pfVar7;
  undefined8 ****ppppuVar8;
  float fVar9;
  undefined1 auStack_1c8 [44];
  int local_19c;
  float local_198;
  undefined4 uStack_194;
  ushort local_180;
  byte local_178;
  undefined8 ***local_170;
  undefined1 local_168 [16];
  ushort local_158;
  byte local_150;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_a8;
  undefined4 local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  FUN_1448729ea(param_1 + 8,&local_170);
  if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(param_2), 0x18 < *(ushort *)(param_2 + 3))
     ) {
    FUN_1400020a8(*param_2);
  }
  *(ushort *)(param_2 + 3) = local_158;
  if (local_158 < 0x19) {
    uVar4 = (ulonglong)((uint)local_150 * 0x120);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85b8 + uVar4);
    if ((pcVar6 == (code *)0x0) &&
       (pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4), pcVar6 == (code *)0x0)) {
      memcpy(param_2,&local_170,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar6)(param_2,&local_170);
    }
  }
  else {
    *param_2 = (longlong)local_170;
    local_170 = (undefined8 ****)0x0;
    local_158 = 0;
  }
  *(byte *)(param_2 + 4) = local_150;
  local_150 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar8 = &local_170;
    if (0x18 < local_158) {
      ppppuVar8 = (undefined8 ****)local_170;
    }
    (*DAT_14c9a85d0)(ppppuVar8);
  }
  if (0x18 < local_158) {
    FUN_1400020a8(local_170);
  }
  if (0 < *(int *)(param_1 + 0xb0)) {
    local_170 = (undefined8 ***)((ulonglong)local_170 & 0xffffff0000000000);
    local_e8 = 0;
    local_e0 = 0x800000000;
    local_d0 = 0;
    local_c8 = 0;
    uStack_c4 = 0x20;
    uStack_c0 = 0xffffffff;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_140df3458(local_168,*(int *)(param_1 + 0xb0) + 1);
    pfVar5 = &local_198;
    FUN_1448729ea(param_1 + 0x58,pfVar5,param_3);
    if (local_178 == 3) {
      uVar3 = 3;
      fVar9 = local_198;
    }
    else {
      pfVar7 = &local_98;
      FUN_1400b56fe(pfVar7,&local_198,3);
      fVar9 = 0.0;
      if (local_78 != 0) {
        fVar9 = local_98;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < local_80) {
          pfVar7 = (float *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar6)(pfVar7);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
      }
      uVar3 = (uint)local_178;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_180) {
        pfVar5 = (float *)CONCAT44(uStack_194,local_198);
      }
      (*pcVar6)(pfVar5);
    }
    if (0x18 < local_180) {
      FUN_1400020a8(CONCAT44(uStack_194,local_198));
    }
    if (0.0 < fVar9) {
      local_98 = -NAN;
      FUN_140df34dc(&local_170,fVar9);
    }
    local_19c = 0;
    if (0 < *(int *)(param_1 + 0xb0)) {
      do {
        FUN_1448729ea((longlong)local_19c * 0xa0 + *(longlong *)(param_1 + 0xa8),&local_198,param_3)
        ;
        if (local_178 == 3) {
          fVar9 = local_198;
          bVar1 = 3;
        }
        else {
          FUN_1400b56fe(&local_98,&local_198,3);
          fVar9 = 0.0;
          if (local_78 != 0) {
            fVar9 = local_98;
          }
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
          if (pcVar6 != (code *)0x0) {
            pfVar5 = &local_98;
            if (0x18 < local_80) {
              pfVar5 = (float *)CONCAT44(uStack_94,local_98);
            }
            (*pcVar6)(pfVar5);
          }
          bVar1 = local_178;
          if (0x18 < local_80) {
            FUN_1400020a8(CONCAT44(uStack_94,local_98));
            bVar1 = local_178;
          }
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pfVar5 = &local_198;
          if (0x18 < local_180) {
            pfVar5 = (float *)CONCAT44(uStack_194,local_198);
          }
          (*pcVar6)(pfVar5);
        }
        if (0x18 < local_180) {
          FUN_1400020a8(CONCAT44(uStack_194,local_198));
        }
        if (0.0 < fVar9) {
          FUN_140df34dc(&local_170,fVar9,&local_19c);
        }
        local_19c = local_19c + 1;
      } while (local_19c < *(int *)(param_1 + 0xb0));
    }
    local_198 = -NAN;
    cVar2 = FUN_140df3cba(&local_170,&local_198,0xbf800000);
    if (((cVar2 != '\0') && (-1 < (longlong)(int)local_198)) &&
       ((int)local_198 < *(int *)(param_1 + 0xb0))) {
      pfVar5 = &local_98;
      FUN_1448729ea(*(longlong *)(param_1 + 0xa8) + (longlong)(int)local_198 * 0xa0 + 0x50,pfVar5,
                    param_3);
      FUN_140df3eb8(param_2,pfVar5);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < local_80) {
          pfVar5 = (float *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar6)(pfVar5);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
      }
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140df3294(local_168);
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140df3294 FUN_140df3294 body=62 status=ok
// SIG undefined FUN_140df3294(void)

void FUN_140df3294(longlong param_1)

{
  FUN_140df32d2(param_1,0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140df32d2 FUN_140df32d2 body=137 status=ok
// SIG undefined FUN_140df32d2(void)

void FUN_140df32d2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != param_2) {
    FUN_140df335c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0xa4)) && (*(int *)(param_1 + 0xa4) < 0x21)) {
    return;
  }
  uVar1 = 0x20;
  if (0x20 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0xa4) = uVar1;
  FUN_14008f53c(param_1 + 0x90,0);
  return;
}



// FUNCTION 140df335c FUN_140df335c body=110 status=ok
// SIG undefined FUN_140df335c(void)

void FUN_140df335c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 8, 8 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = (int)uVar2;
    FUN_140df33ca(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 140df33ca FUN_140df33ca body=141 status=ok
// SIG undefined FUN_140df33ca(void)

void FUN_140df33ca(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 140df3458 FUN_140df3458 body=131 status=ok
// SIG undefined FUN_140df3458(void)

void FUN_140df3458(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)
          ((((uint)(param_2 >> 1) & 0x7fffffff) - 1) + (uint)((param_2 >> 1 & 0x7fffffff) == 0)) * 2
          + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 2) {
    iVar3 = 4;
  }
  if ((uint)param_2 < 4) {
    iVar3 = 4;
  }
  if ((((int)(uint)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 200))) &&
     (*(int *)(param_1 + 200) <= iVar3)) {
    FUN_1470e327e(param_1);
    FUN_140df32d2(param_1,param_2 & 0xffffffff);
    return;
  }
  FUN_140df32d2(param_1,param_2 & 0xffffffff);
  *(int *)(param_1 + 200) = iVar3;
  FUN_140df3a8c(param_1);
  return;
}



// FUNCTION 140df34dc FUN_140df34dc body=287 status=ok
// SIG undefined FUN_140df34dc(void)

undefined8 FUN_140df34dc(float *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auStack_58 [44];
  float local_2c;
  float *local_28;
  float *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if ((1e-08 < param_2) || (*(char *)(param_1 + 1) == '\x01')) {
    if (param_1[0x24] != param_1[0x2d]) {
      pfVar3 = param_1 + 0x2e;
      if (*(float **)(param_1 + 0x32) != (float *)0x0) {
        pfVar3 = *(float **)(param_1 + 0x32);
      }
      fVar4 = pfVar3[(int)param_1[0x34] - 1U & (uint)*param_3];
      if (fVar4 != -NAN) {
        do {
          pfVar3 = *(float **)(param_1 + 0x22);
          if (*(float **)(param_1 + 0x22) == (float *)0x0) {
            pfVar3 = param_1 + 2;
          }
          pfVar1 = pfVar3 + (longlong)(int)fVar4 * 4;
          if (pfVar3[(longlong)(int)fVar4 * 4] == *param_3) {
            if (pfVar1 + 1 != (float *)0x0 && pfVar1 != (float *)0x0) {
              fVar4 = *param_1 - pfVar1[1];
              goto LAB_140df3548;
            }
            break;
          }
          fVar4 = pfVar1[2];
        } while (fVar4 != -NAN);
      }
    }
    fVar4 = *param_1;
LAB_140df3548:
    *param_1 = fVar4 + param_2;
    local_20 = &local_2c;
    local_28 = param_3;
    FUN_140df35fc(param_1 + 2,local_14,&local_28,0);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140df35fc FUN_140df35fc body=292 status=ok
// SIG undefined FUN_140df35fc(void)

undefined4 *
FUN_140df35fc(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140df384a(param_1,local_50);
  piVar1 = (int *)param_3[1];
  iVar4 = *(int *)*param_3;
  *local_48 = iVar4;
  local_48[1] = *piVar1;
  local_48[2] = -1;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar3 = FUN_140df3794(param_1,iVar4,local_48);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    cVar3 = FUN_140df3722(param_1,*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xac),0);
    if (cVar3 == '\0') {
      uVar5 = (longlong)*(int *)(param_1 + 200) - 1U & (longlong)iVar4;
      iVar4 = (int)uVar5;
      local_48[3] = iVar4;
      lVar6 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar6 = param_1 + 0xb0;
      }
      local_48[2] = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 200) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar6 = param_1 + 0xb0;
      }
      *(undefined4 *)(lVar6 + ((longlong)iVar4 & (longlong)*(int *)(param_1 + 200) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df3722 FUN_140df3722 body=114 status=ok
// SIG undefined FUN_140df3722(void)

undefined8 FUN_140df3722(longlong param_1,uint param_2,char param_3)

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
  if ((uint)lVar2 < 2) {
    iVar4 = 4;
  }
  if (param_2 < 4) {
    iVar4 = 4;
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 200))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 200) <= iVar4)))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 200) = iVar4;
    FUN_140df3a8c(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140df3794 FUN_140df3794 body=181 status=ok
// SIG undefined FUN_140df3794(void)

void FUN_140df3794(longlong param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xac) != 1) &&
     (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xac))) {
    lVar3 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xc0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 200) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar3 = param_1;
        }
        puVar1 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        if (*(int *)(lVar3 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1470e3466(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(puVar1 + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140df37ee;
    }
  }
  uVar2 = 0;
LAB_140df37ee:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140df384a FUN_140df384a body=578 status=ok
// SIG undefined FUN_140df384a(void)

int * FUN_140df384a(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  if (*(int *)(param_1 + 0xac) == 0) {
    iVar9 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar9 + 1;
    if (*(int *)(param_1 + 0x8c) == iVar9) {
      FUN_1470e33e8(param_1,iVar9);
    }
    iVar11 = *(int *)(param_1 + 0xa0);
    if (iVar11 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar2 = iVar11 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    lVar8 = param_1 + 0x90;
    iVar7 = iVar11 + 1;
    iVar10 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar10 = iVar11;
    }
    if (iVar10 >> 5 == iVar2) {
      *(int *)(param_1 + 0xa0) = iVar7;
    }
    else {
      if (*(int *)(param_1 + 0xa4) <= iVar11) {
        if (iVar11 + 0x20U < 0x40) {
          iVar7 = 0x20;
          iVar2 = iVar11;
        }
        else {
          uVar12 = iVar11 + 0x20U >> 5;
          if (*(int *)(param_1 + 0xa4) + 0x1fU < 0x40) {
            uVar6 = 4;
            if (4 < uVar12) {
              uVar6 = uVar12;
            }
          }
          else {
            uVar6 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar6 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar7 = -0x20;
          if ((int)uVar12 <= iVar2) {
            iVar7 = iVar2 << 5;
          }
          iVar2 = *(int *)(param_1 + 0xa0);
        }
        *(int *)(param_1 + 0xa4) = iVar7;
        FUN_14008f53c(lVar8,iVar2);
        iVar7 = *(int *)(param_1 + 0xa0) + 1;
      }
      iVar2 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
      *(int *)(param_1 + 0xa0) = iVar7;
      if (iVar7 % 0x20 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x98);
        if (*(longlong *)(param_1 + 0x98) == 0) {
          lVar3 = lVar8;
        }
        bVar5 = -(char)(iVar7 % 0x20);
        *(uint *)(lVar3 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar3 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar9;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x98);
    }
    bVar5 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)(lVar8 + (longlong)(iVar10 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar8 = param_1;
    }
    iVar9 = *(int *)(param_1 + 0xa8);
    lVar3 = (longlong)iVar9;
    iVar11 = *(int *)(lVar8 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 0xa8) = iVar11;
    iVar2 = *(int *)(param_1 + 0xac) + -1;
    *(int *)(param_1 + 0xac) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar8 + (longlong)iVar11 * 0x10) = 0xffffffff;
    }
  }
  lVar8 = param_1 + 0x90;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x98);
  }
  iVar11 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar11 = iVar9;
  }
  puVar1 = (uint *)(lVar8 + (longlong)(iVar11 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  *param_2 = iVar9;
  lVar8 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar8 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + lVar8;
  return param_2;
}



// FUNCTION 140df3a8c FUN_140df3a8c body=556 status=ok
// SIG undefined FUN_140df3a8c(void)

void FUN_140df3a8c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
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
  plVar1 = (longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1446efa72(plVar1,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 200);
  uVar4 = local_58;
  if (uVar3 == 0) goto LAB_140df3b93;
  lVar2 = param_1 + 0xb0;
  if (uVar3 < 5) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
LAB_140df3ae4:
    uVar5 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar8 = lVar2;
      }
      *(undefined4 *)(lVar8 + (ulonglong)(*(int *)(param_1 + 200) + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  else {
    FUN_1446efa72(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) goto LAB_140df3ae4;
  }
  local_40 = param_1 + 0x90;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  local_30 = 0;
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_144a81a4c(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  uVar4 = local_58;
  local_50 = local_30;
  local_4c = local_2c;
  local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
  local_70 = param_1;
  if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
    iVar6 = local_58._4_4_;
    local_58 = uVar4;
    do {
      lVar8 = *(longlong *)(local_70 + 0x80);
      if (*(longlong *)(local_70 + 0x80) == 0) {
        lVar8 = local_70;
      }
      lVar7 = (longlong)iVar6 * 0x10;
      uVar11 = (longlong)*(int *)(param_1 + 200) - 1U & (longlong)*(int *)(lVar8 + lVar7);
      iVar10 = (int)uVar11;
      *(int *)(lVar8 + 0xc + lVar7) = iVar10;
      lVar9 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar9 = lVar2;
      }
      *(undefined4 *)(lVar8 + 8 + lVar7) =
           *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 200) - 1U & uVar11) * 4);
      lVar8 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar8 = lVar2;
      }
      *(int *)(lVar8 + ((longlong)iVar10 & (longlong)*(int *)(param_1 + 200) - 1U) * 4) = iVar6;
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
      FUN_144a81a4c(&local_68);
      iVar6 = local_58._4_4_;
      uVar4 = local_58;
    } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
  }
LAB_140df3b93:
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140df3cba FUN_140df3cba body=510 status=ok
// SIG undefined FUN_140df3cba(void)

undefined8 FUN_140df3cba(float *param_1,float *param_2,float param_3)

{
  ulonglong uVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float *pfVar14;
  longlong lVar15;
  float fVar16;
  
  if (param_3 < 0.0) {
    uVar4 = rand();
    param_3 = (float)(uVar4 & 0x7fff) / 32767.0;
  }
  fVar2 = param_1[0x2a];
  if (fVar2 == 0.0) {
    uVar12 = 1;
    uVar9 = 0;
    fVar13 = 0.0;
    iVar10 = 0;
  }
  else {
    pfVar7 = *(float **)(param_1 + 0x28);
    if (*(float **)(param_1 + 0x28) == (float *)0x0) {
      pfVar7 = param_1 + 0x26;
    }
    fVar13 = *pfVar7;
    if (fVar13 == 0.0) {
      iVar10 = (int)fVar2 + 0x1e;
      if (-1 < (int)fVar2 + -1) {
        iVar10 = (int)fVar2 + -1;
      }
      uVar9 = 0;
      uVar12 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar12 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar9) {
          return 0;
        }
        iVar10 = iVar10 + 0x20;
        fVar13 = pfVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (fVar13 == 0.0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-(int)fVar13 & (uint)fVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    fVar13 = (float)((iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e);
    if ((int)fVar2 <= (int)fVar13) {
      fVar13 = fVar2;
    }
  }
  if (fVar13 != fVar2) {
    pfVar7 = param_1 + 2;
    if (*(float **)(param_1 + 0x22) != (float *)0x0) {
      pfVar7 = *(float **)(param_1 + 0x22);
    }
    uVar4 = 0xffffffff;
    fVar16 = 0.0;
    do {
      bVar3 = fVar16 <= param_3 * *param_1;
      fVar16 = fVar16 + pfVar7[(longlong)(int)fVar13 * 4 + 1];
      if ((bVar3) && (param_3 * *param_1 <= fVar16)) {
        fVar2 = pfVar7[(longlong)(int)fVar13 * 4];
        *param_2 = fVar2;
        return CONCAT71((uint7)(uint3)((uint)fVar2 >> 8),1);
      }
      uVar4 = uVar4 & ~(uint)uVar12;
      pfVar14 = *(float **)(param_1 + 0x28);
      if (*(float **)(param_1 + 0x28) == (float *)0x0) {
        pfVar14 = param_1 + 0x26;
      }
      iVar8 = (int)uVar9;
      lVar11 = (longlong)iVar8;
      fVar13 = (float)((uint)pfVar14[lVar11] & uVar4);
      if (fVar13 == 0.0) {
        iVar5 = (int)fVar2 + -1;
        if ((int)fVar2 + -1 < 0) {
          iVar5 = (int)fVar2 + 0x1e;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar5 <= iVar8) {
          return 0;
        }
        lVar15 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          fVar13 = pfVar14[lVar11 + lVar15 + 1];
          if (fVar13 != 0.0) break;
          lVar15 = lVar15 + 1;
          if (iVar6 - lVar11 == lVar15) {
            return 0;
          }
        }
        uVar9 = (ulonglong)(iVar8 + (int)lVar15 + 1);
        uVar4 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-(int)fVar13 & (uint)fVar13);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      fVar13 = (float)((iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e);
    } while ((int)fVar13 < (int)fVar2);
  }
  return 0;
}



// FUNCTION 140df3eb8 FUN_140df3eb8 body=364 status=ok
// SIG undefined FUN_140df3eb8(void)

longlong * FUN_140df3eb8(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140df4026(param_1,local_48,param_2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1;
    if (0x18 < *(ushort *)(param_1 + 3)) {
      plVar3 = (longlong *)*param_1;
    }
    (*pcVar1)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 3)) {
    FUN_1400020a8(*param_1);
  }
  *(ushort *)(param_1 + 3) = local_30;
  if (local_30 < 0x19) {
    uVar2 = (ulonglong)((uint)local_28 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar2) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar2) == (code *)0x0) {
        memcpy(param_1,local_48,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar2))(param_1,local_48);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar2))(param_1,local_48);
    }
  }
  else {
    *param_1 = (longlong)local_48[0];
    local_48[0] = (undefined8 ***)0x0;
    local_30 = 0;
  }
  *(byte *)(param_1 + 4) = local_28;
  local_28 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    pppuVar4 = local_48;
    if (0x18 < local_30) {
      pppuVar4 = (undefined8 ***)local_48[0];
    }
    (*DAT_14c9a85d0)(pppuVar4);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df4026 FUN_140df4026 body=676 status=ok
// SIG undefined FUN_140df4026(void)

double * FUN_140df4026(double *param_1,double *param_2,double *param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_78 [32];
  float local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *(byte *)(param_1 + 4);
  bVar2 = *(byte *)(param_3 + 4);
  if (2 < bVar1) {
    if (bVar1 != 3) {
      if (bVar1 != 0x15) goto LAB_140df40a0;
      dVar8 = *param_1;
      if (bVar2 < 3) {
        if (bVar2 == 1) {
          iVar4 = FUN_1405d5f74(param_3);
          dVar7 = (double)iVar4;
        }
        else if (bVar2 == 2) {
          dVar7 = (double)(int)*(float *)param_3;
        }
        else {
LAB_140df4272:
          dVar7 = (double)FUN_140ee352e(param_3);
        }
      }
      else if (bVar2 == 3) {
        dVar7 = (double)*(float *)param_3;
      }
      else {
        if (bVar2 != 0x15) goto LAB_140df4272;
        dVar7 = *param_3;
      }
      *(undefined2 *)(param_2 + 3) = 8;
      *param_2 = dVar8 + dVar7;
LAB_140df415e:
      *(undefined1 *)(param_2 + 4) = 0x15;
      goto LAB_140df4104;
    }
    fVar9 = *(float *)param_1;
    if (bVar2 == 3) {
LAB_140df40f2:
      fVar9 = fVar9 + *(float *)param_3;
    }
    else {
      if (bVar2 == 0x15) {
        dVar8 = (double)fVar9;
LAB_140df4150:
        dVar7 = *param_3;
        *(undefined2 *)(param_2 + 3) = 8;
        *param_2 = dVar8 + dVar7;
        goto LAB_140df415e;
      }
      if (bVar2 == 2) {
        fVar6 = (float)(int)*(float *)param_3;
      }
      else if (bVar2 == 1) {
        iVar4 = FUN_1405d5f74();
        fVar6 = (float)iVar4;
      }
      else {
        fVar6 = (float)FUN_144a7ecd0(param_3);
      }
      fVar9 = fVar9 + fVar6;
    }
    *(undefined2 *)(param_2 + 3) = 4;
    *(float *)param_2 = fVar9;
LAB_140df4100:
    *(undefined1 *)(param_2 + 4) = 3;
    goto LAB_140df4104;
  }
  if (bVar1 == 1) {
    if (2 < bVar2) {
      if (bVar2 != 3) {
        if (bVar2 == 0x15) goto LAB_140df4148;
        goto LAB_140df4218;
      }
      fVar9 = (float)FUN_144a7ecd0(param_1);
LAB_140df429b:
      fVar6 = *(float *)param_3;
      *(undefined2 *)(param_2 + 3) = 4;
      *(float *)param_2 = fVar9 + fVar6;
      goto LAB_140df4100;
    }
    if ((bVar2 == 1) || (bVar2 != 2)) {
LAB_140df4218:
      fVar9 = (float)FUN_1405d5f74(param_1);
      goto LAB_140df4222;
    }
LAB_140df41c1:
    iVar4 = FUN_1405d5f74(param_1);
    iVar4 = iVar4 + (int)*(float *)param_3;
LAB_140df422c:
    *(undefined2 *)(param_2 + 3) = 4;
    *(int *)param_2 = iVar4;
  }
  else {
    if (bVar1 != 2) {
LAB_140df40a0:
      if (bVar2 == 3) {
        pfVar5 = &local_58;
        FUN_1400b56fe(pfVar5,param_1,3);
        fVar9 = 0.0;
        if (local_38 != 0) {
          fVar9 = local_58;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_40) {
            pfVar5 = (float *)CONCAT44(uStack_54,local_58);
          }
          (*pcVar3)(pfVar5);
        }
        if (0x18 < local_40) {
          FUN_1400020a8(CONCAT44(uStack_54,local_58));
        }
        goto LAB_140df40f2;
      }
      if (bVar2 == 0x15) {
LAB_140df4148:
        dVar8 = (double)FUN_140ee352e(param_1);
        goto LAB_140df4150;
      }
      if (bVar2 == 2) goto LAB_140df41c1;
      if (bVar2 != 1) {
        *(undefined2 *)(param_2 + 3) = 0;
        *(undefined1 *)(param_2 + 4) = 0;
        goto LAB_140df4104;
      }
      goto LAB_140df4218;
    }
    fVar9 = *(float *)param_1;
    if (2 < bVar2) {
      if (bVar2 == 3) {
        fVar9 = (float)(int)fVar9;
        goto LAB_140df429b;
      }
      if (bVar2 == 0x15) {
        dVar8 = (double)(int)fVar9;
        goto LAB_140df4150;
      }
LAB_140df4222:
      iVar4 = FUN_1405d5f74(param_3);
      iVar4 = iVar4 + (int)fVar9;
      goto LAB_140df422c;
    }
    if ((bVar2 == 1) || (bVar2 != 2)) goto LAB_140df4222;
    fVar6 = *(float *)param_3;
    *(undefined2 *)(param_2 + 3) = 4;
    *(int *)param_2 = (int)fVar9 + (int)fVar6;
  }
  *(undefined1 *)(param_2 + 4) = 2;
LAB_140df4104:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140df42cc FUN_140df42cc body=71 status=ok
// SIG undefined FUN_140df42cc(void)

undefined8 FUN_140df42cc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x420);
  if (lVar1 == 0) {
    FUN_140bbae66(param_2);
  }
  else {
    plVar2 = (longlong *)FUN_1408daa5c();
    FUN_140df4314(param_2,(ulonglong)*(ushort *)(lVar1 + 0xcfa) * 0x4c0 + *plVar2);
  }
  return param_2;
}



// FUNCTION 140df4314 FUN_140df4314 body=2174 status=ok
// SIG undefined FUN_140df4314(void)

undefined4 * FUN_140df4314(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 4));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0x18));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = param_2[0x26];
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  param_1[0x2a] = param_2[0x2a];
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0x2e));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x2e) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = param_2[0x3c];
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  param_1[0x40] = param_2[0x40];
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0x44));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x44) = uVar1;
  *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x46);
  uVar1 = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = uVar1;
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  param_1[0x4e] = param_2[0x4e];
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x52] = param_2[0x52];
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  param_1[0x56] = param_2[0x56];
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0x5a));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x5a) = uVar1;
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_2 + 0x62);
  param_1[100] = param_2[100];
  *(undefined8 *)(param_1 + 0x66) = 0;
  param_1[0x68] = param_2[0x68];
  *(undefined1 *)((longlong)param_1 + 0x1aa) = *(undefined1 *)((longlong)param_2 + 0x1aa);
  *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)(param_2 + 0x6a);
  param_1[0x6c] = param_2[0x6c];
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_2 + 0x6e);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0x70));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  uVar1 = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x76) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  param_1[0x7a] = param_2[0x7a];
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = param_2[0x7e];
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  param_1[0x82] = param_2[0x82];
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0x86));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x86) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)(param_1 + 0x8c) = uVar1;
  *(undefined8 *)(param_1 + 0x8e) = *(undefined8 *)(param_2 + 0x8e);
  param_1[0x90] = param_2[0x90];
  *(undefined8 *)(param_1 + 0x92) = 0;
  param_1[0x94] = param_2[0x94];
  *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)(param_2 + 0x96);
  param_1[0x98] = param_2[0x98];
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x9a) = *(undefined8 *)(param_2 + 0x9a);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0x9c));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x9c) = uVar1;
  *(undefined8 *)(param_1 + 0x9e) = *(undefined8 *)(param_2 + 0x9e);
  uVar1 = *(undefined8 *)(param_2 + 0xa2);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa2) = uVar1;
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
  param_1[0xa6] = param_2[0xa6];
  *(undefined8 *)(param_1 + 0xa8) = 0;
  param_1[0xaa] = param_2[0xaa];
  *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_2 + 0xac);
  param_1[0xae] = param_2[0xae];
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0xb2));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0xb2) = uVar1;
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb6) = *(undefined8 *)(param_2 + 0xb6);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined8 *)(param_1 + 0xba) = *(undefined8 *)(param_2 + 0xba);
  param_1[0xbc] = param_2[0xbc];
  *(undefined8 *)(param_1 + 0xbe) = 0;
  param_1[0xc0] = param_2[0xc0];
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  param_1[0xc4] = param_2[0xc4];
  *(undefined8 *)(param_1 + 0xca) = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc6) = *(undefined8 *)(param_2 + 0xc6);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 200));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xca) = *(undefined8 *)(param_2 + 0xca);
  uVar1 = *(undefined8 *)(param_2 + 0xce);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xce) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  param_1[0xd2] = param_2[0xd2];
  *(undefined8 *)(param_1 + 0xd4) = 0;
  param_1[0xd6] = param_2[0xd6];
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  param_1[0xda] = param_2[0xda];
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xde) = 0;
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0xde));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0xde) = uVar1;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  uVar1 = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)(param_1 + 0xe2) = *(undefined8 *)(param_2 + 0xe2);
  *(undefined8 *)(param_1 + 0xe4) = uVar1;
  *(undefined8 *)(param_1 + 0xe6) = *(undefined8 *)(param_2 + 0xe6);
  param_1[0xe8] = param_2[0xe8];
  *(undefined8 *)(param_1 + 0xea) = 0;
  param_1[0xec] = param_2[0xec];
  param_1[0xee] = param_2[0xee];
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0xf2));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0xf2) = uVar1;
  *(undefined8 *)(param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf6) = *(undefined8 *)(param_2 + 0xf6);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_1 + 0xfa) = *(undefined8 *)(param_2 + 0xfa);
  param_1[0xfc] = param_2[0xfc];
  *(undefined8 *)(param_1 + 0xfe) = 0;
  param_1[0x100] = param_2[0x100];
  *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_2 + 0x102);
  param_1[0x104] = param_2[0x104];
  *(undefined8 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x106) = *(undefined8 *)(param_2 + 0x106);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0x108));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  *(undefined8 *)(param_1 + 0x10a) = *(undefined8 *)(param_2 + 0x10a);
  uVar1 = *(undefined8 *)(param_2 + 0x10e);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x10e) = uVar1;
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  param_1[0x112] = param_2[0x112];
  *(undefined8 *)(param_1 + 0x114) = 0;
  param_1[0x116] = param_2[0x116];
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  param_1[0x11a] = param_2[0x11a];
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x11e) = 0;
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_2 + 0x11c);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 0x11e));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x11e) = uVar1;
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  uVar1 = *(undefined8 *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x122) = *(undefined8 *)(param_2 + 0x122);
  *(undefined8 *)(param_1 + 0x124) = uVar1;
  *(undefined8 *)(param_1 + 0x126) = *(undefined8 *)(param_2 + 0x126);
  param_1[0x128] = param_2[0x128];
  *(undefined8 *)(param_1 + 0x12a) = 0;
  param_1[300] = param_2[300];
  *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_2 + 0x12e);
  return param_1;
}



// FUNCTION 140df4b92 FUN_140df4b92 body=103 status=ok
// SIG undefined FUN_140df4b92(void)

ulonglong FUN_140df4b92(longlong param_1)

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
LAB_140df4bdc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140df4bdc;
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



// FUNCTION 140df4bfa FUN_140df4bfa body=36 status=ok
// SIG undefined FUN_140df4bfa(void)

void FUN_140df4bfa(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140b0b25e(*(undefined8 *)(param_1 + 0x30),param_1 + 0x70);
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 140df4c1e FUN_140df4c1e body=1284 status=ok
// SIG undefined FUN_140df4c1e(void)

void FUN_140df4c1e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uStack_38 = 0;
  uStack_31 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined7)uVar2;
      uStack_31 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_38);
    }
  }
  local_39 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_140a4831c;
      local_a8 = 0x1000000008001;
      local_a0 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_39);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_39);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_39 = (undefined1)uVar2;
      uStack_38 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_39);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_98 = FUN_1446ddbd2();
      local_90 = FUN_1403a682c;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_58;
  uStack_64 = local_58._4_4_;
  uStack_60 = (undefined4)uStack_50;
  uStack_5c = uStack_50._4_4_;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_39);
  local_80 = CONCAT17(uStack_31,uStack_38);
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = (undefined4)uStack_30;
  uStack_74 = uStack_30._4_4_;
  uStack_70 = (undefined4)local_28;
  uStack_6c = local_28._4_4_;
  FUN_140df5124(&local_80,uVar4 & 0xffffffff,&local_68);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df5124 FUN_140df5124 body=123 status=ok
// SIG undefined FUN_140df5124(void)

void FUN_140df5124(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140df51a0(param_1,&local_30);
  FUN_140df5348(local_30,param_2,param_3);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df51a0 FUN_140df51a0 body=144 status=ok
// SIG undefined FUN_140df51a0(void)

undefined8 * FUN_140df51a0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df5234 FUN_140df5234 body=158 status=ok
// SIG undefined FUN_140df5234(void)

undefined8 * FUN_140df5234(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df52d6(*(undefined8 *)(*param_1 + 0x28),&local_28,param_1 + 1);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df52d6 FUN_140df52d6 body=114 status=ok
// SIG undefined FUN_140df52d6(void)

void FUN_140df52d6(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    plVar2 = *(longlong **)(param_1 + 0xc0);
    lVar3 = (longlong)*(int *)(param_1 + 200) << 4;
    do {
      lVar1 = *plVar2;
      if ((((*(int *)(lVar1 + 8) == *param_3) && (*(int *)(lVar1 + 0xc) == param_3[1])) &&
          (*(int *)(lVar1 + 0x10) == param_3[2])) && (*(int *)(lVar1 + 0x14) == param_3[3])) {
        if (plVar2 != (longlong *)0x0) {
          *param_2 = lVar1;
          lVar3 = plVar2[1];
          param_2[1] = lVar3;
          if (lVar3 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 140df5348 FUN_140df5348 body=191 status=ok
// SIG undefined FUN_140df5348(void)

void FUN_140df5348(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((param_3[1] == 0 && *param_3 == 0) && param_3[2] == 0) && param_3[3] == 0) &&
     ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x50);
    lVar5 = (longlong)*(int *)(param_1 + 0x58) * 0x10 + lVar4;
    do {
      plVar3 = *(longlong **)(lVar4 + 8);
      if (plVar3 == (longlong *)0x0) {
        FUN_140df54b2();
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        FUN_140df54b2();
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
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar5);
  }
  lVar4 = FUN_140df5408(param_1,param_3);
  if (lVar4 == 0) {
    return;
  }
  FUN_140df54b2();
  return;
}



// FUNCTION 140df5408 FUN_140df5408 body=170 status=ok
// SIG undefined FUN_140df5408(void)

longlong FUN_140df5408(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x50);
    lVar5 = (longlong)*(int *)(param_1 + 0x58) << 4;
    do {
      lVar2 = *plVar3;
      iVar1 = *(int *)(lVar2 + 0x90);
      if (((longlong)iVar1 < 0) || (*(int *)(*(longlong *)(lVar2 + 0x80) + 0x38) <= iVar1)) {
        lVar6 = 0;
      }
      else {
        lVar6 = (longlong)iVar1 * 0x108 + *(longlong *)(*(longlong *)(lVar2 + 0x80) + 0x30);
      }
      piVar4 = &DAT_14b4273a8;
      if (lVar6 != 0) {
        piVar4 = (int *)(lVar6 + 0x18);
      }
      if ((((*piVar4 == *param_2) && (piVar4[1] == param_2[1])) && (piVar4[2] == param_2[2])) &&
         (piVar4[3] == param_2[3])) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        return lVar2;
      }
      plVar3 = plVar3 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 140df54b2 FUN_140df54b2 body=120 status=ok
// SIG undefined FUN_140df54b2(void)

void FUN_140df54b2(undefined8 param_1,char param_2,longlong *param_3)

{
  if (param_2 == '\0') {
    FUN_140df552a(param_3,0);
    return;
  }
  if (param_2 == '\x01') {
    if (*(char *)((longlong)param_3 + 0x94) == '\0') goto LAB_140df54ee;
    *(undefined1 *)((longlong)param_3 + 0x94) = 0;
  }
  else {
    if (param_2 == '\x03') {
      FUN_1457b1a84(param_3);
      return;
    }
    if ((param_2 != '\x02') || (*(char *)((longlong)param_3 + 0x94) != '\x01')) {
      return;
    }
    *(undefined1 *)((longlong)param_3 + 0x94) = 2;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
LAB_140df54ee:
  FUN_140df59dc(param_3);
  return;
}



// FUNCTION 140df552a FUN_140df552a body=1199 status=ok
// SIG undefined FUN_140df552a(void)

void FUN_140df552a(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_108 [40];
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != '\0') goto LAB_140df5752;
  plVar10 = (longlong *)param_1[6];
  bVar4 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
LAB_140df58f7:
    uVar8 = 0;
  }
  else {
    iVar6 = (int)plVar10[1];
    uVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_140df55a1;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    if (param_1[5] == 0) {
      bVar4 = false;
      goto LAB_140df58f7;
    }
    uVar8 = FUN_1405b657a();
    bVar4 = false;
  }
LAB_140df55a1:
  *(undefined4 *)(param_1 + 0x13) = 0;
  uVar7 = *(uint *)(param_1 + 0x12);
  if ((longlong)(int)uVar7 < 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
LAB_140df5908:
    fVar15 = 0.0;
  }
  else {
    lVar11 = param_1[0x10];
    if (((int)uVar7 < *(int *)(lVar11 + 0x38)) &&
       (lVar13 = (longlong)(int)uVar7 * 0x108 + *(longlong *)(lVar11 + 0x30), lVar13 != 0)) {
      local_e0[0] = '\0';
      local_b8[0] = 0;
      FUN_1456bb102(local_e0,uVar8);
      pfVar9 = &local_b0;
      FUN_1448729ea(lVar13 + 0x80,pfVar9,local_e0);
      if (local_90 == 3) {
        uVar7 = 3;
        fVar15 = local_b0;
      }
      else {
        pfVar12 = &local_88;
        FUN_1400b56fe(pfVar12,&local_b0,3);
        fVar15 = local_88;
        if (local_68 == 0) {
          fVar15 = 1.0;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_70) {
            pfVar12 = (float *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar3)(pfVar12);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
        }
        uVar7 = (uint)local_90;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_98) {
          pfVar9 = (float *)CONCAT44(uStack_ac,local_b0);
        }
        (*pcVar3)(pfVar9);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
      }
      FUN_1448173f8(local_b8);
      if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
      uVar7 = *(uint *)(param_1 + 0x12);
      lVar11 = param_1[0x10];
      *(int *)((longlong)param_1 + 0x9c) = (int)fVar15;
      if ((int)uVar7 < 0) goto LAB_140df5908;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
    }
    fVar15 = 0.0;
    if (((int)uVar7 < *(int *)(lVar11 + 0x38)) &&
       (lVar11 = (ulonglong)uVar7 * 0x108 + *(longlong *)(lVar11 + 0x30), lVar11 != 0)) {
      local_e0[0] = '\0';
      local_b8[0] = 0;
      FUN_1456bb102(local_e0,uVar8);
      pfVar9 = &local_b0;
      FUN_1448729ea(lVar11 + 0x28,pfVar9,local_e0);
      if (local_90 == 3) {
        uVar7 = 3;
        fVar15 = local_b0;
      }
      else {
        pfVar12 = &local_88;
        FUN_1400b56fe(pfVar12,&local_b0,3);
        fVar15 = 0.0;
        if (local_68 != 0) {
          fVar15 = local_88;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_70) {
            pfVar12 = (float *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar3)(pfVar12);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
        }
        uVar7 = (uint)local_90;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_98) {
          pfVar9 = (float *)CONCAT44(uStack_ac,local_b0);
        }
        (*pcVar3)(pfVar9);
      }
      if (0x18 < local_98) {
        FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
      }
      FUN_1448173f8(local_b8);
      if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
    }
  }
  *(float *)(param_1 + 0x14) = fVar15;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_140df5752:
  if (*(char *)((longlong)param_1 + 0x94) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x94) = 1;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  *(int *)((longlong)param_1 + 0xa4) = (int)param_1[0x14];
  FUN_140df5ba6(param_1 + 4);
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140df59dc(param_1);
  return;
}



// FUNCTION 140df59dc FUN_140df59dc body=177 status=ok
// SIG undefined FUN_140df59dc(void)

void FUN_140df59dc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x68) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar1) != 0)) {
        local_20 = *(undefined1 *)(param_1 + 0x94);
        local_1c = *(float *)(param_1 + 0xa0);
        local_14 = *(float *)(param_1 + 0xa4);
        local_18 = local_1c - local_14;
        local_10 = *(undefined4 *)(param_1 + 0x98);
        local_c = *(undefined4 *)(param_1 + 0x9c);
        FUN_140df5a8e(param_1 + 0x68);
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x70) * 0x10 != lVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140df5a8e FUN_140df5a8e body=162 status=ok
// SIG undefined FUN_140df5a8e(void)

void FUN_140df5a8e(longlong *param_1,undefined8 param_2)

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
        goto LAB_140df5b1b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140df5b1b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140df5b30 FUN_140df5b30 body=103 status=ok
// SIG undefined FUN_140df5b30(void)

ulonglong FUN_140df5b30(longlong param_1)

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
LAB_140df5b7a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140df5b7a;
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



// FUNCTION 140df5ba6 FUN_140df5ba6 body=666 status=ok
// SIG undefined FUN_140df5ba6(void)

void FUN_140df5ba6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 *local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[4] != '\0') goto LAB_140df5d05;
  *(undefined1 *)(param_1 + 4) = 1;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) goto LAB_140df5d05;
  iVar8 = (int)plVar4[1];
  do {
    if (iVar8 == 0) goto LAB_140df5d05;
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar10 = iVar8 == iVar6;
    if (bVar10) {
      *(int *)(plVar4 + 1) = iVar8 + 1;
      iVar6 = iVar8;
    }
    iVar8 = iVar6;
    UNLOCK();
  } while (!bVar10);
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1,&local_58);
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    plVar2 = local_50;
    local_40 = 3;
    if (local_50 == (longlong *)0x0) {
      *local_48 = &PTR_LAB_149e01f80;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_48[2] = lVar9;
      *local_48 = &PTR_FUN_14b42dd50;
      local_48[3] = local_58;
      local_48[4] = 0;
      local_48[5] = FUN_140437ea4;
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      *local_48 = &PTR_LAB_149e01f80;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_48[2] = lVar9;
      *local_48 = &PTR_FUN_14b42dd50;
      local_48[3] = local_58;
      local_48[4] = local_50;
      LOCK();
      *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
      UNLOCK();
      local_48[5] = FUN_140437ea4;
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    FUN_140df5e42(lVar5,&local_38,&local_48);
    param_1[3] = local_38;
    if (local_40 == 0) {
LAB_140df5cd9:
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
      goto LAB_140df5cd9;
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)local_50 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  LOCK();
  plVar2 = plVar4 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar3 = (int *)((longlong)plVar4 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_140df5d05:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140df5e42 FUN_140df5e42 body=510 status=ok
// SIG undefined FUN_140df5e42(void)

undefined8 * FUN_140df5e42(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140df6042();
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_140328a42(&local_50,param_3);
  *param_2 = 0;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_50 + 0x30))(), cVar5 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_140df5f56;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140df5f40;
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x3c) < 1) {
      iVar2 = *(int *)(param_1 + 0x30);
      iVar6 = *(int *)(param_1 + 0x38) + -1;
      *(int *)(param_1 + 0x38) = iVar6;
      if (iVar6 <= iVar2) {
        iVar6 = iVar2;
        if (0 < iVar2) {
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
            iVar6 = *(int *)(param_1 + 0x30);
          } while (iVar8 < iVar6);
        }
        iVar8 = 2;
        if (2 < iVar6 * 2) {
          iVar8 = iVar6 * 2;
        }
        *(int *)(param_1 + 0x38) = iVar8;
        if ((iVar8 < iVar2) && (*(int *)(param_1 + 0x34) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    uVar7 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar7 = local_40;
    }
    *param_2 = uVar7;
    iVar2 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
      FUN_1447a71f6(plVar1,iVar2);
    }
    lVar3 = *plVar1;
    lVar9 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar3 + lVar9) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar9) = 0;
    *(longlong **)(lVar3 + lVar9) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar9) = local_48;
LAB_140df5f40:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140df5f56:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140df6042 FUN_140df6042 body=172 status=ok
// SIG undefined FUN_140df6042(void)

void FUN_140df6042(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      if (lVar2 != 0) {
        FUN_140df6136(param_1,local_30);
        FUN_140df60f0(lVar2,local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df60f0 FUN_140df60f0 body=70 status=ok
// SIG undefined FUN_140df60f0(void)

void FUN_140df60f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140df619a(param_1 + 0x198);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000140df6132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140df6136 FUN_140df6136 body=99 status=ok
// SIG undefined FUN_140df6136(void)

undefined8 * FUN_140df6136(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_140df6178:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140df6178;
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
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 140df619a FUN_140df619a body=134 status=ok
// SIG undefined FUN_140df619a(void)

ulonglong FUN_140df619a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = 0;
    iVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) == *param_2) {
        if (iVar3 != 1) {
          uVar4 = (ulonglong)(uint)-iVar3;
          goto LAB_140df6216;
        }
        break;
      }
      iVar3 = iVar3 + -1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 << 4 != lVar5);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140df623c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar2 + 8 + uVar4 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_140df6216:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140df623c FUN_140df623c body=269 status=ok
// SIG undefined FUN_140df623c(void)

void FUN_140df623c(longlong param_1,int param_2)

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



// FUNCTION 140df634a FUN_140df634a body=31 status=ok
// SIG undefined FUN_140df634a(void)

void FUN_140df634a(longlong *param_1)

{
  FUN_140d77aa8();
                    /* WARNING: Could not recover jumptable at 0x000140df6362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1);
  return;
}



// FUNCTION 140df636a FUN_140df636a body=69 status=ok
// SIG undefined FUN_140df636a(void)

void FUN_140df636a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14089b021(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),param_3,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df63b0 FUN_140df63b0 body=49 status=ok
// SIG undefined FUN_140df63b0(void)

void FUN_140df63b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
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



// FUNCTION 140df63e1 FUN_140df63e1 body=58 status=ok
// SIG undefined FUN_140df63e1(void)

void FUN_140df63e1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_140df641b(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140df641b FUN_140df641b body=43 status=ok
// SIG undefined FUN_140df641b(void)

void FUN_140df641b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 140df6446 FUN_140df6446 body=73 status=ok
// SIG undefined FUN_140df6446(void)

void FUN_140df6446(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140df648f FUN_140df648f body=43 status=ok
// SIG undefined FUN_140df648f(void)

void FUN_140df648f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140df64ba FUN_140df64ba body=54 status=ok
// SIG undefined FUN_140df64ba(void)

void FUN_140df64ba(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400e1c6c(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140df64f0 FUN_140df64f0 body=24 status=ok
// SIG undefined FUN_140df64f0(void)

void FUN_140df64f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140df6504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140df6508 FUN_140df6508 body=110 status=ok
// SIG undefined FUN_140df6508(void)

undefined8 * FUN_140df6508(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14afd04c0;
  param_1[8] = 0;
  param_1[9] = 0xffffffffffffffff;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140df6576 FUN_140df6576 body=3899 status=ok
// SIG undefined FUN_140df6576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140df6576(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double dVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  double *pdVar19;
  byte bVar20;
  bool bVar21;
  bool bVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_658 [32];
  undefined4 local_638;
  undefined4 local_630;
  undefined4 local_628;
  undefined8 local_620;
  wchar_t *local_618;
  code *local_610;
  undefined1 *local_608;
  code **local_600;
  code *local_5f8;
  code *local_5f0;
  double *local_5e0;
  code *local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined8 local_5a8;
  undefined1 local_5a0;
  undefined4 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined4 local_560;
  undefined8 local_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined1 local_528;
  undefined **local_520;
  undefined8 local_518;
  undefined1 local_510;
  undefined **local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined **local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined1 local_4cc;
  undefined4 local_4c8;
  undefined1 local_4c4;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined8 local_498;
  undefined2 local_490;
  undefined4 local_48c;
  undefined2 local_488;
  undefined4 local_484;
  undefined8 local_480;
  longlong *local_478;
  undefined4 local_470;
  undefined4 local_468;
  undefined2 local_460;
  undefined4 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined4 local_3b0;
  longlong local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined1 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined1 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8;
  undefined **local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined **local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined4 local_298;
  undefined1 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined2 local_260;
  undefined4 local_25c;
  undefined2 local_258;
  undefined4 local_254;
  undefined8 local_250;
  longlong *local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined2 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined4 uStack_174;
  undefined2 uStack_170;
  undefined2 local_16e;
  undefined4 uStack_16c;
  undefined2 uStack_168;
  undefined1 local_164;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double local_138;
  double dStack_130;
  longlong *local_128;
  double local_118;
  double local_110;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_658;
  if ((((longlong *)*param_2 != (longlong *)0x0) &&
      (lVar14 = (**(code **)(*(longlong *)*param_2 + 0x18))(), lVar14 == param_1[-0x6da])) ||
     ((char)param_1[0x454] == '\x02')) goto LAB_140df6e9c;
  if (((longlong *)*param_2 == (longlong *)0x0) ||
     (plVar15 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x18))(),
     plVar15 == (longlong *)0x0)) {
LAB_140df7270:
    plVar15 = (longlong *)0x0;
    bVar22 = false;
LAB_140df7275:
    bVar9 = bVar22;
    plVar17 = (longlong *)0x0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_600 = &local_5d8;
      local_5d8 = FUN_141030f22;
      local_5f0 = FUN_14081d0ea;
      local_5f8 = (code *)&LAB_1459f2e4c;
      local_608 = &LAB_148c39de3;
      local_610 = (code *)&LAB_1457a9eb2;
      local_618 = L"Game";
      local_620 = 0;
      local_628 = 0x10000004;
      local_630 = 0x10;
      local_638 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(plVar15[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
        DAT_14cbadd90 + 0x30)) goto LAB_140df7270;
    lVar14 = plVar15[0x7a];
    bVar9 = true;
    bVar22 = true;
    if (lVar14 == 0) goto LAB_140df7275;
    uVar16 = FUN_140df74c8();
    plVar17 = (longlong *)FUN_144718840(lVar14,uVar16);
  }
  cVar11 = *(char *)((longlong)param_1 + 0x395b);
  if (((cVar11 != '\x01') || (*(int *)((longlong)param_1 + 0x3a0c) <= (int)param_1[0x741])) ||
     (bVar22 = true, (*(byte *)((longlong)param_1 + 0x3959) & 4) != 0)) {
    if (plVar17 != (longlong *)0x0) {
      plVar17 = (longlong *)(**(code **)(*plVar17 + 0x28))(plVar17);
      bVar22 = true;
      if (plVar17 == param_1 + -0x752) goto LAB_140df66be;
      cVar11 = *(char *)((longlong)param_1 + 0x395b);
    }
    if (((cVar11 != '\x01') || (param_1[0x729] == 0)) ||
       (*(char *)(param_1[0x729] + 0x35) != '\x01')) goto LAB_140df6e9c;
    bVar22 = false;
  }
LAB_140df66be:
  lVar14 = param_1[0x729];
  lVar18 = (**(code **)(*param_1 + 0x10))(param_1);
  if (bVar9 && lVar18 != 0) {
    if (lVar14 == 0) {
      dVar4 = 45.0;
    }
    else {
      dVar4 = (double)*(float *)(lVar14 + 0x60);
    }
    plVar17 = plVar15;
    (**(code **)(*plVar15 + 0x718))(plVar15,&local_100,&local_118);
    lVar1 = param_1[-0x719];
    if (lVar1 == 0) {
      pdVar19 = (double *)&DAT_14c8464e0;
      uVar32 = (undefined4)DAT_14c8464f0;
      uVar33 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      pdVar19 = (double *)(lVar1 + 0x260);
      uVar32 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar33 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
    }
    dVar31 = (double)CONCAT44(uVar33,uVar32) - local_f0;
    dVar28 = pdVar19[1] - local_f8;
    dVar30 = *pdVar19 - local_100;
    if ((*(char *)(lVar18 + 0x1b) != '\x01') ||
       (SQRT(dVar31 * dVar31 + dVar30 * dVar30 + dVar28 * dVar28) <=
        (double)*(float *)(lVar18 + 0x1c))) {
      if (*(char *)(lVar18 + 0xf8) == '\x01') {
        if (lVar1 == 0) {
          local_128 = DAT_14c846508;
          local_138 = DAT_14c8464f8;
          dStack_130 = DAT_14c846500;
LAB_140df73fd:
          local_148 = DAT_14c8464f0;
          local_158 = DAT_14c8464e0;
          uStack_150 = DAT_14c8464e8;
        }
        else {
          pcVar6 = *(code **)(lVar1 + 0x240);
          dVar23 = *(double *)(lVar1 + 0x248);
          dVar7 = *(double *)(lVar1 + 0x250);
          dVar8 = *(double *)(lVar1 + 600);
          local_5e0 = *(double **)(lVar1 + 0x228);
          local_5d8 = pcVar6;
          dStack_5d0 = dVar23;
          local_5c8 = dVar7;
          dStack_5c0 = dVar8;
          if (local_5e0 == (double *)0x0) {
            local_5e0 = (double *)FUN_14001cc68(0x40,0x10);
            dVar10 = DAT_14c8463d8;
            *local_5e0 = DAT_14c8463d0;
            local_5e0[1] = dVar10;
            dVar10 = DAT_14c8463e8;
            local_5e0[2] = DAT_14c8463e0;
            local_5e0[3] = dVar10;
            dVar10 = DAT_14c846500;
            local_5e0[4] = DAT_14c8464f8;
            local_5e0[5] = dVar10;
            plVar17 = DAT_14c846508;
            local_5e0[6] = (double)DAT_14c846508;
            *(double **)(lVar1 + 0x228) = local_5e0;
          }
          pdVar19 = local_5e0;
          auVar25._8_4_ = (int)-(ulonglong)(dVar23 != local_5e0[1]);
          auVar25._0_8_ = -(ulonglong)((double)pcVar6 != *local_5e0);
          auVar25._12_4_ = (int)(-(ulonglong)(dVar23 != local_5e0[1]) >> 0x20);
          iVar13 = movmskpd((int)local_5e0,auVar25);
          auVar5._8_4_ = (int)-(ulonglong)(dVar8 != local_5e0[3]);
          auVar5._0_8_ = -(ulonglong)(dVar7 != local_5e0[2]);
          auVar5._12_4_ = (int)(-(ulonglong)(dVar8 != local_5e0[3]) >> 0x20);
          uVar12 = movmskpd((int)plVar17,auVar5);
          if ((uVar12 & 0x3fffffff) != 0 || iVar13 != 0) {
            local_5e0[2] = local_5c8;
            local_5e0[3] = dStack_5c0;
            *local_5e0 = (double)local_5d8;
            local_5e0[1] = dStack_5d0;
            FUN_1448052ee(&local_5d8,&local_e8);
            pdVar19[6] = local_d8;
            pdVar19[4] = local_e8;
            pdVar19[5] = dStack_e0;
          }
          local_128 = (longlong *)local_5e0[6];
          local_138 = local_5e0[4];
          dStack_130 = local_5e0[5];
          lVar1 = param_1[-0x719];
          if (lVar1 == 0) goto LAB_140df73fd;
          local_158 = *(undefined8 *)(lVar1 + 0x260);
          uStack_150 = *(undefined8 *)(lVar1 + 0x268);
          local_148 = *(undefined8 *)(lVar1 + 0x270);
        }
        cVar11 = FUN_1418b333a(lVar18 + 0xe0,&local_100,&local_158,&local_138);
        if (cVar11 == '\0') goto LAB_140df7445;
      }
      dVar23 = 0.0;
      if ((((dVar28 != 0.0) || (NAN(dVar28))) || (dVar30 != 0.0)) || (NAN(dVar30))) {
        dVar23 = atan2(dVar28,dVar30);
        dVar23 = dVar23 * 57.29577951308232;
      }
      dVar28 = SQRT(dVar30 * dVar30 + dVar28 * dVar28);
      dVar30 = 0.0;
      if (((dVar31 != 0.0) || (NAN(dVar31))) || ((dVar28 != 0.0 || (NAN(dVar28))))) {
        dVar30 = atan2(dVar31,dVar28);
        dVar30 = dVar30 * 57.29577951308232;
      }
      auVar24._8_8_ = dVar23 - local_110;
      auVar24._0_8_ = dVar30 - local_118;
      auVar25 = divpd(auVar24,_DAT_1499387d0);
      auVar25 = roundpd(auVar25,auVar25,3);
      dVar31 = (dVar30 - local_118) - auVar25._0_8_ * (double)DAT_1499387d0;
      dVar30 = (dVar23 - local_110) - auVar25._8_8_ * DAT_1499387d0._8_8_;
      auVar29._0_8_ = (double)DAT_1499387d0 + dVar31;
      auVar29._8_8_ = DAT_1499387d0._8_8_ + dVar30;
      auVar26._8_8_ = -(ulonglong)(0.0 <= dVar30);
      auVar26._0_8_ = -(ulonglong)(0.0 <= dVar31);
      auVar2._8_8_ = dVar30;
      auVar2._0_8_ = dVar31;
      auVar25 = blendvpd(auVar29,auVar2,auVar26);
      auVar27._8_8_ = -(ulonglong)(180.0 < auVar25._8_8_);
      auVar27._0_8_ = -(ulonglong)(180.0 < auVar25._0_8_);
      auVar3._8_8_ = auVar25._8_8_ + -360.0;
      auVar3._0_8_ = auVar25._0_8_ + 0.0;
      auVar25 = blendvpd(auVar25,auVar3,auVar27);
      bVar21 = true;
      if (ABS(auVar25._8_8_) <= dVar4) goto LAB_140df689f;
    }
LAB_140df7445:
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
LAB_140df689f:
  if (((bool)(bVar9 & bVar21)) && (plVar15 = (longlong *)plVar15[0x7a], plVar15 != (longlong *)0x0))
  {
    if (DAT_14cb223d8 == 0) {
      local_600 = &local_5d8;
      local_5d8 = FUN_1449e2820;
      local_5f0 = FUN_14081d0ea;
      local_5f8 = FUN_1427b09ee;
      local_608 = &LAB_147f29feb;
      local_610 = FUN_1464384fe;
      local_618 = L"Engine";
      local_620 = 0;
      local_628 = 0x10004001;
      local_630 = 8;
      local_638 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar15 = (longlong *)(**(code **)(*plVar15 + 0x288))(plVar15,DAT_14cb223d8);
    if (plVar15 == (longlong *)0x0) goto LAB_140df6f61;
    if (DAT_14cb223d8 == 0) {
      local_600 = &local_5d8;
      local_5d8 = FUN_1449e2820;
      local_5f0 = FUN_14081d0ea;
      local_5f8 = FUN_1427b09ee;
      local_608 = &LAB_147f29feb;
      local_610 = FUN_1464384fe;
      local_618 = L"Engine";
      local_620 = 0;
      local_628 = 0x10004001;
      local_630 = 8;
      local_638 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar17 = (longlong *)FUN_144718840(plVar15,DAT_14cb223d8);
    bVar20 = 0;
    if ((plVar15 == plVar17) || (bVar20 = 0, plVar17 == (longlong *)0x0)) goto LAB_140df6f64;
    if (*(code **)(*plVar17 + 0x10) == (code *)&LAB_14486280e) {
      plVar17 = plVar17 + 5;
    }
    else {
      plVar17 = (longlong *)(**(code **)(*plVar17 + 0x10))(plVar17);
    }
    if (plVar17 == (longlong *)0x0) goto LAB_140df6f61;
    uVar12 = FUN_140df75ae(plVar17,param_1 + -0x63f);
    if ((!bVar22) || ((1 < uVar12 && (-1 < (char)param_1[0x72b])))) {
      if ((*(char *)((longlong)param_1 + 0x395b) == '\x01') && (param_1[0x729] != 0)) {
        bVar20 = *(byte *)(param_1[0x729] + 0x35);
      }
      else {
        bVar20 = 0;
      }
      bVar20 = uVar12 == 2 & bVar20;
      bVar21 = false;
      goto LAB_140df6f64;
    }
    bVar20 = 0;
  }
  else {
LAB_140df6f61:
    bVar20 = 0;
LAB_140df6f64:
    if ((bVar20 == 0) && (!bVar21)) goto LAB_140df6e9c;
  }
  local_5d8 = (code *)0x0;
  dStack_5d0 = (double)CONCAT44(dStack_5d0._4_4_,0x10);
  local_5c8 = 0.0;
  dStack_5c0 = (double)CONCAT71(dStack_5c0._1_7_,1);
  local_5b8 = 0;
  local_5b0 = 0xf00000d0;
  local_5a8 = 0;
  local_5a0 = 4;
  local_598 = 0;
  local_590 = 0;
  uStack_588 = 0;
  local_580 = 0;
  uStack_578 = 0;
  local_570 = 0;
  uStack_568 = 0;
  local_560 = 0xf00000d0;
  local_558 = 0;
  local_550 = 0x3f800000;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_528 = 0;
  local_518 = 0;
  local_510 = 0;
  local_520 = &PTR_FUN_14b023b20;
  local_508 = &PTR_FUN_14b023b40;
  local_500 = 0;
  uStack_4f8 = 0;
  local_4f0 = &PTR_FUN_14b00be70;
  local_4e8 = 0;
  local_4e0 = 0xf00000d0;
  local_4d8 = 0;
  local_4d0 = 0;
  local_4cc = 0;
  local_4c8 = 0;
  local_4c4 = 1;
  local_4c0 = 0;
  local_4b8 = 0xf00000d0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_4a0 = 0xf00000d0;
  local_498 = 0;
  local_490 = 0;
  local_48c = 0;
  local_488 = 0;
  local_484 = 6;
  local_480 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_478 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_470 = 0;
  local_468 = 0;
  local_460 = 0;
  local_458 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_440 = 0;
  uStack_438 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_420 = 0xf00000d0;
  local_418 = 0;
  local_410 = 0x3f800000;
  local_3b0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = 0;
  local_3a8 = 0;
  local_3a0 = 0x10;
  local_398 = 0;
  local_390 = 1;
  local_388 = 0;
  local_380 = 0xf00000d0;
  local_378 = 0;
  local_370 = 4;
  local_368 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0xf00000d0;
  local_328 = 0;
  local_320 = 0x3f800000;
  local_318 = 0;
  uStack_310 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2f8 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2f0 = &PTR_FUN_14b023b20;
  local_2d8 = &PTR_FUN_14b023b40;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2c0 = &PTR_FUN_14b00be70;
  local_2b8 = 0;
  local_2b0 = 0xf00000d0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_298 = 0;
  local_294 = 1;
  local_290 = 0;
  local_288 = 0xf00000d0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0xf00000d0;
  local_268 = 0;
  local_260 = 0;
  local_25c = 0;
  local_258 = 0;
  local_254 = 6;
  local_250 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_248 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0xf00000d0;
  local_1e8 = 0;
  local_1e0 = 0x3f800000;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_164 = 0;
  uStack_174 = 0;
  local_180 = 1;
  local_178 = 3;
  if (lVar14 != 0) {
    plVar15 = (longlong *)(lVar14 + 0x250);
    if (bVar20 == 0) {
      plVar15 = (longlong *)(lVar14 + 0x238);
    }
    lVar14 = *plVar15;
    bVar22 = local_3a8 != lVar14;
    local_3a8 = lVar14;
    if (bVar22) {
      local_398 = 0;
    }
  }
  uStack_170 = 0;
  local_16e = 0;
  uStack_16c = 0;
  uStack_168 = 0x100;
  if ((code **)(param_3 + 0x10) != &local_5d8) {
    FUN_14007afac((code **)(param_3 + 0x10),&local_5d8);
  }
  FUN_144908ac8(&local_3a8);
  FUN_144908ac8(&local_5d8);
LAB_140df6e9c:
  if ((local_d0 ^ (ulonglong)auStack_658) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140df74c8 FUN_140df74c8 body=228 status=ok
// SIG undefined FUN_140df74c8(void)

longlong FUN_140df74c8(void)

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
  if (DAT_14cbbfe60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148cb478f;
    local_40 = FUN_146615178;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"Reviver",&DAT_14cbbfe60,&DAT_148cb478e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbfe60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df75ae FUN_140df75ae body=378 status=ok
// SIG undefined FUN_140df75ae(void)

undefined4 FUN_140df75ae(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined2 local_70;
  longlong local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined2 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_2[3];
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (*(longlong *)(param_1 + 0x18) == lVar1) {
    uVar2 = 1;
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 2;
    if (&local_98 != param_2) {
      FUN_140df772a(&local_98,param_2);
    }
    local_80 = param_2[3];
    if ((local_80 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_78 = param_2[4];
    local_70 = (undefined2)param_2[5];
    local_68 = param_2[6];
    local_60 = param_2[7];
    local_58 = (undefined2)param_2[8];
    local_50 = param_2[9];
    local_48 = (undefined4)param_2[10];
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x54);
    uStack_40 = (undefined4)param_2[0xb];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x5c);
    if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    }
    local_30 = local_70;
    local_38 = local_78;
    local_28 = local_68;
    uVar2 = FUN_1448618b0(param_1 + 0x20,&local_38,uVar3);
    FUN_144760e21(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df772a FUN_140df772a body=389 status=ok
// SIG undefined FUN_140df772a(void)

/* WARNING: Removing unreachable block (ram,0x000140df788d) */

void FUN_140df772a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df78be FUN_140df78be body=91 status=ok
// SIG undefined FUN_140df78be(void)

undefined8 * FUN_140df78be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4a8e40;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140df7928 FUN_140df7928 body=61 status=ok
// SIG undefined FUN_140df7928(void)

undefined8 * FUN_140df7928(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b314000;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140df7966 FUN_140df7966 body=87 status=ok
// SIG undefined FUN_140df7966(void)

void FUN_140df7966(longlong param_1)

{
  FUN_140df79be(param_1 + 0x168,0);
  FUN_140bd5056(*(undefined8 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x160));
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x164) == 0) {
    return;
  }
  FUN_140395806(param_1 + 0x158,0);
  return;
}



// FUNCTION 140df79be FUN_140df79be body=107 status=ok
// SIG undefined FUN_140df79be(void)

void FUN_140df79be(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_140df7a0d:
      FUN_140bd50fc(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140395db0(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140df7a0d;
  FUN_140df7a2a(param_1);
  FUN_140bd50fc(param_1,param_2);
  return;
}



// FUNCTION 140df7a2a FUN_140df7a2a body=327 status=ok
// SIG undefined FUN_140df7a2a(void)

void FUN_140df7a2a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 140df7b7f FUN_140df7b7f body=297 status=ok
// SIG undefined FUN_140df7b7f(void)

void FUN_140df7b7f(longlong param_1,undefined4 param_2)

{
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
  if (param_1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
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
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_140df7bd7;
  }
  param_1 = 0;
LAB_140df7bd7:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140df7ca9(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df7ca9 FUN_140df7ca9 body=119 status=ok
// SIG undefined FUN_140df7ca9(void)

int FUN_140df7ca9(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if ((param_1 != 0) && (lVar2 = FUN_140df7d20(), lVar2 != param_1)) {
    uVar3 = FUN_1401e6c61();
    iVar1 = FUN_140df7d8e(param_1,uVar3);
    lVar2 = FUN_1405c6693(param_1);
    iVar4 = 1;
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + 0x5e0);
    }
    iVar4 = (iVar1 + param_2) - iVar4;
    FUN_140d72879();
    FUN_1401e6c61();
    param_2 = FUN_140b0af60();
    if (iVar4 < param_2) {
      param_2 = iVar4;
    }
    if (param_2 < 2) {
      param_2 = 1;
    }
  }
  return param_2;
}



// FUNCTION 140df7d20 FUN_140df7d20 body=110 status=ok
// SIG undefined FUN_140df7d20(void)

undefined8 FUN_140df7d20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x170) != 0)) {
    lVar3 = FUN_140425b9a();
    plVar1 = *(longlong **)(lVar2 + 0x170);
    if (((plVar1 != (longlong *)0x0) &&
        (((lVar3 != 0 && (lVar2 = plVar1[2], lVar2 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000140df7d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x9c0))();
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140df7d8e FUN_140df7d8e body=317 status=ok
// SIG undefined FUN_140df7d8e(void)

undefined4 FUN_140df7d8e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
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
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x398);
  uVar4 = 1;
  if (lVar3 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar3 = *(longlong *)(param_1 + 0x398);
      if (lVar3 == 0) goto LAB_140df7dfa;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      puVar2 = (undefined4 *)FUN_1409e484c(lVar3,param_2);
      uVar4 = *puVar2;
    }
  }
LAB_140df7dfa:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140df7ecc FUN_140df7ecc body=105 status=ok
// SIG undefined FUN_140df7ecc(void)

undefined8 * FUN_140df7ecc(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = &PTR_LAB_14b9dd5f0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffffffff;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = param_3;
  FUN_140df7f36(puVar1 + 2,param_3,1);
  *puVar1 = &PTR_FUN_14b9dd4b0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 140df7f36 FUN_140df7f36 body=134 status=ok
// SIG undefined FUN_140df7f36(void)

void FUN_140df7f36(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140df801a(param_1,iVar1);
    }
    FUN_140df7fbc((longlong)iVar1 * 0xb0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148f0527a(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148f052e0(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140df7fbc FUN_140df7fbc body=94 status=ok
// SIG undefined FUN_140df7fbc(void)

void FUN_140df7fbc(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[1] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + 0x14) = 0;
    memset(param_1 + 3,0,0x8c);
    *param_1 = &PTR_FUN_14b8fbe80;
    *(undefined2 *)(param_1 + 0x15) = 0;
    param_1 = param_1 + 0x16;
  }
  return;
}



// FUNCTION 140df801a FUN_140df801a body=271 status=ok
// SIG undefined FUN_140df801a(void)

void FUN_140df801a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xb0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140df8134 FUN_140df8134 body=236 status=ok
// SIG undefined FUN_140df8134(void)

void FUN_140df8134(undefined8 param_1,undefined4 param_2,char **param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined4 local_70;
  ulonglong local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined6 uStack_44;
  undefined2 uStack_3e;
  undefined6 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140df8222();
  local_78 = "PS5TriggerEffect";
  local_70 = 0x10;
  local_6c = local_6c & 0xffffffffffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  if (*param_3 != (char *)(ulonglong)uVar2) {
    local_78 = "PS5TriggerEffect";
    local_70 = 0x10;
    local_6c = local_6c & 0xffffffffffffff00;
    uVar2 = FUN_14001a6c0(&local_78,1);
    local_78 = (char *)(ulonglong)uVar2;
    local_70 = CONCAT22(local_70._2_2_,0x100);
    local_6c = 0;
    uStack_64 = 0;
    local_5c = 0;
    uStack_54 = 0;
    local_4c = 0;
    uStack_44 = 0;
    uStack_3e = 0;
    uStack_3c = 0;
    cVar1 = FUN_140df84a2(param_1,param_3,&local_78);
    if (cVar1 == '\0') goto LAB_140df8193;
    param_3 = &local_78;
  }
  FUN_140df8332(param_1,param_2,param_3);
LAB_140df8193:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140df8222 FUN_140df8222 body=270 status=ok
// SIG undefined FUN_140df8222(void)

void FUN_140df8222(longlong param_1,int param_2,ulonglong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = "InputDeviceLightColor";
  local_28 = 0x15;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  if (*param_3 != (ulonglong)uVar1) {
    local_30 = "InputDeviceAnalogStickDeadZone";
    local_28 = 0x1e;
    local_24 = 0;
    uVar1 = FUN_14001a6c0(&local_30,1);
    if (*param_3 == (ulonglong)uVar1) {
      lVar2 = 0x374;
      do {
        if (*(int *)(param_1 + -100 + lVar2) == param_2) {
          if ((char)param_3[1] == '\x02') {
            *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)((longlong)param_3 + 0xc);
          }
          else if ((char)param_3[1] == '\x01') {
            *(undefined4 *)(param_1 + -4 + lVar2) = *(undefined4 *)((longlong)param_3 + 0xc);
          }
          break;
        }
        lVar2 = lVar2 + 0x278;
      } while (lVar2 != 0xd54);
      goto LAB_140df82c1;
    }
    local_30 = "SonyLightColor";
    local_28 = 0xe;
    local_24 = 0;
    uVar1 = FUN_14001a6c0(&local_30,1);
    if (*param_3 != (ulonglong)uVar1) goto LAB_140df82c1;
  }
  FUN_14980ab12(param_1,param_2,*(undefined4 *)((longlong)param_3 + 0xc),(char)param_3[1]);
LAB_140df82c1:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140df8332 FUN_140df8332 body=367 status=ok
// SIG undefined FUN_140df8332(void)

void FUN_140df8332(longlong param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != (undefined4 *)0x0) {
    lVar5 = 0x318;
    do {
      if (((*(int *)(param_1 + -8 + lVar5) == param_2) &&
          ((*(byte *)((longlong)param_3 + 9) & 1) != 0)) &&
         (bVar1 = *(byte *)(param_3 + 2), bVar1 != 0)) {
        uStack_90 = 0;
        local_38 = 0;
        uStack_30 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_28 = 0;
        local_98 = (ulonglong)bVar1;
        if ((bVar1 & 1) != 0) {
          uStack_90 = (ulonglong)(uint)param_3[3];
          local_88 = *(undefined8 *)(param_3 + 4);
          uStack_80 = *(undefined8 *)(param_3 + 6);
          local_78 = *(undefined8 *)(param_3 + 8);
          uStack_70 = *(undefined8 *)(param_3 + 10);
          local_68 = *(undefined8 *)(param_3 + 0xc);
          uStack_60 = *(undefined8 *)(param_3 + 0xe);
          puVar3 = param_3;
          puVar4 = (undefined4 *)(param_1 + (longlong)param_2 * 0x88 + 0xb70);
          for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar1 = *(byte *)(param_3 + 2);
        }
        if ((bVar1 & 2) != 0) {
          local_58 = (ulonglong)(uint)param_3[3];
          uStack_50 = *(undefined8 *)(param_3 + 4);
          local_48 = *(undefined8 *)(param_3 + 6);
          uStack_40 = *(undefined8 *)(param_3 + 8);
          local_38 = *(undefined8 *)(param_3 + 10);
          uStack_30 = *(undefined8 *)(param_3 + 0xc);
          local_28 = *(undefined8 *)(param_3 + 0xe);
          puVar3 = (undefined4 *)(param_1 + (longlong)param_2 * 0x88 + 0xbb4);
          for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar3 = *param_3;
            param_3 = param_3 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        FUN_144b46b00(*(undefined4 *)(param_1 + lVar5),&local_98);
        break;
      }
      lVar5 = lVar5 + 0x278;
    } while (lVar5 != 0xcf8);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140df84a2 FUN_140df84a2 body=390 status=ok
// SIG undefined FUN_140df84a2(void)

ulonglong FUN_140df84a2(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = "InputDeviceTriggerResetProperty";
  local_20 = 0x1f;
  local_1c = 0;
  uVar5 = FUN_14001a6c0(&local_28,1);
  if (*param_2 == (ulonglong)uVar5) {
    uVar6 = (ulonglong)(uint)param_2[1];
    if (3 < (byte)(uint)param_2[1]) {
      uVar6 = 0;
    }
    *(char *)(param_3 + 8) = (char)uVar6;
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  else {
    local_28 = "InputDeviceTriggerFeedback";
    local_20 = 0x1a;
    local_1c = 0;
    uVar5 = FUN_14001a6c0(&local_28,1);
    if (*param_2 == (ulonglong)uVar5) {
      uVar2 = (undefined4)param_2[1];
      uVar7 = 0;
      if ((byte)uVar2 < 4) {
        uVar7 = uVar2;
      }
      *(char *)(param_3 + 8) = (char)uVar7;
      *(undefined4 *)(param_3 + 0xc) = 1;
      uVar6 = (ulonglong)CONCAT31((int3)((uint)uVar2 >> 8),*(undefined1 *)((longlong)param_2 + 0xc))
      ;
      uVar4 = param_2[2];
      *(undefined1 *)(param_3 + 0x10) = *(undefined1 *)((longlong)param_2 + 0xc);
      *(char *)(param_3 + 0x11) = (char)uVar4;
    }
    else {
      local_28 = "InputDeviceTriggerResistance";
      local_20 = 0x1c;
      local_1c = 0;
      uVar5 = FUN_14001a6c0(&local_28,1);
      if (*param_2 == (ulonglong)uVar5) {
        uVar2 = (undefined4)param_2[1];
        uVar7 = 0;
        if ((byte)uVar2 < 4) {
          uVar7 = uVar2;
        }
        *(char *)(param_3 + 8) = (char)uVar7;
        *(undefined4 *)(param_3 + 0xc) = 5;
        uVar4 = param_2[3];
        uVar6 = (ulonglong)CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar4);
        uVar1 = *(undefined1 *)((longlong)param_2 + 0x14);
        uVar3 = param_2[2];
        *(undefined1 *)(param_3 + 0x10) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(char *)(param_3 + 0x12) = (char)uVar3;
        *(undefined1 *)(param_3 + 0x11) = uVar1;
        *(char *)(param_3 + 0x13) = (char)uVar4;
      }
      else {
        local_28 = "InputDeviceTriggerVibration";
        local_20 = 0x1b;
        local_1c = 0;
        uVar5 = FUN_14001a6c0(&local_28,1);
        uVar6 = 0;
        if (*param_2 != (ulonglong)uVar5) goto LAB_140df857b;
        if ((byte)(uint)param_2[1] < 4) {
          uVar6 = (ulonglong)(uint)param_2[1];
        }
        *(char *)(param_3 + 8) = (char)uVar6;
        *(undefined4 *)(param_3 + 0xc) = 3;
        uVar1 = *(undefined1 *)((longlong)param_2 + 0x14);
        uVar6 = CONCAT71((int7)(uVar6 >> 8),uVar1);
        uVar4 = param_2[2];
        *(undefined1 *)(param_3 + 0x10) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(char *)(param_3 + 0x12) = (char)uVar4;
        *(undefined1 *)(param_3 + 0x11) = uVar1;
      }
    }
  }
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
LAB_140df857b:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df862a FUN_140df862a body=96 status=ok
// SIG undefined FUN_140df862a(void)

void FUN_140df862a(longlong param_1)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  cVar1 = FUN_140df868c(param_1 + 0x28);
  if (cVar1 == '\0') {
    fVar2 = *(float *)(param_1 + 0x10);
  }
  else {
    fVar2 = (float)local_14 * 0.001;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 140df868c FUN_140df868c body=273 status=ok
// SIG undefined FUN_140df868c(void)

ulonglong FUN_140df868c(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  AKRESULT AVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined8 unaff_RDI;
  undefined7 uVar7;
  ulonglong *puVar8;
  
  if ((((param_1[2] == 0) || (plVar1 = (longlong *)*param_1, plVar1 == (longlong *)0x0)) ||
      (param_1[1] == -1)) || (*plVar1 != param_1[1])) {
    uVar5 = 0;
    goto LAB_140df874a;
  }
  iVar4 = (int)plVar1[0x21];
  *(int *)(plVar1 + 0x21) = iVar4 + 1;
  uVar5 = param_1[2];
  if (uVar5 == 0) {
LAB_140df877f:
    bVar6 = 0;
    uVar7 = 0;
  }
  else {
    puVar8 = (ulonglong *)(plVar1 + 0x24);
    do {
      uVar2 = *puVar8;
      puVar8 = (ulonglong *)(uVar2 + 0x30);
    } while (uVar2 != 0 && uVar5 != uVar2);
    if (uVar2 == 0) goto LAB_140df877f;
    uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
    bVar6 = 1;
    AVar3 = AK::SoundEngine::GetSourcePlayPosition(*(uint *)(uVar2 + 8),param_2,true);
    uVar5 = (ulonglong)(AVar3 == 1);
    iVar4 = (int)plVar1[0x21] + -1;
  }
  uVar5 = CONCAT71(uVar7,bVar6 & (byte)uVar5);
  *(int *)(plVar1 + 0x21) = iVar4;
  if ((int)plVar1[0x26] < 1) {
    FUN_1400847bc(plVar1 + 0x17,0);
    if ((int)plVar1[0x21] == 0) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140df874a;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_140df874a:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140df879e FUN_140df879e body=776 status=ok
// SIG undefined FUN_140df879e(void)

void FUN_140df879e(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  if (*(int *)(param_1 + 0x4ec) < 0) {
    FUN_1474da402(param_1 + 0x4e0,0);
  }
  *(undefined1 *)(param_1 + 0x4f0) = 0;
  *(undefined1 *)(param_1 + 0x4f8) = 3;
  local_28 = *(undefined8 *)(param_1 + 0x38);
  local_20 = *(undefined4 *)(param_1 + 0x40);
  FUN_140df8b76(param_1 + 0x4e0);
  local_2c = 0xffffffff;
  FUN_140900d9a(param_1 + 0x500,&local_2c,*(undefined4 *)(param_1 + 0x50));
  FUN_140df8aa8(param_1 + 0x60);
  FUN_140df8aa8(param_1 + 0x1b0);
  if (*(int *)(param_1 + 0x314) < 8) {
    FUN_140df8c06(param_1 + 0x308,8);
  }
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    FUN_14481578e(param_1 + 0x350,0);
  }
  *(undefined4 *)(param_1 + 0x368) = 0;
  if (*(int *)(param_1 + 0x36c) != 0) {
    FUN_140678446(param_1 + 0x360,0);
  }
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    FUN_14482f6fa(param_1 + 0x370,0);
  }
  *(undefined4 *)(param_1 + 0x388) = 0;
  if (*(int *)(param_1 + 0x38c) != 0) {
    FUN_14482f6fa(param_1 + 0x380,0);
  }
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(int *)(param_1 + 0x39c) != 0) {
    FUN_140678446(param_1 + 0x390,0);
  }
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  if (*(int *)(param_1 + 0x3ac) != 0) {
    FUN_14482f6fa(param_1 + 0x3a0,0);
  }
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  if (*(int *)(param_1 + 0x3bc) != 0) {
    FUN_14482f6fa(param_1 + 0x3b0,0);
  }
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  if (*(int *)(param_1 + 0x3cc) != 0) {
    FUN_140678446(param_1 + 0x3c0,0);
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (*(int *)(param_1 + 0x3dc) != 0) {
    FUN_14482f6fa(param_1 + 0x3d0,0);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(int *)(param_1 + 0x3ec) != 0) {
    FUN_14482f6fa(param_1 + 0x3e0,0);
  }
  if (*(int *)(param_1 + 0x42c) < 0) {
    *(undefined4 *)(param_1 + 0x428) = 0;
    FUN_14010237e(param_1 + 0x420,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  *(undefined1 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  if (*(int *)(param_1 + 0x344) != 0) {
    FUN_14482f6fa(param_1 + 0x338,0);
  }
  *(undefined8 *)(param_1 + 0x348) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df8aa8 FUN_140df8aa8 body=206 status=ok
// SIG undefined FUN_140df8aa8(void)

void FUN_140df8aa8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_14481578e(param_1 + 0xd0,0);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_1447a8aa0(param_1 + 0xe0,0);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_1401017f4(param_1 + 0xf0,0);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_1447a8aa0(param_1 + 0x100,0);
  }
  if (*(int *)(param_1 + 0x11c) < 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN_140507fc4(param_1 + 0x110,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}



// FUNCTION 140df8b76 FUN_140df8b76 body=143 status=ok
// SIG undefined FUN_140df8b76(void)

void FUN_140df8b76(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = (int)param_2[1];
  iVar4 = (int)param_1[1] + iVar3;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
    FUN_1474da402(param_1);
    iVar3 = (int)param_2[1];
  }
  if (iVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      iVar4 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
        FUN_1474d5ad8(param_1,iVar4);
      }
      lVar2 = *param_1;
      *(undefined8 *)(lVar2 + (longlong)iVar4 * 0xc) = *(undefined8 *)(lVar1 + lVar5);
      *(undefined1 *)(lVar2 + 8 + (longlong)iVar4 * 0xc) = 2;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar3 * 8 != lVar5);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 140df8c06 FUN_140df8c06 body=230 status=ok
// SIG undefined FUN_140df8c06(void)

void FUN_140df8c06(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x19a) {
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
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 140df8cec FUN_140df8cec body=40 status=ok
// SIG undefined FUN_140df8cec(void)

undefined8 FUN_140df8cec(undefined8 param_1,int param_2)

{
  FUN_140df8d14();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140df8d14 FUN_140df8d14 body=81 status=ok
// SIG undefined FUN_140df8d14(void)

void FUN_140df8d14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa50c90;
  param_1[0x79] = &PTR_FUN_14aa51300;
  if (param_1[400] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17f] != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 140df8d66 FUN_140df8d66 body=40 status=ok
// SIG undefined FUN_140df8d66(void)

undefined8 FUN_140df8d66(undefined8 param_1,int param_2)

{
  FUN_140df8d8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140df8d8e FUN_140df8d8e body=497 status=ok
// SIG undefined FUN_140df8d8e(void)

void FUN_140df8d8e(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac46c60;
  plVar1 = param_1 + 0x29;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x21;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x25) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x24)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x24)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x19;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x12;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 140df8f80 FUN_140df8f80 body=18 status=ok
// SIG undefined FUN_140df8f80(void)

void FUN_140df8f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140df8f92(param_3);
  return;
}



// FUNCTION 140df8f92 FUN_140df8f92 body=166 status=ok
// SIG undefined FUN_140df8f92(void)

bool FUN_140df8f92(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  lVar1 = FUN_1401e9420(*param_2,&local_38,0);
  if (lVar1 != 0) {
    *param_2 = lVar1;
    puVar2 = local_38;
    if ((int)uStack_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_40,puVar2,1);
    *param_1 = local_40;
    FUN_1409a0368(param_1);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 != 0;
}



// FUNCTION 140df903a FUN_140df903a body=49 status=ok
// SIG undefined FUN_140df903a(void)

void FUN_140df903a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140df9088(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140df904f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_140df91e0(&DAT_14cb6fe18);
  FUN_140e354a8(uVar2);
  return;
}



// FUNCTION 140df906c FUN_140df906c body=28 status=ok
// SIG undefined FUN_140df906c(void)

void FUN_140df906c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140df91e0(&DAT_14cb6fe18);
  FUN_140e354a8(uVar1);
  return;
}



// FUNCTION 140df9088 FUN_140df9088 body=191 status=ok
// SIG undefined FUN_140df9088(void)

longlong FUN_140df9088(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140df9148();
  lVar3 = *param_1;
  if (DAT_14cb6fdc8 != DAT_14cb6fdf4) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb6fdf8;
    if (DAT_14cb6fe00 != (undefined *)0x0) {
      puVar7 = DAT_14cb6fe00;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb6fe08 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb6fdc0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb6fdb8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140df9148 FUN_140df9148 body=152 status=ok
// SIG undefined FUN_140df9148(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140df9148(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb6fe10) {
    FUN_144b3d300(&DAT_14cb6fe10);
    if (DAT_14cb6fe10 == -1) {
      DAT_14cb6fde0 = 0;
      DAT_14cb6fde8 = 0;
      DAT_14cb6fdc0 = 0;
      _DAT_14cb6fdc8 = 0;
      _DAT_14cb6fdec = 0xffffffff00000080;
      DAT_14cb6fdf4 = 0;
      DAT_14cb6fe00 = 0;
      DAT_14cb6fe08 = 0;
      atexit(FUN_143c8ce73);
      _Init_thread_footer(&DAT_14cb6fe10);
      return;
    }
  }
  return;
}



// FUNCTION 140df91e0 FUN_140df91e0 body=96 status=ok
// SIG undefined FUN_140df91e0(void)

void FUN_140df91e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0xd00,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x1a;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140df9240 FUN_140df9240 body=192 status=ok
// SIG undefined FUN_140df9240(void)

void FUN_140df9240(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 200))(*(longlong **)(param_1 + 0x10),&local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
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
  if (local_38 != 0) {
    FUN_140df9302(local_38,*(undefined8 *)(param_1 + 0x18));
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df9302 FUN_140df9302 body=1583 status=ok
// SIG undefined FUN_140df9302(void)

void FUN_140df9302(longlong *param_1,undefined8 param_2)

{
  longlong **pplVar1;
  int *piVar2;
  longlong **pplVar3;
  longlong *plVar4;
  longlong **pplVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong **local_68;
  int local_5c;
  longlong *local_58;
  longlong **pplStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_1[7] != 0) && ((longlong *)param_1[8] != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[8] + 0x138))(), cVar6 == '\0')) {
    plVar4 = param_1 + 9;
    FUN_140df9946(param_2,&local_70);
    pplVar5 = local_68;
    if (local_68 == (longlong **)0x0) {
      pplStack_50 = (longlong **)0x0;
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      UNLOCK();
      pplStack_50 = local_68;
      LOCK();
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      UNLOCK();
    }
    local_58 = local_70;
    uVar7 = (**(code **)(*local_70 + 0x40))();
    iVar8 = FUN_140e74adc(plVar4,uVar7,&local_58);
    pplVar1 = pplStack_50;
    if (iVar8 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar8 * 0x28 + *plVar4;
    }
    if (pplStack_50 != (longlong **)0x0) {
      LOCK();
      pplVar3 = pplStack_50 + 1;
      *(int *)pplVar3 = *(int *)pplVar3 + -1;
      UNLOCK();
      if (*(int *)pplVar3 == 0) {
        (*(code *)**pplStack_50)(pplStack_50);
        LOCK();
        piVar2 = (int *)((longlong)pplVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar1)[2])(pplVar1);
        }
      }
    }
    if (pplVar5 != (longlong **)0x0) {
      LOCK();
      pplVar1 = pplVar5 + 1;
      *(int *)pplVar1 = *(int *)pplVar1 + -1;
      UNLOCK();
      if (*(int *)pplVar1 == 0) {
        (*(code *)**pplVar5)(pplVar5);
        LOCK();
        piVar2 = (int *)((longlong)pplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar5)[2])(pplVar5);
        }
      }
    }
    pplVar5 = local_68;
    if (local_68 != (longlong **)0x0) {
      LOCK();
      pplVar1 = local_68 + 1;
      *(int *)pplVar1 = *(int *)pplVar1 + -1;
      UNLOCK();
      if (*(int *)pplVar1 == 0) {
        (*(code *)**local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)pplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar5)[2])(pplVar5);
        }
      }
    }
    if (lVar10 == 0) {
      plVar11 = (longlong *)FUN_14001cc68(0x90,0x10);
      FUN_1457b1d14(plVar11);
      local_70 = plVar11;
      local_68 = (longlong **)FUN_14001cc68(0x18,0x10);
      local_68[1] = (longlong *)&DAT_100000001;
      *local_68 = (longlong *)&PTR_FUN_14ba45d00;
      local_68[2] = plVar11;
      FUN_140df9946(param_2,&local_90);
      local_80 = local_90;
      local_78 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      local_58 = &local_80;
      pplStack_50 = &local_70;
      FUN_1457b1d76(plVar4,&local_5c);
      plVar11 = local_78;
      lVar10 = *plVar4;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_78 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_88 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_88 + 0x10))(local_88);
          }
        }
      }
      pplVar5 = local_68;
      if (local_68 != (longlong **)0x0) {
        LOCK();
        pplVar1 = local_68 + 1;
        *(int *)pplVar1 = *(int *)pplVar1 + -1;
        UNLOCK();
        if (*(int *)pplVar1 == 0) {
          (*(code *)**local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)pplVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar5)[2])(pplVar5);
          }
        }
      }
      lVar10 = lVar10 + (longlong)local_5c * 0x28;
    }
    plVar11 = (longlong *)(lVar10 + 0x10);
    FUN_140df9d1a(*plVar11,param_2);
    plVar4 = param_1 + 0x13;
    FUN_140df9946(param_2,&local_70);
    pplVar5 = local_68;
    if (local_68 == (longlong **)0x0) {
      pplStack_50 = (longlong **)0x0;
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      UNLOCK();
      pplStack_50 = local_68;
      LOCK();
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      UNLOCK();
    }
    local_58 = local_70;
    uVar7 = (**(code **)(*local_70 + 0x40))();
    iVar8 = FUN_140df9b50(plVar4,uVar7,&local_58);
    pplVar1 = pplStack_50;
    if (iVar8 == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)iVar8 * 0x28 + *plVar4;
    }
    if (pplStack_50 != (longlong **)0x0) {
      LOCK();
      pplVar3 = pplStack_50 + 1;
      *(int *)pplVar3 = *(int *)pplVar3 + -1;
      UNLOCK();
      if (*(int *)pplVar3 == 0) {
        (*(code *)**pplStack_50)(pplStack_50);
        LOCK();
        piVar2 = (int *)((longlong)pplVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar1)[2])(pplVar1);
        }
      }
    }
    if (pplVar5 != (longlong **)0x0) {
      LOCK();
      pplVar1 = pplVar5 + 1;
      *(int *)pplVar1 = *(int *)pplVar1 + -1;
      UNLOCK();
      if (*(int *)pplVar1 == 0) {
        (*(code *)**pplVar5)(pplVar5);
        LOCK();
        piVar2 = (int *)((longlong)pplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar5)[2])(pplVar5);
        }
      }
    }
    pplVar5 = local_68;
    plVar12 = (longlong *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      plVar12 = (longlong *)0x0;
    }
    if (local_68 != (longlong **)0x0) {
      LOCK();
      pplVar1 = local_68 + 1;
      *(int *)pplVar1 = *(int *)pplVar1 + -1;
      UNLOCK();
      if (*(int *)pplVar1 == 0) {
        (*(code *)**local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)pplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar5)[2])(pplVar5);
        }
      }
    }
    if (plVar12 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      lVar9 = *plVar11;
      plVar4 = *(longlong **)(lVar10 + 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      pplStack_50 = (longlong **)&DAT_00000001;
      FUN_140df9c0c(&local_58,0);
      *local_58 = lVar9;
      local_58[1] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      (**(code **)(*param_1 + 0x60))(param_1,param_2,&local_58);
      local_70 = (longlong *)*plVar11;
      local_68 = *(longlong ***)(lVar10 + 0x18);
      if (local_68 != (longlong **)0x0) {
        LOCK();
        *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_70);
      pplVar5 = local_68;
      if (local_68 != (longlong **)0x0) {
        LOCK();
        pplVar1 = local_68 + 1;
        *(int *)pplVar1 = *(int *)pplVar1 + -1;
        UNLOCK();
        if (*(int *)pplVar1 == 0) {
          (*(code *)**local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)pplVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar5)[2])(pplVar5);
          }
        }
      }
      FUN_140df9a57(local_58,(ulonglong)pplStack_50 & 0xffffffff);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (((int)((longlong *)*plVar12)[1] != 0) &&
         (plVar11 = *(longlong **)*plVar12, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x60))(plVar11,param_2,1);
      }
      FUN_140df9946(param_2,&local_70);
      pplVar5 = local_68;
      if (local_68 == (longlong **)0x0) {
        local_58 = local_70;
        pplStack_50 = (longlong **)0x0;
        FUN_148fba50c(plVar4);
      }
      else {
        LOCK();
        *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
        UNLOCK();
        local_58 = local_70;
        pplStack_50 = local_68;
        LOCK();
        *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
        UNLOCK();
        FUN_148fba50c(plVar4);
        LOCK();
        pplVar1 = pplVar5 + 1;
        *(int *)pplVar1 = *(int *)pplVar1 + -1;
        UNLOCK();
        if (*(int *)pplVar1 == 0) {
          (*(code *)**pplVar5)(pplVar5);
          LOCK();
          piVar2 = (int *)((longlong)pplVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar5)[2])(pplVar5);
          }
        }
      }
      pplVar5 = local_68;
      if (local_68 != (longlong **)0x0) {
        LOCK();
        pplVar1 = local_68 + 1;
        *(int *)pplVar1 = *(int *)pplVar1 + -1;
        UNLOCK();
        if (*(int *)pplVar1 == 0) {
          (*(code *)**local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)pplVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar5)[2])(pplVar5);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140df9946 FUN_140df9946 body=99 status=ok
// SIG undefined FUN_140df9946(void)

undefined8 * FUN_140df9946(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_140df9988:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140df9988;
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
    *param_2 = *(undefined8 *)(param_1 + 8);
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 140df99aa FUN_140df99aa body=173 status=ok
// SIG undefined FUN_140df99aa(void)

void FUN_140df99aa(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140df9a41;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140df9a41:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140df9a57 FUN_140df9a57 body=75 status=ok
// SIG undefined FUN_140df9a57(void)

void FUN_140df9a57(longlong param_1,int param_2)

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



// FUNCTION 140df9aa2 FUN_140df9aa2 body=173 status=ok
// SIG undefined FUN_140df9aa2(void)

void FUN_140df9aa2(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140df9b39;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140df9b39:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140df9b50 FUN_140df9b50 body=188 status=ok
// SIG undefined FUN_140df9b50(void)

int FUN_140df9b50(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar3;
        puVar4 = *(undefined8 **)(lVar7 + lVar8 * 0x28);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8 * 0x28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_3) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
        if (plVar6 != (longlong *)0x0) {
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
        if (cVar5 != '\0') {
          return iVar3;
        }
        lVar7 = *param_1;
        iVar3 = *(int *)(lVar7 + 0x20 + lVar8 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140df9c0c FUN_140df9c0c body=269 status=ok
// SIG undefined FUN_140df9c0c(void)

void FUN_140df9c0c(longlong param_1,int param_2)

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



// FUNCTION 140df9d1a FUN_140df9d1a body=2163 status=ok
// SIG undefined FUN_140df9d1a(void)

void FUN_140df9d1a(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  size_t sVar13;
  wchar_t *pwVar14;
  undefined1 uVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  ushort uVar23;
  ushort uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  uint local_150;
  undefined4 uStack_14c;
  int local_148;
  wchar_t *local_140;
  int local_138;
  undefined8 local_130;
  undefined8 local_128 [2];
  undefined8 local_118;
  wchar_t **local_110;
  wchar_t **local_108;
  undefined1 local_fc [4];
  undefined1 local_f8;
  undefined7 uStack_f7;
  longlong *local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  wchar_t **local_78;
  wchar_t **local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_140dfac6a();
  plVar9 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  plVar9 = (longlong *)*plVar9;
  if ((plVar9 == (longlong *)0x0) ||
     (plVar10 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764830), *plVar10 == 0))
  goto LAB_140dfa2b6;
  local_128[0] = 0;
  local_118 = 0;
  iVar7 = (**(code **)(*plVar9 + 0x28))(plVar9,*(undefined8 *)(param_2 + 0x18));
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffffe | (uint)(iVar7 == 3);
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  iVar7 = (**(code **)(*plVar9 + 0x30))(plVar9,*(undefined8 *)(param_2 + 0x18));
  if (iVar7 - 1U < 6) {
    uVar15 = (undefined1)(0x3020400L >> ((char)(iVar7 - 1U) * '\b' & 0x3fU));
  }
  else {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
    uVar15 = 1;
  }
  *(undefined1 *)(param_1 + 6) = uVar15;
  cVar5 = (**(code **)(*plVar9 + 0x40))(plVar9,*(undefined8 *)(param_2 + 0x18),local_128);
  if (cVar5 == '\0') {
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xfffffffd;
    *param_1 = 0;
    plVar10 = (longlong *)param_1[1];
    if (plVar10 != (longlong *)0x0) {
      param_1[1] = 0;
      LOCK();
      plVar20 = plVar10 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
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
    uVar8 = *(uint *)(param_1 + 2) & 0xfffffff3;
  }
  else {
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 2;
    uVar18 = (uint)local_128[0] & 0xffffff;
    puVar11 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764830);
    uVar8 = (**(code **)(*(longlong *)*puVar11 + 0x48))();
    bVar26 = uVar18 == uVar8;
    uVar8 = (*(uint *)(param_1 + 2) & 0xfffffffb) + (uint)bVar26 * 4;
    *(uint *)(param_1 + 2) = uVar8;
    if (bVar26) {
      uVar18 = local_118._4_4_ >> 0x14 & 0xf;
      if (((0xfffffff5 < uVar18 - 0xb) && (0xfffffffb < ((int)local_118._4_4_ >> 0x18) - 5U)) &&
         ((uVar18 != 1 || (((local_118._4_4_ & 0xfffff) == 1 && ((int)local_118 != 0)))))) {
        if ((local_118._4_4_ & 0xf00000) == 0x300000) {
LAB_140dfa4c3:
          if ((int)local_118 == 0) goto LAB_140df9f67;
        }
        else if ((local_118._4_4_ & 0xf00000) == 0x700000) {
          if ((local_118 & 0xfffff00000000) != 0) goto LAB_140df9f67;
          goto LAB_140dfa4c3;
        }
        FUN_140dfab96(&local_f8,&local_118);
        plVar10 = local_f0;
        if (local_f0 == (longlong *)0x0) {
          *param_1 = CONCAT71(uStack_f7,local_f8);
          plVar20 = (longlong *)param_1[1];
          if (plVar20 != (longlong *)0x0) {
            param_1[1] = 0;
LAB_140dfa4ee:
            LOCK();
            plVar10 = plVar20 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar7 = *piVar1;
              UNLOCK();
joined_r0x000140dfa527:
              if (iVar7 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
          UNLOCK();
          *param_1 = CONCAT71(uStack_f7,local_f8);
          plVar20 = (longlong *)param_1[1];
          if (local_f0 == plVar20) {
            LOCK();
            plVar20 = local_f0 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar7 = *piVar1;
              UNLOCK();
              plVar20 = plVar10;
              goto joined_r0x000140dfa527;
            }
          }
          else {
            param_1[1] = local_f0;
            if (plVar20 != (longlong *)0x0) goto LAB_140dfa4ee;
          }
        }
        plVar10 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_f0 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        puVar11 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
        uVar16 = local_118;
        (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,&local_130);
        bVar6 = (**(code **)(*plVar9 + 0xd0))(plVar9,local_130,uVar16);
        uVar8 = (*(uint *)(param_1 + 2) & 0xfffffff7) + (uint)(bVar6 ^ 1) * 8;
      }
    }
  }
LAB_140df9f67:
  *(uint *)(param_1 + 2) = uVar8 & 0xffffffef;
  local_160 = param_1;
  iVar7 = (**(code **)(*plVar9 + 0x170))(plVar9,*(undefined8 *)(param_2 + 0x18));
  if (0 < iVar7) {
    local_158 = local_160 + 7;
    iVar7 = 0;
    local_168 = param_2;
LAB_140df9fbb:
    uVar12 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(param_2 + 0x18));
    FUN_1400b22c2(&local_140,uVar12);
    pwVar14 = L"";
    if (local_138 != 0) {
      pwVar14 = local_140;
    }
    local_78 = (wchar_t **)0x0;
    if (pwVar14 == (wchar_t *)0x0) {
      local_70 = (wchar_t **)0x0;
      local_68 = 0;
    }
    else {
      sVar13 = wcslen(pwVar14);
      local_150 = 0;
      local_110 = (wchar_t **)CONCAT44(local_110._4_4_,0x7fffffff);
      uVar16 = sVar13 & 0xffffffff;
      pwVar21 = pwVar14;
      do {
        iVar19 = (int)uVar16;
        if (iVar19 < 1) {
LAB_140dfa058:
          local_68 = local_150;
          uVar8 = local_150 + 1;
          if (uVar8 < 0x81) goto LAB_140dfa075;
          FUN_1446efa72(&local_78,0,uVar8,1);
          local_110 = local_78;
          goto LAB_140dfa077;
        }
        wVar2 = *pwVar21;
        uVar8 = (uint)(ushort)wVar2;
        pwVar3 = pwVar21 + 1;
        uVar18 = iVar19 - 1;
        if ((wVar2 & 0xfc00U) == 0xd800) {
          if (iVar19 == 1) {
            cVar5 = FUN_140024707(uVar8,&local_150,&local_110);
            if (cVar5 != '\0') goto LAB_140dfa058;
            break;
          }
          if (((ushort)*pwVar3 & 0xfc00) == 0xdc00) {
            uVar8 = (uint)(ushort)wVar2 * 0x400 + (uint)(ushort)*pwVar3 + 0xfca02400;
            uVar18 = iVar19 - 2;
            pwVar3 = pwVar21 + 2;
          }
        }
        pwVar21 = pwVar3;
        cVar5 = FUN_140024707(uVar8,&local_150,&local_110);
        uVar16 = (ulonglong)uVar18;
      } while (cVar5 != '\0');
      local_68 = 0xffffffff;
      uVar8 = 0;
LAB_140dfa075:
      local_110 = (wchar_t **)0x0;
LAB_140dfa077:
      if (local_110 == (wchar_t **)0x0) {
        local_110 = (wchar_t **)&local_f8;
      }
      iVar19 = (int)sVar13 + 1;
      local_150 = uVar8;
      local_70 = local_110;
      do {
        if (iVar19 < 1) break;
        wVar2 = *pwVar14;
        uVar8 = (uint)(ushort)wVar2;
        pwVar21 = pwVar14 + 1;
        iVar4 = iVar19 + -1;
        if ((wVar2 & 0xfc00U) == 0xd800) {
          if (iVar19 == 1) {
            FUN_1400247af(uVar8,&local_110,&local_150);
            break;
          }
          if (((ushort)*pwVar21 & 0xfc00) == 0xdc00) {
            uVar8 = (uint)(ushort)wVar2 * 0x400 + (uint)(ushort)*pwVar21 + 0xfca02400;
            pwVar21 = pwVar14 + 2;
            iVar4 = iVar19 + -2;
          }
        }
        iVar19 = iVar4;
        cVar5 = FUN_1400247af(uVar8,&local_110,&local_150);
        pwVar14 = pwVar21;
      } while (cVar5 != '\0');
    }
    param_2 = local_168;
    uVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(local_168 + 0x18));
    FUN_1400b22c2(&local_150,uVar12);
    if (local_78 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    if (local_138 == DAT_14cbf4cf8) {
      if (1 < local_138) {
        lVar22 = 0;
        while( true ) {
          uVar23 = *(ushort *)((longlong)local_140 + lVar22);
          uVar16 = (ulonglong)uVar23;
          uVar24 = *(ushort *)(DAT_14cbf4cf0 + lVar22);
          param_2 = local_168;
          if (uVar23 != uVar24) break;
          if (uVar23 == 0) goto LAB_140dfa4a9;
LAB_140dfa461:
          lVar22 = lVar22 + 2;
        }
        if ((uVar24 | uVar23) < 0x80) {
          uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          uVar25 = (ulonglong)uVar24;
          uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
          if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar25]) goto LAB_140dfa461;
        }
        if (uVar23 != uVar24) goto LAB_140dfa136;
      }
    }
    else if (DAT_14cbf4cf8 + local_138 != 1) {
LAB_140dfa136:
      pwVar14 = local_140;
      if (local_138 == 0) {
        pwVar14 = L"";
      }
      lVar22 = 0;
      do {
        wVar2 = pwVar14[lVar22];
        bVar6 = "HasVoice"[lVar22];
        iVar19 = (uint)(ushort)wVar2 - (uint)bVar6;
        if (iVar19 == 0) {
          if (wVar2 == L'\0') goto LAB_140dfa23a;
        }
        else {
          if (0x7f < ((uint)bVar6 | (uint)(ushort)wVar2)) goto LAB_140dfa187;
          if ((&DAT_149e05da0)[(ushort)wVar2] != (&DAT_149e05da0)[bVar6]) goto code_r0x000140dfa184;
        }
        lVar22 = lVar22 + 1;
      } while( true );
    }
LAB_140dfa4a9:
    *(byte *)(local_160 + 2) = *(byte *)(local_160 + 2) | 8;
    goto LAB_140dfa1f6;
  }
LAB_140dfa2b6:
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140dfa184:
  iVar19 = (uint)(byte)(&DAT_149e05da0)[(ushort)wVar2] - (uint)(byte)(&DAT_149e05da0)[bVar6];
LAB_140dfa187:
  if (iVar19 == 0) {
LAB_140dfa23a:
    puVar17 = (undefined2 *)CONCAT44(uStack_14c,local_150);
    if (local_148 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    lVar22 = 0;
    do {
      uVar23 = puVar17[lVar22];
      bVar6 = (&DAT_149dfbe6e)[lVar22];
      iVar19 = (uint)uVar23 - (uint)bVar6;
      if (iVar19 == 0) {
        if (uVar23 == 0) goto LAB_140dfa2a0;
      }
      else {
        if (0x7f < ((uint)bVar6 | (uint)uVar23)) goto LAB_140dfa297;
        if ((&DAT_149e05da0)[uVar23] != (&DAT_149e05da0)[bVar6]) goto code_r0x000140dfa294;
      }
      lVar22 = lVar22 + 1;
    } while( true );
  }
LAB_140dfa198:
  puVar17 = (undefined2 *)CONCAT44(uStack_14c,local_150);
  local_f8 = 0;
  local_f0 = (longlong *)0x0;
  uStack_e8 = 0;
  local_e0 = 0;
  if (local_148 == 0) {
    puVar17 = &DAT_149dfb77a;
  }
  FUN_140c3a228(&local_f8,puVar17);
  local_110 = &local_140;
  local_108 = (wchar_t **)&local_f8;
  FUN_140dfa58e(local_158,local_fc,&local_110,0);
  FUN_140c3a2ac(&local_f8);
LAB_140dfa1f6:
  if (CONCAT44(uStack_14c,local_150) != 0) {
    FUN_1400020a8();
  }
  if (local_140 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  iVar7 = iVar7 + 1;
  iVar19 = (**(code **)(*plVar9 + 0x170))(plVar9,*(undefined8 *)(param_2 + 0x18));
  if (iVar19 <= iVar7) goto LAB_140dfa2b6;
  goto LAB_140df9fbb;
code_r0x000140dfa294:
  iVar19 = (uint)(byte)(&DAT_149e05da0)[uVar23] - (uint)(byte)(&DAT_149e05da0)[bVar6];
LAB_140dfa297:
  if (iVar19 == 0) {
LAB_140dfa2a0:
    *(byte *)(local_160 + 2) = *(byte *)(local_160 + 2) | 0x10;
    goto LAB_140dfa1f6;
  }
  goto LAB_140dfa198;
}



// FUNCTION 140dfa58e FUN_140dfa58e body=448 status=ok
// SIG undefined FUN_140dfa58e(void)

undefined4 *
FUN_140dfa58e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140dfa92e();
  uVar8 = 0;
  FUN_140dfa8c8(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50;
  iVar7 = *(int *)(local_48 + 1);
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar7 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*local_48;
    }
    lVar5 = 0;
    uVar8 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar5]) -
              0x20;
      uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar6) & 0xff) * 4);
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar5 = lVar5 + 1;
    } while (iVar4 != (int)lVar5);
  }
  local_68 = param_4;
  cVar1 = FUN_140dfa750(param_1,uVar8,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar7 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x34) = uVar8;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140dfae20(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dfa750 FUN_140dfa750 body=175 status=ok
// SIG undefined FUN_140dfa750(void)

void FUN_140dfa750(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
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
  undefined1 uVar14;
  int iVar15;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar15 = FUN_140dfa800();
    if (iVar15 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x38);
      plVar2 = (longlong *)(*param_1 + (longlong)iVar15 * 0x38);
      FUN_140c3a2ac(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      uVar10 = param_3[7];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      puVar1[8] = param_3[8];
      puVar1[9] = uVar11;
      puVar1[10] = uVar12;
      puVar1[0xb] = uVar13;
      puVar1[4] = uVar7;
      puVar1[5] = uVar8;
      puVar1[6] = uVar9;
      puVar1[7] = uVar10;
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_140dfab0c(param_1,*param_4,1);
      *param_4 = iVar15;
      uVar14 = 1;
      goto LAB_140dfa786;
    }
  }
  uVar14 = 0;
LAB_140dfa786:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 140dfa800 FUN_140dfa800 body=199 status=ok
// SIG undefined FUN_140dfa800(void)

int FUN_140dfa800(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
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
LAB_140dfa846:
      lVar10 = (longlong)iVar1 * 0x38;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140dfa8b0;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140dfa8b0;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140dfa8b6;
    }
  }
  return -1;
LAB_140dfa8b0:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140dfa8b6:
  iVar1 = *(int *)(lVar4 + 0x30 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140dfa846;
}



// FUNCTION 140dfa8c8 FUN_140dfa8c8 body=101 status=ok
// SIG undefined FUN_140dfa8c8(void)

undefined8 *
FUN_140dfa8c8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_140c3a11c(param_1 + 2,param_4);
  return param_1;
}



// FUNCTION 140dfa92e FUN_140dfa92e body=478 status=ok
// SIG undefined FUN_140dfa92e(void)

int * FUN_140dfa92e(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x38);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 140dfab0c FUN_140dfab0c body=138 status=ok
// SIG undefined FUN_140dfab0c(void)

void FUN_140dfab0c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140dfab96 FUN_140dfab96 body=211 status=ok
// SIG undefined FUN_140dfab96(void)

undefined8 * FUN_140dfab96(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar2 = *param_2;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14ba46f50;
  puVar4[3] = uVar2;
  *param_1 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba46fb0;
  plVar5[2] = (longlong)puVar4;
  param_1[1] = plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar3 = (longlong *)puVar4[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        puVar4[2] = plVar5;
      }
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  return param_1;
}



// FUNCTION 140dfac6a FUN_140dfac6a body=344 status=ok
// SIG undefined FUN_140dfac6a(void)

void FUN_140dfac6a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xe0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_50 = 0;
  uStack_80._4_4_ = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  if (param_1 + 4 != &local_88) {
    if (param_1[4] == 0) {
      uStack_80._0_4_ = 0;
      local_88 = 0;
    }
    else {
      FUN_1400020a8();
    }
    param_1[4] = local_88;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_80._4_4_;
  }
  uStack_80 = 0;
  local_88 = 0;
  *(undefined1 *)(param_1 + 6) = local_78;
  FUN_140dfadc4(param_1 + 7,&local_70);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(&local_70);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  param_1[3] = 0x2bca2875f4373fff;
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dfadc4 FUN_140dfadc4 body=91 status=ok
// SIG undefined FUN_140dfadc4(void)

longlong FUN_140dfadc4(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_141164ba4(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 140dfae20 FUN_140dfae20 body=808 status=ok
// SIG undefined FUN_140dfae20(void)

void FUN_140dfae20(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  int iVar18;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140dfae86;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar9 != uVar3);
LAB_140dfae86:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar6 = 0;
    uVar11 = 1;
    iVar10 = 0;
    iVar18 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar14;
    if (uVar9 == 0) {
      iVar18 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar18 = iVar7 + -1;
      }
      uVar6 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar6;
      }
      iVar18 = 0;
      do {
        if (uVar11 == uVar6) {
          return;
        }
        iVar18 = iVar18 + 0x20;
        uVar9 = puVar14[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar6 = 0;
      iVar18 = 0;
    }
    uVar11 = (ulonglong)(-uVar9 & uVar9);
    uVar8 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
  }
  if (iVar10 < iVar7) {
    uVar9 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x38);
      iVar7 = *(int *)(*param_1 + 8 + (longlong)iVar10 * 0x38);
      iVar12 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar12 = 0;
      }
      uVar3 = 0;
      if (0 < iVar12) {
        puVar17 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar17 = (undefined2 *)*puVar2;
        }
        lVar15 = 0;
        uVar3 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar17[lVar15] +
                  (uint)(0x19 < (ushort)puVar17[lVar15] - 0x61) * 0x20) - 0x20;
          uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar4) & 0xff) * 4);
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
          lVar15 = lVar15 + 1;
        } while (iVar12 != (int)lVar15);
      }
      uVar8 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)((longlong)puVar2 + 0x34) = iVar7;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(puVar2 + 6) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      uVar9 = uVar9 & ~(uint)uVar11;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar10 = (int)uVar6;
      lVar15 = (longlong)iVar10;
      uVar3 = puVar14[lVar15] & uVar9;
      if (uVar3 == 0) {
        iVar12 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar12 = iVar7 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar12 <= iVar10) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar3 = puVar14[lVar15 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar13 - lVar15 == lVar16) {
            return;
          }
        }
        uVar6 = (ulonglong)(iVar10 + (int)lVar16 + 1);
        uVar9 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar7);
  }
  return;
}



// FUNCTION 140dfb148 FUN_140dfb148 body=210 status=ok
// SIG undefined FUN_140dfb148(void)

void FUN_140dfb148(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  FUN_140dfb21a(param_1 + 0x6718,param_1,param_2,param_3,param_4);
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000140dfb217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x39);
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
      lVar4 = *(longlong *)(lVar2 + 0x18);
      if (*(longlong *)(lVar2 + 0x18) == 0) {
        lVar4 = lVar2 + 8;
      }
      *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x2000000;
      *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
    }
  }
  return;
}



// FUNCTION 140dfb21a FUN_140dfb21a body=319 status=ok
// SIG undefined FUN_140dfb21a(void)

void FUN_140dfb21a(longlong param_1,longlong param_2,undefined8 *param_3,char param_4,uint param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    uVar1 = *param_3;
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar2 = (uint)uVar1 & 0xffff;
    puVar4 = (uint *)FUN_140dfb35a(param_1 + 0x60,
                                   ((uint)uVar1 << 0x10 | uVar2) + (int)((ulonglong)uVar1 >> 0x20) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar2 >> 4),param_3);
    if (param_4 == '\0') {
      param_5 = ~param_5 & *puVar4;
    }
    else {
      param_5 = param_5 | *puVar4;
    }
    *puVar4 = param_5;
  }
  else {
    uVar2 = FUN_140dfb418(param_1);
    uVar1 = *param_3;
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar5 = (uint)uVar1 & 0xffff;
    puVar4 = (uint *)FUN_140dfb35a(param_1 + 0x10,
                                   ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4),param_3);
    if (param_4 == '\0') {
      param_5 = ~param_5 & *puVar4;
    }
    else {
      param_5 = param_5 | *puVar4;
    }
    *puVar4 = param_5;
    uVar3 = FUN_140dfb418(param_1);
    uVar5 = (uVar3 ^ uVar2) & uVar3;
    uVar2 = (uVar3 ^ uVar2) & uVar2;
    if (uVar2 != 0) {
      FUN_140dfb6b6(param_1,param_2,0,&DAT_14cbc2798,uVar2);
    }
    if (uVar5 != 0) {
      FUN_140dfb6b6(param_1,param_2,1,&DAT_14cbc2798,uVar5);
    }
    if (*(char *)(param_2 + 0x178) == '\x03') {
      *(uint *)(param_1 + 8) = uVar3;
    }
  }
  return;
}



// FUNCTION 140dfb35a FUN_140dfb35a body=189 status=ok
// SIG undefined FUN_140dfb35a(void)

longlong * FUN_140dfb35a(longlong *param_1,uint param_2,longlong *param_3)

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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_140dfb3fa;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140dfb586(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_140dfb3fa:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 140dfb418 FUN_140dfb418 body=365 status=ok
// SIG undefined FUN_140dfb418(void)

uint FUN_140dfb418(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar2 = *(int *)(param_1 + 0x38);
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar11 = 0;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x20);
    }
    uVar8 = *puVar5;
    if (uVar8 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar10 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar10 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar11) {
          return 0;
        }
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar5[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar10 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    puVar5 = (uint *)(param_1 + 0x20);
    if (*(uint **)(param_1 + 0x30) != (uint *)0x0) {
      puVar5 = *(uint **)(param_1 + 0x30);
    }
    iVar4 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar4 = iVar2 + -1;
    }
    iVar4 = iVar4 >> 5;
    uVar8 = 0xffffffff;
    uVar3 = 0;
    do {
      uVar3 = uVar3 | *(uint *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)iVar6 * 0x14);
      uVar8 = ~(uint)uVar10 & uVar8;
      iVar6 = (int)uVar11;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar5[lVar13] & uVar8;
      if (uVar7 == 0) {
        iVar9 = iVar4;
        if (iVar4 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar4 <= iVar6) {
          return uVar3;
        }
        lVar14 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar5[lVar13 + lVar14 + 1];
          if (uVar7 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar9 - lVar13 == lVar14) {
            return uVar3;
          }
        }
        uVar11 = (ulonglong)(iVar6 + (int)lVar14 + 1);
        uVar8 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
  return uVar3;
}



// FUNCTION 140dfb586 FUN_140dfb586 body=302 status=ok
// SIG undefined FUN_140dfb586(void)

undefined4 *
FUN_140dfb586(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14487db2c(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0xffffffff00000000;
  local_68 = param_5;
  cVar1 = FUN_1401719bc(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)(local_50 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_50 + 0xc) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14487ddf8(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dfb6b6 FUN_140dfb6b6 body=1878 status=ok
// SIG undefined FUN_140dfb6b6(void)

void FUN_140dfb6b6(uint *param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4,
                  uint param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  uint local_54;
  code *local_50;
  ulonglong local_48;
  
  cVar2 = (char)param_3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = param_2[0x23d];
  lVar9 = lVar5;
  if (param_2 == (longlong *)0x0) {
    lVar9 = 0;
  }
  if (lVar9 == 0) {
LAB_140dfb725:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_14016cc74();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_140dfb725;
  }
  uVar3 = param_1[1];
  if (uVar3 == 0) {
LAB_140dfb76e:
    bVar10 = false;
  }
  else {
    uVar8 = *param_1;
    bVar10 = false;
    if ((-1 < (int)uVar8) && (bVar10 = false, (int)uVar8 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      if ((lVar4 == 0) || (*(uint *)(lVar4 + 0x10) != uVar3)) goto LAB_140dfb76e;
      bVar10 = (*(uint *)(lVar4 + 8) & 0x10200000) == 0;
    }
  }
  if ((param_2 != (longlong *)0x0) && (!bVar10)) {
    lVar4 = (**(code **)(*param_2 + 0x5d8))(param_2);
    if (lVar4 == 0) {
LAB_140dfb7bc:
      *param_1 = 0;
      uVar3 = 0;
    }
    else {
      if (DAT_14cb61cd0 == 0) {
        local_70 = &local_50;
        local_50 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1463b31ae;
        local_78 = &LAB_1486dca4f;
        local_80 = &LAB_1464f50a6;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 8;
        local_a8 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30))
      goto LAB_140dfb7bc;
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
        uVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar10) {
          local_54 = uVar8;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
          uVar8 = local_54;
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar10 = uVar3 == 0;
        if (bVar10) {
          *(uint *)(lVar4 + 0x10) = uVar8;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar3 = uVar8;
        }
      }
    }
    param_1[1] = uVar3;
  }
  if (uVar3 == 0) {
LAB_140dfbd6f:
    lVar4 = 0;
  }
  else {
    uVar8 = *param_1;
    lVar4 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         ((*(uint *)(plVar7 + 2) != uVar3 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_140dfbd6f;
      lVar4 = *plVar7;
    }
  }
  if (lVar9 != 0) {
    if ((param_5 & 2) == 0) {
      if ((param_5 & 4) != 0) {
        if (cVar2 == '\0') {
LAB_140dfb87d:
          FUN_1400bc8c2(lVar9 + 0x1b98,param_4);
        }
        else {
LAB_140dfb860:
          FUN_1400bc96c(lVar9 + 0x1b98,param_4);
        }
      }
    }
    else if (cVar2 == '\0') {
      FUN_1400bc8c2(lVar9 + 0x1b70,param_4);
      if ((param_5 & 4) != 0) goto LAB_140dfb87d;
    }
    else {
      FUN_1400bc96c();
      if ((param_5 & 4) != 0) goto LAB_140dfb860;
    }
    if ((param_5 & 8) == 0) {
      if ((param_5 & 0x10) != 0) {
        if (cVar2 == '\0') {
LAB_140dfb8de:
          FUN_1400bc8c2(lVar9 + 0x1be8,param_4);
        }
        else {
LAB_140dfb8c1:
          FUN_1400bc96c(lVar9 + 0x1be8,param_4);
        }
      }
    }
    else if (cVar2 == '\0') {
      FUN_1400bc8c2(lVar9 + 0x1bc0,param_4);
      if ((param_5 & 0x10) != 0) goto LAB_140dfb8de;
    }
    else {
      FUN_1400bc96c();
      if ((param_5 & 0x10) != 0) goto LAB_140dfb8c1;
    }
    if ((param_5 & 0x20) == 0) {
      if ((param_5 & 0x40) != 0) {
        if (cVar2 == '\0') {
LAB_140dfb93f:
          FUN_1400bc8c2(lVar9 + 0x1c60,param_4);
        }
        else {
LAB_140dfb922:
          FUN_1400bc96c(lVar9 + 0x1c60,param_4);
        }
      }
    }
    else if (cVar2 == '\0') {
      FUN_1400bc8c2(lVar9 + 0x1c38,param_4);
      if ((param_5 & 0x40) != 0) goto LAB_140dfb93f;
    }
    else {
      FUN_1400bc96c();
      if ((param_5 & 0x40) != 0) goto LAB_140dfb922;
    }
    if ((param_5 >> 0xb & 1) == 0) {
      if ((param_5 >> 0xc & 1) != 0) {
        if (cVar2 == '\0') {
LAB_140dfb9a0:
          FUN_1400bc8c2(lVar9 + 0x3660,param_4);
        }
        else {
LAB_140dfb983:
          FUN_1400bc96c(lVar9 + 0x3660,param_4);
        }
      }
    }
    else if (cVar2 == '\0') {
      FUN_1400bc8c2(lVar9 + 0x3638,param_4);
      if ((param_5 >> 0xc & 1) != 0) goto LAB_140dfb9a0;
    }
    else {
      FUN_1400bc96c();
      if ((param_5 >> 0xc & 1) != 0) goto LAB_140dfb983;
    }
    if ((param_5 >> 0x10 & 1) == 0) {
      if ((param_5 >> 0x11 & 1) != 0) {
        if (cVar2 == '\0') {
LAB_140dfba01:
          FUN_1400bc8c2(lVar9 + 0x1c88,param_4);
        }
        else {
LAB_140dfb9e4:
          FUN_1400bc96c(lVar9 + 0x1c88,param_4);
        }
      }
    }
    else if (cVar2 == '\0') {
      FUN_1400bc8c2(lVar9 + 0x1c10,param_4);
      if ((param_5 >> 0x11 & 1) != 0) goto LAB_140dfba01;
    }
    else {
      FUN_1400bc96c();
      if ((param_5 >> 0x11 & 1) != 0) goto LAB_140dfb9e4;
    }
    if ((param_5 >> 0x12 & 1) == 0) {
      if ((param_5 >> 0x13 & 1) != 0) {
        if (cVar2 == '\0') {
LAB_140dfba62:
          FUN_1400bc8c2(lVar9 + 0x11f0,param_4);
        }
        else {
LAB_140dfba45:
          FUN_1400bc96c(lVar9 + 0x11f0,param_4);
        }
      }
    }
    else if (cVar2 == '\0') {
      FUN_1400bc8c2(lVar9 + 0x4170,param_4);
      if ((param_5 >> 0x13 & 1) != 0) goto LAB_140dfba62;
    }
    else {
      FUN_1400bc96c();
      if ((param_5 >> 0x13 & 1) != 0) goto LAB_140dfba45;
    }
    if ((param_5 >> 0x14 & 1) == 0) {
      if ((param_5 >> 0x15 & 1) != 0) {
        if (cVar2 == '\0') {
LAB_140dfbac3:
          FUN_1400bc8c2(lVar9 + 0x11c8,param_4);
        }
        else {
LAB_140dfbaa4:
          FUN_1400bc96c(lVar9 + 0x11c8,param_4);
        }
      }
    }
    else if (cVar2 == '\0') {
      FUN_1400bc8c2(lVar9 + 0x1218,param_4);
      if ((param_5 >> 0x15 & 1) != 0) goto LAB_140dfbac3;
    }
    else {
      FUN_1400bc96c();
      if ((param_5 >> 0x15 & 1) != 0) goto LAB_140dfbaa4;
    }
  }
  if (lVar5 != 0) {
    if ((char)param_5 < '\0') {
      if (cVar2 == '\0') {
        FUN_1400bc8c2(lVar5 + 0x4668,param_4);
        if ((param_5 >> 8 & 1) != 0) goto LAB_140dfbb2b;
      }
      else {
        FUN_1400bc96c();
        if ((param_5 >> 8 & 1) != 0) goto LAB_140dfbb0f;
      }
    }
    else if ((param_5 >> 8 & 1) != 0) {
      if (cVar2 == '\0') {
LAB_140dfbb2b:
        FUN_1400bc8c2(lVar5 + 0x4690,param_4);
      }
      else {
LAB_140dfbb0f:
        FUN_1400bc96c(lVar5 + 0x4690,param_4);
      }
    }
    if ((param_5 >> 0x16 & 1) != 0) {
      FUN_1418e06f6(lVar5,param_4,param_3);
    }
    if ((param_5 >> 0x17 & 1) != 0) {
      FUN_1440f2d28(lVar5,*param_4,param_3);
    }
  }
  if (param_2 != (longlong *)0x0) {
    if ((param_5 >> 10 & 1) == 0) {
      if ((param_5 >> 9 & 1) != 0) {
        lVar5 = (**(code **)(param_2[0x765] + 0x18))(param_2 + 0x765);
        lVar5 = lVar5 + 0x50;
        if (cVar2 == '\0') {
LAB_140dfbbfb:
          FUN_1400bc8c2(lVar5,param_4);
        }
        else {
LAB_140dfbbce:
          FUN_1400bc96c(lVar5,param_4);
        }
      }
    }
    else {
      lVar5 = (**(code **)(param_2[0x767] + 0x18))(param_2 + 0x767);
      if (cVar2 == '\0') {
        FUN_1400bc8c2(lVar5 + 0x18,param_4);
        if ((param_5 >> 9 & 1) != 0) {
          lVar5 = (**(code **)(param_2[0x765] + 0x18))(param_2 + 0x765);
          lVar5 = lVar5 + 0x50;
          goto LAB_140dfbbfb;
        }
      }
      else {
        FUN_1400bc96c();
        if ((param_5 >> 9 & 1) != 0) {
          lVar5 = (**(code **)(param_2[0x765] + 0x18))(param_2 + 0x765);
          lVar5 = lVar5 + 0x50;
          goto LAB_140dfbbce;
        }
      }
    }
    if ((short)param_5 < 0) {
      uVar6 = (**(code **)(param_2[0x769] + 0x20))(param_2 + 0x769);
      FUN_1418dfe60(uVar6,param_3,*param_4);
    }
  }
  if (lVar4 != 0) {
    if ((param_5 >> 0xd & 1) == 0) {
      if ((param_5 >> 0xe & 1) != 0) {
        if (cVar2 == '\0') {
LAB_140dfbcdc:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
        }
LAB_140dfbc6e:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
      }
    }
    else if (cVar2 == '\0') {
      FUN_1400bc8c2(lVar4 + 0xa48,param_4);
      if ((param_5 >> 0xe & 1) != 0) goto LAB_140dfbcdc;
    }
    else {
      FUN_1400bc96c();
      if ((param_5 >> 0xe & 1) != 0) goto LAB_140dfbc6e;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dfbe49 FUN_140dfbe49 body=155 status=ok
// SIG undefined FUN_140dfbe49(void)

void FUN_140dfbe49(void)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  
  lVar1 = FUN_140dfbee4();
  if (*(longlong *)(lVar1 + 0x110) != 0) {
    uVar2 = FUN_14072e5be();
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0fd94) {
      FUN_144b3d300(&DAT_14cb0fd94);
      if (DAT_14cb0fd94 == -1) {
        DAT_14cb0fd90 = (float)uVar2;
        _Init_thread_footer(&DAT_14cb0fd94);
      }
    }
    fVar3 = (float)uVar2;
    if ((DAT_14cb0fd90 != fVar3) || (NAN(DAT_14cb0fd90) || NAN(fVar3))) {
      DAT_14cb0fd90 = fVar3;
      FUN_140dfbfc9();
      return;
    }
  }
  return;
}



// FUNCTION 140dfbee4 FUN_140dfbee4 body=228 status=ok
// SIG undefined FUN_140dfbee4(void)

longlong FUN_140dfbee4(void)

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
  if (DAT_14cb0fd30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_147da917b;
    local_40 = FUN_14640dd48;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Engine",L"VirtualTexturePoolConfig",&DAT_14cb0fd30,&DAT_147da917a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0fd30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dfbfc9 FUN_140dfbfc9 body=318 status=ok
// SIG undefined FUN_140dfbfc9(void)

void FUN_140dfbfc9(void)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a3347a(&local_28,0x10,1,0x200000);
  uVar2 = (ulonglong)local_18;
  if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
    do {
      cVar1 = (**(code **)(**(longlong **)(local_28 + (uVar2 & 0xffffffff) * 8) + 0x330))();
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(local_28 + (longlong)(int)local_18 * 8) + 0x318))();
      }
      uVar2 = (longlong)(int)local_18;
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
        local_18 = (uint)uVar2;
        if ((longlong)local_20 <= (longlong)uVar2) break;
      } while (*(longlong *)(local_28 + uVar2 * 8) == 0);
    } while ((-2 < (longlong)uVar3) && ((int)local_18 < local_20));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1457b22ec(&local_28);
  uVar2 = (ulonglong)local_18;
  if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
    do {
      FUN_1448215fa(*(undefined8 *)(local_28 + (uVar2 & 0xffffffff) * 8));
      uVar2 = (longlong)(int)local_18;
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
        local_18 = (uint)uVar2;
        if ((longlong)local_20 <= (longlong)uVar2) break;
      } while (*(longlong *)(local_28 + uVar2 * 8) == 0);
    } while ((-2 < (longlong)uVar3) && ((int)local_18 < local_20));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dfc108 FUN_140dfc108 body=748 status=ok
// SIG undefined FUN_140dfc108(void)

longlong FUN_140dfc108(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == (longlong *)0x0) {
LAB_140dfc289:
    lVar3 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1478c0a72;
      local_80 = (code *)&LAB_1417b2375;
      local_88 = L"Engine";
      local_90 = 0x1000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      uVar1 = FUN_1414837f6();
      lVar2 = (**(code **)(*param_1 + 0x288))(param_1,uVar1);
      if (lVar2 != 0) {
        uVar1 = FUN_1414837f6();
        lVar3 = FUN_144718840(lVar2,uVar1);
        if (lVar2 != lVar3 && lVar3 != 0) goto LAB_140dfc28b;
      }
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x5d8))(param_1);
      if (plVar4 != (longlong *)0x0) {
        uVar1 = FUN_1414837f6();
        lVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar1);
        if (lVar2 != 0) {
          uVar1 = FUN_1414837f6();
          lVar3 = FUN_144718840(lVar2,uVar1);
          if (lVar2 != lVar3 && lVar3 != 0) goto LAB_140dfc28b;
        }
      }
    }
    do {
      if (DAT_14c951858 == 0) {
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_70 = &local_50;
        local_78 = &LAB_1468c5283;
        local_80 = FUN_142809da0;
        local_88 = L"Engine";
        local_90 = 0x400000000;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) ==
          DAT_14c951858 + 0x30)) goto LAB_140dfc289;
      uVar1 = FUN_1414837f6();
      lVar2 = (**(code **)(*param_1 + 0x288))(param_1,uVar1);
      if (lVar2 == 0) {
LAB_140dfc1f2:
        lVar3 = 0;
      }
      else {
        uVar1 = FUN_1414837f6();
        lVar3 = FUN_144718840(lVar2,uVar1);
        if (lVar2 == lVar3) goto LAB_140dfc1f2;
      }
    } while ((lVar3 == 0) && (param_1 = (longlong *)param_1[4], param_1 != (longlong *)0x0));
  }
LAB_140dfc28b:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 140dfc40c FUN_140dfc40c body=386 status=ok
// SIG undefined FUN_140dfc40c(void)

void FUN_140dfc40c(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  code *local_48;
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x3910);
  if ((lVar4 == 0) ||
     (lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28), lVar4 == 0))
  goto LAB_140dfc4f0;
  pcVar1 = *(code **)(lVar4 + 0x148);
  local_48 = pcVar1;
  uVar5 = FUN_14477b664(*(undefined8 *)(lVar4 + 0x150));
  local_40 = FUN_14477b664(uVar5);
  lVar6 = *(longlong *)(lVar4 + 0x158);
  if (local_40 == 0) {
    uVar5 = FUN_14043db3a();
    local_40 = FUN_14477b664(uVar5);
  }
  if (lVar6 == 0) {
    local_38 = 0;
    if ((((pcVar1 != (code *)0x0) && (local_40 != 0)) &&
        (plVar2 = *(longlong **)(local_40 + 0xb8), plVar2 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,&local_48);
      if (lVar6 != 0) goto LAB_140dfc48d;
    }
  }
  else {
LAB_140dfc48d:
    FUN_140dfc590(param_1,lVar4);
    FUN_140dfcc00(param_1,lVar4);
  }
  local_48 = FUN_140dfc590;
  local_40 = local_40 & 0xffffffff00000000;
  FUN_140dfc8ac(lVar4 + 0x30,local_50,param_1,&local_48);
  local_48 = FUN_140dfcc00;
  local_40 = local_40 & 0xffffffff00000000;
  FUN_140dfc8ac(lVar4 + 0x30,local_50,param_1,&local_48);
LAB_140dfc4f0:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dfc590 FUN_140dfc590 body=334 status=ok
// SIG undefined FUN_140dfc590(void)

void FUN_140dfc590(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = FUN_140dfc714();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x598))(param_1,&local_48);
  lVar5 = *(longlong *)(param_2 + 0x148);
  local_48 = lVar5;
  uVar4 = FUN_14477b664(*(undefined8 *)(param_2 + 0x150));
  local_40 = FUN_14477b664(uVar4);
  lVar6 = *(longlong *)(param_2 + 0x158);
  if (local_40 == 0) {
    uVar4 = FUN_14043db3a();
    local_40 = FUN_14477b664(uVar4);
  }
  if (lVar6 == 0) {
    local_38 = 0;
    if ((((lVar5 != 0) && (local_40 != 0)) &&
        (plVar1 = *(longlong **)(local_40 + 0xb8), plVar1 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,&local_48);
      if (lVar6 != 0) goto LAB_140dfc616;
    }
  }
  else {
LAB_140dfc616:
    lVar5 = FUN_14072d688(lVar6);
    if (lVar5 != 0) {
      if (plVar3 == (longlong *)0x0) {
        FUN_140dfc6e0(param_1);
      }
      goto LAB_140dfc630;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))(plVar3,0);
  }
LAB_140dfc630:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dfc6e0 FUN_140dfc6e0 body=51 status=ok
// SIG undefined FUN_140dfc6e0(void)

longlong FUN_140dfc6e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140dfc7f9();
  if (((param_1 != 0) && (lVar1 != 0)) && (*(char *)(param_1 + 100) < '\0')) {
    FUN_140b506a4(lVar1);
  }
  return lVar1;
}



// FUNCTION 140dfc714 FUN_140dfc714 body=228 status=ok
// SIG undefined FUN_140dfc714(void)

longlong FUN_140dfc714(void)

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
  if (DAT_14cb55be8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_148629d43;
    local_40 = &LAB_140e27231;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x278;
    FUN_14081cfa3(L"/Script/GbxGame",L"CharacterSoundLogicComponent",&DAT_14cb55be8,&DAT_148629d42);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55be8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dfc7f9 FUN_140dfc7f9 body=177 status=ok
// SIG undefined FUN_140dfc7f9(void)

undefined8 FUN_140dfc7f9(undefined8 param_1)

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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140dfc714();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dfc8ac FUN_140dfc8ac body=772 status=ok
// SIG undefined FUN_140dfc8ac(void)

undefined8 * FUN_140dfc8ac(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

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
  *local_60 = (longlong)&PTR_LAB_14b3e79d0;
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
  *local_60 = (longlong)&PTR_FUN_14b3e78f0;
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
      if (local_60 == (longlong *)0x0) goto LAB_140dfca60;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_140dfca4a;
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
LAB_140dfca4a:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140dfca60:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140dfcc00 FUN_140dfcc00 body=1412 status=ok
// SIG undefined FUN_140dfcc00(void)

void FUN_140dfcc00(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 local_120;
  undefined1 local_118;
  longlong *local_110;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8 [3];
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  void *local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar12 = *(longlong *)(param_2 + 0x148);
  local_a0 = lVar12;
  uVar8 = FUN_14477b664(*(undefined8 *)(param_2 + 0x150));
  local_98 = (longlong *)FUN_14477b664(uVar8);
  lVar11 = *(longlong *)(param_2 + 0x158);
  if (local_98 == (longlong *)0x0) {
    uVar8 = FUN_14043db3a();
    local_98 = (longlong *)FUN_14477b664(uVar8);
  }
  if (lVar11 == 0) {
    uStack_90 = 0;
    if ((((lVar12 == 0) || (local_98 == (longlong *)0x0)) ||
        (plVar4 = (longlong *)local_98[0x17], plVar4 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) goto LAB_140dfcca1;
    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar12 = FUN_144aff482(uVar8,&local_a0);
    if (lVar12 == 0) goto LAB_140dfcca1;
  }
  lVar12 = *(longlong *)(param_2 + 0x150);
  if (lVar12 == 0) {
    uVar8 = FUN_14043db3a();
    lVar12 = FUN_14477b664(uVar8);
    *(longlong *)(param_2 + 0x150) = lVar12;
  }
  lVar11 = *(longlong *)(param_2 + 0x158);
  if (lVar11 == 0) {
    if ((lVar12 == 0) || (*(longlong *)(param_2 + 0x148) == 0)) goto LAB_140dfcca1;
    plVar4 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
      *(undefined8 *)(param_2 + 0x158) = 0;
      goto LAB_140dfcca1;
    }
    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar11 = FUN_144aff482(uVar8,(longlong *)(param_2 + 0x148));
    *(longlong *)(param_2 + 0x158) = lVar11;
    if (lVar11 == 0) goto LAB_140dfcca1;
  }
  if (0 < *(int *)(lVar11 + 0x98)) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_1403539de();
    if ((longlong)*(int *)(lVar11 + 0x98) != 0) {
      plVar9 = *(longlong **)(lVar11 + 0x90);
      plVar4 = plVar9 + (longlong)*(int *)(lVar11 + 0x98) * 5;
      do {
        local_a0 = *plVar9;
        local_98 = (longlong *)plVar9[1];
        uStack_90 = plVar9[2];
        local_88 = (void *)0x0;
        local_80 = (int)plVar9[4];
        lVar12 = (longlong)local_80;
        pvVar3 = (void *)plVar9[3];
        if (lVar12 == 0) {
          local_7c = 0;
          iVar10 = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_80,0);
          memcpy(local_88,pvVar3,lVar12 * 2);
          iVar10 = local_80;
        }
        pvVar3 = local_88;
        local_d8[0] = 0;
        local_d8[1] = 0;
        local_f8 = (undefined4)local_98;
        uStack_f4 = local_98._4_4_;
        uStack_f0 = (undefined4)uStack_90;
        uStack_ec = uStack_90._4_4_;
        local_e8 = (void *)0x0;
        local_100 = local_a0;
        local_e0 = iVar10;
        if (iVar10 == 0) {
          local_dc = 0;
        }
        else {
          FUN_1446dd670(&local_e8,iVar10,0);
          memcpy(local_e8,pvVar3,(longlong)iVar10 * 2);
        }
        FUN_140d56af4(local_d8 + 2,&local_100);
        if (local_d8[0] != 0) {
          FUN_1400020a8();
        }
        uVar5 = uStack_70;
        if (uStack_c0 != 0) {
          lVar12 = (longlong)(int)uStack_70;
          uVar7 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
          if (uStack_70._4_4_ < uVar7) {
            FUN_1406f071e(&local_78,uVar5 & 0xffffffff);
          }
          pvVar3 = local_b0;
          lVar12 = lVar12 * 0x20;
          puVar2 = (undefined4 *)(local_78 + lVar12);
          *puVar2 = (undefined4)uStack_c0;
          puVar2[1] = uStack_c0._4_4_;
          puVar2[2] = uStack_b8;
          puVar2[3] = uStack_b4;
          *(undefined8 *)(local_78 + 0x10 + lVar12) = 0;
          lVar11 = (longlong)local_a8;
          *(int *)(local_78 + 0x18 + lVar12) = local_a8;
          if (lVar11 == 0) {
            *(undefined4 *)(local_78 + lVar12 + 0x1c) = 0;
          }
          else {
            puVar13 = (undefined8 *)(lVar12 + local_78 + 0x10);
            FUN_1446dd670(puVar13,local_a8,0);
            memcpy((void *)*puVar13,pvVar3,lVar11 * 2);
          }
        }
        if (local_b0 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar9 = plVar9 + 5;
      } while (plVar9 != plVar4);
    }
    lVar12 = FUN_14050fd64();
    local_d8[2] = 0;
    uStack_c0 = 0;
    local_110 = local_d8;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    FUN_1457028c8(lVar12 + 0x1e8,&local_a0,&local_78);
    plVar4 = local_98;
    if ((longlong *)(param_1 + 0x19a0) != &local_a0) {
      *(longlong *)(param_1 + 0x19a0) = local_a0;
      local_a0 = 0;
      plVar9 = *(longlong **)(param_1 + 0x19a8);
      if (local_98 != plVar9) {
        local_98 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x19a8) = plVar4;
        if (plVar9 != (longlong *)0x0) {
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
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
    }
    plVar4 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_98 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_1449db362(local_d8 + 2);
    FUN_140861e20(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140dfcca1:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dfd186 FUN_140dfd186 body=40 status=ok
// SIG undefined FUN_140dfd186(void)

undefined8 FUN_140dfd186(undefined8 param_1,int param_2)

{
  FUN_140dfd1ae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dfd1ae FUN_140dfd1ae body=386 status=ok
// SIG undefined FUN_140dfd1ae(void)

void FUN_140dfd1ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1d8bb0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    FUN_14472eb64(param_1 + 0x20,0);
  }
  param_1[0x26] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 300)) {
    *(undefined4 *)((longlong)param_1 + 300) = 0x80;
    FUN_1446efbd8(param_1 + 0x22,0);
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_14472eb64(param_1 + 0x15,0);
  }
  param_1[0x1b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xd4)) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
    FUN_1446efbd8(param_1 + 0x17,0);
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140dfd3fa FUN_140dfd3fa body=147 status=ok
// SIG undefined FUN_140dfd3fa(void)

undefined8 * FUN_140dfd3fa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b240080;
  FUN_140b47c46(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x14];
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
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dfd48e FUN_140dfd48e body=7870 status=ok
// SIG undefined FUN_140dfd48e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dfd48e(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  void *pvVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  longlong lVar19;
  byte *pbVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  undefined8 unaff_R13;
  undefined7 uVar27;
  uint uVar28;
  ulonglong uVar29;
  size_t _Size;
  bool bVar30;
  undefined4 uVar31;
  undefined4 uVar34;
  undefined1 auVar33 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined1 local_360;
  uint local_354;
  longlong *local_350;
  uint local_344;
  ulonglong local_340;
  longlong local_338;
  longlong *local_330;
  undefined8 local_328;
  undefined2 local_320;
  undefined8 local_318;
  undefined2 local_310;
  undefined8 local_308;
  undefined2 local_300;
  undefined **local_2f8;
  ulonglong *local_2f0;
  byte local_2d0;
  byte local_2ce;
  byte local_2cd;
  longlong local_290;
  longlong local_270;
  longlong *local_268;
  longlong local_260;
  undefined1 local_258 [16];
  byte local_242 [2];
  int local_240;
  uint local_23c;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  GUID local_1f8;
  undefined1 uStack_1e8;
  undefined1 uStack_1e7;
  undefined6 uStack_1e6;
  undefined **local_1e0;
  void *local_1d8;
  ulonglong uStack_1d0;
  byte local_1c8;
  undefined7 uStack_1c7;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined **local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined **local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined **local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined8 local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined **local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong local_60;
  undefined1 auVar32 [16];
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  FUN_1407134c4(&local_2f8,param_2);
  local_270 = param_2[0x11];
  param_2[0x11] = (longlong)&local_2f8;
  local_2f8 = &PTR_FUN_149f52ef0;
  local_268 = param_2;
  lVar13 = FUN_14001cc68(0x158,0x10);
  FUN_140dffb3a(lVar13);
  plVar16 = *(longlong **)(param_1 + 0x218);
  local_330 = *(longlong **)(param_1 + 0x220);
  if (local_330 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_330 + 1) = (int)local_330[1] + 1;
    UNLOCK();
  }
  if (param_2[0xd] == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  local_1e0 = (undefined **)&uStack_1e8;
  local_1f8.Data1 = 0x49e37810;
  local_1f8.Data2 = 1;
  local_1f8.Data3 = 0;
  local_1f8.Data4._0_4_ = SUB84(param_2,0);
  local_1f8.Data4[4] = (uchar)((ulonglong)param_2 >> 0x20);
  local_1f8.Data4[5] = (uchar)((ulonglong)param_2 >> 0x28);
  local_1f8.Data4[6] = (uchar)((ulonglong)param_2 >> 0x30);
  local_1f8.Data4[7] = (uchar)((ulonglong)param_2 >> 0x38);
  uStack_1e8 = SUB81(&local_1f8,0);
  uStack_1e7 = (undefined1)((ulonglong)&local_1f8 >> 8);
  uStack_1e6 = (undefined6)((ulonglong)&local_1f8 >> 0x10);
  local_260 = lVar13;
  switchD_143c3d4dc::caseD_20(param_1);
  if (((*(byte *)(param_2 + 5) & 5) != 0) && (*(int *)(param_1 + 0x140) == 0)) {
    FUN_1474b3f68(param_1);
  }
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if ((iVar11 < 7) && (*(char *)(param_1 + 0xf8) == '\x01')) {
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) * 1e+06;
  }
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  local_350 = plVar16;
  if (2 < iVar11) {
    puVar3 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar3 + 1;
    uVar27 = (undefined7)(uVar15 >> 8);
    if ((int *)puVar3[1] < piVar2) {
      local_1f8.Data1 = (uint)uVar15 & 0xff;
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
      if (1 < local_1f8.Data1) {
        FUN_14572541c(param_2);
      }
      uVar15 = CONCAT71(uVar27,local_1f8.Data1 != 0);
    }
    else {
      uVar15 = CONCAT71(uVar27,*(int *)*puVar3 != 0);
      *puVar3 = (ulonglong)piVar2;
    }
  }
  plVar16 = local_350;
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  local_354 = (uint)uVar15;
  if (3 < iVar11) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) ||
       (plVar17 = plVar16, (*(byte *)((longlong)param_2 + 0x2b) & 0x28) == 8)) {
      plVar17 = *(longlong **)(param_1 + 0x218);
    }
    (**(code **)(*plVar17 + 0x40))(plVar17,&local_2f8);
    lVar13 = FUN_140dffa30(plVar16,DAT_14c9968a0,DAT_14c9974a8);
    if ((lVar13 == 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
      uVar12 = FUN_1401f66f6(*(undefined8 *)(param_1 + 0x218),DAT_14c9974a8);
      local_1f8.Data1 = 0;
      local_1f8.Data2 = 0;
      local_1f8.Data3 = 0;
      local_1f8.Data4[0] = '\0';
      local_1f8.Data4[1] = '\0';
      local_1f8.Data4[2] = '\0';
      local_1f8.Data4[3] = '\0';
      local_1f8.Data4[4] = '\0';
      local_1f8.Data4[5] = '\0';
      local_1f8.Data4[6] = '\0';
      local_1f8.Data4[7] = '\0';
      FUN_14008dbc8(&local_1f8,uVar12,1);
      lVar13 = FUN_1474b4e66(plVar16,DAT_14c9968a0,DAT_14c9974a8);
      lVar19 = FUN_140dffdfc(plVar16,DAT_14c996610,DAT_14c9974a8);
      local_338 = FUN_140dffdfc(plVar16,DAT_14c9968a0,DAT_14c9974a8);
      local_340 = (ulonglong)uVar12;
      local_344 = uVar12;
      if (lVar13 != 0) {
        if (0 < (int)uVar12) {
          lVar21 = local_340 * 8;
          lVar22 = 0;
          do {
            plVar16 = *(longlong **)(*(longlong *)(lVar13 + 0x10) + lVar22);
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x38))(plVar16,local_208);
              plVar16 = (longlong *)(CONCAT44(local_1f8._4_4_,local_1f8.Data1) + lVar22);
              if (plVar16 != (longlong *)local_208) {
                puVar5 = (undefined8 *)*plVar16;
                *plVar16 = local_208._0_8_;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = local_208._8_8_;
                local_208 = auVar9 << 0x40;
                if (puVar5 == (undefined8 *)0x0) goto LAB_140dfe66e;
                LOCK();
                piVar2 = (int *)(puVar5 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((*piVar2 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
                  (**(code **)*puVar5)(puVar5,1);
                }
              }
              if ((undefined8 *)local_208._0_8_ != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(local_208._0_8_ + 8);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((*piVar2 == 0) && (*(int *)(local_208._0_8_ + 0xc) == 0)) {
                  (*(code *)**(undefined8 **)local_208._0_8_)(local_208._0_8_,1);
                }
              }
            }
LAB_140dfe66e:
            lVar22 = lVar22 + 8;
          } while (lVar21 - lVar22 != 0);
        }
        FUN_140498ea8(local_350,DAT_14c9968a0,DAT_14c9974a8);
      }
      if (lVar19 != 0) {
        if (0 < (int)local_344) {
          lVar13 = local_340 * 8;
          lVar21 = 0;
          do {
            plVar16 = *(longlong **)(*(longlong *)(lVar19 + 0x10) + lVar21 * 2);
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x38))(plVar16,local_208);
              plVar16 = (longlong *)(CONCAT44(local_1f8._4_4_,local_1f8.Data1) + lVar21);
              if (plVar16 != (longlong *)local_208) {
                puVar5 = (undefined8 *)*plVar16;
                *plVar16 = local_208._0_8_;
                auVar35._8_8_ = 0;
                auVar35._0_8_ = local_208._8_8_;
                local_208 = auVar35 << 0x40;
                if (puVar5 == (undefined8 *)0x0) goto LAB_140dfe73c;
                LOCK();
                piVar2 = (int *)(puVar5 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((*piVar2 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
                  (**(code **)*puVar5)(puVar5,1);
                }
              }
              if ((undefined8 *)local_208._0_8_ != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(local_208._0_8_ + 8);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((*piVar2 == 0) && (*(int *)(local_208._0_8_ + 0xc) == 0)) {
                  (*(code *)**(undefined8 **)local_208._0_8_)(local_208._0_8_,1);
                }
              }
            }
LAB_140dfe73c:
            lVar21 = lVar21 + 8;
          } while (lVar13 - lVar21 != 0);
        }
        FUN_140498ea8(local_350,DAT_14c996610,DAT_14c9974a8);
      }
      if (local_338 != 0) {
        if (0 < (int)local_344) {
          lVar13 = local_340 * 8;
          lVar19 = 0;
          do {
            plVar16 = *(longlong **)(*(longlong *)(local_338 + 0x10) + lVar19 * 2);
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x38))(plVar16,local_208);
              plVar16 = (longlong *)(CONCAT44(local_1f8._4_4_,local_1f8.Data1) + lVar19);
              if (plVar16 != (longlong *)local_208) {
                puVar5 = (undefined8 *)*plVar16;
                *plVar16 = local_208._0_8_;
                auVar36._8_8_ = 0;
                auVar36._0_8_ = local_208._8_8_;
                local_208 = auVar36 << 0x40;
                if (puVar5 == (undefined8 *)0x0) goto LAB_140dfe812;
                LOCK();
                piVar2 = (int *)(puVar5 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((*piVar2 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
                  (**(code **)*puVar5)(puVar5,1);
                }
              }
              if ((undefined8 *)local_208._0_8_ != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(local_208._0_8_ + 8);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if ((*piVar2 == 0) && (*(int *)(local_208._0_8_ + 0xc) == 0)) {
                  (*(code *)**(undefined8 **)local_208._0_8_)(local_208._0_8_,1);
                }
              }
            }
LAB_140dfe812:
            lVar19 = lVar19 + 8;
          } while (lVar13 - lVar19 != 0);
        }
        FUN_140498ea8(local_350,DAT_14c9968a0,DAT_14c9974a8);
      }
      local_308 = 0;
      local_300 = 1;
      lVar13 = FUN_140dff43c(local_350,DAT_14c9968a0,DAT_14c9974a8);
      if (0 < (int)local_344) {
        uVar15 = 0;
        do {
          puVar5 = *(undefined8 **)(CONCAT44(local_1f8._4_4_,local_1f8.Data1) + uVar15 * 8);
          puVar6 = *(undefined8 **)(*(longlong *)(lVar13 + 0x10) + uVar15 * 8);
          if (puVar6 != puVar5) {
            *(undefined8 **)(*(longlong *)(lVar13 + 0x10) + uVar15 * 8) = puVar5;
            if (puVar5 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
              UNLOCK();
            }
            if (puVar6 != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(puVar6 + 1);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((*piVar2 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
                (**(code **)*puVar6)(puVar6,1);
              }
            }
          }
          uVar15 = uVar15 + 1;
        } while (local_340 != uVar15);
      }
      FUN_144756766(CONCAT44(local_1f8._4_4_,local_1f8.Data1),local_1f8.Data4._0_4_);
      if (CONCAT44(local_1f8._4_4_,local_1f8.Data1) != 0) {
        FUN_1400020a8();
      }
      uVar15 = (ulonglong)local_354;
      plVar16 = local_350;
    }
  }
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar11 < 9) {
    FUN_146eb1758(plVar16);
    local_1f8.Data1 = 0;
    local_1f8.Data2 = 0;
    local_1f8.Data3 = 0;
    local_1f8.Data4[0] = '\0';
    local_1f8.Data4[1] = '\0';
    local_1f8.Data4[2] = '\0';
    local_1f8.Data4[3] = '\0';
    local_1f8.Data4[4] = '\0';
    local_1f8.Data4[5] = '\0';
    local_1f8.Data4[6] = '\0';
    local_1f8.Data4[7] = '\0';
    CoCreateGuid(&local_1f8);
    *(ulonglong *)(param_1 + 0x1d8) = CONCAT44(local_1f8._4_4_,local_1f8.Data1);
    *(ulonglong *)(param_1 + 0x1e0) =
         CONCAT17(local_1f8.Data4[7],
                  CONCAT16(local_1f8.Data4[6],
                           CONCAT15(local_1f8.Data4[5],
                                    CONCAT14(local_1f8.Data4[4],local_1f8.Data4._0_4_))));
    FUN_140b1cb14(param_1);
    FUN_140b1ca34(param_1);
  }
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if ((iVar11 == 1) ||
     ((iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc78), 10 < iVar11 &&
      (iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc78), iVar11 < 0xe)))) {
    local_240 = 0;
    piVar2 = (int *)*local_2f0 + 1;
    if ((int *)local_2f0[1] < piVar2) {
      if ((local_2ce & 2) == 0) {
        (*(code *)local_2f8[0x2e])(&local_2f8,&local_240,4);
      }
      else {
        thunk_FUN_14572512c(&local_2f8,&local_240);
      }
    }
    else {
      local_240 = *(int *)*local_2f0;
      *local_2f0 = (ulonglong)piVar2;
    }
    if (0 < local_240) {
      iVar11 = 0;
      do {
        FUN_140562eea(local_242,&local_2f8,0,&DAT_14c896044);
        if ((local_242[0] & 2) == 0) {
          local_208 = (undefined1  [16])0x0;
          local_1f8.Data1 = 0;
          local_1f8.Data2 = 0;
          local_1f8.Data3 = 0;
          local_1f8.Data4[0] = '\0';
          local_1f8.Data4[1] = '\0';
          local_1f8.Data4[2] = '\0';
          local_1f8.Data4[3] = '\0';
          local_1f8.Data4[4] = '\0';
          uStack_1e6 = 0;
          uStack_1e7 = 0xff;
          local_1f8.Data4[5] = 0xff;
          local_1f8.Data4[6] = 0xff;
          local_1f8.Data4[7] = 0xff;
          uStack_1e8 = 0xff;
          local_1d8 = (void *)CONCAT44(local_1d8._4_4_,DAT_14c845dc4);
          local_1e0 = DAT_14c845dbc;
          local_218 = (undefined1  [16])0x0;
          local_228 = (undefined1  [16])0x0;
          local_238 = (undefined1  [16])0x0;
          local_258 = (undefined1  [16])0x0;
          puVar1 = (uint *)*local_2f0 + 1;
          if ((uint *)local_2f0[1] < puVar1) {
            local_23c = (uint)(byte)local_340;
            (*(code *)local_2f8[0x2e])(&local_2f8,&local_23c,4);
            uVar12 = local_23c;
            if (1 < local_23c) {
              FUN_14572541c(&local_2f8);
              uVar12 = local_23c;
            }
          }
          else {
            uVar12 = *(uint *)*local_2f0;
            *local_2f0 = (ulonglong)puVar1;
          }
          local_340 = CONCAT71(local_340._1_7_,uVar12 != 0);
          FUN_140077068(&local_2f8,local_208);
          local_360 = 0;
          local_368 = 1;
          FUN_140430222(&local_1f8,&local_2f8,param_1,0);
          FUN_1474b9dc8(&local_2f8,local_238);
          FUN_1474ba076(&local_2f8,local_228);
          FUN_1447a84cc(&local_2f8,local_258);
          FUN_14041268c(&local_2f8,local_218);
          if (local_258._0_8_ != 0) {
            FUN_1400020a8();
          }
          if (local_238._0_8_ != 0) {
            FUN_1400020a8();
          }
          if (local_228._0_8_ != 0) {
            FUN_1400020a8();
          }
          if (local_218._0_8_ != 0) {
            FUN_1400020a8();
          }
          FUN_1400ea36e(&local_1f8,&local_1f8);
          if (local_208._0_8_ != 0) {
            FUN_1400020a8();
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_240);
    }
    uVar15 = (ulonglong)local_354;
  }
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (0xd < iVar11) {
    if (param_2[0xd] == 0) {
      bVar30 = false;
    }
    else {
      bVar30 = *(longlong *)(param_2[0xd] + 0x10) != 0;
    }
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_1f8.Data1 = (ulong)bVar30;
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
      if (1 < local_1f8.Data1) {
        FUN_14572541c(param_2);
      }
      uVar15 = (ulonglong)local_354;
      uVar12 = local_1f8.Data1;
    }
    else {
      uVar12 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar12 != 0) {
      pbVar26 = *(byte **)(param_1 + 0x50);
      if (pbVar26 == (byte *)0x0) {
        pvVar14 = (void *)FUN_14001cc68(0x208);
        memset(pvVar14,0,0x208);
        *(undefined4 *)((longlong)pvVar14 + 0x10) = 0xffffffff;
        *(undefined2 *)((longlong)pvVar14 + 0x14) = 0x105;
        *(undefined8 *)((longlong)pvVar14 + 0x18) = 0;
        *(undefined ***)((longlong)pvVar14 + 8) = &PTR_FUN_14aa57ea0;
        *(undefined8 *)((longlong)pvVar14 + 0x28) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x30) = 0;
        *(undefined ***)((longlong)pvVar14 + 0x20) = &PTR_FUN_14a3d4750;
        *(undefined4 *)((longlong)pvVar14 + 0x40) = 0xffffffff;
        *(undefined1 *)((longlong)pvVar14 + 0x45) = 0;
        *(undefined4 *)((longlong)pvVar14 + 0x50) = 0xffffffff;
        *(undefined2 *)((longlong)pvVar14 + 0x54) = 0x105;
        *(undefined8 *)((longlong)pvVar14 + 0x58) = 0;
        *(undefined ***)((longlong)pvVar14 + 0x48) = &PTR_FUN_14aa50910;
        *(undefined8 *)((longlong)pvVar14 + 0x60) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x68) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x70) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x78) = 0;
        *(undefined1 *)((longlong)pvVar14 + 0x80) = 1;
        *(undefined4 *)((longlong)pvVar14 + 0x90) = 0xffffffff;
        *(undefined2 *)((longlong)pvVar14 + 0x94) = 0x105;
        *(undefined ***)((longlong)pvVar14 + 0x88) = &PTR_FUN_14aa69e90;
        *(undefined4 *)((longlong)pvVar14 + 0xa0) = 0xffffffff;
        *(undefined2 *)((longlong)pvVar14 + 0xa4) = 0x105;
        *(undefined8 *)((longlong)pvVar14 + 0xa8) = 0;
        *(undefined ***)((longlong)pvVar14 + 0x98) = &PTR_FUN_14aa6dba0;
        *(undefined4 *)((longlong)pvVar14 + 0xb8) = 0xffffffff;
        *(undefined2 *)((longlong)pvVar14 + 0xbc) = 0x105;
        *(undefined8 *)((longlong)pvVar14 + 0xc0) = 0;
        *(undefined **)((longlong)pvVar14 + 0xb0) = &DAT_14aa6dc00;
        *(undefined8 *)((longlong)pvVar14 + 0xe8) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0xf0) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0xd8) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0xe0) = 0;
        *(undefined8 *)((longlong)pvVar14 + 200) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0xd0) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x100) = 0;
        *(undefined2 *)((longlong)pvVar14 + 0x108) = 0;
        *(undefined1 *)((longlong)pvVar14 + 0x10a) = 1;
        *(undefined4 *)((longlong)pvVar14 + 0x118) = 0xffffffff;
        *(undefined2 *)((longlong)pvVar14 + 0x11c) = 0x105;
        *(undefined8 *)((longlong)pvVar14 + 0x120) = 0;
        *(undefined ***)((longlong)pvVar14 + 0x110) = &PTR_FUN_14aa61a50;
        *(undefined8 *)((longlong)pvVar14 + 0x138) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x140) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x128) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x130) = 0;
        *(undefined1 *)((longlong)pvVar14 + 0x148) = 1;
        *(undefined4 *)((longlong)pvVar14 + 0x158) = 0xffffffff;
        *(undefined2 *)((longlong)pvVar14 + 0x15c) = 0x105;
        *(undefined8 *)((longlong)pvVar14 + 0x160) = 0;
        *(undefined ***)((longlong)pvVar14 + 0x150) = &PTR_FUN_14a4154d0;
        *(undefined1 *)((longlong)pvVar14 + 0x16c) = 1;
        *(undefined8 *)((longlong)pvVar14 + 0x180) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x188) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x170) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x178) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x1f1) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x1f9) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x1e8) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x1f0) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x1d8) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x1e0) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x1c8) = 0;
        *(undefined8 *)((longlong)pvVar14 + 0x1d0) = 0;
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        *(void **)(param_1 + 0x50) = pvVar14;
        FUN_140dff34e(uVar4);
        FUN_140dff34e(0);
        pbVar26 = *(byte **)(param_1 + 0x50);
      }
      if ((local_290 == 0) || (bVar10 = 1, *(longlong *)(local_290 + 0x10) == 0)) {
        if ((local_2cd & 8) != 0) {
          bVar10 = (local_2cd & 0x20) >> 5;
          goto LAB_140dfe987;
        }
      }
      else {
LAB_140dfe987:
        if ((bVar10 != 0) && (*(char *)(param_1 + 0xb2) != '\0')) {
          puVar1 = (uint *)*local_2f0 + 1;
          if ((uint *)local_2f0[1] < puVar1) {
            local_1f8.Data1 = 0;
            (*(code *)local_2f8[0x2e])(&local_2f8,&local_1f8,4);
            uVar12 = local_1f8.Data1;
            if (1 < local_1f8.Data1) {
              FUN_14572541c(&local_2f8);
              uVar12 = local_1f8.Data1;
            }
          }
          else {
            uVar12 = *(uint *)*local_2f0;
            *local_2f0 = (ulonglong)puVar1;
          }
          if (local_2f0[1] < *local_2f0 + 4) {
            local_1f8.Data1 = (ulong)(uVar12 != 0);
            (*(code *)local_2f8[0x2e])(&local_2f8,&local_1f8,4);
            if (1 < local_1f8.Data1) {
              FUN_14572541c(&local_2f8);
            }
          }
          else {
            *local_2f0 = *local_2f0 + 4;
          }
          uVar15 = (ulonglong)local_354;
          goto LAB_140dfddd7;
        }
      }
      if ((int *)local_2f0[1] < (int *)*local_2f0 + 1) {
        local_1f8.Data1 = (ulong)*pbVar26;
        (*(code *)local_2f8[0x2e])(&local_2f8,&local_1f8,4);
        if (1 < local_1f8.Data1) {
          FUN_14572541c(&local_2f8);
        }
        *pbVar26 = local_1f8.Data1 != 0;
      }
      else {
        *pbVar26 = *(int *)*local_2f0 != 0;
        *local_2f0 = *local_2f0 + 4;
      }
      if ((int *)local_2f0[1] < (int *)*local_2f0 + 1) {
        local_1f8.Data1 = (ulong)pbVar26[1];
        (*(code *)local_2f8[0x2e])(&local_2f8,&local_1f8,4);
        if (1 < local_1f8.Data1) {
          FUN_14572541c(&local_2f8);
        }
        pbVar26[1] = local_1f8.Data1 != 0;
      }
      else {
        pbVar26[1] = *(int *)*local_2f0 != 0;
        *local_2f0 = *local_2f0 + 4;
      }
      if (*pbVar26 == 1) {
        FUN_1474b5d54(pbVar26 + 8,&local_2f8);
        FUN_1474b5dc6(pbVar26 + 0x188,&local_2f8);
      }
      else if ((local_2d0 & 1) != 0) {
        local_1f8.Data4[0] = 0xff;
        local_1f8.Data4[1] = 0xff;
        local_1f8.Data4[2] = 0xff;
        local_1f8.Data4[3] = 0xff;
        local_1f8.Data4[4] = '\x05';
        local_1f8.Data4[5] = '\x01';
        local_1f8.Data4[6] = '\0';
        uStack_1e8 = 0;
        uStack_1e7 = 0;
        uStack_1e6 = 0;
        local_1f8.Data1 = 0x4aa57ea0;
        local_1f8.Data2 = 1;
        local_1f8.Data3 = 0;
        local_1d8 = (void *)0x0;
        uStack_1d0 = 0;
        local_1e0 = &PTR_FUN_14a3d4750;
        local_1c8 = 0;
        local_1c0 = 0xffffffff;
        local_1bc = 0;
        local_1b0 = 0xffffffff;
        local_1ac = 0x105;
        local_1aa = 0;
        local_1a8 = 0;
        local_1b8 = &PTR_FUN_14aa50910;
        local_1a0 = 0;
        uStack_198 = 0;
        local_190 = 0;
        uStack_188 = 0;
        local_180 = 1;
        local_170 = 0xffffffff;
        local_16c = 0x105;
        local_16a = 0;
        local_178 = &PTR_FUN_14aa69e90;
        local_160 = 0xffffffff;
        local_15c = 0x105;
        local_15a = 0;
        local_158 = 0;
        local_168 = &PTR_FUN_14aa6dba0;
        local_148 = 0xffffffff;
        local_144 = 0x105;
        local_142 = 0;
        local_140 = 0;
        local_150 = &DAT_14aa6dc00;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f6 = 1;
        local_e8 = 0xffffffff;
        local_e4 = 0x105;
        local_e2 = 0;
        local_e0 = 0;
        local_f0 = &PTR_FUN_14aa61a50;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_b8 = 1;
        lStack_a0 = 0;
        local_a8 = 0x105ffffffff;
        local_b0 = &PTR_FUN_14a4154d0;
        local_98 = 0x100000000;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        FUN_140dff824((GUID *)(pbVar26 + 8),&local_1f8);
        if ((GUID *)(pbVar26 + 8) != &local_1f8) {
          pvVar14 = (void *)((longlong)&local_1d8 + ((longlong)local_1d8 >> 0x18));
          if (((ulonglong)local_1d8 & 1) == 0) {
            pvVar14 = local_1d8;
          }
          iVar11 = (int)uStack_1d0;
          _Size = (size_t)(int)uStack_1d0;
          *(int *)(pbVar26 + 0x30) = (int)uStack_1d0;
          if ((int)uStack_1d0 == 0 && *(int *)(pbVar26 + 0x34) == 0) {
            pbVar26[0x34] = 0;
            pbVar26[0x35] = 0;
            pbVar26[0x36] = 0;
            pbVar26[0x37] = 0;
          }
          else {
            pbVar20 = pbVar26 + 0x28;
            FUN_1474ba324(pbVar20,uStack_1d0 & 0xffffffff);
            if (iVar11 != 0) {
              pbVar7 = *(byte **)pbVar20;
              pbVar20 = pbVar20 + ((longlong)pbVar7 >> 0x18);
              if (((ulonglong)pbVar7 & 1) == 0) {
                pbVar20 = pbVar7;
              }
              memcpy(pbVar20,pvVar14,_Size);
            }
          }
        }
        pbVar26[0x38] = local_1c8;
        *(undefined4 *)(pbVar26 + 0x40) = local_1c0;
        *(undefined2 *)(pbVar26 + 0x44) = local_1bc;
        pbVar26[0x68] = 0;
        pbVar26[0x69] = 0;
        pbVar26[0x6a] = 0;
        pbVar26[0x6b] = 0;
        pbVar26[0x6c] = 0;
        pbVar26[0x6d] = 0;
        pbVar26[0x6e] = 0;
        pbVar26[0x6f] = 0;
        FUN_140dff93a(pbVar26 + 0x88,&local_178);
        puVar5 = *(undefined8 **)(pbVar26 + 0x128);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        pbVar26[0x128] = 0;
        pbVar26[0x129] = 0;
        pbVar26[0x12a] = 0;
        pbVar26[299] = 0;
        pbVar26[300] = 0;
        pbVar26[0x12d] = 0;
        pbVar26[0x12e] = 0;
        pbVar26[0x12f] = 0;
        uVar31 = (undefined4)local_a8;
        *(undefined4 *)(pbVar26 + 0x15b) = local_a8._3_4_;
        *(undefined4 *)(pbVar26 + 0x158) = uVar31;
        lVar13 = *(longlong *)(pbVar26 + 0x160);
        if (lVar13 != lStack_a0) {
          *(longlong *)(pbVar26 + 0x160) = lStack_a0;
          if (lStack_a0 != 0) {
            LOCK();
            *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
            UNLOCK();
          }
          if (lVar13 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar13 + 8);
            uVar12 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar12 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
        pbVar26[0x16c] = local_98._4_1_;
        *(undefined4 *)(pbVar26 + 0x168) = (undefined4)local_98;
        lVar13 = *(longlong *)(pbVar26 + 0x170);
        if (lVar13 != local_90) {
          *(longlong *)(pbVar26 + 0x170) = local_90;
          if (local_90 != 0) {
            LOCK();
            *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
            UNLOCK();
          }
          if (lVar13 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar13 + 8);
            uVar12 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar12 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
        *(undefined8 *)(pbVar26 + 0x178) = uStack_88;
        *(undefined8 *)(pbVar26 + 0x180) = local_80;
        FUN_140dff87c(&local_b0);
        FUN_140296b76(&local_f0);
        FUN_140296d44(&local_178);
        FUN_140296ab8(&local_1b8);
        FUN_140296a12(&local_1f8);
        *(undefined1 (*) [16])(pbVar26 + 0x1b8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar26 + 0x1a8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar26 + 0x198) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pbVar26 + 0x188) = (undefined1  [16])0x0;
        if (*(longlong *)(pbVar26 + 0x1c8) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 (*) [16])(pbVar26 + 0x1c8) = (undefined1  [16])0x0;
        uVar15 = (ulonglong)local_354;
        if (*(longlong *)(pbVar26 + 0x1d8) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 (*) [16])(pbVar26 + 0x1d8) = (undefined1  [16])0x0;
        if (*(longlong *)(pbVar26 + 0x1e8) != 0) {
          FUN_1400020a8();
        }
        *(undefined1 (*) [16])(pbVar26 + 0x1e8) = (undefined1  [16])0x0;
      }
      if (pbVar26[1] == 1) {
        pbVar26 = pbVar26 + 0x1f8;
        iVar11 = 0;
        FUN_1404d75a8(pbVar26,0);
        if ((local_2d0 & 4) != 0) {
          if (*(longlong *)(param_1 + 0x218) != 0) {
            iVar11 = FUN_1401f66f6(*(longlong *)(param_1 + 0x218),DAT_14c996af0);
          }
          uVar15 = (ulonglong)local_354;
          if ((*(char *)(param_1 + 0xe0) != '\x01') ||
             (iVar11 != *(int *)(*(longlong *)pbVar26 + 0x60))) {
            FUN_14572541c(&local_2f8);
          }
        }
        FUN_140dfff0a(*(undefined8 *)pbVar26,&local_2f8,param_1,1);
      }
      else if ((local_2d0 & 1) != 0) {
        FUN_1404d758c(pbVar26 + 0x1f8);
      }
    }
  }
LAB_140dfddd7:
  plVar16 = local_350;
  lVar13 = FUN_140dffcee(local_350,DAT_14c9974d0,DAT_14c9974c8);
  if ((lVar13 == 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    uVar12 = FUN_1401f66f6(*(undefined8 *)(param_1 + 0x218),DAT_14c9974c8);
    local_1f8.Data1 = 0;
    local_1f8.Data2 = 0;
    local_1f8.Data3 = 0;
    local_1f8.Data4[0] = '\0';
    local_1f8.Data4[1] = '\0';
    local_1f8.Data4[2] = '\0';
    local_1f8.Data4[3] = '\0';
    local_1f8.Data4[4] = '\0';
    local_1f8.Data4[5] = '\0';
    local_1f8.Data4[6] = '\0';
    local_1f8.Data4[7] = '\0';
    FUN_1400498da(&local_1f8,uVar12,1);
    if ((int)plVar16[2] != *(int *)((longlong)plVar16 + 0x3c)) {
      uVar24 = (uint)((ulonglong)DAT_14c9974c8 >> 0x10);
      uVar25 = (uint)DAT_14c9974c8 & 0xffff;
      uVar28 = (uint)((ulonglong)DAT_14c9974d0 >> 0x10);
      uVar23 = (uint)DAT_14c9974d0 & 0xffff;
      uVar28 = (int)((ulonglong)DAT_14c9974d0 >> 0x20) + ((uint)DAT_14c9974d0 << 0x10 | uVar23) +
               (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar23 >> 4);
      plVar17 = plVar16 + 8;
      if ((longlong *)plVar16[9] != (longlong *)0x0) {
        plVar17 = (longlong *)plVar16[9];
      }
      iVar11 = *(int *)((longlong)plVar17 +
                       (ulonglong)
                       ((int)plVar16[10] - 1U &
                       ((uVar28 >> 2) +
                        (int)((ulonglong)DAT_14c9974c8 >> 0x20) + (uint)DAT_14c9974c8 * 0x10000 +
                        uVar25 + (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar25 >> 4) + uVar28 * 0x40
                        + 0x9e3779b9 ^ uVar28)) * 4);
      if (iVar11 != -1) {
        lVar13 = plVar16[1];
        do {
          lVar21 = (longlong)iVar11 * 0x40;
          lVar19 = lVar13 + lVar21;
          if ((*(longlong *)(lVar13 + lVar21) == DAT_14c9974d0) &&
             (*(longlong *)(lVar13 + 8 + lVar21) == DAT_14c9974c8)) {
            if (((char *)(lVar19 + 0x10) != (char *)0x0 && lVar19 != 0) &&
               (*(char *)(lVar19 + 0x10) == '\x1e')) {
              FUN_1448c236a();
              lVar13 = *(longlong *)(lVar19 + 0x30);
              *(undefined1 *)(lVar13 + 8) = 1;
              if (lVar13 != 0) {
                if (0 < (int)uVar12) {
                  uVar15 = 0;
                  do {
                    lVar19 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + uVar15 * 8);
                    if (lVar19 != 0) {
                      *(undefined8 *)(*(longlong *)(lVar13 + 0x10) + uVar15 * 8) = 0;
                      LOCK();
                      *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
                      UNLOCK();
                      puVar5 = *(undefined8 **)
                                (CONCAT44(local_1f8._4_4_,local_1f8.Data1) + uVar15 * 8);
                      *(longlong *)(CONCAT44(local_1f8._4_4_,local_1f8.Data1) + uVar15 * 8) = lVar19
                      ;
                      if (puVar5 != (undefined8 *)0x0) {
                        LOCK();
                        piVar2 = (int *)(puVar5 + 1);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if ((*piVar2 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
                          (**(code **)*puVar5)(puVar5,1);
                        }
                      }
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar12 != uVar15);
                }
                plVar16 = local_350;
                FUN_140498ea8(local_350,DAT_14c9974d0,DAT_14c9974c8);
                uVar15 = (ulonglong)local_354;
              }
            }
            break;
          }
          iVar11 = *(int *)(lVar19 + 0x38);
        } while (iVar11 != -1);
      }
    }
    local_318 = 0;
    local_310 = 1;
    lVar13 = FUN_140dff3f6(plVar16,DAT_14c9974d0,DAT_14c9974c8);
    if (0 < (int)uVar12) {
      uVar29 = 0;
      do {
        puVar5 = *(undefined8 **)(CONCAT44(local_1f8._4_4_,local_1f8.Data1) + uVar29 * 8);
        puVar6 = *(undefined8 **)(*(longlong *)(lVar13 + 0x10) + uVar29 * 8);
        if (puVar6 != puVar5) {
          *(undefined8 **)(*(longlong *)(lVar13 + 0x10) + uVar29 * 8) = puVar5;
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
            UNLOCK();
          }
          uVar15 = (ulonglong)local_354;
          plVar16 = local_350;
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar6 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((*piVar2 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
        }
        uVar29 = uVar29 + 1;
      } while (uVar12 != uVar29);
    }
    FUN_1402ef3f6(CONCAT44(local_1f8._4_4_,local_1f8.Data1),local_1f8.Data4._0_4_);
    if (CONCAT44(local_1f8._4_4_,local_1f8.Data1) != 0) {
      FUN_1400020a8();
    }
  }
  bVar10 = (byte)uVar15;
  lVar13 = FUN_140dffa30(plVar16,DAT_14c996a78,DAT_14c9974a8);
  if ((lVar13 == 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    uVar12 = FUN_1401f66f6(*(undefined8 *)(param_1 + 0x218),DAT_14c9974a8);
    local_1f8.Data1 = 0;
    local_1f8.Data2 = 0;
    local_1f8.Data3 = 0;
    local_1f8.Data4[0] = '\0';
    local_1f8.Data4[1] = '\0';
    local_1f8.Data4[2] = '\0';
    local_1f8.Data4[3] = '\0';
    local_1f8.Data4[4] = '\0';
    local_1f8.Data4[5] = '\0';
    local_1f8.Data4[6] = '\0';
    local_1f8.Data4[7] = '\0';
    FUN_14008dbc8(&local_1f8,uVar12,1);
    lVar13 = FUN_140dffdfc(plVar16,DAT_14c996a78,DAT_14c9974a8);
    if (lVar13 != 0) {
      if (0 < (int)uVar12) {
        lVar19 = 0;
        do {
          plVar16 = *(longlong **)(*(longlong *)(lVar13 + 0x10) + lVar19 * 2);
          if (plVar16 != (longlong *)0x0) {
            (**(code **)(*plVar16 + 0x38))(plVar16,local_208);
            plVar16 = (longlong *)(CONCAT44(local_1f8._4_4_,local_1f8.Data1) + lVar19);
            if (plVar16 != (longlong *)local_208) {
              puVar5 = (undefined8 *)*plVar16;
              *plVar16 = local_208._0_8_;
              auVar38._8_8_ = 0;
              auVar38._0_8_ = local_208._8_8_;
              local_208 = auVar38 << 0x40;
              if (puVar5 == (undefined8 *)0x0) goto LAB_140dfec75;
              LOCK();
              piVar2 = (int *)(puVar5 + 1);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((*piVar2 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
                (**(code **)*puVar5)(puVar5,1);
              }
            }
            if ((undefined8 *)local_208._0_8_ != (undefined8 *)0x0) {
              LOCK();
              piVar2 = (int *)(local_208._0_8_ + 8);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if ((*piVar2 == 0) && (*(int *)(local_208._0_8_ + 0xc) == 0)) {
                (*(code *)**(undefined8 **)local_208._0_8_)(local_208._0_8_,1);
              }
            }
          }
LAB_140dfec75:
          lVar19 = lVar19 + 8;
        } while ((ulonglong)uVar12 << 3 != lVar19);
      }
      plVar16 = local_350;
      FUN_140498ea8(local_350,DAT_14c996a78,DAT_14c9974a8);
      uVar15 = (ulonglong)local_354;
    }
    bVar10 = (byte)uVar15;
    local_328 = 0;
    local_320 = 1;
    lVar13 = FUN_140dff43c(plVar16,DAT_14c996a78,DAT_14c9974a8);
    if (0 < (int)uVar12) {
      uVar29 = 0;
      do {
        puVar5 = *(undefined8 **)(CONCAT44(local_1f8._4_4_,local_1f8.Data1) + uVar29 * 8);
        puVar6 = *(undefined8 **)(*(longlong *)(lVar13 + 0x10) + uVar29 * 8);
        if (puVar6 != puVar5) {
          *(undefined8 **)(*(longlong *)(lVar13 + 0x10) + uVar29 * 8) = puVar5;
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
            UNLOCK();
          }
          uVar15 = (ulonglong)local_354;
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar6 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((*piVar2 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
        }
        bVar10 = (byte)uVar15;
        uVar29 = uVar29 + 1;
      } while (uVar12 != uVar29);
    }
    FUN_144756766(CONCAT44(local_1f8._4_4_,local_1f8.Data1),local_1f8.Data4._0_4_);
    if (CONCAT44(local_1f8._4_4_,local_1f8.Data1) != 0) {
      FUN_1400020a8();
    }
  }
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (iVar11 < 0x1f) {
    FUN_1448332aa(param_2,&DAT_149e3cbf8);
  }
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (iVar11 < 0x44) {
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if (iVar11 < 0x55) {
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0 && (bVar10 & 1) == 0) {
    uVar12 = *(uint *)(param_1 + 0x210);
    uVar15 = (ulonglong)uVar12;
    if (uVar15 != 0xffffffff) {
      if ((-1 < (int)uVar12) &&
         (iVar11 = *(int *)(param_1 + 0x98), uVar12 == iVar11 - 1U && (int)uVar12 < iVar11)) {
        if (iVar11 + ~uVar12 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x90) + uVar15 * 8),
                  (void *)(*(longlong *)(param_1 + 0x90) + uVar15 * 8 + 8),
                  (longlong)(int)(iVar11 + ~uVar12) << 3);
          uVar12 = *(int *)(param_1 + 0x98) - 1;
        }
        *(uint *)(param_1 + 0x98) = uVar12;
        FUN_140ddbe62(param_1 + 0x90);
      }
      *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x1e8) == -1) {
    FUN_140b1cb14(param_1);
  }
  FUN_140b1ca34(param_1);
  plVar16 = (longlong *)(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) < 0) {
    FUN_14481578e(plVar16,0);
  }
  if ((*(longlong *)(param_1 + 0x218) != 0) &&
     (FUN_140dff9a0(&local_1f8), CONCAT71(uStack_1c7,local_1c8) != 0)) {
    uVar12 = *(uint *)(param_1 + 0xd8);
    lVar13 = (longlong)(int)uVar12;
    if (lVar13 != 0) {
      local_208 = ZEXT416(uVar12) << 0x40;
      FUN_1446f48e2(local_208);
      memset((void *)local_208._0_8_,0,lVar13 * 4);
      local_218 = ZEXT416(uVar12) << 0x40;
      FUN_1446f48e2();
      local_228 = ZEXT416(uVar12) << 0x40;
      FUN_1446f48e2();
      local_238 = ZEXT416(uVar12) << 0x40;
      FUN_1446f48e2(local_238);
      memset((void *)local_238._0_8_,0,lVar13 * 4);
      if (0 < (int)uVar12) {
        lVar19 = 6;
        lVar21 = 0;
        do {
          iVar11 = 0;
          if (lVar21 != 0) {
            iVar11 = *(int *)(local_228._0_8_ + -4 + lVar21 * 4) +
                     *(int *)(local_218._0_8_ + -4 + lVar21 * 4);
          }
          uVar31 = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + lVar19 * 4);
          *(int *)(local_218._0_8_ + lVar21 * 4) = iVar11;
          *(undefined4 *)(local_228._0_8_ + lVar21 * 4) = uVar31;
          lVar21 = lVar21 + 1;
          lVar19 = lVar19 + 0xc;
        } while (lVar13 != lVar21);
      }
      uVar12 = *(int *)(local_228._0_8_ + (longlong)(local_228._8_4_ + -1) * 4) +
               *(int *)(local_218._0_8_ + (longlong)(local_218._8_4_ + -1) * 4);
      iVar11 = *(int *)(param_1 + 0x208);
      *(uint *)(param_1 + 0x208) = iVar11 + uVar12;
      if ((uint)(*(int *)(param_1 + 0x20c) - iVar11) < uVar12) {
        FUN_1446f48e2(plVar16);
      }
      uVar12 = FUN_146e9b036(&local_1f8);
      if (0 < (int)uVar12) {
        lVar13 = 0xd;
        uVar15 = 0;
        do {
          lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x140);
          if (*(int *)(lVar19 + -0x2c + lVar13 * 4) == *(int *)(lVar19 + lVar13 * 4)) {
            lVar19 = (longlong)
                     *(int *)(*(longlong *)(CONCAT71(uStack_1c7,local_1c8) + 0x10) + uVar15 * 4);
            iVar11 = *(int *)(local_238._0_8_ + lVar19 * 4);
            if (iVar11 < *(int *)(local_228._0_8_ + lVar19 * 4)) {
              uVar24 = iVar11 + *(int *)(local_218._0_8_ + lVar19 * 4);
              if ((-1 < (int)uVar24) && ((int)uVar24 < *(int *)(param_1 + 0x208))) {
                *(int *)(*plVar16 + (ulonglong)uVar24 * 4) = (int)uVar15;
                piVar2 = (int *)(local_238._0_8_ + lVar19 * 4);
                *piVar2 = *piVar2 + 1;
              }
            }
          }
          uVar15 = uVar15 + 1;
          lVar13 = lVar13 + 0x14;
        } while (uVar12 != uVar15);
      }
      if (local_238._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_228._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_218._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_208._0_8_ != 0) {
        FUN_1400020a8();
      }
    }
  }
  auVar9 = _DAT_149931e80;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if (((*(longlong *)(param_1 + 0x218) != 0) && (0 < (int)*(uint *)(param_1 + 0xd8))) &&
       (*(int *)(*(longlong *)(param_1 + 0xd0) + 0x18) == 0)) {
      uVar15 = (ulonglong)*(uint *)(param_1 + 0xd8) * 0x30 - 0x30;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar15;
      uVar31 = SUB164(auVar8 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
      uVar34 = (undefined4)(uVar15 / 0x180000000);
      auVar32._0_8_ = CONCAT44(uVar34,uVar31);
      auVar32._8_4_ = uVar31;
      auVar32._12_4_ = uVar34;
      auVar33._0_8_ = auVar32._0_8_ >> 5;
      auVar33._8_8_ = auVar32._8_8_ >> 5;
      puVar18 = (undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0xa8);
      uVar29 = 0;
      auVar35 = pmovsxbq(in_XMM1,0x302);
      auVar36 = pmovsxbq(in_XMM2,0x100);
      auVar33 = auVar33 | _DAT_149931e80;
      do {
        lVar13 = auVar33._0_8_;
        lVar19 = auVar33._8_8_;
        if ((bool)(~(lVar13 < (longlong)(uVar29 ^ auVar9._0_8_)) & 1)) {
          puVar18[-0x24] = 0;
        }
        auVar37._8_4_ = (int)uVar29;
        auVar37._0_8_ = uVar29;
        auVar37._12_4_ = (int)(uVar29 >> 0x20);
        if ((longlong)((auVar37._8_8_ | auVar36._8_8_) ^ auVar9._8_8_) <= lVar19) {
          puVar18[-0x18] = 0;
        }
        auVar38 = (auVar37 | auVar35) ^ auVar9;
        if (auVar38._0_8_ <= lVar13) {
          puVar18[-0xc] = 0;
        }
        if (auVar38._8_8_ <= lVar19) {
          *puVar18 = 0;
        }
        uVar29 = uVar29 + 4;
        puVar18 = puVar18 + 0x30;
      } while ((uVar15 / 0x30 + 4 & 0xfffffffffffffffc) != uVar29);
      FUN_140dff9a0(&local_1f8);
      if ((CONCAT71(uStack_1c7,local_1c8) != 0) &&
         (lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x218) + 0x148), 0 < lVar13)) {
        lVar19 = 0xd;
        lVar21 = 0;
        do {
          lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x140);
          if (*(int *)(lVar22 + -0x2c + lVar19 * 4) == *(int *)(lVar22 + lVar19 * 4)) {
            iVar11 = *(int *)(*(longlong *)(CONCAT71(uStack_1c7,local_1c8) + 0x10) + lVar21 * 4);
            if ((-1 < (longlong)iVar11) && (iVar11 < *(int *)(param_1 + 0xd8))) {
              piVar2 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x18 + (longlong)iVar11 * 0x30);
              *piVar2 = *piVar2 + 1;
            }
          }
          lVar21 = lVar21 + 1;
          lVar19 = lVar19 + 0x14;
        } while (lVar13 != lVar21);
      }
      if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_140dfe16f;
    }
    iVar11 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    if (iVar11 < 0x6b) {
      *(undefined1 *)(param_1 + 0xe2) = 0;
    }
  }
LAB_140dfe16f:
  plVar16 = local_330;
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_330 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  lVar13 = local_260;
  local_2f8 = &PTR_FUN_149f52ef0;
  if (local_260 != 0) {
    FUN_14041e184(local_260);
    FUN_1400020a8(lVar13);
  }
  FUN_14041e0ea(&local_2f8);
  if ((local_60 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dff34e FUN_140dff34e body=168 status=ok
// SIG undefined FUN_140dff34e(void)

void FUN_140dff34e(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x1f8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_140dff87c(param_1 + 0x150);
  FUN_140296b76(param_1 + 0x110);
  FUN_140296d44(param_1 + 0x88);
  FUN_140296ab8(param_1 + 0x48);
  FUN_140296a12(param_1 + 8);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140dff3f6 FUN_140dff3f6 body=70 status=ok
// SIG undefined FUN_140dff3f6(void)

void FUN_140dff3f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_140e000ca(param_1,param_2,param_3,param_4);
  }
  FUN_140dffbf6(param_1,param_2,param_3);
  return;
}



// FUNCTION 140dff43c FUN_140dff43c body=70 status=ok
// SIG undefined FUN_140dff43c(void)

void FUN_140dff43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_140dff57a(param_1,param_2,param_3,param_4);
  }
  FUN_140dff482(param_1,param_2,param_3);
  return;
}



// FUNCTION 140dff482 FUN_140dff482 body=248 status=ok
// SIG undefined FUN_140dff482(void)

void FUN_140dff482(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_140dff550;
    }
  }
  lVar2 = 0;
LAB_140dff550:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 140dff57a FUN_140dff57a body=543 status=ok
// SIG undefined FUN_140dff57a(void)

void FUN_140dff57a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_140dff622;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140dff622:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c997768) {
    FUN_144b3d300(&DAT_14c997768);
    if (DAT_14c997768 == -1) {
      DAT_14c997760 = 0;
      _Init_thread_footer(&DAT_14c997768);
    }
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c997760;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f6b1a0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_140dff79a(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dff79a FUN_140dff79a body=138 status=ok
// SIG undefined FUN_140dff79a(void)

undefined1 *
FUN_140dff79a(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x2a;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f6d460;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 140dff824 FUN_140dff824 body=87 status=ok
// SIG undefined FUN_140dff824(void)

longlong FUN_140dff824(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 8) = uVar3;
  lVar4 = *(longlong *)(param_2 + 0x10);
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  return param_1;
}



// FUNCTION 140dff87c FUN_140dff87c body=190 status=ok
// SIG undefined FUN_140dff87c(void)

void FUN_140dff87c(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14a4154d0;
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cff0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 140dff93a FUN_140dff93a body=101 status=ok
// SIG undefined FUN_140dff93a(void)

void FUN_140dff93a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(param_2 + 0x81);
  return;
}



// FUNCTION 140dff9a0 FUN_140dff9a0 body=143 status=ok
// SIG undefined FUN_140dff9a0(void)

undefined8 * FUN_140dff9a0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = "AutoInstanceMeshIndex";
  local_20 = 0x15;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = (ulonglong)uVar1;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  uVar2 = FUN_140757af2(param_2);
  param_1[5] = uVar2;
  param_1[6] = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dffa30 FUN_140dffa30 body=265 status=ok
// SIG undefined FUN_140dffa30(void)

longlong FUN_140dffa30(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((char *)(lVar1 + 0x10) == (char *)0x0) {
        return 0;
      }
      if (*(char *)(lVar1 + 0x10) == '*') {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 140dffb3a FUN_140dffb3a body=188 status=ok
// SIG undefined FUN_140dffb3a(void)

void FUN_140dffb3a(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  return;
}



// FUNCTION 140dffbf6 FUN_140dffbf6 body=248 status=ok
// SIG undefined FUN_140dffbf6(void)

void FUN_140dffbf6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_140dffcc4;
    }
  }
  lVar2 = 0;
LAB_140dffcc4:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 140dffcee FUN_140dffcee body=269 status=ok
// SIG undefined FUN_140dffcee(void)

longlong FUN_140dffcee(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 0x10) == '+'))
      {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 140dffdfc FUN_140dffdfc body=269 status=ok
// SIG undefined FUN_140dffdfc(void)

longlong FUN_140dffdfc(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (((char *)(lVar1 + 0x10) != (char *)0x0 && lVar1 != 0) &&
         (*(char *)(lVar1 + 0x10) == '\x1b')) {
        FUN_1448c236a();
        lVar5 = *(longlong *)(lVar1 + 0x30);
        *(undefined1 *)(lVar5 + 8) = 1;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 140dfff0a FUN_140dfff0a body=447 status=ok
// SIG undefined FUN_140dfff0a(void)

void FUN_140dfff0a(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_128 [46];
  byte local_fa [2];
  undefined1 local_f8 [16];
  undefined1 local_e8 [13];
  undefined4 uStack_db;
  undefined1 uStack_d7;
  undefined6 uStack_d6;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140562eea(local_fa,param_2,0,&DAT_14c896044);
  if ((local_fa[0] & 2) == 0) {
    if (((((char)param_4 == '\x01' && (*(byte *)(param_2 + 0x28) & 4) != 0) &&
         (*(longlong *)(param_2 + 0x68) != 0)) &&
        (*(longlong *)(*(longlong *)(param_2 + 0x68) + 8) != 0)) && (0 < *(int *)(param_1 + 0x70)))
    {
      cVar1 = FUN_147430a47();
      if (cVar1 == '\0') {
        local_e8 = SUB1613((undefined1  [16])0x0,0);
        uStack_d6 = 0;
        local_f8 = (undefined1  [16])0x0;
        uStack_db = 0xffffffff;
        uStack_d7 = 0xff;
        local_d0 = DAT_14c845dbc;
        local_c8 = DAT_14c845dc4;
        local_c0 = (undefined1  [16])0x0;
        local_b0 = (undefined1  [16])0x0;
        local_a0 = (undefined1  [16])0x0;
        local_90 = (undefined1  [16])0x0;
        local_80 = (undefined1  [16])0x0;
        local_70 = (undefined1  [16])0x0;
        local_60 = (undefined1  [16])0x0;
        local_50 = 0;
        local_4c = 0xffffffff;
        uStack_48 = 0xffffffff;
        uStack_44 = 0xffffffff;
        uStack_40 = 0xffffffff;
        local_3c = 0;
        local_34 = 0;
        FUN_140411d08(local_f8,param_2,param_3,1);
        if (local_80._0_8_ != 0) {
          FUN_1400020a8();
        }
        if (local_90._0_8_ != 0) {
          FUN_1400020a8();
        }
        if (local_a0._0_8_ != 0) {
          FUN_1400020a8();
        }
        if (local_b0._0_8_ != 0) {
          FUN_1400020a8();
        }
        if (local_c0._0_8_ != 0) {
          FUN_1400020a8();
        }
        FUN_1400ea36e(local_e8,local_e8);
        if (local_f8._0_8_ != 0) {
          FUN_1400020a8();
        }
        goto LAB_140dfff8d;
      }
    }
    FUN_140411d08(param_1,param_2,param_3,param_4);
  }
LAB_140dfff8d:
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e000ca FUN_140e000ca body=536 status=ok
// SIG undefined FUN_140e000ca(void)

void FUN_140e000ca(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) == param_3)
        goto LAB_140e00172;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140e00172:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c996fdc) {
    FUN_144b3d300(&DAT_14c996fdc);
    if (DAT_14c996fdc == -1) {
      DAT_14c996fd4 = 0;
      _Init_thread_footer(&DAT_14c996fdc);
    }
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c996fd4;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f64ab0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_140e002e4(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e002e4 FUN_140e002e4 body=138 status=ok
// SIG undefined FUN_140e002e4(void)

undefined1 *
FUN_140e002e4(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x2b;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f64a70;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 140e0037a FUN_140e0037a body=39 status=ok
// SIG undefined FUN_140e0037a(void)

void FUN_140e0037a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_140049c78(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 140e003aa FUN_140e003aa body=401 status=ok
// SIG undefined FUN_140e003aa(void)

undefined8 * FUN_140e003aa(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar3 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar3);
  *param_1 = &PTR_FUN_14b3a51e0;
  param_1[5] = &PTR_FUN_14b3a5be0;
  param_1[6] = &PTR_LAB_14b3a5c20;
  param_1[0x55] = &PTR_FUN_14b3a5c70;
  param_1[0x56] = &PTR_FUN_14b3a5cf0;
  param_1[0x57] = &PTR_FUN_14b3a5d00;
  param_1[0xc4] = &PTR_FUN_14b3a5d30;
  param_1[0xc5] = &PTR_FUN_14b3a5d50;
  *(undefined2 *)(param_1 + 0xc6) = 1;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined2 *)((longlong)param_1 + 0x669) = 1;
  *(undefined1 *)((longlong)param_1 + 0x66b) = 0;
  *(undefined1 **)((longlong)param_1 + 0x66c) = &DAT_41200000;
  *(undefined2 *)((longlong)param_1 + 0x674) = 0;
  param_1[0xcf] = &DAT_41200000;
  param_1[0xd0] = 0x3e80000000000001;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  puVar2 = param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      plVar1 = param_1 + 0xd7;
      param_1[0xda] = &DAT_14cb88c60;
      param_1[0xd9] = param_1;
      lVar4 = DAT_14cb88c60;
      while( true ) {
        param_1[0xd7] = lVar4;
        LOCK();
        lVar5 = *(longlong *)param_1[0xda];
        bVar6 = lVar4 == lVar5;
        if (bVar6) {
          *(longlong *)param_1[0xda] = (longlong)plVar1;
          lVar5 = lVar4;
        }
        UNLOCK();
        if (bVar6) break;
        param_1[0xd7] = lVar5;
        lVar4 = *(longlong *)param_1[0xda];
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
      return param_1;
    }
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) break;
    puVar2 = (undefined8 *)puVar2[4];
  }
  return param_1;
}



// FUNCTION 140e0054a FUN_140e0054a body=40 status=ok
// SIG undefined FUN_140e0054a(void)

undefined8 FUN_140e0054a(undefined8 param_1,int param_2)

{
  FUN_140e00572();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e00572 FUN_140e00572 body=265 status=ok
// SIG undefined FUN_140e00572(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e00572(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b6bced0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  FUN_140e0067b(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4677d0;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140e00659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140e0067b FUN_140e0067b body=44 status=ok
// SIG undefined FUN_140e0067b(void)

void FUN_140e0067b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 140e006b0 FUN_140e006b0 body=595 status=ok
// SIG undefined FUN_140e006b0(void)

void FUN_140e006b0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined8 **local_e8;
  undefined4 local_e0;
  undefined8 **local_d8;
  undefined4 local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 **local_60;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar4 == 0) {
    param_1 = param_1 + 0x57;
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x20))(param_1,&local_98);
      local_a8 = local_98;
      local_a0 = local_90;
      FUN_14015671e(&local_68);
      lVar4 = local_98;
      local_b8 = 0;
      uStack_b0 = 0;
      if ((longlong)local_90 != 0) {
        lVar5 = 0;
        do {
          local_70 = *(undefined8 *)(lVar4 + lVar5);
          local_78 = 1;
          local_80 = &local_70;
          cVar2 = FUN_144b06fd6(local_50,&local_80);
          uVar1 = uStack_b0;
          if (cVar2 == '\0') {
            lVar6 = (longlong)(int)uStack_b0;
            uVar3 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
            if (uStack_b0._4_4_ < uVar3) {
              FUN_14075a758(&local_b8,uVar1 & 0xffffffff);
            }
            *(undefined8 *)(local_b8 + lVar6 * 8) = *(undefined8 *)(lVar4 + lVar5);
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)local_90 * 8 != lVar5);
      }
      if (local_98 != 0) {
        FUN_1400020a8(local_98);
      }
      local_98 = local_b8;
      local_90 = (int)uStack_b0;
      local_8c = uStack_b0._4_4_;
      local_c8 = local_b8;
      local_c0 = (int)uStack_b0;
      FUN_146e20b4c(local_50);
      FUN_1448635f4(&local_68);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_80 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,&local_88);
      if (local_80 != (undefined8 *)0x0) {
        local_d0 = 1;
        local_d8 = &local_80;
        FUN_14015671e(&local_68);
        local_e0 = 1;
        local_e8 = &local_80;
        FUN_146e20b4c(local_50);
        FUN_1448635f4(&local_68);
      }
    }
  }
  else {
    local_60 = &local_80;
    local_68 = &LAB_1436221ea;
    FUN_144966906(lVar4 + 0x138);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


