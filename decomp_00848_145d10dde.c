// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d10dde FUN_145d10dde body=782 status=ok
// SIG undefined FUN_145d10dde(void)

undefined8 * FUN_145d10dde(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b372a00;
  *(undefined4 *)(param_1 + 0x16) = 0xa006;
  param_1[0x17] = "input_feel";
  lVar4 = FUN_145d110ee();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d10eb5;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d10eb5:
  lVar4 = FUN_145d110ee();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145d10f4a;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145d10f4a:
  FUN_1400b22c2(local_58,"GbxInput.Feel");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d110ee FUN_145d110ee body=57 status=ok
// SIG undefined FUN_145d110ee(void)

void FUN_145d110ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fa30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fa30 = FUN_140002ddd(FUN_1464e85b9,uVar1,L"GbxInputFeelDef");
  }
  return;
}



// FUNCTION 145d11128 FUN_145d11128 body=53 status=ok
// SIG undefined FUN_145d11128(void)

void FUN_145d11128(longlong *param_1)

{
  FUN_145d1115e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d1115e FUN_145d1115e body=89 status=ok
// SIG undefined FUN_145d1115e(void)

void FUN_145d1115e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 145d111b8 FUN_145d111b8 body=53 status=ok
// SIG undefined FUN_145d111b8(void)

void FUN_145d111b8(longlong *param_1)

{
  FUN_145d111ee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d111ee FUN_145d111ee body=89 status=ok
// SIG undefined FUN_145d111ee(void)

void FUN_145d111ee(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 145d11248 FUN_145d11248 body=69 status=ok
// SIG undefined FUN_145d11248(void)

undefined8 * FUN_145d11248(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a355530;
  FUN_145d1128d(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d1128d FUN_145d1128d body=73 status=ok
// SIG undefined FUN_145d1128d(void)

void FUN_145d1128d(longlong param_1,int param_2)

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



// FUNCTION 145d112d6 FUN_145d112d6 body=62 status=ok
// SIG undefined FUN_145d112d6(void)

undefined8 * FUN_145d112d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d8e90;
  FUN_145d11314(param_1 + 0xd);
  FUN_1458ea31e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d11314 FUN_145d11314 body=80 status=ok
// SIG undefined FUN_145d11314(void)

void FUN_145d11314(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
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



// FUNCTION 145d11370 FUN_145d11370 body=272 status=ok
// SIG undefined FUN_145d11370(void)

undefined8 * FUN_145d11370(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a9fab80;
  param_1[0x72] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FUN_1446f470e(&local_20,L"ParticleSystemComponent0",1);
  uVar2 = FUN_140791f3e();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  *(undefined4 *)(lVar3 + 0x734) = 0x3f800000;
  lVar3 = param_1[0x72];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1148a FUN_145d1148a body=134 status=ok
// SIG undefined FUN_145d1148a(void)

undefined8 * FUN_145d1148a(undefined8 *param_1)

{
  FUN_140c444d0();
  FUN_145ad4c58(param_1 + 6);
  *param_1 = &PTR_FUN_14acce470;
  param_1[6] = &PTR_FUN_14acce750;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  return param_1;
}



// FUNCTION 145d11510 FUN_145d11510 body=199 status=ok
// SIG undefined FUN_145d11510(void)

int FUN_145d11510(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = (int)param_1[1];
  iVar5 = iVar1;
  if (0 < iVar1) {
    uVar7 = 0;
    bVar4 = 0;
    do {
      lVar2 = *param_1;
      lVar3 = *param_2;
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
        iVar5 = (int)param_1[1];
      }
      if (*(longlong *)(lVar2 + (longlong)(int)uVar7 * 8) == lVar3) {
        iVar6 = ~uVar7 + iVar5;
        if (iVar6 != 0) {
          iVar8 = 1;
          if (iVar6 < 1) {
            iVar8 = iVar6;
          }
          memmove((void *)(*param_1 + (longlong)(int)uVar7 * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar8) * 8),(longlong)iVar8 << 3);
          iVar5 = (int)param_1[1];
        }
        uVar7 = uVar7 - 1;
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 1) = iVar5;
        bVar4 = 1;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
    if ((bool)(param_3 == '\x01' & bVar4)) {
      FUN_145d115d8(param_1);
      iVar5 = (int)param_1[1];
    }
  }
  return iVar1 - iVar5;
}



// FUNCTION 145d115d8 FUN_145d115d8 body=63 status=ok
// SIG undefined FUN_145d115d8(void)

void FUN_145d115d8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145d11618(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145d11618 FUN_145d11618 body=93 status=ok
// SIG undefined FUN_145d11618(void)

ulonglong FUN_145d11618(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145d11676 FUN_145d11676 body=212 status=ok
// SIG undefined FUN_145d11676(void)

int FUN_145d11676(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar4 = 0;
    bVar11 = *plVar1 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      lVar3 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar3;
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar5) {
        iVar2 = iVar5;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar2;
        if (lVar6 <= lVar7) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (plVar1[lVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar4 != iVar8) {
          memmove(plVar1 + iVar4,plVar1 + lVar3,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar4 = iVar4 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar6);
    *(int *)(param_1 + 1) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 145d11756 FUN_145d11756 body=131 status=ok
// SIG undefined FUN_145d11756(void)

undefined8 * FUN_145d11756(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14b071c50;
  param_1[5] = &PTR_LAB_14b072650;
  param_1[6] = &PTR_LAB_14b072690;
  param_1[0x55] = &PTR_LAB_14b0726e0;
  param_1[0x56] = &PTR_LAB_14b072760;
  param_1[0x57] = &PTR_LAB_14b072770;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  return param_1;
}



// FUNCTION 145d117d9 FUN_145d117d9 body=43 status=ok
// SIG undefined FUN_145d117d9(void)

void FUN_145d117d9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d11804(puVar1);
  *puVar1 = &PTR_FUN_14b545d50;
  puVar1[0x30] = 0;
  return;
}



// FUNCTION 145d11804 FUN_145d11804 body=99 status=ok
// SIG undefined FUN_145d11804(void)

undefined8 * FUN_145d11804(undefined8 *param_1)

{
  FUN_140fbcba4();
  *param_1 = &PTR_FUN_14b52bea0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 2;
  FUN_144a5dc74(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 145d11868 FUN_145d11868 body=37 status=ok
// SIG undefined FUN_145d11868(void)

void FUN_145d11868(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d1188e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d1188e FUN_145d1188e body=47 status=ok
// SIG undefined FUN_145d1188e(void)

byte FUN_145d1188e(byte param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1458f73f0();
  if (lVar2 != 0) {
    iVar1 = FUN_145d118be(lVar2);
    param_1 = iVar1 == 0;
  }
  return lVar2 != 0 & param_1;
}



// FUNCTION 145d118be FUN_145d118be body=58 status=ok
// SIG undefined FUN_145d118be(void)

undefined4 FUN_145d118be(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (DAT_14c872bf0 == '\0') {
    cVar1 = FUN_140b3f358();
    if ((cVar1 == '\0') && ((DAT_14c872bf2 & 1) == 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0xd8);
    }
  }
  return uVar2;
}



// FUNCTION 145d118f8 FUN_145d118f8 body=54 status=ok
// SIG undefined FUN_145d118f8(void)

void FUN_145d118f8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141532280(puVar1);
  *puVar1 = &PTR_FUN_14b837560;
  puVar1[6] = &PTR_FUN_14b837820;
  puVar1[7] = &PTR_FUN_14b8378b0;
  return;
}



// FUNCTION 145d1192e FUN_145d1192e body=54 status=ok
// SIG undefined FUN_145d1192e(void)

void FUN_145d1192e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1415322d8(puVar1);
  *puVar1 = &PTR_FUN_14b838540;
  puVar1[6] = &PTR_FUN_14b838800;
  puVar1[7] = &PTR_FUN_14b838890;
  return;
}



// FUNCTION 145d11982 FUN_145d11982 body=112 status=ok
// SIG undefined FUN_145d11982(void)

undefined8 * FUN_145d11982(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b91a550;
  FUN_1446f470e(param_1 + 4,L"Growth_Exponent",1);
  FUN_1446f470e(param_1 + 5,L"Base_Weight",1);
  FUN_1446f470e(param_1 + 6,L"Local_Modifier",1);
  return param_1;
}



// FUNCTION 145d119f2 FUN_145d119f2 body=253 status=ok
// SIG undefined FUN_145d119f2(void)

void FUN_145d119f2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    uVar2 = *param_2;
    uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x160);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x168) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar2) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (puVar1 + 1 == (ulonglong *)0x0) {
            return;
          }
          puVar3 = (undefined8 *)puVar1[1];
          FUN_145d11ca8(param_1 + 0x30,puVar3 + 2);
          FUN_14080c2b4();
          FUN_140414380(puVar3,0);
          FUN_14080c2b4();
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          FUN_145d11b5a((longlong *)(param_1 + 0x120),*param_2);
          return;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 145d11af0 FUN_145d11af0 body=38 status=ok
// SIG undefined FUN_145d11af0(void)

undefined8 FUN_145d11af0(undefined8 param_1,int param_2)

{
  FUN_145d11b16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d11b16 FUN_145d11b16 body=67 status=ok
// SIG undefined FUN_145d11b16(void)

void FUN_145d11b16(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a451a20;
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
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145d11b5a FUN_145d11b5a body=132 status=ok
// SIG undefined FUN_145d11b5a(void)

void FUN_145d11b5a(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_145d11bde(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145d11bde FUN_145d11bde body=85 status=ok
// SIG undefined FUN_145d11bde(void)

void FUN_145d11bde(longlong *param_1,int param_2)

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
  FUN_145d11c34();
  return;
}



// FUNCTION 145d11c34 FUN_145d11c34 body=116 status=ok
// SIG undefined FUN_145d11c34(void)

void FUN_145d11c34(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145d11ca8 FUN_145d11ca8 body=162 status=ok
// SIG undefined FUN_145d11ca8(void)

void FUN_145d11ca8(longlong *param_1,undefined8 param_2)

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
        goto LAB_145d11d35;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145d11d35:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145d11d4a FUN_145d11d4a body=95 status=ok
// SIG undefined FUN_145d11d4a(void)

void FUN_145d11d4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bed10b0;
  FUN_145d11daa(param_1 + 0x5a);
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 145d11daa FUN_145d11daa body=267 status=ok
// SIG undefined FUN_145d11daa(void)

void FUN_145d11daa(longlong *param_1)

{
  FUN_145d11eb5(param_1[0x31],(int)param_1[0x32]);
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_145d11f78(param_1 + 0x24);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f963a(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145d11f40(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145d11f08(param_1 + 2);
  FUN_145d11edd(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d11eb5 FUN_145d11eb5 body=40 status=ok
// SIG undefined FUN_145d11eb5(void)

void FUN_145d11eb5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149897a7a(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145d11edd FUN_145d11edd body=43 status=ok
// SIG undefined FUN_145d11edd(void)

void FUN_145d11edd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149897ac2(param_1);
    param_1 = param_1 + 0x130;
  }
  return;
}



// FUNCTION 145d11f08 FUN_145d11f08 body=55 status=ok
// SIG undefined FUN_145d11f08(void)

void FUN_145d11f08(longlong *param_1)

{
  FUN_145d12038(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d11f40 FUN_145d11f40 body=55 status=ok
// SIG undefined FUN_145d11f40(void)

void FUN_145d11f40(longlong *param_1)

{
  FUN_145d11fbc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d11f78 FUN_145d11f78 body=68 status=ok
// SIG undefined FUN_145d11f78(void)

void FUN_145d11f78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14becfb90;
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_1449db362(param_1 + 7);
  FUN_1400020a8(param_1[4]);
  FUN_1400020a8(param_1[1]);
  return;
}



// FUNCTION 145d11fbc FUN_145d11fbc body=123 status=ok
// SIG undefined FUN_145d11fbc(void)

void FUN_145d11fbc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
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



// FUNCTION 145d12038 FUN_145d12038 body=391 status=ok
// SIG undefined FUN_145d12038(void)

void FUN_145d12038(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x80 + (longlong)iStack_54 * 0xa0) != 0) {
        FUN_1400020a8();
      }
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
    FUN_140de7f60(param_1,param_2);
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



// FUNCTION 145d121c0 FUN_145d121c0 body=292 status=ok
// SIG undefined FUN_145d121c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d121c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa0568) {
    FUN_144b3d300(&DAT_14caa0568);
    if (DAT_14caa0568 == -1) {
      FUN_145d122e4();
      FUN_145d123ea();
      FUN_140db5666(&DAT_14caa04c0,0,&DAT_14caa0458,L"FRDGMemsetBufferCS",
                    L"/Engine/Private/ByteBuffer.usf",L"MemsetBufferCS",5,0x14,FUN_1474426e6,
                    FUN_147442686,&LAB_14323c11c,&LAB_14323c118,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14caa0d00);
      _DAT_14caa04c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14323c173);
      _Init_thread_footer(&DAT_14caa0568);
    }
  }
  return &DAT_14caa04c0;
}



// FUNCTION 145d122e4 FUN_145d122e4 body=261 status=ok
// SIG undefined FUN_145d122e4(void)

void FUN_145d122e4(void)

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
              0x110) < DAT_14caa0d80) {
    FUN_144b3d300(&DAT_14caa0d80);
    if (DAT_14caa0d80 == -1) {
      FUN_145d12682(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0xe7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa0d00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323df0b);
      _Init_thread_footer(&DAT_14caa0d80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d123ea FUN_145d123ea body=205 status=ok
// SIG undefined FUN_145d123ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d123ea(void)

{
  if ((DAT_14caa04bf & 2) == 0) {
    DAT_14caa04bf = DAT_14caa04bf | 2;
    _DAT_14caa0460 = L"FRDGMemsetBufferCS";
    _DAT_14caa0478 = FUN_146826540;
    _DAT_14caa0480 = FUN_146825d77;
    _DAT_14caa0488 = FUN_146825fd6;
    _DAT_14caa0490 = FUN_1407e02ea;
    _DAT_14caa0498 = FUN_146826273;
    _DAT_14caa0470 = FUN_147442658;
    _DAT_14caa04b0 = 0xffffffff000000e0;
    _DAT_14caa04b8 = 8;
    DAT_14caa04bc = 0;
    _DAT_14caa04a0 = &LAB_147442682;
    FUN_145d124b8();
    FUN_1407e00cc(&DAT_14caa0458);
    return;
  }
  return;
}



// FUNCTION 145d124b8 FUN_145d124b8 body=133 status=ok
// SIG undefined FUN_145d124b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d124b8(void)

{
  _DAT_14caa1120 = L"BASE";
  DAT_14caa114a = 4;
  FUN_145d1253e();
  _DAT_14caa1130 = DAT_14caa0468;
  _DAT_14caa1128 = &DAT_14caa1150;
  _DAT_14caa1138 = &LAB_14682652b;
  DAT_14caa0468 = &DAT_14caa1120;
  DAT_14caa04bd = DAT_14caa04bd + '\x01';
  _DAT_14caa1140 = 0x100000000;
  if (DAT_14caa11b4 != '\0') {
    DAT_14caa04be = DAT_14caa04be + '\x01';
  }
  return;
}



// FUNCTION 145d1253e FUN_145d1253e body=200 status=ok
// SIG undefined FUN_145d1253e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d1253e(void)

{
  if ((DAT_14caa11b7 & 2) != 0) {
    return;
  }
  DAT_14caa11b7 = DAT_14caa11b7 | 2;
  _DAT_14caa1158 = L"FRDGByteBufferShader";
  _DAT_14caa1170 = FUN_146826540;
  _DAT_14caa1178 = FUN_146825d77;
  _DAT_14caa1180 = FUN_146825fd6;
  _DAT_14caa1188 = FUN_1407e02ea;
  _DAT_14caa1190 = FUN_146826273;
  _DAT_14caa1168 = FUN_1474450d2;
  _DAT_14caa11a8 = 0xffffffff000000e0;
  _DAT_14caa11b0 = 8;
  DAT_14caa11b4 = 0;
  _DAT_14caa1198 = &LAB_1474450fc;
  FUN_145d12606();
  FUN_1407e00cc(&DAT_14caa1150);
  return;
}



// FUNCTION 145d12606 FUN_145d12606 body=123 status=ok
// SIG undefined FUN_145d12606(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d12606(void)

{
  _DAT_14caa11b8 = L"BASE";
  DAT_14caa11e2 = 4;
  _DAT_14caa11c0 = FUN_140b35ae4();
  _DAT_14caa11c8 = DAT_14caa1160;
  _DAT_14caa11d0 = &LAB_14682652b;
  DAT_14caa1160 = &DAT_14caa11b8;
  DAT_14caa11b5 = DAT_14caa11b5 + '\x01';
  _DAT_14caa11d8 = 0x100000000;
  if (*(char *)(_DAT_14caa11c0 + 100) != '\0') {
    DAT_14caa11b6 = DAT_14caa11b6 + '\x01';
  }
  return;
}



// FUNCTION 145d12682 FUN_145d12682 body=226 status=ok
// SIG undefined FUN_145d12682(void)

longlong * FUN_145d12682(longlong *param_1)

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
  pcVar13 = FUN_146321106;
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



// FUNCTION 145d12766 FUN_145d12766 body=132 status=ok
// SIG undefined FUN_145d12766(void)

undefined1 * FUN_145d12766(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Value";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1474437a0;
}



// FUNCTION 145d127ea FUN_145d127ea body=138 status=ok
// SIG undefined FUN_145d127ea(void)

code * FUN_145d127ea(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d12766;
}



// FUNCTION 145d12874 FUN_145d12874 body=138 status=ok
// SIG undefined FUN_145d12874(void)

code * FUN_145d12874(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147443716;
}



// FUNCTION 145d128fe FUN_145d128fe body=9 status=ok
// SIG undefined FUN_145d128fe(void)

void FUN_145d128fe(longlong param_1)

{
  FUN_141532330(param_1 + 0x10);
  return;
}



// FUNCTION 145d12908 FUN_145d12908 body=40 status=ok
// SIG undefined FUN_145d12908(void)

undefined8 FUN_145d12908(undefined8 param_1,int param_2)

{
  FUN_145d12930();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d12930 FUN_145d12930 body=109 status=ok
// SIG undefined FUN_145d12930(void)

void FUN_145d12930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be7aea0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145d1299e(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145d129d4(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d1299e FUN_145d1299e body=53 status=ok
// SIG undefined FUN_145d1299e(void)

void FUN_145d1299e(longlong *param_1)

{
  FUN_145d12a0a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d129d4 FUN_145d129d4 body=53 status=ok
// SIG undefined FUN_145d129d4(void)

void FUN_145d129d4(longlong *param_1)

{
  FUN_145d12a62();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d12a0a FUN_145d12a0a body=88 status=ok
// SIG undefined FUN_145d12a0a(void)

void FUN_145d12a0a(longlong param_1)

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



// FUNCTION 145d12a62 FUN_145d12a62 body=368 status=ok
// SIG undefined FUN_145d12a62(void)

void FUN_145d12a62(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0xf0);
      FUN_14675c8e8(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1456fdee2(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d12bde FUN_145d12bde body=274 status=ok
// SIG undefined FUN_145d12bde(void)

undefined8 * FUN_145d12bde(undefined8 *param_1)

{
  FUN_1400ea892();
  *param_1 = &PTR_FUN_14a8465e0;
  param_1[5] = &PTR_FUN_14a847060;
  param_1[6] = &PTR_LAB_14a8470a0;
  param_1[0x55] = &PTR_FUN_14a8470f0;
  param_1[0x56] = &PTR_FUN_14a847170;
  param_1[0x57] = &PTR_FUN_14a847180;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0x674) = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0x3ff00000;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0x3ff0000000000000;
  param_1[0xd5] = 0x3ff0000000000000;
  param_1[0xd6] = 0x3ff0000000000000;
  param_1[0xd7] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined1 *)(param_1 + 9) = 2;
  param_1[0xde] = 0;
  param_1[0xca] = 0x8000000080;
  *(undefined4 *)(param_1 + 0xcb) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0x41c00000;
  *(byte *)(param_1 + 0xda) = *(byte *)(param_1 + 0xda) & 0xfc;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xd9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6dc) = 0x400000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x6e4) = 0x400000003f000000;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0;
  *(byte *)(param_1 + 0xdb) = *(byte *)(param_1 + 0xdb) & 0xfc;
  param_1[0xdf] = 0;
  return param_1;
}



// FUNCTION 145d12cf0 FUN_145d12cf0 body=344 status=ok
// SIG undefined FUN_145d12cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_145d12cf0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95538) {
    FUN_144b3d300(&DAT_14ca95538);
    if (DAT_14ca95538 == -1) {
      _DAT_14ca95508 = 0;
      _DAT_14ca95510 = 0;
      _DAT_14ca954e8 = 0;
      uRam000000014ca954f0 = 0;
      _DAT_14ca95514 = 0xffffffff00000080;
      _DAT_14ca9551c = 0;
      DAT_14ca95528 = 0;
      _DAT_14ca95530 = 0;
      atexit(FUN_1432045a2);
      _Init_thread_footer(&DAT_14ca95538);
    }
  }
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_1412a630a(&DAT_14ca954e8,uVar2,param_1);
  lVar4 = (longlong)iVar3 * 0x20 + _DAT_14ca954e8;
  if (lVar4 == 0 || iVar3 == -1) {
    local_20 = &DAT_14ca9553c;
    local_28 = param_1;
    FUN_145d12e4a(&DAT_14ca954e8,local_14,&local_28,0);
    iVar3 = DAT_14ca9553c;
    DAT_14ca9553c = DAT_14ca9553c + 1;
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x10);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d12e4a FUN_145d12e4a body=362 status=ok
// SIG undefined FUN_145d12e4a(void)

undefined4 *
FUN_145d12e4a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14588ec7e(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_48 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_48 + 2) = *puVar2;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_48;
    iVar8 = *(int *)(local_48 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_68 = param_4;
  cVar3 = FUN_14588ebf0(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
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
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1412a63d0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d12fb6 FUN_145d12fb6 body=922 status=ok
// SIG undefined FUN_145d12fb6(void)

void FUN_145d12fb6(wchar_t **param_1)

{
  char cVar1;
  int iVar2;
  wchar_t *_Str;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &DAT_14c872ce8;
  FUN_145d13352(DAT_14c872ce0,&local_38,&DAT_149e2c0f4,L"Protocol");
  if (&local_38 == param_1) {
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_38;
    local_38 = (wchar_t *)0x0;
    *(int *)(param_1 + 1) = (int)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
  }
  local_58 = &DAT_14c872ce8;
  FUN_145d13352(DAT_14c872ce0,&local_38,&DAT_149e2c0f4,L"Name");
  if (param_1 + 2 == &local_38) {
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_1[2] = local_38;
    local_38 = (wchar_t *)0x0;
    *(int *)(param_1 + 3) = (int)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
  }
  local_58 = &DAT_14c872ce8;
  FUN_145d13352(DAT_14c872ce0,&local_38,&DAT_149e2c0f4,L"Host");
  if (param_1 + 4 == &local_38) {
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_1[4] = local_38;
    local_38 = (wchar_t *)0x0;
    *(int *)(param_1 + 5) = (int)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_30._4_4_;
  }
  local_58 = &DAT_14c872ce8;
  FUN_145d13352(DAT_14c872ce0,&local_38,&DAT_149e2c0f4,L"Portal");
  if (param_1 + 6 == &local_38) {
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_1[6] = local_38;
    local_38 = (wchar_t *)0x0;
    *(int *)(param_1 + 7) = (int)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_30._4_4_;
  }
  local_58 = &DAT_14c872ce8;
  FUN_145d13352(DAT_14c872ce0,&local_38,&DAT_149e2c0f4,L"SaveExt");
  if (param_1 + 8 == &local_38) {
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[8] != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_1[8] = local_38;
    *(int *)(param_1 + 9) = (int)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_30._4_4_;
  }
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_58 = (undefined8 *)0x0;
  cVar1 = FUN_14063337c(&DAT_14c846b20,L"Port=",&local_38,1);
  if (cVar1 == '\0') {
    local_58 = &DAT_14c872ce8;
    FUN_145d13352(DAT_14c872ce0,&local_48,&DAT_149e2c0f4,L"Port");
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_38 = local_48;
    uStack_30 = CONCAT44(local_3c,local_40);
  }
  else {
    local_40 = (int)uStack_30;
  }
  _Str = L"";
  if (local_40 != 0) {
    _Str = local_38;
  }
  iVar2 = _wtoi(_Str);
  *(int *)(param_1 + 10) = iVar2;
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d13352 FUN_145d13352 body=47 status=ok
// SIG undefined FUN_145d13352(void)

undefined8 *
FUN_145d13352(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1449da20c(0,param_3,param_4,param_2,param_5);
  return param_2;
}



// FUNCTION 145d13390 FUN_145d13390 body=72 status=ok
// SIG undefined FUN_145d13390(void)

void FUN_145d13390(longlong param_1)

{
  switch(*(undefined4 *)(param_1 + 0x58)) {
  case 0:
    FUN_145d134b2();
    return;
  case 1:
    FUN_1415329cc();
    return;
  case 2:
    FUN_14153279e();
    return;
  case 3:
    FUN_145d133d8();
    return;
  case 4:
    FUN_141532814();
    return;
  case 5:
    FUN_141532b78();
    return;
  case 6:
    FUN_1415328f0();
    return;
  case 7:
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



// FUNCTION 145d133d8 FUN_145d133d8 body=200 status=ok
// SIG undefined FUN_145d133d8(void)

void FUN_145d133d8(longlong param_1)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 local_40 [20];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x50);
  if (((longlong)iVar1 < 0) || (*(int *)(param_1 + 0x48) <= iVar1)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x70) == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_2c = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 4);
    local_50 = &LAB_145a1dcea;
    local_48 = 0;
    FUN_145d13534(local_40,param_1);
    local_58 = local_40;
    FUN_141532d8c(param_1 + 0x20,&local_2c,param_1 + 0x54,param_1 + 0x30);
    FUN_1449db362(local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d134b2 FUN_145d134b2 body=122 status=ok
// SIG undefined FUN_145d134b2(void)

void FUN_145d134b2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x48), lVar1 != 0)) {
    lVar3 = FUN_140b7066c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar2 = FUN_145d1352c(lVar1);
      if (cVar2 == '\x03') {
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        FUN_145d13390(param_1);
        return;
      }
      *(undefined4 *)(param_1 + 0x70) = 0xc;
      goto LAB_145d13518;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
LAB_145d13518:
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 145d1352c FUN_145d1352c body=7 status=ok
// SIG undefined FUN_145d1352c(void)

undefined1 FUN_145d1352c(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3a0);
}



// FUNCTION 145d13534 FUN_145d13534 body=428 status=ok
// SIG undefined FUN_145d13534(void)

longlong * FUN_145d13534(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145d13614:
    *puVar5 = &PTR_LAB_14b4e0230;
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
    *puVar5 = &PTR_FUN_14b4e01c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d13614;
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
    *puVar5 = &PTR_LAB_14b4e0230;
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
    *puVar5 = &PTR_FUN_14b4e01c0;
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



// FUNCTION 145d136e0 FUN_145d136e0 body=299 status=ok
// SIG undefined FUN_145d136e0(void)

undefined8 *
FUN_145d136e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_50,L"Unused",1);
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_48);
  param_1[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba44db0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = local_50;
  FUN_140df9946(param_3,param_1 + 7);
  *param_1 = &PTR_FUN_14ba44d50;
  param_1[9] = *param_4;
  lVar1 = param_4[1];
  param_1[10] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_141532ff6(param_1 + 0xb,param_5);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1380c FUN_145d1380c body=179 status=ok
// SIG undefined FUN_145d1380c(void)

undefined8 FUN_145d1380c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e497d0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49760;
  puVar1[3] = param_2;
  puVar1[4] = &LAB_14588a03e;
  FUN_145d138c0(param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d138c0 FUN_145d138c0 body=233 status=ok
// SIG undefined FUN_145d138c0(void)

undefined8 * FUN_145d138c0(undefined8 *param_1,longlong *param_2)

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
      FUN_14474d06a(&DAT_14c86aa18,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c86aa20;
      lVar6 = (longlong)(int)DAT_14c86aa20;
      DAT_14c86aa20 = DAT_14c86aa20 + 1;
      if (DAT_14c86aa24 < DAT_14c86aa20) {
        FUN_1447a71f6(&DAT_14c86aa18,uVar3);
      }
      lVar2 = DAT_14c86aa18;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c86aa18 + lVar6) = 0;
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



// FUNCTION 145d139ba FUN_145d139ba body=196 status=ok
// SIG undefined FUN_145d139ba(void)

undefined8
FUN_145d139ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4d93b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4d9340;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_145d13a80(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d13a80 FUN_145d13a80 body=216 status=ok
// SIG undefined FUN_145d13a80(void)

undefined8 * FUN_145d13a80(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145d13b6a FUN_145d13b6a body=292 status=ok
// SIG undefined FUN_145d13b6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d13b6a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1eb0) {
    FUN_144b3d300(&DAT_14c9d1eb0);
    if (DAT_14c9d1eb0 == -1) {
      FUN_145d13dd8();
      FUN_145d13c8e();
      FUN_140db5666(&DAT_14c9d1e08,0,&DAT_14c9d1da0,L"FHairStrandsForwardRasterPrepareDepthGridCS",
                    L"/Engine/Private/HairStrands/HairStrandsForwardRaster.usf",
                    L"PrepareDepthGridCS",5,1,FUN_14716c5ee,FUN_14716c58e,&LAB_1462c5f58,
                    &LAB_14716c58a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9d47a0);
      _DAT_14c9d1e08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c39e92);
      _Init_thread_footer(&DAT_14c9d1eb0);
    }
  }
  return &DAT_14c9d1e08;
}



// FUNCTION 145d13c8e FUN_145d13c8e body=205 status=ok
// SIG undefined FUN_145d13c8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d13c8e(void)

{
  if ((DAT_14c9d1e07 & 2) == 0) {
    DAT_14c9d1e07 = DAT_14c9d1e07 | 2;
    _DAT_14c9d1da8 = L"FHairStrandsForwardRasterPrepareDepthGridCS";
    _DAT_14c9d1dc0 = FUN_146826540;
    _DAT_14c9d1dc8 = FUN_146825d77;
    _DAT_14c9d1dd0 = FUN_146825fd6;
    _DAT_14c9d1dd8 = FUN_1407e02ea;
    _DAT_14c9d1de0 = FUN_146826273;
    _DAT_14c9d1db8 = FUN_14716c55a;
    _DAT_14c9d1df8 = 0xffffffff000000e0;
    _DAT_14c9d1e00 = 8;
    DAT_14c9d1e04 = 0;
    _DAT_14c9d1de8 = &LAB_14716c586;
    FUN_145d13d5c();
    FUN_1407e00cc(&DAT_14c9d1da0);
    return;
  }
  return;
}



// FUNCTION 145d13d5c FUN_145d13d5c body=123 status=ok
// SIG undefined FUN_145d13d5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d13d5c(void)

{
  _DAT_14c9d5118 = L"BASE";
  DAT_14c9d5142 = 4;
  _DAT_14c9d5120 = FUN_140b35ae4();
  _DAT_14c9d5128 = DAT_14c9d1db0;
  _DAT_14c9d5130 = &LAB_14682652b;
  DAT_14c9d1db0 = &DAT_14c9d5118;
  DAT_14c9d1e05 = DAT_14c9d1e05 + '\x01';
  _DAT_14c9d5138 = 0x100000000;
  if (*(char *)(_DAT_14c9d5120 + 100) != '\0') {
    DAT_14c9d1e06 = DAT_14c9d1e06 + '\x01';
  }
  return;
}



// FUNCTION 145d13dd8 FUN_145d13dd8 body=261 status=ok
// SIG undefined FUN_145d13dd8(void)

void FUN_145d13dd8(void)

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
              0x110) < DAT_14c9d4820) {
    FUN_144b3d300(&DAT_14c9d4820);
    if (DAT_14c9d4820 == -1) {
      FUN_145d13ede(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 99;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d47a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e2ca);
      _Init_thread_footer(&DAT_14c9d4820);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d13ede FUN_145d13ede body=226 status=ok
// SIG undefined FUN_145d13ede(void)

longlong * FUN_145d13ede(longlong *param_1)

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
  pcVar13 = FUN_1462c93aa;
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



// FUNCTION 145d13fc6 FUN_145d13fc6 body=138 status=ok
// SIG undefined FUN_145d13fc6(void)

code * FUN_145d13fc6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d14050;
}



// FUNCTION 145d14050 FUN_145d14050 body=140 status=ok
// SIG undefined FUN_145d14050(void)

undefined1 * FUN_145d14050(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d140dc();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRasterComputeForwardCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9d4828;
  return &LAB_145d13fc2;
}



// FUNCTION 145d140dc FUN_145d140dc body=258 status=ok
// SIG undefined FUN_145d140dc(void)

void FUN_145d140dc(void)

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
              0x110) < DAT_14c9d48a8) {
    FUN_144b3d300(&DAT_14c9d48a8);
    if (DAT_14c9d48a8 == -1) {
      FUN_145d141e0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRasterComputeForwardCommonParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x47;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4828,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e2d6);
      _Init_thread_footer(&DAT_14c9d48a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d141e0 FUN_145d141e0 body=226 status=ok
// SIG undefined FUN_145d141e0(void)

longlong * FUN_145d141e0(longlong *param_1)

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
  pcVar13 = FUN_1462c9432;
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



// FUNCTION 145d142c4 FUN_145d142c4 body=132 status=ok
// SIG undefined FUN_145d142c4(void)

undefined1 * FUN_145d142c4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147176e42;
}



// FUNCTION 145d14348 FUN_145d14348 body=138 status=ok
// SIG undefined FUN_145d14348(void)

code * FUN_145d14348(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumRasterizers";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176ca4;
}



// FUNCTION 145d143d2 FUN_145d143d2 body=138 status=ok
// SIG undefined FUN_145d143d2(void)

code * FUN_145d143d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RcpNumRasterizers";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d14348;
}



// FUNCTION 145d1445c FUN_145d1445c body=225 status=ok
// SIG undefined FUN_145d1445c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d1445c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_58 [44];
  undefined1 local_2c [8];
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14479d2ce(param_1 + 8);
  FUN_140fda471(local_24,uVar1);
  FUN_140e3418c(local_24,local_2c,1);
  lVar2 = FUN_1413e2d1a(local_2c);
  if (lVar2 == 0) {
    puVar3 = &DAT_14cbd4010;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbd4028) {
      FUN_144b3d300(&DAT_14cbd4028);
      if (DAT_14cbd4028 == -1) {
        _DAT_14cbd4010 = 0;
        _DAT_14cbd4018 = 0x6000;
        _DAT_14cbd4020 = 0;
        _Init_thread_footer(&DAT_14cbd4028);
      }
    }
  }
  else {
    puVar3 = (undefined *)FUN_145d1453e(lVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1453e FUN_145d1453e body=237 status=ok
// SIG undefined FUN_145d1453e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d1453e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b5f98e(param_1 + 0x58,&local_28);
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
  if (local_28 == 0) {
    puVar3 = &DAT_14cb84e78;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb84e90) {
      FUN_144b3d300(&DAT_14cb84e90);
      if (DAT_14cb84e90 == -1) {
        _DAT_14cb84e78 = 0;
        _DAT_14cb84e80 = 0x6000;
        _DAT_14cb84e88 = 0;
        _Init_thread_footer(&DAT_14cb84e90);
      }
    }
  }
  else {
    puVar3 = (undefined *)(local_28 + 0x50);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1462c FUN_145d1462c body=71 status=ok
// SIG undefined FUN_145d1462c(void)

undefined8 * FUN_145d1462c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 145d14674 FUN_145d14674 body=53 status=ok
// SIG undefined FUN_145d14674(void)

void FUN_145d14674(longlong *param_1)

{
  FUN_145d146aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d146aa FUN_145d146aa body=90 status=ok
// SIG undefined FUN_145d146aa(void)

void FUN_145d146aa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 145d14704 FUN_145d14704 body=53 status=ok
// SIG undefined FUN_145d14704(void)

void FUN_145d14704(longlong *param_1)

{
  FUN_145d1473a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d1473a FUN_145d1473a body=90 status=ok
// SIG undefined FUN_145d1473a(void)

void FUN_145d1473a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 145d1479c FUN_145d1479c body=135 status=ok
// SIG undefined FUN_145d1479c(void)

undefined8 * FUN_145d1479c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140bf229a(param_1,uVar1);
  *param_1 = &PTR_FUN_14a3bb8e0;
  param_1[5] = &PTR_FUN_14a3bc2f0;
  param_1[6] = &PTR_LAB_14a3bc330;
  param_1[0x55] = &PTR_FUN_14a3bc380;
  param_1[0x56] = &PTR_FUN_14a3bc400;
  param_1[0x57] = &PTR_FUN_14a3bc410;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) | 4;
  return param_1;
}



// FUNCTION 145d14824 FUN_145d14824 body=40 status=ok
// SIG undefined FUN_145d14824(void)

undefined8 FUN_145d14824(undefined8 param_1,int param_2)

{
  FUN_145d1484c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d1484c FUN_145d1484c body=103 status=ok
// SIG undefined FUN_145d1484c(void)

void FUN_145d1484c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7a11d0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a79d540;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d148b4 FUN_145d148b4 body=53 status=ok
// SIG undefined FUN_145d148b4(void)

void FUN_145d148b4(longlong *param_1)

{
  FUN_145d148ea();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d148ea FUN_145d148ea body=90 status=ok
// SIG undefined FUN_145d148ea(void)

void FUN_145d148ea(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 145d14944 FUN_145d14944 body=53 status=ok
// SIG undefined FUN_145d14944(void)

void FUN_145d14944(longlong *param_1)

{
  FUN_145d1497a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d1497a FUN_145d1497a body=90 status=ok
// SIG undefined FUN_145d1497a(void)

void FUN_145d1497a(longlong param_1)

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



// FUNCTION 145d149d4 FUN_145d149d4 body=53 status=ok
// SIG undefined FUN_145d149d4(void)

void FUN_145d149d4(longlong *param_1)

{
  FUN_145d14a0a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d14a0a FUN_145d14a0a body=90 status=ok
// SIG undefined FUN_145d14a0a(void)

void FUN_145d14a0a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145d14a64 FUN_145d14a64 body=681 status=ok
// SIG undefined FUN_145d14a64(void)

void FUN_145d14a64(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_140187fa0(*(undefined8 *)(param_1 + 0x2a8),1,0);
  plVar2 = *(longlong **)(param_1 + 0x2a8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  FUN_140187fa0(*(undefined8 *)(param_1 + 0x2b0),1,0);
  uVar5 = FUN_1411d204e();
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    FUN_141092d32(uVar5);
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    FUN_14480f766(&DAT_14c8671a8);
  }
  uVar5 = FUN_140c61bfa();
  FUN_140457ffc(uVar5);
  memset((void *)(param_1 + 0x450),0,0xe0);
  puVar3 = *(undefined8 **)(param_1 + 0x6d8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  *(undefined4 *)(param_1 + 0x698) = 0;
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x650);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x388) = 0;
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_1400020a8();
  }
  FUN_145d14d0e(param_1 + 0x340);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_1400020a8();
  }
  FUN_145d14e04(param_1 + 0x2b8);
  lVar4 = *(longlong *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x90);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined8 **)(lVar4 + 0x88))(lVar4 + 0x88,1);
    }
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145d14d44(param_1 + 0x20);
  FUN_141533482(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145d14d0e FUN_145d14d0e body=53 status=ok
// SIG undefined FUN_145d14d0e(void)

void FUN_145d14d0e(longlong *param_1)

{
  FUN_145d14f44();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d14d44 FUN_145d14d44 body=53 status=ok
// SIG undefined FUN_145d14d44(void)

void FUN_145d14d44(longlong *param_1)

{
  FUN_145d14eea();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d14d7a FUN_145d14d7a body=60 status=ok
// SIG undefined FUN_145d14d7a(void)

undefined8 * FUN_145d14d7a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aac2980;
  FUN_145d14db6(param_1 + 9);
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d14db6 FUN_145d14db6 body=78 status=ok
// SIG undefined FUN_145d14db6(void)

void FUN_145d14db6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_145d14f9e(param_1);
  return;
}



// FUNCTION 145d14e04 FUN_145d14e04 body=85 status=ok
// SIG undefined FUN_145d14e04(void)

void FUN_145d14e04(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aabfbd0;
  FUN_14034205c(param_1 + 1);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[6];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_145d14e5a(param_1 + 1);
  return;
}



// FUNCTION 145d14e5a FUN_145d14e5a body=65 status=ok
// SIG undefined FUN_145d14e5a(void)

void FUN_145d14e5a(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_1449db362(param_1 + 3);
  FUN_145d14e9c(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145d14e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145d14e9c FUN_145d14e9c body=77 status=ok
// SIG undefined FUN_145d14e9c(void)

void FUN_145d14e9c(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_14034219a();
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145d14ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145d14eea FUN_145d14eea body=89 status=ok
// SIG undefined FUN_145d14eea(void)

void FUN_145d14eea(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 145d14f44 FUN_145d14f44 body=90 status=ok
// SIG undefined FUN_145d14f44(void)

void FUN_145d14f44(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 145d14f9e FUN_145d14f9e body=131 status=ok
// SIG undefined FUN_145d14f9e(void)

void FUN_145d14f9e(longlong *param_1)

{
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144965158(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145d15022(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145d15022 FUN_145d15022 body=62 status=ok
// SIG undefined FUN_145d15022(void)

void FUN_145d15022(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145d15056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145d15060 FUN_145d15060 body=53 status=ok
// SIG undefined FUN_145d15060(void)

void FUN_145d15060(longlong *param_1)

{
  FUN_145d15096();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d15096 FUN_145d15096 body=90 status=ok
// SIG undefined FUN_145d15096(void)

void FUN_145d15096(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145d150f0 FUN_145d150f0 body=53 status=ok
// SIG undefined FUN_145d150f0(void)

void FUN_145d150f0(longlong *param_1)

{
  FUN_145d15126();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d15126 FUN_145d15126 body=90 status=ok
// SIG undefined FUN_145d15126(void)

void FUN_145d15126(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145d15180 FUN_145d15180 body=53 status=ok
// SIG undefined FUN_145d15180(void)

void FUN_145d15180(longlong *param_1)

{
  FUN_145d151b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d151b6 FUN_145d151b6 body=90 status=ok
// SIG undefined FUN_145d151b6(void)

void FUN_145d151b6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 145d15210 FUN_145d15210 body=53 status=ok
// SIG undefined FUN_145d15210(void)

void FUN_145d15210(longlong *param_1)

{
  FUN_145d15246();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d15246 FUN_145d15246 body=90 status=ok
// SIG undefined FUN_145d15246(void)

void FUN_145d15246(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
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



// FUNCTION 145d152ac FUN_145d152ac body=132 status=ok
// SIG undefined FUN_145d152ac(void)

undefined8 * FUN_145d152ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad7b570;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14ad7f490;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145d1533c FUN_145d1533c body=132 status=ok
// SIG undefined FUN_145d1533c(void)

undefined8 * FUN_145d1533c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14afaf760;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0xc;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x18;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x24;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x30) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  return param_1;
}



// FUNCTION 145d153c0 FUN_145d153c0 body=40 status=ok
// SIG undefined FUN_145d153c0(void)

undefined8 FUN_145d153c0(undefined8 param_1,int param_2)

{
  FUN_145d153e8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d153e8 FUN_145d153e8 body=103 status=ok
// SIG undefined FUN_145d153e8(void)

void FUN_145d153e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c5870;
  FUN_1449db362(param_1 + 0x82);
  FUN_1449db362(param_1 + 0x80);
  FUN_1449db362(param_1 + 0x7e);
  FUN_1449db362(param_1 + 0x7c);
  FUN_1449db362(param_1 + 0x7a);
  FUN_1449db362(param_1 + 0x78);
  FUN_145850f18(param_1);
  return;
}



// FUNCTION 145d15450 FUN_145d15450 body=40 status=ok
// SIG undefined FUN_145d15450(void)

undefined8 FUN_145d15450(undefined8 param_1,int param_2)

{
  FUN_145d15478();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d15478 FUN_145d15478 body=103 status=ok
// SIG undefined FUN_145d15478(void)

void FUN_145d15478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c8df0;
  FUN_1449db362(param_1 + 0x82);
  FUN_1449db362(param_1 + 0x80);
  FUN_1449db362(param_1 + 0x7e);
  FUN_1449db362(param_1 + 0x7c);
  FUN_1449db362(param_1 + 0x7a);
  FUN_1449db362(param_1 + 0x78);
  FUN_145850f18(param_1);
  return;
}



// FUNCTION 145d154e0 FUN_145d154e0 body=299 status=ok
// SIG undefined FUN_145d154e0(void)

void FUN_145d154e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2b8))();
  if (((longlong *)param_1[6] != (longlong *)0x0) && (param_1[0x35] == 0)) {
    uVar4 = (**(code **)(*(longlong *)param_1[6] + 0x68))();
    FUN_145d1560c(uVar4,&local_28,param_1);
    param_1[0x35] = local_28;
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar5 = FUN_141030f66();
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0)) {
      FUN_145d15702(lVar5 + 0x20,&local_28,param_1);
      FUN_145d157f8(lVar5 + 0x38,&local_28,param_1);
    }
  }
  lVar5 = param_1[0x31];
  plVar3 = (longlong *)param_1[0x32];
  if (plVar3 != (longlong *)0x0) {
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
  if (lVar5 != 0) {
    FUN_145d1560c(param_1[0x31] + 8,&local_28,param_1);
    param_1[0x36] = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1560c FUN_145d1560c body=244 status=ok
// SIG undefined FUN_145d1560c(void)

undefined8 FUN_145d1560c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4f6590;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145903a0a;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d15702 FUN_145d15702 body=244 status=ok
// SIG undefined FUN_145d15702(void)

undefined8 FUN_145d15702(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b438ba0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4f6700;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_14620764e;
  FUN_145ce3550(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d157f8 FUN_145d157f8 body=244 status=ok
// SIG undefined FUN_145d157f8(void)

undefined8 FUN_145d157f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b4f78e0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4f6600;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145bffc1e;
  FUN_145d158ee(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d158ee FUN_145d158ee body=216 status=ok
// SIG undefined FUN_145d158ee(void)

undefined8 * FUN_145d158ee(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145d159d4 FUN_145d159d4 body=24 status=ok
// SIG undefined FUN_145d159d4(void)

bool FUN_145d159d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145d159ec FUN_145d159ec body=46 status=ok
// SIG undefined FUN_145d159ec(void)

void FUN_145d159ec(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145d15a1a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b591290;
  puVar1[5] = &PTR_FUN_14b5915c0;
  return;
}



// FUNCTION 145d15a1a FUN_145d15a1a body=97 status=ok
// SIG undefined FUN_145d15a1a(void)

undefined8 * FUN_145d15a1a(undefined8 *param_1)

{
  FUN_140f72148();
  *param_1 = &PTR_FUN_14ae5ee30;
  param_1[5] = &PTR_FUN_14ae5f160;
  *(undefined1 *)(param_1 + 0x32) = 4;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined2 *)(param_1 + 0x33) = 1;
  *(undefined1 *)((longlong)param_1 + 0x19a) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 2;
  return param_1;
}



// FUNCTION 145d15a86 FUN_145d15a86 body=132 status=ok
// SIG undefined FUN_145d15a86(void)

undefined8 * FUN_145d15a86(undefined8 *param_1)

{
  FUN_14585e102();
  *param_1 = &PTR_FUN_14b59f0f0;
  param_1[5] = &PTR_FUN_14b59f5a0;
  param_1[0x2d] = &PTR_FUN_14b59f5e0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  return param_1;
}



// FUNCTION 145d15b16 FUN_145d15b16 body=132 status=ok
// SIG undefined FUN_145d15b16(void)

undefined8 * FUN_145d15b16(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14b7b6570;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14b966fe0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145d15ba2 FUN_145d15ba2 body=563 status=ok
// SIG undefined FUN_145d15ba2(void)

undefined8 * FUN_145d15ba2(undefined8 *param_1)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b9ddbd0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xf00000d0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xf00000d0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xf00000d0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xf00000d0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xf00000d0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xf00000d0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0xf00000d0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  local_60 = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0xf00000d0;
  local_20 = 0;
  local_18 = 0x3f800000;
  FUN_140f85fd4(param_1 + 0x4e);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d15dd6 FUN_145d15dd6 body=68 status=ok
// SIG undefined FUN_145d15dd6(void)

void FUN_145d15dd6(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x338);
  memset(_Dst,0,0x338);
  FUN_145d15e1a(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145d15e1a FUN_145d15e1a body=218 status=ok
// SIG undefined FUN_145d15e1a(void)

undefined8 * FUN_145d15e1a(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a2bb0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  FUN_14124e07a(param_1 + 0x17);
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  FUN_140056680(param_1 + 0x29,&DAT_149dfb77a);
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  FUN_140056680(param_1 + 0x2d,&DAT_149dfb77a);
  FUN_1413f03d2(param_1 + 0x2f);
  FUN_14124e07a(param_1 + 0x42);
  FUN_14124e07a(param_1 + 0x52);
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)((longlong)param_1 + 799) = 0;
  *(undefined1 *)((longlong)param_1 + 0x324) = 1;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  return param_1;
}



// FUNCTION 145d15f12 FUN_145d15f12 body=132 status=ok
// SIG undefined FUN_145d15f12(void)

undefined8 * FUN_145d15f12(undefined8 *param_1)

{
  FUN_140d2f8ee();
  *param_1 = &PTR_FUN_14bd9d890;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x42480000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3ecccccd3ecccccd;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3f8000003ecccccd;
  param_1[0x1e] = 0x3fe4cccccccccccd;
  param_1[0x1f] = 0x3e9e353f3d7837b5;
  param_1[0x20] = 0x3f8000003f578d50;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 145d15f96 FUN_145d15f96 body=40 status=ok
// SIG undefined FUN_145d15f96(void)

undefined8 FUN_145d15f96(undefined8 param_1,int param_2)

{
  FUN_145d15fbe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d15fbe FUN_145d15fbe body=103 status=ok
// SIG undefined FUN_145d15fbe(void)

void FUN_145d15fbe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdd00b0;
  param_1[5] = &PTR_FUN_14bdd0450;
  param_1[0x13] = &PTR_FUN_14bdd0470;
  param_1[0x17] = &PTR_FUN_14bdd04a0;
  param_1[0x18] = &PTR_FUN_14bdd04e0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145d16026 FUN_145d16026 body=215 status=ok
// SIG undefined FUN_145d16026(void)

undefined4
FUN_145d16026(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_145d16106(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    lVar3 = *param_2;
  }
  else {
    local_50 = param_2;
    FUN_145d160fe(&local_50);
    lVar3 = *local_50;
    param_2 = local_50;
  }
  local_58 = param_8;
  local_60 = param_7;
  local_68 = param_6;
  uVar2 = (**(code **)(lVar3 + 0x78))(param_2,param_3,param_4,param_5);
  FUN_1415336de(*(undefined8 *)(param_1 + 8),*param_8);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d160fe FUN_145d160fe body=7 status=ok
// SIG undefined FUN_145d160fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d160fe(void)

{
                    /* WARNING: Could not recover jumptable at 0x000145d160fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_14cb52750)();
  return;
}



// FUNCTION 145d16106 FUN_145d16106 body=72 status=ok
// SIG undefined FUN_145d16106(void)

undefined8 FUN_145d16106(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if ((cVar1 != '\0') || (cVar1 = (**(code **)(*param_1 + 0x48))(param_1), cVar1 != '\0')) {
    uVar2 = 1;
    if (*DAT_14cb52798 != 0xffffffff) {
      uVar2 = (ulonglong)*DAT_14cb52798;
    }
    if (((int)uVar2 == 0) || ((int)param_1[1] < (int)uVar2)) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 145d1614e FUN_145d1614e body=187 status=ok
// SIG undefined FUN_145d1614e(void)

undefined8 FUN_145d1614e(undefined8 param_1,longlong param_2)

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
  uVar1 = FUN_1410decb6();
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



// FUNCTION 145d1620a FUN_145d1620a body=213 status=ok
// SIG undefined FUN_145d1620a(void)

void FUN_145d1620a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xf40) == '\0') {
    local_50 = DAT_14cbd04e8;
    local_58 = DAT_14cbd04e0;
    FUN_1448075d0(local_48);
    uVar1 = FUN_144a06846(param_2,local_48);
    lVar2 = FUN_140d7984c(uVar1,0);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0xffffffff;
    if (lVar2 < 0xffffffff) {
      lVar3 = lVar2;
    }
    iVar4 = 0;
    if (0 < lVar3) {
      iVar4 = (int)lVar3;
    }
    *(longlong *)(param_1 + 0xf20) = (longlong)iVar4;
    if (*(int *)(param_1 + 0xf38) == 0) {
      FUN_1441feb12(param_1);
    }
    *(undefined1 *)(param_1 + 0xf40) = 1;
    FUN_145d162e0(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d162e0 FUN_145d162e0 body=180 status=ok
// SIG undefined FUN_145d162e0(void)

void FUN_145d162e0(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cbd0a70;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14cbd0a7c = DAT_14cbd0a7c + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cbd0a68 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cbd0a68 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cbd0a7c = DAT_14cbd0a7c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145d1637d;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14cbd0a7c = DAT_14cbd0a7c + -1;
LAB_145d1637d:
  FUN_14474d06a(&DAT_14cbd0a68,0);
  return;
}



// FUNCTION 145d16394 FUN_145d16394 body=205 status=ok
// SIG undefined FUN_145d16394(void)

void FUN_145d16394(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  if (DAT_14cb988c0 != DAT_14cb988ec) {
    puVar2 = &DAT_14cb988f0;
    if (DAT_14cb988f8 != (undefined *)0x0) {
      puVar2 = DAT_14cb988f8;
    }
    for (iVar1 = *(int *)(puVar2 + ((longlong)param_1 & (longlong)DAT_14cb98900 - 1U) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x60 + DAT_14cb988b8 + 0x58)) {
      if (*(int *)(DAT_14cb988b8 + (longlong)iVar1 * 0x60) == param_1) {
        puVar2 = &DAT_14cb988f0;
        if (DAT_14cb988f8 != (undefined *)0x0) {
          puVar2 = DAT_14cb988f8;
        }
        lVar5 = (longlong)*(int *)(DAT_14cb988b8 + 0x5c + (longlong)iVar1 * 0x60);
        iVar3 = *(int *)(puVar2 + lVar5 * 4);
        if (iVar3 == iVar1) {
          piVar4 = (int *)(puVar2 + lVar5 * 4);
        }
        else {
          do {
            piVar4 = (int *)(DAT_14cb988b8 + (longlong)iVar3 * 0x60 + 0x58);
            iVar3 = *piVar4;
          } while (iVar3 != iVar1);
        }
        *piVar4 = *(int *)(DAT_14cb988b8 + (longlong)iVar1 * 0x60 + 0x58);
        FUN_145d16462();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d16462 FUN_145d16462 body=80 status=ok
// SIG undefined FUN_145d16462(void)

void FUN_145d16462(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_14cb988b8;
  lVar3 = (longlong)param_1 * 0x60;
  lVar1 = DAT_14cb988b8 + lVar3;
  *(undefined4 *)(DAT_14cb988b8 + 0x50 + lVar3) = 0;
  if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
    FUN_1400020a8();
  }
  FUN_145fdf5a0(lVar1 + 8);
  FUN_145d164b2(param_1);
  return;
}



// FUNCTION 145d164b2 FUN_145d164b2 body=145 status=ok
// SIG undefined FUN_145d164b2(void)

void FUN_145d164b2(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  lVar2 = DAT_14cb988b8;
  if (DAT_14cb988ec != 0) {
    *(int *)(DAT_14cb988b8 + (longlong)DAT_14cb988e8 * 0x60) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x60) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb988ec) {
    iVar3 = DAT_14cb988e8;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x60 + 4) = iVar3;
  DAT_14cb988ec = DAT_14cb988ec + 1;
  puVar4 = &DAT_14cb988c8;
  if (DAT_14cb988d8 != (undefined *)0x0) {
    puVar4 = DAT_14cb988d8;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb988e8 = param_1;
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 145d16544 FUN_145d16544 body=124 status=ok
// SIG undefined FUN_145d16544(void)

longlong * FUN_145d16544(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5eca80;
  FUN_145d165c0(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 145d165c0 FUN_145d165c0 body=91 status=ok
// SIG undefined FUN_145d165c0(void)

undefined8 * FUN_145d165c0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_1459ba0f6(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_1459ba0f6();
  }
  FUN_141067fd6(param_1,param_2);
  *param_1 = &PTR_FUN_14b9a1360;
  return param_1;
}



// FUNCTION 145d1661c FUN_145d1661c body=124 status=ok
// SIG undefined FUN_145d1661c(void)

longlong * FUN_145d1661c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b91be20;
  FUN_145d16698(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 145d16698 FUN_145d16698 body=91 status=ok
// SIG undefined FUN_145d16698(void)

undefined8 * FUN_145d16698(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_1459ba2ce(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_1459ba2ce();
  }
  FUN_140aed1ce(param_1,param_2);
  *param_1 = &PTR_FUN_14b9560d0;
  return param_1;
}



// FUNCTION 145d166f4 FUN_145d166f4 body=205 status=ok
// SIG undefined FUN_145d166f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d166f4(void)

{
  if ((DAT_14ca6b007 & 2) == 0) {
    DAT_14ca6b007 = DAT_14ca6b007 | 2;
    _DAT_14ca6afa8 = L"FVolumetricFogMaterialSetupCS";
    _DAT_14ca6afc0 = FUN_146826540;
    _DAT_14ca6afc8 = FUN_146825d77;
    _DAT_14ca6afd0 = FUN_146825fd6;
    _DAT_14ca6afd8 = FUN_1407e02ea;
    _DAT_14ca6afe0 = FUN_146826273;
    _DAT_14ca6afb8 = FUN_147334840;
    _DAT_14ca6aff8 = 0xffffffff000000e0;
    _DAT_14ca6b000 = 8;
    DAT_14ca6b004 = 0;
    _DAT_14ca6afe8 = &LAB_14733486a;
    FUN_145d167c2();
    FUN_1407e00cc(&DAT_14ca6afa0);
    return;
  }
  return;
}



// FUNCTION 145d167c2 FUN_145d167c2 body=123 status=ok
// SIG undefined FUN_145d167c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d167c2(void)

{
  _DAT_14ca6d4f0 = L"BASE";
  DAT_14ca6d51a = 4;
  _DAT_14ca6d4f8 = FUN_140b35ae4();
  _DAT_14ca6d500 = DAT_14ca6afb0;
  _DAT_14ca6d508 = &LAB_14682652b;
  DAT_14ca6afb0 = &DAT_14ca6d4f0;
  DAT_14ca6b005 = DAT_14ca6b005 + '\x01';
  _DAT_14ca6d510 = 0x100000000;
  if (*(char *)(_DAT_14ca6d4f8 + 100) != '\0') {
    DAT_14ca6b006 = DAT_14ca6b006 + '\x01';
  }
  return;
}



// FUNCTION 145d1683e FUN_145d1683e body=226 status=ok
// SIG undefined FUN_145d1683e(void)

longlong * FUN_145d1683e(longlong *param_1)

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
  pcVar13 = FUN_146314c9a;
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



// FUNCTION 145d16922 FUN_145d16922 body=142 status=ok
// SIG undefined FUN_145d16922(void)

code * FUN_145d16922(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000106;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146314e32;
}



// FUNCTION 145d169b0 FUN_145d169b0 body=144 status=ok
// SIG undefined FUN_145d169b0(void)

code * FUN_145d169b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_140048c7e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fa5fe;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalFogVolumeUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1f00000010a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d16a40;
}



// FUNCTION 145d16a40 FUN_145d16a40 body=146 status=ok
// SIG undefined FUN_145d16a40(void)

code * FUN_145d16a40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d16ad2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricFogParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVolumetricFogIntegrationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000108;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6cb58;
  return FUN_145d16922;
}



// FUNCTION 145d16ad2 FUN_145d16ad2 body=258 status=ok
// SIG undefined FUN_145d16ad2(void)

void FUN_145d16ad2(void)

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
              0x110) < DAT_14ca6cbd8) {
    FUN_144b3d300(&DAT_14ca6cbd8);
    if (DAT_14ca6cbd8 == -1) {
      FUN_145d16bd6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVolumetricFogIntegrationParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x2a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6cb58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310e737);
      _Init_thread_footer(&DAT_14ca6cbd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d16bd6 FUN_145d16bd6 body=226 status=ok
// SIG undefined FUN_145d16bd6(void)

longlong * FUN_145d16bd6(longlong *param_1)

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
  pcVar13 = FUN_146314d22;
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



// FUNCTION 145d16cba FUN_145d16cba body=138 status=ok
// SIG undefined FUN_145d16cba(void)

code * FUN_145d16cba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrameJitterOffsets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x10;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473395b8;
}



// FUNCTION 145d16d44 FUN_145d16d44 body=138 status=ok
// SIG undefined FUN_145d16d44(void)

code * FUN_145d16d44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryWeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1900000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d16cba;
}



// FUNCTION 145d16dce FUN_145d16dce body=140 status=ok
// SIG undefined FUN_145d16dce(void)

undefined1 * FUN_145d16dce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1403d783a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricFog";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVolumetricFogGlobalData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6af08;
  return &LAB_147339642;
}



// FUNCTION 145d16e5a FUN_145d16e5a body=656 status=ok
// SIG undefined FUN_145d16e5a(void)

void FUN_145d16e5a(longlong *param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
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
  uint local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar6 = (int)param_1[9];
  if (iVar6 != 0) {
    if (*param_2 == '\x01') {
      FUN_1447a97f4(&local_70,param_2 + 0x10);
      if (0 < local_6c) {
        iVar6 = 0;
        do {
          FUN_144a7c8fe(&local_70,local_7c,iVar6,1);
          if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                ((FUN_144a7c8fe(&local_70,local_88,iVar6,1), local_88[0] == DAT_14cb7bec8 &&
                 (local_80 == DAT_14cb7bed0)))) ||
               ((FUN_144a7c8fe(&local_70,local_94,iVar6,1), local_94[0] == DAT_14cb7bee0 &&
                (local_8c == DAT_14cb7bee8)))) ||
              ((FUN_144a7c8fe(&local_70,local_a0,iVar6,1), local_a0[0] == DAT_14cb7bef8 &&
               (local_98 == DAT_14cb7bf00)))) ||
             ((FUN_144a7c8fe(&local_70,local_ac,iVar6,1), local_ac[0] == DAT_14cb7bf10 &&
              (local_a4 == DAT_14cb7bf18)))) {
            FUN_1402b5374(&local_70,iVar6,0);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_6c);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      iVar6 = (int)param_1[9];
    }
    else {
      local_70 = *(uint *)(param_2 + 0x10);
    }
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 + (longlong)(int)(iVar6 - 1U & local_70) * 4);
    while (iVar5 = iVar6, iVar5 != -1) {
      lVar1 = *param_1 + (longlong)iVar5 * 0x48;
      iVar6 = *(int *)(lVar1 + 0x40);
      cVar3 = FUN_14493b798(lVar1,param_2);
      if (cVar3 != '\0') {
        do {
          lVar1 = *param_1;
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_145d170ec(param_3,iVar2);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) =
               *(undefined4 *)(lVar1 + (longlong)iVar5 * 0x48 + 0x38);
          do {
            iVar5 = iVar6;
            if (iVar5 == -1) goto LAB_145d16f44;
            lVar1 = *param_1 + (longlong)iVar5 * 0x48;
            iVar6 = *(int *)(lVar1 + 0x40);
            cVar3 = FUN_14493b798(lVar1,param_2);
          } while (cVar3 == '\0');
        } while( true );
      }
    }
  }
LAB_145d16f44:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d170ec FUN_145d170ec body=132 status=ok
// SIG undefined FUN_145d170ec(void)

void FUN_145d170ec(longlong param_1,int param_2)

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



// FUNCTION 145d17170 FUN_145d17170 body=54 status=ok
// SIG undefined FUN_145d17170(void)

void FUN_145d17170(void)

{
  FUN_1415339c9();
  FUN_145d171a6(&DAT_14c9647b8);
  TlsFree(DAT_14c75ecdc);
  DAT_14c75ecdc = 0xffffffff;
  DAT_14c963ff1 = 0;
  return;
}



// FUNCTION 145d171a6 FUN_145d171a6 body=189 status=ok
// SIG undefined FUN_145d171a6(void)

void FUN_145d171a6(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  iVar1 = *(int *)(param_1 + 0x80);
  if (0 < (longlong)iVar1) {
    uVar2 = (longlong)iVar1 + 1;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + -0x10 + uVar2 * 8) + 0x10))();
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
    iVar1 = *(int *)(param_1 + 0x80);
  }
  if (iVar1 != 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",600,
                  L"All UObject delete listeners should be unregistered when shutting down the UObject array"
                 );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  iVar1 = *(int *)(param_1 + 0x70);
  if (0 < (longlong)iVar1) {
    uVar2 = (longlong)iVar1 + 1;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x68) + -0x10 + uVar2 * 8) + 0x10))();
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
    iVar1 = *(int *)(param_1 + 0x70);
  }
  if (iVar1 != 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x260,
                  L"All UObject delete listeners should be unregistered when shutting down the UObject array"
                 );
  }
  return;
}



// FUNCTION 145d17264 FUN_145d17264 body=109 status=ok
// SIG undefined FUN_145d17264(void)

void FUN_145d17264(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a1c1b6();
  local_20 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  FUN_140f933a4(&DAT_14c964830,&local_20,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d172de FUN_145d172de body=793 status=ok
// SIG undefined FUN_145d172de(void)

undefined8 * FUN_145d172de(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b2c8190;
  *(undefined4 *)(param_1 + 0x16) = 0x101034;
  param_1[0x17] = "ui_stat";
  FUN_1400b22c2(local_58,"GbxUI.UIStat");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145d175f8();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d173e1;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d173e1:
  lVar5 = FUN_145d175f8();
  if (lVar5 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145d17476;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar5);
  }
LAB_145d17476:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d175f8 FUN_145d175f8 body=57 status=ok
// SIG undefined FUN_145d175f8(void)

void FUN_145d175f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68860 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68860 = FUN_140002ddd(FUN_14651be56,uVar1,L"UIStatDisplayDef");
  }
  return;
}



// FUNCTION 145d1763c FUN_145d1763c body=793 status=ok
// SIG undefined FUN_145d1763c(void)

undefined8 * FUN_145d1763c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b3715b0;
  *(undefined4 *)(param_1 + 0x16) = 0xdda20a;
  param_1[0x17] = "closed_caption";
  FUN_1400b22c2(local_58,"ClosedCaptions.GbxClosedCaptionDef");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145d17956();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d1773f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145d1773f:
  lVar5 = FUN_145d17956();
  if (lVar5 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145d177d4;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar5);
  }
LAB_145d177d4:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d17956 FUN_145d17956 body=57 status=ok
// SIG undefined FUN_145d17956(void)

void FUN_145d17956(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5bef8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5bef8 = FUN_140002ddd(FUN_1464d3276,uVar1,L"GbxClosedCaptionDef");
  }
  return;
}



// FUNCTION 145d17990 FUN_145d17990 body=187 status=ok
// SIG undefined FUN_145d17990(void)

void FUN_145d17990(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x54);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x54);
    if (*(longlong *)(lVar2 + 0x40) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x28);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x238) + 8);
    }
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)*plVar3 + 0x210))();
      if (plVar3 != (longlong *)0x0) {
        local_38 = FUN_145d17a4c(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"buddyinfo");
        *(undefined8 *)(param_1 + 200) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d17a4c FUN_145d17a4c body=83 status=ok
// SIG undefined FUN_145d17a4c(void)

void FUN_145d17a4c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_145d17a9f(param_1,param_2);
  (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000145d17a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 145d17a9f FUN_145d17a9f body=105 status=ok
// SIG undefined FUN_145d17a9f(void)

void FUN_145d17a9f(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x28))();
  if (param_2 == 0) {
    uVar1 = FUN_145d17b08();
    FUN_1401e1be1(param_1,0,uVar1);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = FUN_145d17b08();
    FUN_1401e1be1(param_1,param_2,uVar1);
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000145d17af1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 145d17b08 FUN_145d17b08 body=55 status=ok
// SIG undefined FUN_145d17b08(void)

void FUN_145d17b08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7768 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7768 = FUN_140002ddd(FUN_146603593,uVar1,L"OakUIData_BuddyInfo");
  }
  return;
}



// FUNCTION 145d17b40 FUN_145d17b40 body=169 status=ok
// SIG undefined FUN_145d17b40(void)

bool FUN_145d17b40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d17bea FUN_145d17bea body=290 status=ok
// SIG undefined FUN_145d17bea(void)

void FUN_145d17bea(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1410c2f26();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    local_40 = FUN_140d12d0e;
    local_38 = 0;
    FUN_145d17d0e(local_50,param_1);
    FUN_1446ddc76(&local_58,"FGbxUIEvent_StatusMenu_Damage",1);
    FUN_140391af6(lVar1,&local_40,local_58,local_50);
    *(code **)(param_1 + 0x350) = local_40;
    FUN_1449db362(local_50);
    local_40 = FUN_140d13074;
    local_38 = 0;
    FUN_145d17d0e(local_50,param_1,&local_40);
    FUN_1446ddc76(&local_60,"FGbxUIEvent_StatusMenu_ShieldBreak",1);
    FUN_140391af6(lVar1,&local_40,local_60,local_50);
    *(code **)(param_1 + 0x348) = local_40;
    FUN_1449db362(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d17d0e FUN_145d17d0e body=428 status=ok
// SIG undefined FUN_145d17d0e(void)

longlong * FUN_145d17d0e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145d17dee:
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9d3c10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d17dee;
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
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9d3c10;
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



// FUNCTION 145d17eba FUN_145d17eba body=697 status=ok
// SIG undefined FUN_145d17eba(void)

void FUN_145d17eba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  uint local_108 [27];
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar6 = FUN_14126888e();
  if (uVar6 != 0) {
    iVar3 = *(int *)(param_1 + 0x38);
    uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    local_108[0] = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    local_108[0] = local_108[0] >> 0x10 ^ local_108[0];
    FUN_1448d5e3c(&local_118);
    lVar4 = *(longlong *)(local_118 + 0xe0 + (ulonglong)(iVar3 != 0) * 0x10);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x638));
    *(int *)(lVar4 + 0x630) = *(int *)(lVar4 + 0x630) + 1;
    FUN_145d18174(lVar4);
    if (iVar3 != 0) {
      lVar7 = FUN_1406d14fa(param_1);
      if (lVar7 != 0) {
        lVar8 = FUN_144a5dd5e();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
          lVar8 = FUN_145d18230(lVar7);
          if (lVar8 != 0) {
            memset(local_108,0,0xd8);
            local_9c = 0x80;
            local_98 = 0xffffffff;
            local_78 = 0;
            uStack_70 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_58 = 0;
            local_50 = 0xf;
            local_48 = 1;
            local_44 = 0;
            uStack_3c = 0;
            FUN_145d184c6(lVar8);
            FUN_140368b56(local_108);
          }
          lVar8 = FUN_145d182e6(lVar7);
          if (lVar8 != 0) {
            memset(local_108,0,0xd8);
            local_9c = 0x80;
            local_98 = 0xffffffff;
            local_78 = 0;
            uStack_70 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_58 = 0;
            local_50 = 0xf;
            local_48 = 1;
            local_44 = 0;
            uStack_3c = 0;
            FUN_145d18430(lVar8);
            FUN_140368b56(local_108);
          }
          lVar7 = FUN_1458730d4(lVar7);
          if (lVar7 != 0) {
            memset(local_108,0,0xd8);
            local_9c = 0x80;
            local_98 = 0xffffffff;
            local_78 = 0;
            uStack_70 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_58 = 0;
            local_50 = 0xf;
            local_48 = 1;
            local_44 = 0;
            uStack_3c = 0;
            FUN_145d1839c(lVar7,local_108);
            FUN_140368b56(local_108);
          }
        }
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x638));
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_110 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d18174 FUN_145d18174 body=78 status=ok
// SIG undefined FUN_145d18174(void)

void FUN_145d18174(longlong param_1)

{
  int iVar1;
  
  FUN_145780986();
  FUN_140bb133e(param_1);
  FUN_145d181c2(param_1);
  if (*(char *)(param_1 + 0x430) == '\0') {
    if (*(int *)(param_1 + 0x434) != 0) {
      return;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x434) + 1;
  }
  *(undefined1 *)(param_1 + 0x430) = 0;
  *(int *)(param_1 + 0x434) = iVar1;
  return;
}



// FUNCTION 145d181c2 FUN_145d181c2 body=109 status=ok
// SIG undefined FUN_145d181c2(void)

void FUN_145d181c2(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar1 = 1;
      goto LAB_145d18201;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) + 1;
LAB_145d18201:
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x14) = iVar1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x1c) != 0) goto LAB_145d181eb;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = iVar1;
LAB_145d181eb:
  if (*(char *)(param_1 + 0xe8) == '\0') {
    if (*(int *)(param_1 + 0xec) != 0) {
      return;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xec) + 1;
  }
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(int *)(param_1 + 0xec) = iVar1;
  return;
}



// FUNCTION 145d18230 FUN_145d18230 body=105 status=ok
// SIG undefined FUN_145d18230(void)

void FUN_145d18230(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145999a08();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145d1829a(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1829a FUN_145d1829a body=76 status=ok
// SIG undefined FUN_145d1829a(void)

void FUN_145d1829a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145999a08();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145d182d7;
    }
  }
  lVar2 = 0;
LAB_145d182d7:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145d182e6 FUN_145d182e6 body=105 status=ok
// SIG undefined FUN_145d182e6(void)

void FUN_145d182e6(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a259ca();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145d18350(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d18350 FUN_145d18350 body=76 status=ok
// SIG undefined FUN_145d18350(void)

void FUN_145d18350(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a259ca();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145d1838d;
    }
  }
  lVar2 = 0;
LAB_145d1838d:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145d1839c FUN_145d1839c body=138 status=ok
// SIG undefined FUN_145d1839c(void)

void FUN_145d1839c(undefined8 param_1,undefined8 param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar2 = (longlong *)FUN_1458f4156();
  lVar1 = *plVar2;
  SRWLock = (PSRWLOCK)(lVar1 + 0x140);
  AcquireSRWLockShared(SRWLock);
  cVar3 = FUN_145d18426(lVar1,param_2);
  ReleaseSRWLockShared(SRWLock);
  if (cVar3 != '\0') {
    return;
  }
  plVar2 = (longlong *)FUN_1458f4156(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x140));
  *(int *)(lVar1 + 0x138) = *(int *)(lVar1 + 0x138) + 1;
  FUN_148e1d24c(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000145d1841f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x140));
  return;
}



// FUNCTION 145d18426 FUN_145d18426 body=9 status=ok
// SIG undefined FUN_145d18426(void)

void FUN_145d18426(longlong param_1)

{
  FUN_140991644(param_1 + 0x58);
  return;
}



// FUNCTION 145d18430 FUN_145d18430 body=138 status=ok
// SIG undefined FUN_145d18430(void)

void FUN_145d18430(undefined8 param_1,undefined8 param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar2 = (longlong *)FUN_145940bc4();
  lVar1 = *plVar2;
  SRWLock = (PSRWLOCK)(lVar1 + 0x1f0);
  AcquireSRWLockShared(SRWLock);
  cVar3 = FUN_145d184ba(lVar1,param_2);
  ReleaseSRWLockShared(SRWLock);
  if (cVar3 != '\0') {
    return;
  }
  plVar2 = (longlong *)FUN_145940bc4(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  *(int *)(lVar1 + 0x1e8) = *(int *)(lVar1 + 0x1e8) + 1;
  FUN_148e1ec34(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000145d184b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1f0));
  return;
}



// FUNCTION 145d184ba FUN_145d184ba body=12 status=ok
// SIG undefined FUN_145d184ba(void)

void FUN_145d184ba(longlong param_1)

{
  FUN_140991644(param_1 + 0x110);
  return;
}



// FUNCTION 145d184c6 FUN_145d184c6 body=145 status=ok
// SIG undefined FUN_145d184c6(void)

void FUN_145d184c6(undefined8 param_1,undefined8 param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  plVar2 = (longlong *)FUN_141181ea8();
  lVar1 = *plVar2;
  SRWLock = (PSRWLOCK)(lVar1 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  cVar3 = FUN_140991644(lVar1 + 0xe0,param_2);
  ReleaseSRWLockShared(SRWLock);
  if (cVar3 != '\0') {
    return;
  }
  plVar2 = (longlong *)FUN_141181ea8(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1c0));
  *(int *)(lVar1 + 0x1b8) = *(int *)(lVar1 + 0x1b8) + 1;
  FUN_148e1b586(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000145d18550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x1c0));
  return;
}



// FUNCTION 145d18558 FUN_145d18558 body=110 status=ok
// SIG undefined FUN_145d18558(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d18558(void)

{
  FUN_145c69808();
  FUN_140457ffc(&DAT_14c867328,&DAT_14c868190);
  FUN_144760e21(DAT_14c8681e8,DAT_14c8681f0);
  if (DAT_14c8681e8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c8681e0 = 0;
  if (DAT_14c8681d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d185c6(&DAT_14c868198);
  return;
}



// FUNCTION 145d185c6 FUN_145d185c6 body=55 status=ok
// SIG undefined FUN_145d185c6(void)

void FUN_145d185c6(longlong *param_1)

{
  FUN_145d185fe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d185fe FUN_145d185fe body=123 status=ok
// SIG undefined FUN_145d185fe(void)

void FUN_145d185fe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_146812a68(param_1,param_2);
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



// FUNCTION 145d1867a FUN_145d1867a body=155 status=ok
// SIG undefined FUN_145d1867a(void)

void FUN_145d1867a(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_145d18716(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14726b444(param_1,param_2,iVar1 - param_2);
    FUN_14726b49e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145d18716 FUN_145d18716 body=132 status=ok
// SIG undefined FUN_145d18716(void)

void FUN_145d18716(longlong param_1,int param_2)

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



// FUNCTION 145d187a6 FUN_145d187a6 body=133 status=ok
// SIG undefined FUN_145d187a6(void)

undefined8 * FUN_145d187a6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a50cba0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 145d1882c FUN_145d1882c body=40 status=ok
// SIG undefined FUN_145d1882c(void)

undefined8 FUN_145d1882c(undefined8 param_1,int param_2)

{
  FUN_145d18854();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d18854 FUN_145d18854 body=104 status=ok
// SIG undefined FUN_145d18854(void)

void FUN_145d18854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6d8e30;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d188c4 FUN_145d188c4 body=279 status=ok
// SIG undefined FUN_145d188c4(void)

undefined8 * FUN_145d188c4(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined8 **local_50;
  ulonglong *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14078cbfa();
  *param_1 = &PTR_FUN_14ada70a0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  FUN_140120f5c(param_1 + 0x19);
  FUN_140120f5c(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x27) = 1;
  *(undefined1 *)((longlong)param_1 + 0x13a) = 1;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  local_50 = &local_40;
  local_48 = &local_30;
  local_40 = param_1 + 0x19;
  local_38 = param_1 + 0x20;
  FUN_14078cc5e(param_1 + 0x15);
  LOCK();
  *(undefined1 *)(param_1 + 0x35) = 1;
  UNLOCK();
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d189dc FUN_145d189dc body=40 status=ok
// SIG undefined FUN_145d189dc(void)

undefined8 FUN_145d189dc(undefined8 param_1,int param_2)

{
  FUN_145d18a04();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d18a04 FUN_145d18a04 body=104 status=ok
// SIG undefined FUN_145d18a04(void)

void FUN_145d18a04(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af0beb0;
  FUN_1457e5b52(param_1 + 0x5c);
  FUN_141082778(param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d18a6c FUN_145d18a6c body=40 status=ok
// SIG undefined FUN_145d18a6c(void)

undefined8 FUN_145d18a6c(undefined8 param_1,int param_2)

{
  FUN_145d18a94();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d18a94 FUN_145d18a94 body=104 status=ok
// SIG undefined FUN_145d18a94(void)

void FUN_145d18a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afb6c80;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d18afc FUN_145d18afc body=37 status=ok
// SIG undefined FUN_145d18afc(void)

void FUN_145d18afc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_141533d14();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d18b30 FUN_145d18b30 body=38 status=ok
// SIG undefined FUN_145d18b30(void)

undefined8 FUN_145d18b30(undefined8 param_1,int param_2)

{
  FUN_145d18b56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d18b56 FUN_145d18b56 body=101 status=ok
// SIG undefined FUN_145d18b56(void)

void FUN_145d18b56(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b3fd890;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140292ea0(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145d18bbc(param_1 + 2);
  return;
}



// FUNCTION 145d18bbc FUN_145d18bbc body=55 status=ok
// SIG undefined FUN_145d18bbc(void)

void FUN_145d18bbc(longlong *param_1)

{
  FUN_145d18bf4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d18bf4 FUN_145d18bf4 body=381 status=ok
// SIG undefined FUN_145d18bf4(void)

void FUN_145d18bf4(longlong *param_1,int param_2)

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
      FUN_14883fd96(*local_70 + (longlong)iStack_54 * 0x80 + 0x10);
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
    FUN_14095c99c(param_1,param_2);
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



// FUNCTION 145d18d7e FUN_145d18d7e body=133 status=ok
// SIG undefined FUN_145d18d7e(void)

undefined8 * FUN_145d18d7e(undefined8 *param_1)

{
  FUN_140b4820a();
  *param_1 = &PTR_FUN_14b51ffe0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  FUN_140b4884c(param_1 + 0x8a);
  param_1[0x8a] = &PTR_FUN_14b520b80;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  *(undefined4 *)(param_1 + 0x1a1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0c) = 0x41f0000043800000;
  *(undefined4 *)((longlong)param_1 + 0xd14) = 0x44368000;
  param_1[0x1a4] = 0;
  return param_1;
}



// FUNCTION 145d18e0e FUN_145d18e0e body=40 status=ok
// SIG undefined FUN_145d18e0e(void)

undefined8 FUN_145d18e0e(undefined8 param_1,int param_2)

{
  FUN_145d18e36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d18e36 FUN_145d18e36 body=104 status=ok
// SIG undefined FUN_145d18e36(void)

void FUN_145d18e36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b752a10;
  param_1[6] = &PTR_FUN_14b752cb0;
  FUN_1403c44e6(param_1 + 0x78);
  *(undefined4 *)(param_1 + 100) = 0;
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_145880d2e(param_1 + 0x5b);
  FUN_1403c44e6(param_1 + 0xd);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d18e9e FUN_145d18e9e body=39 status=ok
// SIG undefined FUN_145d18e9e(void)

void FUN_145d18e9e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d18ec6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d18ec6 FUN_145d18ec6 body=71 status=ok
// SIG undefined FUN_145d18ec6(void)

undefined8 FUN_145d18ec6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar1 = FUN_1411c648e(uVar2);
  if (lVar1 != 0) {
    uVar2 = FUN_145d18f0e(lVar1,*(undefined4 *)(param_1 + 0xe0));
    return uVar2;
  }
  return 0x3f19999a;
}



// FUNCTION 145d18f0e FUN_145d18f0e body=34 status=ok
// SIG undefined FUN_145d18f0e(void)

undefined4 FUN_145d18f0e(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_14588298a();
  if (lVar1 == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x18);
  }
  return uVar2;
}



// FUNCTION 145d18f30 FUN_145d18f30 body=39 status=ok
// SIG undefined FUN_145d18f30(void)

void FUN_145d18f30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d18f58();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d18f58 FUN_145d18f58 body=71 status=ok
// SIG undefined FUN_145d18f58(void)

undefined8 FUN_145d18f58(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar1 = FUN_1411c648e(uVar2);
  if (lVar1 != 0) {
    uVar2 = FUN_145d18fa0(lVar1,*(undefined4 *)(param_1 + 0xe0));
    return uVar2;
  }
  return 0x42700000;
}



// FUNCTION 145d18fa0 FUN_145d18fa0 body=34 status=ok
// SIG undefined FUN_145d18fa0(void)

undefined4 FUN_145d18fa0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_14588298a();
  if (lVar1 == 0) {
    uVar2 = 0x42700000;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x1c);
  }
  return uVar2;
}



// FUNCTION 145d18fc2 FUN_145d18fc2 body=39 status=ok
// SIG undefined FUN_145d18fc2(void)

void FUN_145d18fc2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d18fea();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d18fea FUN_145d18fea body=71 status=ok
// SIG undefined FUN_145d18fea(void)

undefined8 FUN_145d18fea(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar1 = FUN_1411c648e(uVar2);
  if (lVar1 != 0) {
    uVar2 = FUN_145d19032(lVar1,*(undefined4 *)(param_1 + 0xe0));
    return uVar2;
  }
  return 0x3f800000;
}



// FUNCTION 145d19032 FUN_145d19032 body=34 status=ok
// SIG undefined FUN_145d19032(void)

undefined4 FUN_145d19032(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_14588298a();
  if (lVar1 == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 4);
  }
  return uVar2;
}



// FUNCTION 145d1905c FUN_145d1905c body=136 status=ok
// SIG undefined FUN_145d1905c(void)

undefined8 * FUN_145d1905c(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b7aca30;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0x3dcccccd3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3e4ccccd;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3db) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e3) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 7;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 145d190e4 FUN_145d190e4 body=43 status=ok
// SIG undefined FUN_145d190e4(void)

undefined8 FUN_145d190e4(undefined8 param_1,int param_2)

{
  FUN_145d19110();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 145d19110 FUN_145d19110 body=101 status=ok
// SIG undefined FUN_145d19110(void)

void FUN_145d19110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c32f0;
  FUN_1458b964b(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b964b(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145d19176 FUN_145d19176 body=26 status=ok
// SIG undefined FUN_145d19176(void)

void FUN_145d19176(undefined8 param_1)

{
  FUN_145d19190();
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145d19190 FUN_145d19190 body=118 status=ok
// SIG undefined FUN_145d19190(void)

void FUN_145d19190(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x120) = 0;
  uVar1 = *(uint *)(param_1 + 0xf8);
  if ((ulonglong)uVar1 != 0) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x108))) {
        FUN_149070629(*(longlong *)(param_1 + 0x100) + lVar3,0);
      }
      FUN_1490704f4(param_1,uVar2 & 0xffffffff);
      FUN_149070558(param_1,uVar2 & 0xffffffff);
      FUN_1490705d2(param_1);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x58;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 145d19206 FUN_145d19206 body=38 status=ok
// SIG undefined FUN_145d19206(void)

undefined8 FUN_145d19206(undefined8 param_1,int param_2)

{
  FUN_145d1922c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d1922c FUN_145d1922c body=199 status=ok
// SIG undefined FUN_145d1922c(void)

void FUN_145d1922c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd2f620;
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_145d1934a(param_1 + 0x4e);
  FUN_145d19382(param_1[0x4d]);
  plVar3 = (longlong *)param_1[0x4c];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  plVar3 = (longlong *)param_1[0x4b];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  plVar3 = (longlong *)param_1[0x4a];
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
  FUN_145d193d2(param_1 + 0x42);
  FUN_145d19770(param_1 + 1);
  return;
}



// FUNCTION 145d192f4 FUN_145d192f4 body=9 status=ok
// SIG undefined FUN_145d192f4(void)

void FUN_145d192f4(longlong param_1)

{
  FUN_1411160c2(param_1 + 0x10);
  return;
}



// FUNCTION 145d192fe FUN_145d192fe body=38 status=ok
// SIG undefined FUN_145d192fe(void)

undefined8 FUN_145d192fe(undefined8 param_1,int param_2)

{
  FUN_145d19424();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d19324 FUN_145d19324 body=38 status=ok
// SIG undefined FUN_145d19324(void)

undefined8 FUN_145d19324(undefined8 param_1,int param_2)

{
  FUN_145d194b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d1934a FUN_145d1934a body=55 status=ok
// SIG undefined FUN_145d1934a(void)

void FUN_145d1934a(longlong *param_1)

{
  FUN_145d195f2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d19382 FUN_145d19382 body=79 status=ok
// SIG undefined FUN_145d19382(void)

void FUN_145d19382(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 145d193d2 FUN_145d193d2 body=81 status=ok
// SIG undefined FUN_145d193d2(void)

void FUN_145d193d2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14bd34e80;
  uVar1 = (**(code **)(*(longlong *)param_1[3] + 0x278))();
  if (param_1[4] != 0) {
    FUN_14480f766(uVar1);
  }
  param_1[4] = 0;
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d19424 FUN_145d19424 body=87 status=ok
// SIG undefined FUN_145d19424(void)

void FUN_145d19424(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd2dc90;
  plVar1 = (longlong *)param_1[10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  FUN_145d1947b(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145d19460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 145d1947b FUN_145d1947b body=56 status=ok
// SIG undefined FUN_145d1947b(void)

void FUN_145d1947b(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
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
      plVar3 = plVar3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d194b4 FUN_145d194b4 body=241 status=ok
// SIG undefined FUN_145d194b4(void)

void FUN_145d194b4(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd2e1b0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd);
  EnterCriticalSection(lpCriticalSection);
  if (param_1[8] != 0) {
    *(undefined1 *)(param_1[8] + 0x48) = 0;
    param_1[8] = 0;
    plVar3 = (longlong *)param_1[9];
    if (plVar3 != (longlong *)0x0) {
      param_1[9] = 0;
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
  LeaveCriticalSection(lpCriticalSection);
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    param_1[0xb] = 0;
  }
  FUN_14018802a(param_1[0xc]);
  param_1[0xc] = 0;
  DeleteCriticalSection(lpCriticalSection);
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
  FUN_145d195a5(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d195a5 FUN_145d195a5 body=77 status=ok
// SIG undefined FUN_145d195a5(void)

void FUN_145d195a5(longlong param_1,int param_2)

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



// FUNCTION 145d195f2 FUN_145d195f2 body=381 status=ok
// SIG undefined FUN_145d195f2(void)

void FUN_145d195f2(longlong *param_1,int param_2)

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
      FUN_1449db362(*local_70 + (longlong)iStack_54 * 0x20 + 8);
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
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 145d19770 FUN_145d19770 body=461 status=ok
// SIG undefined FUN_145d19770(void)

void FUN_145d19770(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14bd2c1e0;
  FUN_140457ffc(&DAT_14c8673d8,param_1);
  FUN_141533ed2(param_1);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_145d1993e(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b));
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_145d19974(param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145d199aa(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145d199e0(param_1 + 0xd);
  FUN_14032373c(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140323711(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
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
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    FUN_145d19aca(lVar4);
    FUN_1400020a8(lVar4);
    return;
  }
  return;
}



// FUNCTION 145d1993e FUN_145d1993e body=53 status=ok
// SIG undefined FUN_145d1993e(void)

void FUN_145d1993e(longlong *param_1)

{
  FUN_145d19a70();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d19974 FUN_145d19974 body=53 status=ok
// SIG undefined FUN_145d19974(void)

void FUN_145d19974(longlong *param_1)

{
  FUN_145d19b9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d199aa FUN_145d199aa body=53 status=ok
// SIG undefined FUN_145d199aa(void)

void FUN_145d199aa(longlong *param_1)

{
  FUN_145d19d0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d199e0 FUN_145d199e0 body=53 status=ok
// SIG undefined FUN_145d199e0(void)

void FUN_145d199e0(longlong *param_1)

{
  FUN_145d19a16();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d19a16 FUN_145d19a16 body=90 status=ok
// SIG undefined FUN_145d19a16(void)

void FUN_145d19a16(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
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



// FUNCTION 145d19a70 FUN_145d19a70 body=90 status=ok
// SIG undefined FUN_145d19a70(void)

void FUN_145d19a70(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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


