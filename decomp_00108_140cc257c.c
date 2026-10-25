// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140cc257c FUN_140cc257c body=640 status=ok
// SIG undefined FUN_140cc257c(void)

longlong * FUN_140cc257c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_14480568a();
  *param_1 = (longlong)&PTR_FUN_14ae83d60;
  param_1[5] = (longlong)&PTR_FUN_14ae848e0;
  param_1[6] = (longlong)&PTR_LAB_14ae84920;
  param_1[0x55] = (longlong)&PTR_FUN_14ae84970;
  param_1[0x56] = (longlong)&PTR_FUN_14ae849f0;
  param_1[0x57] = (longlong)&PTR_FUN_14ae84a00;
  param_1[0xc4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0;
  *(undefined1 *)(param_1 + 0xc6) = 1;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0x42c8000000000000;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0x3f800000;
  FUN_144894d4c(param_1 + 200);
  param_1[0x1e0] = 0;
  *(undefined1 *)(param_1 + 0x1e2) = 1;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = 0;
  *(undefined4 *)(param_1 + 0x1e5) = 0x44000000;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  FUN_140cc283c(param_1 + 0x1ee);
  param_1[0x1fe] = 0x45800000;
  *(undefined2 *)(param_1 + 0x200) = 0;
  param_1[0x201] = 0x40c0000000000000;
  *(undefined1 *)(param_1 + 0x202) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1014) = 100;
  *(undefined1 *)(param_1 + 0x203) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0xffffffff;
  param_1[0x205] = 0;
  *(undefined1 *)(param_1 + 0x206) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1034) = 0;
  *(undefined8 *)((longlong)param_1 + 0x103c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1044) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1054) = 0;
  *(undefined8 *)((longlong)param_1 + 0x105c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1064) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1074) = 0;
  *(undefined8 *)((longlong)param_1 + 0x107c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1081) = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  FUN_144894d4c(param_1 + 0x21c);
  param_1[0x334] = 0;
  param_1[0x335] = 0x4080000000000000;
  *(undefined1 *)(param_1 + 0x1ff) = 1;
  plVar1 = (longlong *)FUN_140cc289e();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  (**(code **)(*param_1 + 0x728))(param_1,*(undefined8 *)(lVar2 + 0x6c),1);
  param_1[0x208] = 0;
  param_1[0x20b] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0x45000000;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) & 0xfd;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0x7f;
  plVar1 = (longlong *)FUN_140cc289e();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  lVar2 = FUN_140cc27fc(lVar2 + 0x78);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x1ed] = lVar2;
  return param_1;
}



// FUNCTION 140cc27fc FUN_140cc27fc body=63 status=ok
// SIG undefined FUN_140cc27fc(void)

longlong FUN_140cc27fc(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1402d2740();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140cc283c FUN_140cc283c body=97 status=ok
// SIG undefined FUN_140cc283c(void)

void FUN_140cc283c(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x4480000042340000;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined8 *)(param_1 + 0xe) = 2;
  *(undefined8 *)(param_1 + 0x12) = 0x4180000000000000;
  *(undefined4 *)(param_1 + 0x16) = 0x40400000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xc3000000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2c) = 0x3c23d70a3c23d70a;
  *(undefined8 *)(param_1 + 0x30) = 0x4380000000000000;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



// FUNCTION 140cc289e FUN_140cc289e body=228 status=ok
// SIG undefined FUN_140cc289e(void)

longlong FUN_140cc289e(void)

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
  if (DAT_14cb488e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1483fd7c3;
    local_40 = &LAB_1461a14d3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Water",L"WaterRuntimeSettings",&DAT_14cb488e0,&DAT_1483fd7c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb488e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc2984 FUN_140cc2984 body=152 status=ok
// SIG undefined FUN_140cc2984(void)

void FUN_140cc2984(longlong *param_1,longlong param_2,double *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140cc2a2a(param_1 + 0x18);
  puVar1 = *(undefined8 **)(param_2 + 8);
  local_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (puVar1 != &local_48) {
    local_30 = puVar1[3];
  }
  (**(code **)(*param_1 + 0x2e8))(param_1,&local_48,(float)*param_3,0);
  FUN_1449802a2(puVar1,&local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc2a2a FUN_140cc2a2a body=588 status=ok
// SIG undefined FUN_140cc2a2a(void)

void FUN_140cc2a2a(longlong *param_1,longlong *param_2,double *param_3)

{
  void *pvVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  size_t _Size;
  float fVar8;
  undefined1 auStack_c8 [44];
  float local_9c;
  double local_98;
  undefined4 local_90;
  float fStack_8c;
  float fStack_88;
  undefined1 uStack_84;
  undefined4 uStack_83;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58;
  char local_57;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar8 = (float)FUN_140cc2c92();
  dVar2 = *param_3;
  if ((double)fVar8 <= *param_3) {
    dVar2 = (double)fVar8;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  iVar4 = FUN_140cc2d5e(param_1,(float)dVar2);
  if (((iVar4 != -1) && (lVar6 = (longlong)iVar4 * 0x40 + *param_1, lVar6 != 0)) &&
     (*(char *)(lVar6 + 0x1c) == '\x01')) {
    local_9c = 0.0;
    plVar5 = (longlong *)FUN_140cc2e50(lVar6,(float)dVar2);
    if (plVar5 != (longlong *)0x0) {
      local_98 = *param_3;
      local_90 = *(undefined4 *)(param_3 + 1);
      fStack_8c = *(float *)((longlong)param_3 + 0xc);
      uStack_83 = *(undefined4 *)((longlong)param_3 + 0x15);
      fStack_88._1_3_ = (undefined3)*(undefined4 *)((longlong)param_3 + 0x11);
      fStack_88 = (float)CONCAT31(fStack_88._1_3_,
                                  (char)((uint)*(undefined4 *)((longlong)param_3 + 0xd) >> 0x18));
      uStack_84 = (undefined1)((uint)*(undefined4 *)((longlong)param_3 + 0x11) >> 0x18);
      local_78 = (void *)0x0;
      local_70 = *(int *)(param_3 + 5);
      lVar7 = (longlong)local_70;
      pvVar1 = (void *)param_3[4];
      if (lVar7 == 0) {
        local_6c = 0;
      }
      else {
        FUN_1474d60b6(&local_78,local_70,0);
        memcpy(local_78,pvVar1,lVar7 << 4);
      }
      local_68 = (void *)0x0;
      local_60 = *(int *)(param_3 + 7);
      _Size = (size_t)local_60;
      pvVar1 = (void *)param_3[6];
      if (_Size == 0) {
        local_5c = 0;
      }
      else {
        FUN_1447cd5fa(&local_68,local_60,0);
        memcpy(local_68,pvVar1,_Size);
      }
      local_57 = *(char *)((longlong)param_3 + 0x41);
      if (local_57 == '\x01') {
        local_58 = *(undefined1 *)(param_3 + 8);
      }
      local_98 = (double)local_9c;
      fStack_88 = local_9c - fStack_8c;
      uStack_84 = 1;
      bVar3 = (**(code **)(*plVar5 + 0x340))(plVar5);
      local_90 = CONCAT31(local_90._1_3_,(byte)local_90 & bVar3);
      uStack_83 = CONCAT13(1 < *(int *)(lVar6 + 0x18),(undefined3)uStack_83);
      (**(code **)(*plVar5 + 0x328))(plVar5,param_2,&local_98);
      if (local_57 == '\x01') {
        local_57 = '\0';
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    FUN_1448859f0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8,*(undefined8 *)(*param_2 + 0x10));
}



// FUNCTION 140cc2c92 FUN_140cc2c92 body=204 status=ok
// SIG undefined FUN_140cc2c92(void)

float FUN_140cc2c92(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if ((longlong)(int)param_1[1] == 0) {
    fVar5 = 0.0;
  }
  else {
    lVar1 = *param_1;
    lVar2 = 0;
    fVar4 = 0.0;
    do {
      fVar5 = 1.0;
      if (*(longlong *)(lVar1 + lVar2) != 0) {
        fVar5 = *(float *)(*(longlong *)(lVar1 + lVar2) + 0xb0);
      }
      fVar5 = ABS(fVar5 * *(float *)(lVar1 + 0x14 + lVar2));
      uVar3 = -(uint)(fVar5 <= 1e-08);
      fVar5 = ((float)*(int *)(lVar1 + 0x18 + lVar2) *
              (*(float *)(lVar1 + 0x10 + lVar2) - *(float *)(lVar1 + 0xc + lVar2))) /
              (float)(uVar3 & 0x3f800000 | ~uVar3 & (uint)fVar5) + *(float *)(lVar1 + 8 + lVar2);
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
      lVar2 = lVar2 + 0x40;
      fVar4 = fVar5;
    } while ((longlong)(int)param_1[1] * 0x40 != lVar2);
  }
  return fVar5;
}



// FUNCTION 140cc2d5e FUN_140cc2d5e body=241 status=ok
// SIG undefined FUN_140cc2d5e(void)

int FUN_140cc2d5e(longlong *param_1,float param_2)

{
  int *piVar1;
  ulonglong uVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  uVar2 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar2) {
    piVar1 = (int *)(*param_1 + uVar2 * 0x40 + -0x28);
    do {
      if ((float)piVar1[-4] <= param_2) {
        fVar5 = 1.0;
        if (*(longlong *)(piVar1 + -6) != 0) {
          fVar5 = *(float *)(*(longlong *)(piVar1 + -6) + 0xb0);
        }
        uVar4 = -(uint)(ABS(fVar5 * (float)piVar1[-1]) <= 1e-08);
        if (param_2 <=
            (float)piVar1[-4] +
            ((float)*piVar1 * ((float)piVar1[-2] - (float)piVar1[-3])) /
            (float)(uVar4 & 0x3f800000 | ~uVar4 & (uint)ABS(fVar5 * (float)piVar1[-1]))) {
          return (int)uVar2 + -1;
        }
      }
      piVar1 = piVar1 + -0x10;
      bVar3 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar3);
  }
  return -1;
}



// FUNCTION 140cc2e50 FUN_140cc2e50 body=313 status=ok
// SIG undefined FUN_140cc2e50(void)

longlong FUN_140cc2e50(longlong *param_1,float param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((*(char *)((longlong)param_1 + 0x1c) != '\x01') ||
     (fVar1 = *(float *)(param_1 + 1), param_2 < fVar1)) {
    lVar3 = 0;
  }
  else {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = *(float *)(lVar2 + 0xb0);
    }
    lVar3 = 0;
    if (lVar2 != 0) {
      fVar5 = *(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0xc);
      fVar6 = ABS(fVar6 * *(float *)((longlong)param_1 + 0x14));
      uVar4 = -(uint)(fVar6 <= 1e-08);
      if (param_2 <=
          ((float)(int)param_1[3] * fVar5) / (float)(uVar4 & 0x3f800000 | ~uVar4 & (uint)fVar6) +
          fVar1) {
        fVar6 = *(float *)((longlong)param_1 + 0x14) * *(float *)(lVar2 + 0xb0);
        fVar7 = ABS(fVar6);
        fVar6 = (float)(-(uint)(fVar7 <= 1e-08) & 0x3f800000 |
                       ~-(uint)(fVar7 <= 1e-08) & (uint)fVar6);
        param_2 = param_2 - fVar1;
        if (1 < (int)param_1[3]) {
          param_2 = (float)FUN_1447c7e44(lVar2,fVar5 / (float)(~-(uint)(fVar7 <= 1e-08) &
                                                               (uint)fVar7 |
                                                              -(uint)(fVar7 <= 1e-08) & 0x3f800000))
          ;
        }
        *param_3 = param_2 * fVar6 +
                   *(float *)((longlong)param_1 + (ulonglong)(fVar6 <= 0.0) * 4 + 0xc);
        lVar3 = *param_1;
      }
    }
  }
  return lVar3;
}



// FUNCTION 140cc2f8a FUN_140cc2f8a body=561 status=ok
// SIG undefined FUN_140cc2f8a(void)

undefined8 * FUN_140cc2f8a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14b40eff0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  memset((void *)((longlong)param_1 + 0x1c),0,0x8c);
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x30) = 0x100;
  param_1[0x33] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x31] = DAT_14c8464e0;
  param_1[0x32] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x34] = DAT_14c8464e0;
  param_1[0x35] = uVar1;
  param_1[0x36] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x37] = DAT_14c8464e0;
  param_1[0x38] = uVar1;
  param_1[0x39] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  memset(param_1 + 0x3b,0,0x100);
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b) = 0xff;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x200000000;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x301) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x69] = DAT_14c8464e0;
  param_1[0x6a] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x6c] = DAT_14c8464e0;
  param_1[0x6d] = uVar1;
  param_1[0x6e] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x6f] = DAT_14c8464e0;
  param_1[0x70] = uVar1;
  param_1[0x71] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  memset(param_1 + 0x73,0,0x100);
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0xffffffff;
  return param_1;
}



// FUNCTION 140cc31ca FUN_140cc31ca body=9366 status=ok
// SIG undefined FUN_140cc31ca(void)

void FUN_140cc31ca(longlong param_1,double *param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  int *piVar6;
  double dVar7;
  char cVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong *puVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  PSRWLOCK pRVar18;
  uint uVar19;
  undefined8 *puVar20;
  double dVar21;
  uint uVar22;
  double *pdVar23;
  ulonglong uVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  double dVar29;
  int iVar30;
  longlong lVar31;
  longlong *plVar32;
  ulonglong uVar33;
  int iVar34;
  ulonglong uVar35;
  PSRWLOCK pRVar36;
  code *pcVar37;
  longlong lVar38;
  longlong lVar39;
  double *pdVar40;
  double *pdVar41;
  bool bVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_1e8 [32];
  code **local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  code **local_190;
  code *local_188;
  code *local_180;
  double local_178;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  double *local_158;
  ulonglong local_150;
  double *local_148;
  ulonglong local_140;
  double *local_138;
  ulonglong local_130;
  PSRWLOCK local_128;
  double *local_120;
  uint *local_118;
  double *local_110;
  double *local_108;
  ulonglong *local_100;
  longlong local_f8;
  ulonglong *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  uint *local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_160 = param_1;
  local_138 = param_2;
  if (*(int *)(param_1 + 0x1b8) != *(int *)(param_1 + 0x1e4)) {
    lVar31 = param_1 + 0x1e8;
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      lVar31 = *(longlong *)(param_1 + 0x1f0);
    }
    iVar28 = *(int *)(param_1 + 0x1f8);
    iVar34 = iVar28 + 3;
    if (-1 < iVar28) {
      iVar34 = iVar28;
    }
    if (*(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1e4) < iVar34 >> 2) {
      iVar28 = *(int *)(param_1 + 0x1d8);
      if (iVar28 == 0) {
        uVar33 = 0;
        uVar24 = 1;
        iVar34 = 0;
        iVar30 = 0;
      }
      else {
        puVar13 = *(uint **)(param_1 + 0x1d0);
        if (*(uint **)(param_1 + 0x1d0) == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0x1c0);
        }
        uVar22 = *puVar13;
        if (uVar22 == 0) {
          iVar34 = iVar28 + 0x1e;
          if (-1 < iVar28 + -1) {
            iVar34 = iVar28 + -1;
          }
          uVar33 = 0;
          uVar24 = (ulonglong)(uint)(iVar34 >> 5);
          if (iVar34 >> 5 < 1) {
            uVar24 = uVar33;
          }
          iVar30 = 0;
          do {
            if (uVar24 == uVar33) goto LAB_140cc3437;
            iVar30 = iVar30 + 0x20;
            uVar22 = puVar13[uVar33 + 1];
            uVar33 = uVar33 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar33 = 0;
          iVar30 = 0;
        }
        uVar24 = (ulonglong)(-uVar22 & uVar22);
        uVar35 = uVar24 * 2 + 1;
        lVar39 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar39 == 0; lVar39 = lVar39 + -1) {
          }
        }
        iVar34 = (iVar30 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
        if (iVar28 <= iVar34) {
          iVar34 = iVar28;
        }
      }
      if (iVar34 != iVar28) {
        uVar22 = 0xffffffff;
        do {
          *(undefined4 *)
           (lVar31 + (longlong)
                     *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x1c + (longlong)iVar34 * 0x20) * 4)
               = 0xffffffff;
          uVar22 = ~(uint)uVar24 & uVar22;
          puVar13 = *(uint **)(param_1 + 0x1d0);
          if (*(uint **)(param_1 + 0x1d0) == (uint *)0x0) {
            puVar13 = (uint *)(param_1 + 0x1c0);
          }
          iVar15 = *(int *)(param_1 + 0x1d8);
          iVar34 = (int)uVar33;
          lVar39 = (longlong)iVar34;
          uVar17 = puVar13[lVar39] & uVar22;
          if (uVar17 == 0) {
            iVar26 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar26 = iVar15 + -1;
            }
            iVar26 = iVar26 >> 5;
            iVar30 = iVar30 + 0x20;
            iVar27 = iVar26;
            if (iVar26 < iVar34) {
              iVar27 = iVar34;
            }
            if (iVar34 < iVar26) {
              lVar38 = 0;
              do {
                uVar17 = puVar13[lVar39 + lVar38 + 1];
                if (uVar17 != 0) {
                  uVar33 = (ulonglong)(iVar34 + (int)lVar38 + 1);
                  uVar22 = 0xffffffff;
                  goto LAB_140cc33bc;
                }
                iVar30 = iVar30 + 0x20;
                lVar38 = lVar38 + 1;
              } while (iVar27 - lVar39 != lVar38);
              uVar22 = 0xffffffff;
              iVar34 = iVar27;
            }
            uVar33 = (ulonglong)(iVar34 + 1);
            iVar34 = iVar15;
          }
          else {
LAB_140cc33bc:
            uVar24 = (ulonglong)(-uVar17 & uVar17);
            uVar35 = uVar24 * 2 + 1;
            lVar39 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            iVar34 = (iVar30 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
            if (iVar15 <= iVar34) {
              iVar34 = iVar15;
            }
          }
        } while (iVar34 != iVar28);
      }
    }
    else if (0 < iVar28) {
      lVar39 = 0;
      do {
        *(undefined4 *)(lVar31 + lVar39 * 4) = 0xffffffff;
        lVar39 = lVar39 + 1;
      } while (lVar39 < *(int *)(param_1 + 0x1f8));
    }
LAB_140cc3437:
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0x1bc) < 0) {
      FUN_1446f4a44(param_1 + 0x1b0,0);
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_190 = &local_c8;
    local_c8 = FUN_1449e2820;
    local_180 = FUN_14081d0ea;
    local_188 = (code *)&LAB_145a62952;
    local_198 = &LAB_147c8cd45;
    local_1a0 = (code *)&LAB_1461468ae;
    local_1a8 = L"Engine";
    local_1b0 = 0;
    local_1b8 = 0x10000006;
    local_1c0 = 8;
    local_1c8 = (code **)CONCAT44(local_1c8._4_4_,0x218);
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar32 = DAT_14caf84d0;
  lVar31 = DAT_14caf84d0[0x22];
  if (lVar31 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar31 = plVar32[0x22];
  }
  if ((0 < *(int *)(param_2 + 2)) &&
     (dVar29 = *param_2,
     *(double *)(param_1 + 0x358) <= dVar29 && dVar29 != *(double *)(param_1 + 0x358))) {
    dVar21 = (double)*(float *)(lVar31 + 0x210);
    *(double *)(param_1 + 0x358) = dVar29;
    if (*(int *)(param_1 + 200) - *(int *)(param_1 + 0xf4) <
        *(int *)(param_2 + 5) - *(int *)((longlong)param_2 + 0x54)) {
      uVar22 = *(uint *)(param_1 + 0xe8);
      if (uVar22 == 0) {
        uVar33 = 1;
        pdVar23 = (double *)0x0;
        iVar28 = 0;
        uVar17 = 0;
      }
      else {
        puVar13 = *(uint **)(param_1 + 0xe0);
        if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0xd0);
        }
        uVar17 = *puVar13;
        if (uVar17 == 0) {
          iVar28 = uVar22 + 0x1e;
          if (-1 < (int)(uVar22 - 1)) {
            iVar28 = uVar22 - 1;
          }
          pdVar23 = (double *)0x0;
          pdVar41 = (double *)(ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            pdVar41 = pdVar23;
          }
          iVar28 = 0;
          do {
            if (pdVar41 == pdVar23) goto LAB_140cc415f;
            iVar28 = iVar28 + 0x20;
            uVar17 = puVar13[(longlong)pdVar23 + 1];
            pdVar23 = (double *)((longlong)pdVar23 + 1);
          } while (uVar17 == 0);
        }
        else {
          pdVar23 = (double *)0x0;
          iVar28 = 0;
        }
        uVar33 = (ulonglong)(-uVar17 & uVar17);
        uVar24 = uVar33 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        uVar17 = (iVar28 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
        if ((int)uVar22 <= (int)uVar17) {
          uVar17 = uVar22;
        }
      }
      if (uVar17 != uVar22) {
        local_128 = (PSRWLOCK)(param_1 + 0x280);
        local_d8 = param_1 + 0x330;
        local_110 = param_2 + 0xb;
        local_e8 = param_1 + 0x2e0;
        uVar19 = 0xffffffff;
        local_e0 = (ulonglong)uVar22;
        local_d0 = (uint *)(param_1 + 0xd0);
        do {
          local_150 = *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar17 * 0x10);
          pRVar18 = (PSRWLOCK)0x0;
          if (DAT_14c992a90 != '\0') {
            pRVar18 = local_128;
          }
          if (pRVar18 != (PSRWLOCK)0x0) {
            AcquireSRWLockShared(pRVar18);
          }
          local_118 = (uint *)CONCAT44(local_118._4_4_,iVar28);
          if (*(int *)(param_1 + 0x300) != *(int *)(param_1 + 0x32c)) {
            uVar22 = ((uint)(local_150 >> 0x14) & 0xffff ^ (uint)(local_150 >> 4)) * -0x7a143595;
            uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
            lVar31 = *(longlong *)(param_1 + 0x338);
            if (*(longlong *)(param_1 + 0x338) == 0) {
              lVar31 = local_d8;
            }
            iVar28 = *(int *)(lVar31 + (ulonglong)
                                       (*(int *)(param_1 + 0x340) - 1U & (uVar22 >> 0x10 ^ uVar22))
                                       * 4);
            if (iVar28 != -1) {
              do {
                lVar31 = *(longlong *)(param_1 + 0x2f8) + (longlong)iVar28 * 0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x2f8) + (longlong)iVar28 * 0x20) ==
                    local_150) goto LAB_140cc3748;
                iVar28 = *(int *)(lVar31 + 0x18);
              } while (iVar28 != -1);
            }
          }
          lVar31 = 0;
LAB_140cc3748:
          local_f8 = CONCAT44(local_f8._4_4_,uVar19);
          local_140 = uVar33;
          local_120 = pdVar23;
          if (pRVar18 != (PSRWLOCK)0x0) {
            ReleaseSRWLockShared(pRVar18);
          }
          if ((lVar31 != 0) && ((longlong)*(int *)(lVar31 + 0x10) != 0)) {
            puVar14 = *(ulonglong **)(lVar31 + 8);
            local_100 = puVar14 + *(int *)(lVar31 + 0x10);
            do {
              if (*(int *)(param_2 + 5) != *(int *)((longlong)param_2 + 0x54)) {
                uVar33 = *puVar14;
                uVar22 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
                uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                pdVar23 = (double *)param_2[0xc];
                if ((double *)param_2[0xc] == (double *)0x0) {
                  pdVar23 = local_110;
                }
                iVar28 = *(int *)((longlong)pdVar23 +
                                 (ulonglong)
                                 (*(int *)(param_2 + 0xd) - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4);
                if (iVar28 != -1) {
                  do {
                    lVar31 = (longlong)param_2[4] + (longlong)iVar28 * 0x20;
                    if (*(ulonglong *)((longlong)param_2[4] + (longlong)iVar28 * 0x20) == uVar33) {
                      if (((lVar31 + 8U & 0xfffffffffffffff7) != 0) &&
                         ((longlong)*(int *)(lVar31 + 0x10) != 0)) {
                        pdVar41 = *(double **)(lVar31 + 8);
                        pdVar23 = (double *)
                                  ((longlong)pdVar41 + (longlong)*(int *)(lVar31 + 0x10) * 4);
                        local_130 = uVar33;
                        local_108 = pdVar23;
                        local_f0 = puVar14;
                        do {
                          uVar22 = *(uint *)pdVar41;
                          local_170 = (ulonglong)uVar22;
                          puVar20 = (undefined8 *)
                                    ((ulonglong)(uVar22 & 0x7fffffff) * 0x120 + (longlong)param_2[1]
                                    );
                          local_168 = puVar20[(ulonglong)(~uVar22 >> 0x1f) + 0x20];
                          if (local_168 != 0) {
                            pRVar18 = (PSRWLOCK)0x0;
                            if (DAT_14c992a90 != '\0') {
                              pRVar18 = local_128;
                            }
                            if (pRVar18 != (PSRWLOCK)0x0) {
                              AcquireSRWLockShared(pRVar18);
                            }
                            if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
                              uVar22 = ((uint)(local_168 >> 0x14) & 0xffff ^ (uint)(local_168 >> 4))
                                       * -0x7a143595;
                              uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                              uVar24 = *(ulonglong *)(param_1 + 0x2e8);
                              if (*(ulonglong *)(param_1 + 0x2e8) == 0) {
                                uVar24 = local_e8;
                              }
                              iVar28 = *(int *)(uVar24 + (ulonglong)
                                                         (*(int *)(param_1 + 0x2f0) - 1U &
                                                         (uVar22 >> 0x10 ^ uVar22)) * 4);
                              if (iVar28 != -1) {
                                do {
                                  puVar1 = (ulonglong *)
                                           (*(longlong *)(param_1 + 0x2a8) + (longlong)iVar28 * 0x18
                                           );
                                  if (*puVar1 == local_168) {
                                    if (puVar1 != (ulonglong *)0x0) {
                                      local_178 = 0.0;
                                      if ((double *)(puVar1 + 1) != (double *)0x0) {
                                        local_178 = (double)puVar1[1];
                                      }
                                      goto LAB_140cc395c;
                                    }
                                    break;
                                  }
                                  iVar28 = (int)puVar1[2];
                                } while (iVar28 != -1);
                              }
                            }
                            local_178 = 0.0;
LAB_140cc395c:
                            if (pRVar18 != (PSRWLOCK)0x0) {
                              ReleaseSRWLockShared(pRVar18);
                            }
                            if (local_178 != 0.0) {
                              local_c8 = (code *)((ulonglong)local_c8 & 0xffffffffffffff00);
                              local_1c8 = &local_c8;
                              local_158 = pdVar41;
                              puVar9 = (undefined1 *)
                                       FUN_14161197e(param_1,uVar33,local_168,puVar20[0x23]);
                              dVar29 = (double)puVar20[3];
                              dVar4 = (double)puVar20[4];
                              dVar5 = (double)puVar20[5];
                              dVar7 = dVar5 * (double)puVar20[8] +
                                      dVar29 * (double)puVar20[6] + dVar4 * (double)puVar20[7];
                              dVar43 = (double)puVar20[6] * dVar7;
                              dVar44 = (double)puVar20[7] * dVar7;
                              dVar7 = dVar7 * (double)puVar20[8];
                              *(double *)(puVar9 + 0x88) = dVar43 + *(double *)(puVar9 + 0x88);
                              *(double *)(puVar9 + 0x90) = dVar44 + *(double *)(puVar9 + 0x90);
                              *(double *)(puVar9 + 0x98) = dVar7 + *(double *)(puVar9 + 0x98);
                              *(double *)(puVar9 + 0xa0) =
                                   (dVar29 - dVar43) + *(double *)(puVar9 + 0xa0);
                              *(double *)(puVar9 + 0xa8) =
                                   (dVar4 - dVar44) + *(double *)(puVar9 + 0xa8);
                              lVar31 = 0x90;
                              pdVar40 = (double *)(puVar20 + 0x12);
                              if (-1 < (int)local_170) {
                                lVar31 = 0x78;
                                pdVar40 = (double *)(puVar20 + 0xf);
                              }
                              *(double *)(puVar9 + 0xb0) =
                                   (dVar5 - dVar7) + *(double *)(puVar9 + 0xb0);
                              local_148 = (double *)(puVar20 + 0xf);
                              if (-1 < (int)local_170) {
                                local_148 = (double *)(puVar20 + 0x12);
                              }
                              iVar28 = *(int *)(puVar9 + 0x80);
                              lVar39 = (longlong)iVar28;
                              *(uint *)(puVar9 + 0x80) = iVar28 + 1U;
                              if (*(uint *)(puVar9 + 0x84) < iVar28 + 1U) {
                                FUN_141795f68(puVar9 + 0x78,iVar28);
                              }
                              pdVar41 = local_158;
                              lVar38 = *(longlong *)(puVar9 + 0x78);
                              puVar3 = (undefined8 *)(lVar38 + 0x30 + lVar39 * 0x48);
                              *puVar3 = 0;
                              puVar3[1] = 0;
                              puVar3 = (undefined8 *)(lVar38 + 0x20 + lVar39 * 0x48);
                              *puVar3 = 0;
                              puVar3[1] = 0;
                              puVar3 = (undefined8 *)(lVar38 + 0x10 + lVar39 * 0x48);
                              *puVar3 = 0;
                              puVar3[1] = 0;
                              puVar3 = (undefined8 *)(lVar38 + lVar39 * 0x48);
                              *puVar3 = 0;
                              puVar3[1] = 0;
                              *(undefined8 *)(lVar38 + 0x40 + lVar39 * 0x48) = 0;
                              *(undefined8 *)(lVar38 + 0x28 + lVar39 * 0x48) = puVar20[8];
                              uVar11 = puVar20[7];
                              puVar3 = (undefined8 *)(lVar38 + 0x18 + lVar39 * 0x48);
                              *puVar3 = puVar20[6];
                              puVar3[1] = uVar11;
                              uVar11 = puVar20[1];
                              puVar3 = (undefined8 *)(lVar38 + lVar39 * 0x48);
                              *puVar3 = *puVar20;
                              puVar3[1] = uVar11;
                              *(undefined8 *)(lVar38 + 0x10 + lVar39 * 0x48) = puVar20[2];
                              *(float *)(lVar38 + 0x30 + lVar39 * 0x48) =
                                   (float)(double)puVar20[0x1d];
                              *(undefined1 *)(lVar38 + 0x34 + lVar39 * 0x48) =
                                   *(undefined1 *)(puVar20 + 0x1f);
                              if ((dVar21 < ABS(*(double *)((longlong)puVar20 + lVar31))) ||
                                 (dVar21 < ABS(pdVar40[1]))) {
                                bVar42 = false;
                              }
                              else if ((dVar21 < ABS(pdVar40[2])) ||
                                      ((dVar21 < ABS(*local_148) || (dVar21 < ABS(local_148[1])))))
                              {
                                bVar42 = false;
                              }
                              else {
                                bVar42 = ABS(local_148[2]) <= dVar21;
                              }
                              puVar9[0xb8] = bVar42;
                              lVar31 = FUN_14484244a(puVar20 + 0x1e);
                              lVar10 = FUN_14484244a((longlong)puVar20 + 0xf4);
                              if (((lVar31 == 0) ||
                                  (piVar6 = *(int **)(lVar31 + 0x58), piVar6 == (int *)0x0)) ||
                                 (*piVar6 != 2)) {
                                lVar31 = 0;
                              }
                              else {
                                lVar31 = *(longlong *)(piVar6 + 2);
                                if ((lVar31 != 0) && (DAT_14c950c29 != '\0')) {
                                  FUN_1456cec3c(lVar31);
                                }
                              }
                              param_1 = local_160;
                              lVar38 = lVar38 + lVar39 * 0x48;
                              *(longlong *)(lVar38 + 0x38) = lVar31;
                              if (lVar10 == 0) {
                                lVar31 = 0;
                              }
                              else {
                                piVar6 = *(int **)(lVar10 + 0x58);
                                if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) {
                                  lVar31 = 0;
                                }
                                else {
                                  lVar31 = *(longlong *)(piVar6 + 2);
                                  if ((lVar31 != 0) && (DAT_14c950c29 != '\0')) {
                                    FUN_1456cec3c(lVar31);
                                  }
                                }
                              }
                              *(longlong *)(lVar38 + 0x40) = lVar31;
                              if ((int)local_170 < 0) {
                                uVar11 = *(undefined8 *)(lVar38 + 0x38);
                                *(longlong *)(lVar38 + 0x38) = lVar31;
                                *(undefined8 *)(lVar38 + 0x40) = uVar11;
                                *(ulonglong *)(lVar38 + 0x18) =
                                     *(ulonglong *)(lVar38 + 0x18) ^ 0x8000000000000000;
                                *(ulonglong *)(lVar38 + 0x20) =
                                     *(ulonglong *)(lVar38 + 0x20) ^ 0x8000000000000000;
                                *(ulonglong *)(lVar38 + 0x28) =
                                     *(ulonglong *)(lVar38 + 0x28) ^ 0x8000000000000000;
                              }
                              puVar14 = local_f0;
                              uVar33 = local_130;
                              param_2 = local_138;
                              pdVar23 = local_108;
                              if ((char)local_c8 == '\x01') {
                                *puVar9 = 1;
                                *(undefined8 *)(puVar9 + 0xc0) = puVar20[0x23];
                                uVar16 = *(undefined4 *)
                                          ((longlong)puVar20 +
                                          (ulonglong)(-1 < (int)local_170) * 4 + 0x110);
                                puVar13 = (uint *)(puVar9 + 8);
                                uVar11 = FUN_1417e7756(param_1,local_130,
                                                       *(undefined4 *)
                                                        ((longlong)puVar20 +
                                                        (local_170 >> 0x1f & 1) * 4 + 0x110));
                                FUN_1436452d4(puVar13,uVar11,pdVar40);
                                puVar25 = (uint *)(puVar9 + 0x40);
                                uVar11 = FUN_1417e7756(param_1,local_168,uVar16);
                                FUN_1436452d4(puVar25,uVar11,local_148);
                                puVar2 = (uint *)(puVar9 + 0x10);
                                cVar8 = FUN_140143fca(puVar2);
                                if (cVar8 != '\0') {
                                  if (local_150 == 0) {
                                    *puVar2 = 0;
                                    iVar28 = 0;
                                  }
                                  else {
                                    uVar22 = *(uint *)(local_150 + 0xc);
                                    *puVar2 = uVar22;
                                    if ((int)uVar22 < DAT_14c9647dc) {
                                      lVar31 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                                               *(longlong *)
                                                (DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                                    }
                                    else {
                                      lVar31 = 0;
                                    }
                                    iVar28 = *(int *)(lVar31 + 0x10);
                                    if (*(int *)(lVar31 + 0x10) == 0) {
                                      LOCK();
                                      iVar28 = DAT_14c964868 + 1;
                                      UNLOCK();
                                      iVar34 = DAT_14c964868 + 1;
                                      bVar42 = DAT_14c964868 < 1000;
                                      DAT_14c964868 = iVar28;
                                      if (bVar42) {
                                        FUN_140033559(
                                                  ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar34);
                                      }
                                      LOCK();
                                      iVar28 = *(int *)(lVar31 + 0x10);
                                      bVar42 = iVar28 == 0;
                                      if (bVar42) {
                                        *(int *)(lVar31 + 0x10) = iVar34;
                                        iVar28 = 0;
                                      }
                                      UNLOCK();
                                      if (bVar42) {
                                        iVar28 = iVar34;
                                      }
                                    }
                                  }
                                  *(int *)(puVar9 + 0x14) = iVar28;
                                  if (*(longlong *)(local_150 + 0xa8) == 0) {
                                    *puVar13 = 0;
                                    iVar28 = 0;
                                  }
                                  else {
                                    uVar22 = *(uint *)(*(longlong *)(local_150 + 0xa8) + 0xc);
                                    *puVar13 = uVar22;
                                    if ((int)uVar22 < DAT_14c9647dc) {
                                      lVar31 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                                               *(longlong *)
                                                (DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                                    }
                                    else {
                                      lVar31 = 0;
                                    }
                                    iVar28 = *(int *)(lVar31 + 0x10);
                                    if (*(int *)(lVar31 + 0x10) == 0) {
                                      LOCK();
                                      iVar28 = DAT_14c964868 + 1;
                                      UNLOCK();
                                      iVar34 = DAT_14c964868 + 1;
                                      bVar42 = DAT_14c964868 < 1000;
                                      DAT_14c964868 = iVar28;
                                      if (bVar42) {
                                        FUN_140033559(
                                                  ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar34);
                                      }
                                      LOCK();
                                      iVar28 = *(int *)(lVar31 + 0x10);
                                      bVar42 = iVar28 == 0;
                                      if (bVar42) {
                                        *(int *)(lVar31 + 0x10) = iVar34;
                                        iVar28 = 0;
                                      }
                                      UNLOCK();
                                      if (bVar42) {
                                        iVar28 = iVar34;
                                      }
                                    }
                                  }
                                  *(int *)(puVar9 + 0xc) = iVar28;
                                }
                                cVar8 = FUN_140143fca(puVar9 + 0x48);
                                puVar14 = local_f0;
                                uVar33 = local_130;
                                param_2 = local_138;
                                pdVar23 = local_108;
                                if (cVar8 != '\0') {
                                  uVar22 = *(uint *)((longlong)local_178 + 0xc);
                                  *(uint *)(puVar9 + 0x48) = uVar22;
                                  if ((int)uVar22 < DAT_14c9647dc) {
                                    lVar31 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                                  }
                                  else {
                                    lVar31 = 0;
                                  }
                                  iVar28 = *(int *)(lVar31 + 0x10);
                                  if (*(int *)(lVar31 + 0x10) == 0) {
                                    LOCK();
                                    iVar28 = DAT_14c964868 + 1;
                                    UNLOCK();
                                    iVar34 = DAT_14c964868 + 1;
                                    bVar42 = DAT_14c964868 < 1000;
                                    DAT_14c964868 = iVar28;
                                    if (bVar42) {
                                      FUN_140033559(
                                                  ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar34);
                                    }
                                    LOCK();
                                    iVar28 = *(int *)(lVar31 + 0x10);
                                    bVar42 = iVar28 == 0;
                                    if (bVar42) {
                                      *(int *)(lVar31 + 0x10) = iVar34;
                                      iVar28 = 0;
                                    }
                                    UNLOCK();
                                    if (bVar42) {
                                      iVar28 = iVar34;
                                    }
                                  }
                                  *(int *)(puVar9 + 0x4c) = iVar28;
                                  if (*(longlong *)((longlong)local_178 + 0xa8) == 0) {
                                    *puVar25 = 0;
                                    iVar28 = 0;
                                  }
                                  else {
                                    uVar22 = *(uint *)(*(longlong *)((longlong)local_178 + 0xa8) +
                                                      0xc);
                                    *puVar25 = uVar22;
                                    if ((int)uVar22 < DAT_14c9647dc) {
                                      lVar31 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                                               *(longlong *)
                                                (DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                                    }
                                    else {
                                      lVar31 = 0;
                                    }
                                    iVar28 = *(int *)(lVar31 + 0x10);
                                    if (*(int *)(lVar31 + 0x10) == 0) {
                                      LOCK();
                                      iVar28 = DAT_14c964868 + 1;
                                      UNLOCK();
                                      iVar34 = DAT_14c964868 + 1;
                                      bVar42 = DAT_14c964868 < 1000;
                                      DAT_14c964868 = iVar28;
                                      if (bVar42) {
                                        FUN_140033559(
                                                  ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar34);
                                      }
                                      LOCK();
                                      iVar28 = *(int *)(lVar31 + 0x10);
                                      bVar42 = iVar28 == 0;
                                      if (bVar42) {
                                        *(int *)(lVar31 + 0x10) = iVar34;
                                        iVar28 = 0;
                                      }
                                      UNLOCK();
                                      if (bVar42) {
                                        iVar28 = iVar34;
                                      }
                                    }
                                  }
                                  *(int *)(puVar9 + 0x44) = iVar28;
                                  puVar14 = local_f0;
                                  uVar33 = local_130;
                                  param_2 = local_138;
                                  pdVar23 = local_108;
                                }
                              }
                            }
                          }
                          pdVar41 = (double *)((longlong)pdVar41 + 4);
                        } while (pdVar41 != pdVar23);
                      }
                      break;
                    }
                    iVar28 = *(int *)(lVar31 + 0x18);
                  } while (iVar28 != -1);
                }
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != local_100);
          }
          uVar19 = (uint)local_f8 & ~(uint)local_140;
          puVar13 = *(uint **)(param_1 + 0xe0);
          if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
            puVar13 = local_d0;
          }
          uVar22 = *(uint *)(param_1 + 0xe8);
          iVar34 = (int)local_120;
          lVar31 = (longlong)iVar34;
          uVar17 = puVar13[lVar31] & uVar19;
          pdVar23 = local_120;
          iVar28 = (int)local_118;
          if (uVar17 == 0) {
            iVar30 = uVar22 + 0x1e;
            if (-1 < (int)(uVar22 - 1)) {
              iVar30 = uVar22 - 1;
            }
            iVar30 = iVar30 >> 5;
            iVar28 = (int)local_118 + 0x20;
            iVar15 = iVar30;
            if (iVar30 < iVar34) {
              iVar15 = iVar34;
            }
            if (iVar34 < iVar30) {
              lVar39 = 0;
              do {
                uVar17 = puVar13[lVar31 + lVar39 + 1];
                if (uVar17 != 0) {
                  uVar19 = 0xffffffff;
                  pdVar23 = (double *)(ulonglong)(iVar34 + (int)lVar39 + 1);
                  goto LAB_140cc40dd;
                }
                iVar28 = iVar28 + 0x20;
                lVar39 = lVar39 + 1;
              } while (iVar15 - lVar31 != lVar39);
              uVar19 = 0xffffffff;
              iVar34 = iVar15;
            }
            pdVar23 = (double *)(ulonglong)(iVar34 + 1);
            param_2 = local_138;
            param_1 = local_160;
            uVar33 = local_140;
            uVar17 = uVar22;
          }
          else {
LAB_140cc40dd:
            uVar33 = (ulonglong)(-uVar17 & uVar17);
            uVar24 = uVar33 * 2 + 1;
            lVar31 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            uVar17 = (iVar28 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
            if ((int)uVar22 <= (int)uVar17) {
              uVar17 = uVar22;
            }
          }
        } while (uVar17 != (uint)local_e0);
      }
    }
    else {
      pdVar23 = param_2 + 6;
      uVar22 = *(uint *)(param_2 + 9);
      uVar33 = (ulonglong)uVar22;
      if (uVar22 == 0) {
        uVar24 = 1;
        uVar35 = 0;
        iVar28 = 0;
        uVar17 = 0;
      }
      else {
        pdVar41 = (double *)param_2[8];
        if ((double *)param_2[8] == (double *)0x0) {
          pdVar41 = pdVar23;
        }
        uVar17 = *(uint *)pdVar41;
        if (uVar17 == 0) {
          iVar28 = uVar22 + 0x1e;
          if (-1 < (int)(uVar22 - 1)) {
            iVar28 = uVar22 - 1;
          }
          uVar35 = 0;
          uVar24 = (ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            uVar24 = uVar35;
          }
          iVar28 = 0;
          do {
            if (uVar24 == uVar35) goto LAB_140cc415f;
            iVar28 = iVar28 + 0x20;
            uVar17 = *(uint *)((longlong)pdVar41 + uVar35 * 4 + 4);
            uVar35 = uVar35 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar35 = 0;
          iVar28 = 0;
        }
        uVar24 = (ulonglong)(-uVar17 & uVar17);
        uVar12 = uVar24 * 2 + 1;
        lVar31 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar31 == 0; lVar31 = lVar31 + -1) {
          }
        }
        uVar17 = (iVar28 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
        if ((int)uVar22 <= (int)uVar17) {
          uVar17 = uVar22;
        }
      }
      if (uVar17 != uVar22) {
        local_128 = (PSRWLOCK)(param_1 + 0x280);
        local_100 = (ulonglong *)(param_1 + 0x2e0);
        local_f8 = param_1 + 0xf8;
        uVar22 = 0xffffffff;
        local_140 = uVar33;
        local_120 = pdVar23;
        do {
          local_f0 = (ulonglong *)CONCAT44(local_f0._4_4_,uVar22);
          dVar29 = param_2[4];
          local_178 = *(double *)((longlong)dVar29 + (longlong)(int)uVar17 * 0x20);
          pRVar18 = (PSRWLOCK)0x0;
          if (DAT_14c992a90 != '\0') {
            pRVar18 = local_128;
          }
          local_130 = uVar24;
          local_e8 = uVar35;
          if (pRVar18 != (PSRWLOCK)0x0) {
            AcquireSRWLockShared(pRVar18);
          }
          if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
            uVar22 = ((uint)((ulonglong)local_178 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_178 >> 4)) * -0x7a143595;
            uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
            puVar14 = *(ulonglong **)(param_1 + 0x2e8);
            if (*(ulonglong **)(param_1 + 0x2e8) == (ulonglong *)0x0) {
              puVar14 = local_100;
            }
            iVar34 = *(int *)((longlong)puVar14 +
                             (ulonglong)(*(int *)(param_1 + 0x2f0) - 1U & (uVar22 >> 0x10 ^ uVar22))
                             * 4);
            if (iVar34 != -1) {
              do {
                pdVar41 = (double *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar34 * 0x18);
                if (*pdVar41 == local_178) {
                  if (pdVar41 != (double *)0x0) {
                    local_148 = (double *)0x0;
                    if (pdVar41 + 1 != (double *)0x0) {
                      local_148 = (double *)pdVar41[1];
                    }
                    goto LAB_140cc4b04;
                  }
                  break;
                }
                iVar34 = *(int *)(pdVar41 + 2);
              } while (iVar34 != -1);
            }
          }
          local_148 = (double *)0x0;
LAB_140cc4b04:
          if (pRVar18 != (PSRWLOCK)0x0) {
            ReleaseSRWLockShared(pRVar18);
          }
          if ((local_148 != (double *)0x0) && (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)))
          {
            uVar22 = ((uint)((ulonglong)local_148 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_148 >> 4)) * -0x7a143595;
            uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
            lVar31 = *(longlong *)(param_1 + 0x100);
            if (*(longlong *)(param_1 + 0x100) == 0) {
              lVar31 = local_f8;
            }
            iVar34 = *(int *)(lVar31 + (ulonglong)
                                       (*(int *)(param_1 + 0x108) - 1U & (uVar22 >> 0x10 ^ uVar22))
                                       * 4);
            if (iVar34 != -1) {
              lVar31 = (longlong)dVar29 + (longlong)(int)uVar17 * 0x20;
              do {
                if (*(double **)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar34 * 0x10) ==
                    local_148) {
                  lVar39 = (longlong)*(int *)(lVar31 + 0x10);
                  if (lVar39 != 0) {
                    puVar25 = *(uint **)(lVar31 + 8);
                    puVar13 = puVar25 + lVar39;
                    local_150 = CONCAT44(local_150._4_4_,iVar28);
                    local_118 = puVar13;
                    do {
                      uVar22 = *puVar25;
                      local_158 = (double *)(ulonglong)uVar22;
                      puVar20 = (undefined8 *)
                                ((ulonglong)(uVar22 & 0x7fffffff) * 0x120 + (longlong)param_2[1]);
                      local_168 = puVar20[(ulonglong)(~uVar22 >> 0x1f) + 0x20];
                      if (local_168 != 0) {
                        pRVar18 = (PSRWLOCK)0x0;
                        if (DAT_14c992a90 != '\0') {
                          pRVar18 = local_128;
                        }
                        if (pRVar18 != (PSRWLOCK)0x0) {
                          AcquireSRWLockShared(pRVar18);
                        }
                        if (*(int *)(local_160 + 0x2b0) != *(int *)(local_160 + 0x2dc)) {
                          uVar22 = ((uint)(local_168 >> 0x14) & 0xffff ^ (uint)(local_168 >> 4)) *
                                   -0x7a143595;
                          uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
                          puVar14 = *(ulonglong **)(local_160 + 0x2e8);
                          if (*(ulonglong **)(local_160 + 0x2e8) == (ulonglong *)0x0) {
                            puVar14 = local_100;
                          }
                          iVar34 = *(int *)((longlong)puVar14 +
                                           (ulonglong)
                                           (*(int *)(local_160 + 0x2f0) - 1U &
                                           (uVar22 >> 0x10 ^ uVar22)) * 4);
                          if (iVar34 != -1) {
                            do {
                              puVar14 = (ulonglong *)
                                        (*(longlong *)(local_160 + 0x2a8) + (longlong)iVar34 * 0x18)
                              ;
                              if (*puVar14 == local_168) {
                                if (puVar14 != (ulonglong *)0x0) {
                                  local_170 = 0;
                                  if (puVar14 + 1 != (ulonglong *)0x0) {
                                    local_170 = puVar14[1];
                                  }
                                  goto LAB_140cc4cf6;
                                }
                                break;
                              }
                              iVar34 = (int)puVar14[2];
                            } while (iVar34 != -1);
                          }
                        }
                        local_170 = 0;
LAB_140cc4cf6:
                        if (pRVar18 != (PSRWLOCK)0x0) {
                          ReleaseSRWLockShared(pRVar18);
                        }
                        if (local_170 != 0) {
                          local_c8 = (code *)((ulonglong)local_c8 & 0xffffffffffffff00);
                          local_1c8 = &local_c8;
                          puVar9 = (undefined1 *)
                                   FUN_14161197e(local_160,local_178,local_168,puVar20[0x23]);
                          dVar29 = (double)puVar20[3];
                          dVar4 = (double)puVar20[4];
                          dVar5 = (double)puVar20[5];
                          dVar7 = dVar5 * (double)puVar20[8] +
                                  dVar29 * (double)puVar20[6] + dVar4 * (double)puVar20[7];
                          dVar43 = (double)puVar20[6] * dVar7;
                          dVar44 = (double)puVar20[7] * dVar7;
                          dVar7 = dVar7 * (double)puVar20[8];
                          *(double *)(puVar9 + 0x88) = dVar43 + *(double *)(puVar9 + 0x88);
                          *(double *)(puVar9 + 0x90) = dVar44 + *(double *)(puVar9 + 0x90);
                          *(double *)(puVar9 + 0x98) = dVar7 + *(double *)(puVar9 + 0x98);
                          *(double *)(puVar9 + 0xa0) =
                               (dVar29 - dVar43) + *(double *)(puVar9 + 0xa0);
                          *(double *)(puVar9 + 0xa8) = (dVar4 - dVar44) + *(double *)(puVar9 + 0xa8)
                          ;
                          lVar31 = 0x90;
                          local_108 = (double *)(puVar20 + 0x12);
                          if (-1 < (int)local_158) {
                            lVar31 = 0x78;
                            local_108 = (double *)(puVar20 + 0xf);
                          }
                          *(double *)(puVar9 + 0xb0) = (dVar5 - dVar7) + *(double *)(puVar9 + 0xb0);
                          local_110 = (double *)(puVar20 + 0xf);
                          if (-1 < (int)local_158) {
                            local_110 = (double *)(puVar20 + 0x12);
                          }
                          iVar28 = *(int *)(puVar9 + 0x80);
                          lVar39 = (longlong)iVar28;
                          *(uint *)(puVar9 + 0x80) = iVar28 + 1U;
                          if (*(uint *)(puVar9 + 0x84) < iVar28 + 1U) {
                            FUN_141795f68(puVar9 + 0x78,iVar28);
                          }
                          lVar38 = *(longlong *)(puVar9 + 0x78);
                          puVar3 = (undefined8 *)(lVar38 + 0x30 + lVar39 * 0x48);
                          *puVar3 = 0;
                          puVar3[1] = 0;
                          puVar3 = (undefined8 *)(lVar38 + 0x20 + lVar39 * 0x48);
                          *puVar3 = 0;
                          puVar3[1] = 0;
                          puVar3 = (undefined8 *)(lVar38 + 0x10 + lVar39 * 0x48);
                          *puVar3 = 0;
                          puVar3[1] = 0;
                          puVar3 = (undefined8 *)(lVar38 + lVar39 * 0x48);
                          *puVar3 = 0;
                          puVar3[1] = 0;
                          *(undefined8 *)(lVar38 + 0x40 + lVar39 * 0x48) = 0;
                          *(undefined8 *)(lVar38 + 0x28 + lVar39 * 0x48) = puVar20[8];
                          uVar11 = puVar20[7];
                          puVar3 = (undefined8 *)(lVar38 + 0x18 + lVar39 * 0x48);
                          *puVar3 = puVar20[6];
                          puVar3[1] = uVar11;
                          uVar11 = puVar20[1];
                          puVar3 = (undefined8 *)(lVar38 + lVar39 * 0x48);
                          *puVar3 = *puVar20;
                          puVar3[1] = uVar11;
                          *(undefined8 *)(lVar38 + 0x10 + lVar39 * 0x48) = puVar20[2];
                          *(float *)(lVar38 + 0x30 + lVar39 * 0x48) = (float)(double)puVar20[0x1d];
                          *(undefined1 *)(lVar38 + 0x34 + lVar39 * 0x48) =
                               *(undefined1 *)(puVar20 + 0x1f);
                          if ((((dVar21 < ABS(*(double *)((longlong)puVar20 + lVar31))) ||
                               (dVar21 < ABS(local_108[1]))) || (dVar21 < ABS(local_108[2]))) ||
                             ((dVar21 < ABS(*local_110) || (dVar21 < ABS(local_110[1]))))) {
                            bVar42 = false;
                          }
                          else {
                            bVar42 = ABS(local_110[2]) <= dVar21;
                          }
                          puVar9[0xb8] = bVar42;
                          lVar31 = FUN_14484244a(puVar20 + 0x1e);
                          lVar10 = FUN_14484244a((longlong)puVar20 + 0xf4);
                          if (((lVar31 == 0) ||
                              (piVar6 = *(int **)(lVar31 + 0x58), piVar6 == (int *)0x0)) ||
                             (*piVar6 != 2)) {
                            lVar31 = 0;
                          }
                          else {
                            lVar31 = *(longlong *)(piVar6 + 2);
                            if ((lVar31 != 0) && (DAT_14c950c29 != '\0')) {
                              FUN_1456cec3c(lVar31);
                            }
                          }
                          lVar38 = lVar38 + lVar39 * 0x48;
                          *(longlong *)(lVar38 + 0x38) = lVar31;
                          iVar28 = (int)local_150;
                          if (lVar10 == 0) {
                            lVar31 = 0;
                          }
                          else {
                            piVar6 = *(int **)(lVar10 + 0x58);
                            if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) {
                              lVar31 = 0;
                            }
                            else {
                              lVar31 = *(longlong *)(piVar6 + 2);
                              if ((lVar31 != 0) && (DAT_14c950c29 != '\0')) {
                                FUN_1456cec3c(lVar31);
                              }
                            }
                          }
                          lVar39 = local_160;
                          *(longlong *)(lVar38 + 0x40) = lVar31;
                          if ((int)local_158 < 0) {
                            uVar11 = *(undefined8 *)(lVar38 + 0x38);
                            *(longlong *)(lVar38 + 0x38) = lVar31;
                            *(undefined8 *)(lVar38 + 0x40) = uVar11;
                            *(ulonglong *)(lVar38 + 0x18) =
                                 *(ulonglong *)(lVar38 + 0x18) ^ 0x8000000000000000;
                            *(ulonglong *)(lVar38 + 0x20) =
                                 *(ulonglong *)(lVar38 + 0x20) ^ 0x8000000000000000;
                            *(ulonglong *)(lVar38 + 0x28) =
                                 *(ulonglong *)(lVar38 + 0x28) ^ 0x8000000000000000;
                          }
                          puVar13 = local_118;
                          param_2 = local_138;
                          pdVar23 = local_120;
                          uVar33 = local_140;
                          if ((char)local_c8 == '\x01') {
                            *puVar9 = 1;
                            *(undefined8 *)(puVar9 + 0xc0) = puVar20[0x23];
                            uVar16 = *(undefined4 *)
                                      ((longlong)puVar20 +
                                      (ulonglong)(-1 < (int)local_158) * 4 + 0x110);
                            puVar13 = (uint *)(puVar9 + 8);
                            uVar11 = FUN_1417e7756(local_160,local_178,
                                                   *(undefined4 *)
                                                    ((longlong)puVar20 +
                                                    ((ulonglong)local_158 >> 0x1f & 1) * 4 + 0x110))
                            ;
                            FUN_1436452d4(puVar13,uVar11,local_108);
                            puVar2 = (uint *)(puVar9 + 0x40);
                            uVar11 = FUN_1417e7756(lVar39,local_168,uVar16);
                            FUN_1436452d4(puVar2,uVar11,local_110);
                            cVar8 = FUN_140143fca(puVar9 + 0x10);
                            if (cVar8 != '\0') {
                              uVar22 = *(uint *)((longlong)local_148 + 0xc);
                              *(uint *)(puVar9 + 0x10) = uVar22;
                              if ((int)uVar22 < DAT_14c9647dc) {
                                lVar31 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                              }
                              else {
                                lVar31 = 0;
                              }
                              iVar34 = *(int *)(lVar31 + 0x10);
                              if (*(int *)(lVar31 + 0x10) == 0) {
                                LOCK();
                                iVar34 = DAT_14c964868 + 1;
                                UNLOCK();
                                iVar30 = DAT_14c964868 + 1;
                                bVar42 = DAT_14c964868 < 1000;
                                DAT_14c964868 = iVar34;
                                if (bVar42) {
                                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                ,0x23d,
                                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                ,iVar30);
                                }
                                LOCK();
                                iVar34 = *(int *)(lVar31 + 0x10);
                                bVar42 = iVar34 == 0;
                                if (bVar42) {
                                  *(int *)(lVar31 + 0x10) = iVar30;
                                  iVar34 = 0;
                                }
                                UNLOCK();
                                if (bVar42) {
                                  iVar34 = iVar30;
                                }
                              }
                              *(int *)(puVar9 + 0x14) = iVar34;
                              if (local_148[0x15] == 0.0) {
                                *puVar13 = 0;
                                iVar34 = 0;
                              }
                              else {
                                uVar22 = *(uint *)((longlong)local_148[0x15] + 0xc);
                                *puVar13 = uVar22;
                                if ((int)uVar22 < DAT_14c9647dc) {
                                  lVar31 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                                }
                                else {
                                  lVar31 = 0;
                                }
                                iVar34 = *(int *)(lVar31 + 0x10);
                                if (*(int *)(lVar31 + 0x10) == 0) {
                                  LOCK();
                                  iVar34 = DAT_14c964868 + 1;
                                  UNLOCK();
                                  iVar30 = DAT_14c964868 + 1;
                                  bVar42 = DAT_14c964868 < 1000;
                                  DAT_14c964868 = iVar34;
                                  if (bVar42) {
                                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar30);
                                  }
                                  LOCK();
                                  iVar34 = *(int *)(lVar31 + 0x10);
                                  bVar42 = iVar34 == 0;
                                  if (bVar42) {
                                    *(int *)(lVar31 + 0x10) = iVar30;
                                    iVar34 = 0;
                                  }
                                  UNLOCK();
                                  if (bVar42) {
                                    iVar34 = iVar30;
                                  }
                                }
                              }
                              *(int *)(puVar9 + 0xc) = iVar34;
                            }
                            cVar8 = FUN_140143fca(puVar9 + 0x48);
                            puVar13 = local_118;
                            param_2 = local_138;
                            pdVar23 = local_120;
                            uVar33 = local_140;
                            if (cVar8 != '\0') {
                              uVar22 = *(uint *)(local_170 + 0xc);
                              *(uint *)(puVar9 + 0x48) = uVar22;
                              if ((int)uVar22 < DAT_14c9647dc) {
                                lVar31 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                              }
                              else {
                                lVar31 = 0;
                              }
                              iVar34 = *(int *)(lVar31 + 0x10);
                              if (*(int *)(lVar31 + 0x10) == 0) {
                                LOCK();
                                iVar34 = DAT_14c964868 + 1;
                                UNLOCK();
                                iVar30 = DAT_14c964868 + 1;
                                bVar42 = DAT_14c964868 < 1000;
                                DAT_14c964868 = iVar34;
                                if (bVar42) {
                                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                ,0x23d,
                                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                ,iVar30);
                                }
                                LOCK();
                                iVar34 = *(int *)(lVar31 + 0x10);
                                bVar42 = iVar34 == 0;
                                if (bVar42) {
                                  *(int *)(lVar31 + 0x10) = iVar30;
                                  iVar34 = 0;
                                }
                                UNLOCK();
                                if (bVar42) {
                                  iVar34 = iVar30;
                                }
                              }
                              *(int *)(puVar9 + 0x4c) = iVar34;
                              if (*(longlong *)(local_170 + 0xa8) == 0) {
                                *puVar2 = 0;
                                iVar34 = 0;
                              }
                              else {
                                uVar22 = *(uint *)(*(longlong *)(local_170 + 0xa8) + 0xc);
                                *puVar2 = uVar22;
                                if ((int)uVar22 < DAT_14c9647dc) {
                                  lVar31 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                                }
                                else {
                                  lVar31 = 0;
                                }
                                iVar34 = *(int *)(lVar31 + 0x10);
                                if (*(int *)(lVar31 + 0x10) == 0) {
                                  LOCK();
                                  iVar34 = DAT_14c964868 + 1;
                                  UNLOCK();
                                  iVar30 = DAT_14c964868 + 1;
                                  bVar42 = DAT_14c964868 < 1000;
                                  DAT_14c964868 = iVar34;
                                  if (bVar42) {
                                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar30);
                                  }
                                  LOCK();
                                  iVar34 = *(int *)(lVar31 + 0x10);
                                  bVar42 = iVar34 == 0;
                                  if (bVar42) {
                                    *(int *)(lVar31 + 0x10) = iVar30;
                                    iVar34 = 0;
                                  }
                                  UNLOCK();
                                  if (bVar42) {
                                    iVar34 = iVar30;
                                  }
                                }
                              }
                              *(int *)(puVar9 + 0x44) = iVar34;
                              puVar13 = local_118;
                              param_2 = local_138;
                              pdVar23 = local_120;
                              uVar33 = local_140;
                            }
                          }
                        }
                      }
                      puVar25 = puVar25 + 1;
                      param_1 = local_160;
                    } while (puVar25 != puVar13);
                  }
                  break;
                }
                iVar34 = *(int *)((longlong)iVar34 * 0x10 + *(longlong *)(param_1 + 0xc0) + 8);
              } while (iVar34 != -1);
            }
          }
          uVar22 = (uint)local_f0 & ~(uint)local_130;
          pdVar41 = (double *)param_2[8];
          if ((double *)param_2[8] == (double *)0x0) {
            pdVar41 = pdVar23;
          }
          uVar19 = *(uint *)(param_2 + 9);
          iVar34 = (int)local_e8;
          lVar31 = (longlong)iVar34;
          uVar17 = *(uint *)((longlong)pdVar41 + lVar31 * 4) & uVar22;
          uVar35 = local_e8;
          if (uVar17 == 0) {
            iVar30 = uVar19 + 0x1e;
            if (-1 < (int)(uVar19 - 1)) {
              iVar30 = uVar19 - 1;
            }
            iVar30 = iVar30 >> 5;
            iVar28 = iVar28 + 0x20;
            iVar15 = iVar30;
            if (iVar30 < iVar34) {
              iVar15 = iVar34;
            }
            if (iVar34 < iVar30) {
              lVar39 = 0;
              do {
                uVar17 = *(uint *)((longlong)pdVar41 + lVar39 * 4 + lVar31 * 4 + 4);
                if (uVar17 != 0) {
                  uVar35 = (ulonglong)(iVar34 + (int)lVar39 + 1);
                  uVar22 = 0xffffffff;
                  goto LAB_140cc5454;
                }
                iVar28 = iVar28 + 0x20;
                lVar39 = lVar39 + 1;
              } while (iVar15 - lVar31 != lVar39);
              uVar22 = 0xffffffff;
              lVar31 = (longlong)iVar15;
            }
            uVar35 = lVar31 + 1U & 0xffffffff;
            uVar24 = local_130;
            param_2 = local_138;
            param_1 = local_160;
            pdVar23 = local_120;
            uVar33 = local_140;
            uVar17 = uVar19;
          }
          else {
LAB_140cc5454:
            uVar24 = (ulonglong)(-uVar17 & uVar17);
            uVar12 = uVar24 * 2 + 1;
            lVar31 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            uVar17 = (iVar28 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
            if ((int)uVar19 <= (int)uVar17) {
              uVar17 = uVar19;
            }
          }
        } while (uVar17 != (uint)uVar33);
      }
    }
  }
LAB_140cc415f:
  lVar31 = *(longlong *)(param_1 + 0x48);
  if (lVar31 != 0) {
    if (DAT_14cb10130 == 0) {
      local_190 = &local_c8;
      local_c8 = FUN_140754f84;
      local_180 = FUN_14081d0ea;
      local_188 = FUN_14081d0ea;
      local_198 = &LAB_147da9a76;
      local_1a0 = FUN_1409f3105;
      local_1a8 = L"Engine";
      local_1b0 = 0;
      local_1b8 = 0x10000000;
      local_1c0 = 8;
      local_1c8 = (code **)CONCAT44(local_1c8._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if (((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar31 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) &&
       (plVar32 = *(longlong **)(lVar31 + 0x60), plVar32 != (longlong *)0x0)) {
      (**(code **)(*plVar32 + 0x2a0))(plVar32,param_1 + 0x200);
    }
  }
  lVar31 = *(longlong *)(param_1 + 0x200);
  if ((longlong)*(int *)(param_1 + 0x208) == 0) {
    uVar16 = 0;
  }
  else {
    lVar31 = lVar31 + 0x40;
    lVar39 = (longlong)*(int *)(param_1 + 0x208) * 200;
    do {
      if ((*(char *)(lVar31 + -0x40) == '\x01') && (*(int *)(lVar31 + -0x34) != 0)) {
        uVar22 = *(uint *)(lVar31 + -0x38);
        if (((-1 < (int)uVar22) &&
            (((int)uVar22 < DAT_14c9647dc &&
             (plVar32 = (longlong *)
                        ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
             plVar32 != (longlong *)0x0)))) &&
           (((int)plVar32[2] == *(int *)(lVar31 + -0x34) &&
            (((*(uint *)(plVar32 + 1) & 0x10200000) == 0 && (*plVar32 != 0)))))) {
          FUN_1400dc0ac(*plVar32,(uint *)(lVar31 + -0x38),lVar31,lVar31 + 0x38);
        }
      }
      lVar31 = lVar31 + 200;
      lVar39 = lVar39 + -200;
    } while (lVar39 != 0);
    uVar16 = *(undefined4 *)(param_1 + 0x208);
    lVar31 = *(longlong *)(param_1 + 0x200);
  }
  iVar28 = *(int *)(param_1 + 0x20c);
  FUN_1447f6939(lVar31,uVar16);
  *(undefined4 *)(param_1 + 0x208) = 0;
  if ((iVar28 < 0) && (*(int *)(param_1 + 0x20c) != 0)) {
    FUN_14748bea4(param_1 + 0x200,0);
  }
  local_c8 = (code *)0x0;
  uStack_c0 = 0;
  iVar28 = *(int *)(param_2 + 2);
  if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar28);
  }
  if (iVar28 != 0) {
    FUN_1417e7ec2(&local_c8);
    if ((longlong)*(int *)(param_2 + 2) != 0) {
      dVar29 = param_2[1];
      dVar21 = (double)((longlong)*(int *)(param_2 + 2) * 0x120 + (longlong)dVar29);
      pRVar18 = (PSRWLOCK)(param_1 + 0x280);
      lVar31 = param_1 + 0x2e0;
      local_168 = param_1 + 0x148;
      local_178 = dVar21;
LAB_140cc42ec:
      uVar33 = *(ulonglong *)((longlong)dVar29 + 0x100);
      pRVar36 = (PSRWLOCK)0x0;
      if (DAT_14c992a90 != '\0') {
        pRVar36 = pRVar18;
      }
      if (pRVar36 != (PSRWLOCK)0x0) {
        AcquireSRWLockShared(pRVar36);
      }
      if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
        uVar22 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        lVar39 = *(longlong *)(param_1 + 0x2e8);
        if (*(longlong *)(param_1 + 0x2e8) == 0) {
          lVar39 = lVar31;
        }
        iVar28 = *(int *)(lVar39 + (ulonglong)
                                   (*(int *)(param_1 + 0x2f0) - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4)
        ;
        if (iVar28 != -1) {
          do {
            puVar14 = (ulonglong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar28 * 0x18);
            if (*puVar14 == uVar33) {
              if (puVar14 != (ulonglong *)0x0) {
                uVar33 = 0;
                if (puVar14 + 1 != (ulonglong *)0x0) {
                  uVar33 = puVar14[1];
                }
                goto LAB_140cc43a0;
              }
              break;
            }
            iVar28 = (int)puVar14[2];
          } while (iVar28 != -1);
        }
      }
      uVar33 = 0;
LAB_140cc43a0:
      if (pRVar36 != (PSRWLOCK)0x0) {
        ReleaseSRWLockShared(pRVar36);
      }
      uVar24 = *(ulonglong *)((longlong)dVar29 + 0x108);
      pRVar36 = (PSRWLOCK)0x0;
      if (DAT_14c992a90 != '\0') {
        pRVar36 = pRVar18;
      }
      if (pRVar36 != (PSRWLOCK)0x0) {
        AcquireSRWLockShared(pRVar36);
      }
      if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
        uVar22 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        lVar39 = *(longlong *)(param_1 + 0x2e8);
        if (*(longlong *)(param_1 + 0x2e8) == 0) {
          lVar39 = lVar31;
        }
        iVar28 = *(int *)(lVar39 + (ulonglong)
                                   (*(int *)(param_1 + 0x2f0) - 1U & (uVar22 >> 0x10 ^ uVar22)) * 4)
        ;
        if (iVar28 != -1) {
          do {
            puVar14 = (ulonglong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar28 * 0x18);
            if (*puVar14 == uVar24) {
              if (puVar14 != (ulonglong *)0x0) {
                uVar24 = 0;
                if (puVar14 + 1 != (ulonglong *)0x0) {
                  uVar24 = puVar14[1];
                }
                goto LAB_140cc4462;
              }
              break;
            }
            iVar28 = (int)puVar14[2];
          } while (iVar28 != -1);
        }
      }
      uVar24 = 0;
LAB_140cc4462:
      if (pRVar36 != (PSRWLOCK)0x0) {
        ReleaseSRWLockShared(pRVar36);
      }
      uVar35 = uStack_c0;
      if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
        uVar22 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        uVar12 = *(ulonglong *)(param_1 + 0x150);
        if (*(ulonglong *)(param_1 + 0x150) == 0) {
          uVar12 = local_168;
        }
        uVar17 = *(int *)(param_1 + 0x158) - 1;
        iVar28 = *(int *)(uVar12 + (ulonglong)((uVar22 >> 0x10 ^ uVar22) & uVar17) * 4);
        if (iVar28 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar28 * 0x10) == uVar33)
            goto LAB_140cc4567;
            iVar28 = *(int *)((longlong)iVar28 * 0x10 + *(longlong *)(param_1 + 0x110) + 8);
          } while (iVar28 != -1);
        }
        uVar22 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        iVar28 = *(int *)(uVar12 + (ulonglong)(uVar17 & (uVar22 >> 0x10 ^ uVar22)) * 4);
        if (iVar28 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar28 * 0x10) == uVar24)
            goto LAB_140cc4567;
            iVar28 = *(int *)((longlong)iVar28 * 0x10 + *(longlong *)(param_1 + 0x110) + 8);
          } while (iVar28 != -1);
        }
      }
      goto LAB_140cc4552;
    }
  }
LAB_140cc4933:
  if ((0 < (int)uStack_c0) && (0 < *(int *)(*(longlong *)(param_1 + 0x350) + 0x30))) {
    FUN_147860d1a(*(longlong *)(param_1 + 0x350) + 0x28,&local_c8);
  }
  if (local_c8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140cc4567:
  lVar39 = (longlong)(int)uStack_c0;
  uVar22 = (int)uStack_c0 + 1;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar22);
  if (uStack_c0._4_4_ < uVar22) {
    FUN_147c80dda(&local_c8,uVar35 & 0xffffffff);
  }
  pcVar37 = local_c8 + lVar39 * 0x130;
  FUN_147c68440(pcVar37,dVar29);
  if (uVar33 == 0) {
    *(undefined4 *)(pcVar37 + 0xa8) = 0;
    iVar28 = 0;
  }
  else {
    uVar22 = *(uint *)(uVar33 + 0xc);
    *(uint *)(pcVar37 + 0xa8) = uVar22;
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar39 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
    }
    else {
      lVar39 = 0;
    }
    iVar28 = *(int *)(lVar39 + 0x10);
    if (*(int *)(lVar39 + 0x10) == 0) {
      LOCK();
      iVar28 = DAT_14c964868 + 1;
      UNLOCK();
      iVar34 = DAT_14c964868 + 1;
      bVar42 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar28;
      if (bVar42) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar34);
      }
      LOCK();
      iVar28 = *(int *)(lVar39 + 0x10);
      bVar42 = iVar28 == 0;
      if (bVar42) {
        *(int *)(lVar39 + 0x10) = iVar34;
        iVar28 = 0;
      }
      UNLOCK();
      if (bVar42) {
        iVar28 = iVar34;
      }
    }
  }
  *(int *)(pcVar37 + 0xac) = iVar28;
  if (uVar24 == 0) {
    *(undefined4 *)(pcVar37 + 0x118) = 0;
    iVar28 = 0;
  }
  else {
    uVar22 = *(uint *)(uVar24 + 0xc);
    *(uint *)(pcVar37 + 0x118) = uVar22;
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar39 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
    }
    else {
      lVar39 = 0;
    }
    iVar28 = *(int *)(lVar39 + 0x10);
    if (*(int *)(lVar39 + 0x10) == 0) {
      LOCK();
      iVar28 = DAT_14c964868 + 1;
      UNLOCK();
      iVar34 = DAT_14c964868 + 1;
      bVar42 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar28;
      if (bVar42) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar34);
      }
      LOCK();
      iVar28 = *(int *)(lVar39 + 0x10);
      bVar42 = iVar28 == 0;
      if (bVar42) {
        *(int *)(lVar39 + 0x10) = iVar34;
        iVar28 = 0;
      }
      UNLOCK();
      if (bVar42) {
        iVar28 = iVar34;
      }
    }
  }
  *(int *)(pcVar37 + 0x11c) = iVar28;
  lVar39 = FUN_14484244a((longlong)dVar29 + 0xf0);
  lVar38 = FUN_14484244a((longlong)dVar29 + 0xf4);
  if (((lVar39 == 0) || (piVar6 = *(int **)(lVar39 + 0x58), piVar6 == (int *)0x0)) || (*piVar6 != 2)
     ) {
    lVar39 = 0;
  }
  else {
    lVar39 = *(longlong *)(piVar6 + 2);
    if ((lVar39 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar39);
    }
  }
  dVar21 = local_178;
  *(longlong *)(pcVar37 + 0xa0) = lVar39;
  if (lVar38 == 0) {
    lVar39 = 0;
  }
  else {
    piVar6 = *(int **)(lVar38 + 0x58);
    if ((piVar6 == (int *)0x0) || (*piVar6 != 2)) {
      lVar39 = 0;
    }
    else {
      lVar39 = *(longlong *)(piVar6 + 2);
      if ((lVar39 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar39);
      }
    }
  }
  param_1 = local_160;
  *(longlong *)(pcVar37 + 0x110) = lVar39;
  if ((uVar33 != 0) && (*(longlong *)((longlong)dVar29 + 0x100) != 0)) {
    puVar13 = (uint *)FUN_1417e7756(local_160,*(longlong *)((longlong)dVar29 + 0x100),
                                    *(undefined4 *)((longlong)dVar29 + 0x110));
    if (puVar13 == (uint *)0x0) {
      if (*(int *)(*(longlong *)((longlong)dVar29 + 0x100) + 0x1c) == 0xc) {
        *(undefined4 *)(pcVar37 + 0xb0) = *(undefined4 *)((longlong)dVar29 + 0x110);
      }
    }
    else {
      *(uint *)(pcVar37 + 0xb0) = puVar13[3];
      if ((((((puVar13[1] == 0) || (uVar22 = *puVar13, (int)uVar22 < 0)) ||
            (DAT_14c9647dc <= (int)uVar22)) ||
           ((plVar32 = (longlong *)
                       ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
            plVar32 == (longlong *)0x0 || (*(uint *)(plVar32 + 2) != puVar13[1])))) ||
          ((*(uint *)(plVar32 + 1) & 0x10200000) != 0)) || (*plVar32 == 0)) {
        *(undefined8 *)(pcVar37 + 0xb4) = 0;
      }
      else {
        *(undefined8 *)(pcVar37 + 0xb4) = *(undefined8 *)(*plVar32 + 0x28);
      }
    }
  }
  if ((uVar24 != 0) && (*(longlong *)((longlong)dVar29 + 0x108) != 0)) {
    puVar13 = (uint *)FUN_1417e7756(param_1,*(longlong *)((longlong)dVar29 + 0x108),
                                    *(undefined4 *)((longlong)dVar29 + 0x114));
    if (puVar13 == (uint *)0x0) {
      if (*(int *)(*(longlong *)((longlong)dVar29 + 0x108) + 0x1c) == 0xc) {
        *(undefined4 *)(pcVar37 + 0x120) = *(undefined4 *)((longlong)dVar29 + 0x114);
      }
    }
    else {
      *(uint *)(pcVar37 + 0x120) = puVar13[3];
      if ((((puVar13[1] == 0) || (uVar22 = *puVar13, (int)uVar22 < 0)) ||
          (DAT_14c9647dc <= (int)uVar22)) ||
         (((plVar32 = (longlong *)
                      ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
           plVar32 == (longlong *)0x0 || (*(uint *)(plVar32 + 2) != puVar13[1])) ||
          (((*(uint *)(plVar32 + 1) & 0x10200000) != 0 || (*plVar32 == 0)))))) {
        *(undefined8 *)(pcVar37 + 0x124) = 0;
      }
      else {
        *(undefined8 *)(pcVar37 + 0x124) = *(undefined8 *)(*plVar32 + 0x28);
      }
    }
  }
LAB_140cc4552:
  dVar29 = (double)((longlong)dVar29 + 0x120);
  if (dVar29 == dVar21) goto LAB_140cc4933;
  goto LAB_140cc42ec;
}



// FUNCTION 140cc5662 FUN_140cc5662 body=9 status=ok
// SIG undefined FUN_140cc5662(void)

void FUN_140cc5662(longlong param_1)

{
  FUN_140cc566c(param_1 + 0x10);
  return;
}



// FUNCTION 140cc566c FUN_140cc566c body=178 status=ok
// SIG undefined FUN_140cc566c(void)

void FUN_140cc566c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4e0840;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_140cc5809(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc57d2(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140cc571a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140cc571e FUN_140cc571e body=55 status=ok
// SIG undefined FUN_140cc571e(void)

void FUN_140cc571e(longlong *param_1)

{
  FUN_140cc5756(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cc5756 FUN_140cc5756 body=123 status=ok
// SIG undefined FUN_140cc5756(void)

void FUN_140cc5756(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 140cc57d2 FUN_140cc57d2 body=55 status=ok
// SIG undefined FUN_140cc57d2(void)

void FUN_140cc57d2(longlong *param_1)

{
  FUN_140cc5858(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cc5809 FUN_140cc5809 body=79 status=ok
// SIG undefined FUN_140cc5809(void)

void FUN_140cc5809(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (plVar1[1] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *plVar1 = 0;
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cc5858 FUN_140cc5858 body=532 status=ok
// SIG undefined FUN_140cc5858(void)

void FUN_140cc5858(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  int local_60;
  uint local_5c;
  uint *local_58;
  uint local_50;
  int local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_5c = 1;
  if (iVar2 == 0) {
    local_48 = 0;
    local_60 = 0;
    local_4c = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_60 = (int)uVar8 + 1;
      local_48 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_4c = iVar2;
        if (uVar8 == uVar9) goto LAB_140cc5896;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_60 = (int)uVar9;
      local_48 = iVar7;
    }
    else {
      local_48 = 0;
      local_60 = 0;
    }
    local_5c = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_5c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_4c = (local_48 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_4c) {
      local_4c = iVar2;
    }
  }
LAB_140cc5896:
  local_50 = 0xffffffff;
  local_68 = param_1;
  local_58 = puVar1;
  if (local_4c < iVar2) {
    do {
      lVar10 = *local_68;
      lVar4 = (longlong)local_4c;
      if (*(longlong *)(lVar10 + 0x18 + lVar4 * 0x30) != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + lVar4 * 0x30;
      if (*(longlong *)(lVar10 + 0x10) != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)(lVar10 + 0x10) = 0;
      }
      local_50 = local_50 & ~local_5c;
      FUN_1449c0562(&local_60);
    } while (local_4c < (int)local_58[6]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(puVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cc5a6e FUN_140cc5a6e body=118 status=ok
// SIG undefined FUN_140cc5a6e(void)

byte FUN_140cc5a6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [45];
  char local_1b;
  byte local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140cc5ae6(param_3);
  bVar2 = 0;
  if (lVar1 != 0) {
    local_1b = '\0';
    local_19 = 0;
    FUN_140cc5c0c(lVar1,&local_1b);
    if ((local_1b == '\0') && ((local_19 & 1) != 0)) {
      bVar2 = local_1a ^ 1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc5ae6 FUN_140cc5ae6 body=63 status=ok
// SIG undefined FUN_140cc5ae6(void)

longlong FUN_140cc5ae6(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_140cc5b26();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140cc5b26 FUN_140cc5b26 body=228 status=ok
// SIG undefined FUN_140cc5b26(void)

longlong FUN_140cc5b26(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba4a10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148bd00a7;
    local_40 = &LAB_1411089c2;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2630;
    FUN_14081cfa3(L"/Script/OakGame",L"InteractiveDoor",&DAT_14cba4a10,&DAT_148bd00a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4a10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc5c0c FUN_140cc5c0c body=278 status=ok
// SIG undefined FUN_140cc5c0c(void)

void FUN_140cc5c0c(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x25f8) == '\x01') {
    pcVar2 = (char *)(param_1 + 0x25f9);
LAB_140cc5c3d:
    if (*pcVar2 != '\0') goto LAB_140cc5c42;
  }
  else if (*(longlong *)(param_1 + 0x2618) != 0) {
    pcVar2 = (char *)(*(longlong *)(param_1 + 0x2618) + 0x458);
    goto LAB_140cc5c3d;
  }
  cVar1 = FUN_148cc7520(param_1);
  if (cVar1 != '\0') {
    local_48 = DAT_14cbc18c0;
    local_40 = 0xffffffff;
    FUN_140c823b2(param_1 + 0x4d8,local_38);
    cVar1 = '\x02' - (local_38[0] == DAT_14cbc18d8);
    if (local_38[0] == DAT_14cbc18d0) {
      cVar1 = '\0';
    }
    if (cVar1 != '\x02') {
      if (cVar1 != '\0') goto LAB_140cc5c42;
      cVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0);
      uVar3 = 1;
      if (cVar1 != '\0') {
        if ((*(longlong *)(param_1 + 0x2618) == 0) ||
           (*(char *)(*(longlong *)(param_1 + 0x2618) + 0x459) != '\x01')) goto LAB_140cc5c42;
        uVar3 = 0;
      }
      *param_3 = uVar3;
      param_2 = param_3 + 1;
    }
    *param_2 = 1;
  }
LAB_140cc5c42:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc5d3a FUN_140cc5d3a body=212 status=ok
// SIG undefined FUN_140cc5d3a(void)

void FUN_140cc5d3a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x189) != '\x01') {
    FUN_140319860(param_1,1);
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x150);
  if (lVar4 == 0) {
    uVar3 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x150) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x158) == 0) {
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x148) != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x158) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x148));
        *(longlong *)(param_1 + 0x158) = lVar4;
        if (lVar4 != 0) goto LAB_140cc5d6b;
      }
    }
    return;
  }
LAB_140cc5d6b:
  FUN_140d539ac(param_1);
  return;
}



// FUNCTION 140cc5e0e FUN_140cc5e0e body=206 status=ok
// SIG undefined FUN_140cc5e0e(void)

void FUN_140cc5e0e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14b0d3100;
  plVar3 = (longlong *)param_1[0x2e8];
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
  lVar4 = 0;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4 + 0x16f8);
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
    FUN_140cc5edc((longlong)param_1 + lVar4 + 0xba0);
    lVar4 = lVar4 + -0xb70;
  } while (lVar4 != -0x16e0);
  *param_1 = &PTR_FUN_14ac53b20;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140cc5eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140cc5edc FUN_140cc5edc body=61 status=ok
// SIG undefined FUN_140cc5edc(void)

void FUN_140cc5edc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb00);
  if (*(longlong *)(param_1 + 0xb00) == 0) {
    lVar1 = param_1;
  }
  FUN_1401823d6(lVar1,*(undefined4 *)(param_1 + 0xb08));
  if (*(longlong *)(param_1 + 0xb00) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cc5f1a FUN_140cc5f1a body=49 status=ok
// SIG undefined FUN_140cc5f1a(void)

ulonglong FUN_140cc5f1a(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)(param_1 + 0x691);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x691) = 1;
    *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xef;
    FUN_140cc5f4c(param_1 + 0x298);
  }
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) ^ 1) & 0xffffffff;
}



// FUNCTION 140cc5f4c FUN_140cc5f4c body=348 status=ok
// SIG undefined FUN_140cc5f4c(void)

void FUN_140cc5f4c(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong lVar9;
  uint *puVar10;
  
  if (DAT_14caa7238 != DAT_14caa7264) {
    puVar8 = &DAT_14caa7268;
    if (DAT_14caa7270 != (undefined *)0x0) {
      puVar8 = DAT_14caa7270;
    }
    uVar1 = *(uint *)(puVar8 + (ulonglong)(DAT_14caa7278 - 1U & *(uint *)(param_1 + 3)) * 4);
    while (uVar1 != 0xffffffff) {
      puVar10 = (uint *)(DAT_14caa7230 + (longlong)(int)uVar1 * 0x18);
      if (*puVar10 == *(uint *)(param_1 + 3)) goto LAB_140cc5fb5;
      uVar1 = puVar10[4];
    }
  }
  puVar10 = (uint *)0x0;
LAB_140cc5fb5:
  lVar7 = *(longlong *)(puVar10 + 2);
  lVar9 = param_1[4];
  if ((*(int *)(lVar7 + 4) <= (int)lVar9) &&
     ((int)lVar9 < *(int *)(lVar7 + 4) + *(int *)(lVar7 + 0xc))) {
    iVar3 = (int)((ulonglong)lVar9 >> 0x20);
    if ((*(int *)(lVar7 + 8) <= iVar3) && (iVar3 < *(int *)(lVar7 + 8) + *(int *)(lVar7 + 0x10)))
    goto LAB_140cc5ff6;
  }
  FUN_140e872d0(lVar7,param_1 + 4);
  lVar7 = *(longlong *)(puVar10 + 2);
  lVar9 = param_1[4];
LAB_140cc5ff6:
  plVar5 = (longlong *)FUN_140d04fc2(lVar7,lVar9);
  plVar2 = plVar5;
  if (plVar5 == (longlong *)0x0) {
LAB_140cc6089:
    FUN_140d04f80(lVar7,lVar9,param_1);
  }
  else {
    do {
      plVar6 = plVar2;
      iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      iVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      if (iVar3 < iVar4) {
        param_1[2] = plVar6[2];
        plVar6[2] = (longlong)(param_1 + 1);
        param_1[1] = (longlong)plVar6;
        if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
          *(undefined8 *)param_1[2] = param_1;
        }
        if (plVar6 != plVar5) goto LAB_140cc6091;
        lVar7 = *(longlong *)(puVar10 + 2);
        lVar9 = param_1[4];
        goto LAB_140cc6089;
      }
      plVar2 = (longlong *)plVar6[1];
    } while ((longlong *)plVar6[1] != (longlong *)0x0);
    param_1[2] = (longlong)(plVar6 + 1);
    param_1[1] = plVar6[1];
    plVar6[1] = (longlong)param_1;
    if (param_1[1] != 0) {
      *(longlong **)(param_1[1] + 0x10) = param_1 + 1;
    }
  }
LAB_140cc6091:
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  *(int *)(*(longlong *)(puVar10 + 2) + 0x4c) = *(int *)(*(longlong *)(puVar10 + 2) + 0x4c) + 1;
  return;
}



// FUNCTION 140cc60a8 FUN_140cc60a8 body=431 status=ok
// SIG undefined FUN_140cc60a8(void)

undefined8
FUN_140cc60a8(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,char param_8,uint param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  char local_78;
  undefined1 local_68;
  uint local_60;
  undefined4 local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 == 0) ||
     ((local_54 = param_3, param_8 != '\0' && (*(char *)(param_2 + 0x38) == '\0')))) {
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_140cc6258(param_6);
    uVar2 = FUN_140cc6366(param_2,param_4);
    uVar3 = FUN_14005ff6c(param_2,param_4,param_9 & 0xffffff01);
    puVar6 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,local_50,puVar6,1);
    local_88 = param_2 + 0x28;
    local_98 = param_2 + 0x18;
    local_b0 = *(undefined1 *)(param_2 + 0x58);
    local_60 = param_9;
    local_78 = param_8;
    local_90 = param_7;
    local_a8 = param_5;
    local_68 = 0;
    local_80 = 0;
    local_a0 = 0x3f800000;
    local_c8 = uVar1;
    local_c0 = uVar3;
    local_b8 = param_4;
    uVar4 = FUN_14145a380(param_1,param_2 + 0x48,uVar2,local_54);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc6258 FUN_140cc6258 body=40 status=ok
// SIG undefined FUN_140cc6258(void)

void FUN_140cc6258(char param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140cc62c2();
  if (param_1 == '\0') {
    FUN_140cc6280();
    return;
  }
  FUN_14579401c(uVar1);
  return;
}



// FUNCTION 140cc6280 FUN_140cc6280 body=65 status=ok
// SIG undefined FUN_140cc6280(void)

undefined8 FUN_140cc6280(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
    if (cVar1 != '\0') {
      if ((int)param_1[1] == 0) {
        param_1 = (longlong *)0x0;
      }
      else {
        param_1 = (longlong *)*param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x000140cc62b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x58))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140cc62c2 FUN_140cc62c2 body=163 status=ok
// SIG undefined FUN_140cc62c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140cc62c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb74020) {
    FUN_144b3d300(&DAT_14cb74020);
    if (DAT_14cb74020 == -1) {
      _DAT_14cb73fd0 = 0;
      _DAT_14cb73fd8 = 0;
      _DAT_14cb73fe0 = 0;
      _DAT_14cb73fe8 = 0;
      _DAT_14cb73ff0 = 0;
      _DAT_14cb73ff8 = 0;
      _DAT_14cb74000 = 0;
      _DAT_14cb74008 = 0;
      _DAT_14cb74010 = 0;
      _DAT_14cb74018 = 0;
      atexit((_func_5014 *)&LAB_143cd24e4);
      _Init_thread_footer(&DAT_14cb74020);
    }
  }
  return &DAT_14cb73fd0;
}



// FUNCTION 140cc6366 FUN_140cc6366 body=158 status=ok
// SIG undefined FUN_140cc6366(void)

undefined4 FUN_140cc6366(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448729ea(param_1 + 0x60,local_40,param_2);
  uVar2 = FUN_14005fbd2(local_40,1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc6406 FUN_140cc6406 body=507 status=ok
// SIG undefined FUN_140cc6406(void)

void FUN_140cc6406(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  
  if (*(char *)((longlong)param_1 + 0xb92) == '\x01') {
    FUN_1408bd412(param_1,&DAT_14cb94e38);
    goto LAB_140cc64dd;
  }
  cVar2 = (**(code **)(*param_1 + 0x810))();
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x868))(param_1);
    if (((*(char *)((longlong)param_1 + 0xb51) != '\x01') ||
        (*(char *)((longlong)param_1 + 0xcec) != '\0')) ||
       (((char)param_1[0x19a] == '\0' && (cVar2 = FUN_1406f1180(param_1), cVar2 == '\0'))))
    goto LAB_140cc64dd;
    cVar2 = (**(code **)(*param_1 + 0x830))(param_1,(char)param_1[0x17b],0);
    if ((cVar2 == '\0') || (*param_2 == DAT_14cb95100)) goto LAB_140cc64dd;
LAB_140cc6532:
    FUN_140e3bfea(param_1,(char)param_1[0x17b],(char)param_1[0x19a] != '\x01');
  }
  else {
    if ((*(char *)((longlong)param_1 + 0xcec) == '\0') &&
       (((char)param_1[0x19a] != '\0' || (cVar2 = FUN_1406f1180(), cVar2 != '\0')))) {
      cVar2 = (**(code **)(*param_1 + 0x830))(param_1,(char)param_1[0x17b],0);
      if ((cVar2 != '\0') && (*param_2 != DAT_14cb95100)) goto LAB_140cc6532;
    }
    if (*(char *)((longlong)param_1 + 0xcec) == '\x01') {
      lVar5 = *param_2;
    }
    else {
      cVar2 = FUN_140cc6652();
      lVar5 = *param_2;
      if ((cVar2 != '\0') && (lVar5 != DAT_14cb94e48)) {
        FUN_148a20f32(param_1);
        goto LAB_140cc64dd;
      }
    }
    lVar1 = DAT_14cb94e40;
    iVar3 = (int)param_1[0x181];
    if (0 < iVar3) {
      bVar7 = 0;
      do {
        uVar6 = 1 << (bVar7 & 0x1f) & *(uint *)(param_1 + 0x182);
        if (uVar6 != 0) {
LAB_140cc64c9:
          (**(code **)(*param_1 + 0x878))(param_1,bVar7,uVar6 == 0);
          break;
        }
        if (lVar5 != lVar1) {
          cVar2 = FUN_140cc66d2(param_1,bVar7);
          if (cVar2 != '\0') goto LAB_140cc64c9;
          iVar3 = (int)param_1[0x181];
        }
        bVar7 = bVar7 + 1;
      } while ((int)(uint)bVar7 < iVar3);
    }
  }
LAB_140cc64dd:
  plVar4 = (longlong *)FUN_1401654a2(param_1);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140cc64fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x88))(plVar4);
  return;
}



// FUNCTION 140cc6602 FUN_140cc6602 body=79 status=ok
// SIG undefined FUN_140cc6602(void)

ulonglong FUN_140cc6602(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  
  bVar2 = *(byte *)(param_1 + 0xbd8);
  uVar3 = (ulonglong)bVar2;
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar4 = 1;
  if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
    uVar3 = (ulonglong)bVar2 * 0x80 + uVar3 * 8;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10 + uVar3);
    if (plVar1 != (longlong *)0x0) {
      bVar4 = 0;
      uVar5 = 0;
      bVar2 = (**(code **)(*plVar1 + 0x348))(plVar1,0);
      goto LAB_140cc6640;
    }
  }
  bVar2 = (byte)uVar3;
LAB_140cc6640:
  return CONCAT71(uVar5,bVar4 | bVar2) & 0xffffff01;
}



// FUNCTION 140cc6652 FUN_140cc6652 body=128 status=ok
// SIG undefined FUN_140cc6652(void)

ulonglong FUN_140cc6652(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0xbaa) & 2) == 0) {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    uVar5 = (ulonglong)bVar1;
    if ((((*(int *)(param_1 + 0xbf0) <= (int)(uint)bVar1) ||
         (lVar2 = *(longlong *)(param_1 + 0xbe8),
         *(longlong *)(lVar2 + 8 + (ulonglong)bVar1 * 0x80 + uVar5 * 8) == 0)) ||
        (*(longlong *)(lVar2 + 0x20 + (ulonglong)bVar1 * 0x80 + uVar5 * 8) != 0)) ||
       (((plVar3 = *(longlong **)(lVar2 + 0x10 + (ulonglong)bVar1 * 0x80 + uVar5 * 8),
         plVar3 == (longlong *)0x0 || ((*(byte *)((longlong)plVar3 + 0x91) & 4) == 0)) ||
        (cVar4 = (**(code **)(*plVar3 + 0x338))(plVar3,0), cVar4 != '\0')))) {
      uVar6 = 0;
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140cc66d2 FUN_140cc66d2 body=134 status=ok
// SIG undefined FUN_140cc66d2(void)

undefined8 FUN_140cc66d2(longlong param_1,byte param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0xd60) != DAT_14cb95120) &&
     ((int)(uint)param_2 < *(int *)(param_1 + 0xc08))) {
    lVar4 = param_1 + 0xbf8;
    if (*(longlong *)(param_1 + 0xc00) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xc00);
    }
    if (((((*(byte *)(param_1 + 0xbe2) & 1) == 0) &&
         (bVar1 = *(byte *)(lVar4 + (ulonglong)param_2),
         (int)(uint)bVar1 < *(int *)(param_1 + 0xbf0))) &&
        (plVar2 = *(longlong **)
                   (*(longlong *)(param_1 + 0xbe8) + 8 +
                   (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar2 != (longlong *)0x0)) &&
       ((*(longlong *)(param_1 + 0xd60) == DAT_14cb95128 &&
        (cVar3 = (**(code **)(*plVar2 + 0x368))(), cVar3 != '\0')))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140cc6758 FUN_140cc6758 body=417 status=ok
// SIG undefined FUN_140cc6758(void)

void FUN_140cc6758(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401c3c2c();
  if (*(char *)(param_1 + 0x8e0) == '\x01') {
    *(undefined1 *)(param_1 + 0x6f1) = 0;
    fVar10 = DAT_14cb717d0;
LAB_140cc6792:
    *(float *)(param_1 + 0x6f4) = fVar10;
  }
  else if (*(char *)(param_1 + 0x6f1) == '\x01') {
    lVar6 = *(longlong *)(param_1 + 0xb0);
    if (lVar6 == 0) {
      lVar6 = FUN_1448abda6(param_1);
      fVar10 = 0.0;
      if (lVar6 == 0) goto LAB_140cc6792;
    }
    fVar10 = (float)*(double *)(lVar6 + 0x6d0);
    goto LAB_140cc6792;
  }
  if (*(int *)(param_1 + 0x82c) != 0) {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      uVar8 = 0;
    }
    else {
      iVar5 = FUN_14487fd02();
      if (iVar5 == 3) goto LAB_140cc67ea;
      uVar8 = *(undefined8 *)(param_1 + 0xa8);
    }
    uVar3 = *(undefined1 *)(param_1 + 3999);
    *(undefined1 *)(param_1 + 3999) = 0;
    FUN_1407bebdc(param_1 + 0x808,param_1 + 0x690,uVar8);
    *(undefined1 *)(param_1 + 3999) = uVar3;
  }
LAB_140cc67ea:
  FUN_140cc68fa(param_1);
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
  }
  FUN_140937dea(&local_30,lVar6);
  if (local_28 != (longlong *)0x0) {
    iVar5 = (int)local_28[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_28[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(local_28 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_28;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x20))(local_30,param_1);
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cc68fa FUN_140cc68fa body=583 status=ok
// SIG undefined FUN_140cc68fa(void)

void FUN_140cc68fa(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0xd5] != 0) goto LAB_140cc691a;
  plVar5 = (longlong *)FUN_14048bbc8(param_1 + 0xeb);
  if ((plVar5 == (longlong *)0x0) || (plVar5 == param_1)) {
    (**(code **)(*param_1 + 0xa38))(param_1,&local_30);
    plVar5 = local_28;
    if (local_28 == (longlong *)0x0) {
      param_1[0xd5] = local_30;
      plVar6 = (longlong *)param_1[0xd6];
      if (plVar6 != (longlong *)0x0) {
        param_1[0xd6] = 0;
LAB_140cc6b08:
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
joined_r0x000140cc6b3f:
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      param_1[0xd5] = local_30;
      plVar6 = (longlong *)param_1[0xd6];
      if (local_28 == plVar6) {
        LOCK();
        plVar6 = local_28 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
          plVar6 = plVar5;
          goto joined_r0x000140cc6b3f;
        }
      }
      else {
        param_1[0xd6] = (longlong)local_28;
        if (plVar6 != (longlong *)0x0) goto LAB_140cc6b08;
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_28 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
    goto LAB_140cc691a;
  }
  FUN_140cc68fa(plVar5);
  lVar4 = plVar5[0xd5];
  plVar5 = (longlong *)plVar5[0xd6];
  if (plVar5 == (longlong *)0x0) {
    param_1[0xd5] = lVar4;
    plVar6 = (longlong *)param_1[0xd6];
    if (plVar6 == (longlong *)0x0) goto LAB_140cc691a;
    param_1[0xd6] = 0;
LAB_140cc6a91:
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
    if (plVar5 == (longlong *)0x0) goto LAB_140cc691a;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[0xd5] = lVar4;
    plVar6 = (longlong *)param_1[0xd6];
    if (plVar5 == plVar6) {
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
    else {
      param_1[0xd6] = (longlong)plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_140cc6a91;
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
LAB_140cc691a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc6b54 FUN_140cc6b54 body=1643 status=ok
// SIG undefined FUN_140cc6b54(void)

void FUN_140cc6b54(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar12 = param_2 + 0xeb;
  plVar7 = (longlong *)FUN_14048bbc8(plVar12);
  plVar8 = (longlong *)FUN_14048bbc8(plVar12);
  if ((plVar8 == (longlong *)0x0) || (lVar9 = (**(code **)(*plVar8 + 0xa00))(plVar8), lVar9 == 0)) {
    plVar8 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) goto LAB_140cc6c1b;
  bVar14 = 1;
  plVar10 = (longlong *)0x0;
  plVar18 = (longlong *)0x0;
  do {
    if ((*(byte *)((longlong)plVar7 + 0x9f) & 0x20) == 0) goto LAB_140cc6c1b;
    plVar13 = plVar18;
    if (plVar18 == (longlong *)0x0) {
      plVar13 = plVar7;
      bVar14 = plVar10 == (longlong *)0x0;
    }
    bVar14 = bVar14 | *(byte *)((longlong)plVar7 + 0x6f1);
    if (*(byte *)((longlong)plVar7 + 0x6f1) != 0) {
      plVar10 = plVar7;
      plVar13 = plVar18;
    }
    plVar18 = plVar13;
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x9f8))(plVar7);
  } while ((plVar7 != plVar8) && (plVar7 != (longlong *)0x0));
  if (plVar10 == (longlong *)0x0) goto LAB_140cc6c1b;
  if ((*(char *)(param_1 + 0x50) == '\0') &&
     (((param_2[0xd5] == 0 || (*(char *)(param_2[0xd5] + 0xbc) == '\0')) &&
      ((char)param_2[0x11c] == '\x01')))) {
    lVar9 = FUN_14048bbc8(plVar12);
    if (lVar9 == 0) {
      local_a8._0_4_ = 0;
      iVar15 = 0;
      uVar3 = (uint)local_a8;
    }
    else {
      uVar3 = *(uint *)(lVar9 + 0xc);
      local_a8 = (longlong *)(ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar15 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar15 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar15;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar15 = *(int *)(lVar9 + 0x10);
        bVar21 = iVar15 == 0;
        if (bVar21) {
          *(int *)(lVar9 + 0x10) = iVar16;
          iVar15 = 0;
        }
        UNLOCK();
        uVar3 = (uint)local_a8;
        if (bVar21) {
          iVar15 = iVar16;
        }
      }
    }
    local_a8._0_4_ = uVar3;
    local_a8 = (longlong *)CONCAT44(iVar15,(uint)local_a8);
    iVar15 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar15 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x40);
      uVar11 = 0;
      do {
        cVar6 = FUN_141077dfa(lVar9 + uVar11,&local_a8);
        if (cVar6 != '\0') {
          if ((int)(~uVar11 >> 3) != 0) goto LAB_140cc6c1b;
          break;
        }
        uVar11 = uVar11 + 8;
      } while ((longlong)iVar15 * 8 != uVar11);
    }
    iVar15 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar15 + 1U) {
      FUN_1457943e8((longlong *)(param_1 + 0x40),iVar15);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x40) + (longlong)iVar15 * 8) = local_a8;
    goto LAB_140cc6c1b;
  }
  if ((plVar18 != (longlong *)0x0 & bVar14) == 1) {
    FUN_140cc7410(plVar10);
  }
  else {
    plVar18 = (longlong *)0x0;
  }
  FUN_140cc68fa(param_2);
  lVar9 = param_2[0xd5];
  plVar7 = (longlong *)param_2[0xd6];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if ((((*(int *)(lVar9 + 100) == 0) || (uVar3 = *(uint *)(lVar9 + 0x60), (int)uVar3 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar3 ||
       ((lVar17 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar17 == 0 ||
        (*(int *)(lVar17 + 0x10) != *(int *)(lVar9 + 100))))))) ||
     ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)) {
LAB_140cc6cf4:
    bVar21 = *(longlong *)(lVar9 + 0x68) != 0;
  }
  else {
    lVar17 = FUN_14479d2ce();
    bVar21 = true;
    if ((*(byte *)(lVar17 + 0x348) & 2) != 0) goto LAB_140cc6cf4;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (!bVar21) {
    fVar2 = *(float *)((longlong)plVar10 + 0x6f4);
    if ((fVar2 != DAT_14cb717d0) || (NAN(fVar2) || NAN(DAT_14cb717d0))) {
      if ((param_2[0xd5] == 0) || (*(char *)(param_2[0xd5] + 0xbc) != '\x01')) {
        if ((char)param_2[0x11c] == '\x01') {
          plVar12 = (longlong *)FUN_14048bbc8(plVar10 + 0xeb);
          plVar7 = (longlong *)(**(code **)(*plVar10 + 0xa00))(plVar10);
          if (plVar7 == (longlong *)0x0) goto LAB_140cc6d67;
          do {
            if (fVar2 <= *(float *)((longlong)plVar7 + 0x6f4)) {
              plVar10 = plVar7;
            }
          } while (((plVar7 != plVar12) && (fVar2 <= *(float *)((longlong)plVar7 + 0x6f4))) &&
                  (plVar7 = (longlong *)(**(code **)(*plVar7 + 0xa00))(plVar7),
                  plVar7 != (longlong *)0x0));
        }
        else {
          plVar10 = (longlong *)FUN_14048bbc8(plVar12);
          if (plVar10 == (longlong *)0x0) {
            plVar10 = param_2;
          }
        }
        if (plVar10 == (longlong *)0x0) goto LAB_140cc6da1;
      }
      else if (plVar18 != (longlong *)0x0) {
        plVar10 = plVar18;
      }
    }
LAB_140cc6d67:
    FUN_140cc68fa(plVar10);
    lVar9 = plVar10[0xd5];
    plVar12 = (longlong *)plVar10[0xd6];
    if (plVar12 == (longlong *)0x0) {
      FUN_1411363be(lVar9,plVar10,1);
    }
    else {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      FUN_1411363be(lVar9,plVar10,1);
      LOCK();
      plVar7 = plVar12 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  }
LAB_140cc6da1:
  FUN_140cc68fa(param_2);
  lVar9 = param_2[0xd5];
  plVar12 = (longlong *)param_2[0xd6];
  if (plVar12 == (longlong *)0x0) {
    FUN_1447f69b6(lVar9 + 0x18);
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    iVar15 = *(int *)(lVar9 + 0x2c);
    *(int *)(lVar9 + 0x2c) = iVar15 + 1;
    uVar11 = (ulonglong)*(int *)(lVar9 + 0x20);
    if ((longlong)uVar11 < 1) {
      *(int *)(lVar9 + 0x2c) = iVar15;
    }
    else {
      bVar21 = false;
      do {
        lVar17 = uVar11 * 0x10 + -8;
        uVar19 = uVar11;
        while (((lVar20 = *(longlong *)(lVar9 + 0x18), *(int *)(lVar20 + lVar17) != 0 &&
                (plVar7 = *(longlong **)(lVar20 + -8 + lVar17), plVar7 != (longlong *)0x0)) &&
               (cVar6 = (**(code **)(*plVar7 + 0x60))(), cVar6 != '\0'))) {
          lVar17 = lVar17 + -0x10;
          bVar4 = uVar19 < 2;
          uVar19 = uVar19 - 1;
          if (bVar4) {
            *(int *)(lVar9 + 0x2c) = *(int *)(lVar9 + 0x2c) + -1;
            if (!bVar21) goto LAB_140cc6e39;
            goto LAB_140cc70d7;
          }
        }
        uVar11 = uVar19 - 1;
        bVar21 = true;
      } while (1 < uVar19);
      *(int *)(lVar9 + 0x2c) = *(int *)(lVar9 + 0x2c) + -1;
LAB_140cc70d7:
      FUN_14474d06a((longlong *)(lVar9 + 0x18),0);
    }
LAB_140cc6e39:
    LOCK();
    plVar7 = plVar12 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar12 = (longlong *)(param_1 + 0x58);
  lVar9 = param_1 + 0x68;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  local_68 = 0;
  iVar15 = 0;
  local_78 = lVar9;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_80);
    iVar15 = *(int *)(param_1 + 0x80);
  }
  local_a0 = local_80;
  local_98 = local_78;
  local_90 = local_70;
  uVar5 = local_90;
  local_88 = local_68;
  local_84 = local_64;
  local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
  iVar16 = local_90._4_4_;
  local_a8 = plVar12;
  if ((local_90._4_4_ != iVar15) || (local_90 = local_70, local_78 != lVar9)) {
    do {
      local_90 = uVar5;
      fVar2 = *(float *)(*local_a8 + 0x10 + (longlong)iVar16 * 0x90);
      if ((fVar2 == 3.4028235e+38) && (!NAN(fVar2))) {
        lVar20 = *local_a8 + (longlong)iVar16 * 0x90;
        lVar17 = FUN_14479d2ce(lVar20 + 0x2c);
        if ((lVar17 != 0) && (cVar6 = FUN_14579446e(lVar17,param_2), cVar6 != '\0')) {
          *(undefined4 *)(lVar20 + 0x10) = 0;
        }
      }
      local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
      FUN_1449c0562(&local_a0);
      iVar16 = local_90._4_4_;
      uVar5 = local_90;
    } while (((local_90._4_4_ != iVar15) || (local_98 != lVar9)) || (local_a8 != plVar12));
  }
LAB_140cc6c1b:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc71c0 FUN_140cc71c0 body=592 status=ok
// SIG undefined FUN_140cc71c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140cc71c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar4 = (longlong *)FUN_14001cc68(0xd0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3e9790;
  plVar7 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b3e8790;
  plVar4[5] = 0;
  plVar4[6] = 0;
  *(undefined4 *)(plVar4 + 7) = 2;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x4c) = 0;
  plVar4[10] = 2;
  plVar4[0xb] = 0;
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(plVar4 + 0xb) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar3 = iVar6;
      }
    }
  }
  *(int *)((longlong)plVar4 + 0x5c) = iVar3;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  *(undefined4 *)(plVar4 + 0x13) = 0x4000;
  plVar4[0x14] = 0;
  plVar4[0x15] = DAT_14cb7bd68;
  *(undefined4 *)(plVar4 + 0x16) = DAT_14cb7bd70;
  *(undefined8 *)((longlong)plVar4 + 0xb4) = DAT_14cb7bd80;
  *(undefined4 *)((longlong)plVar4 + 0xbc) = DAT_14cb7bd88;
  plVar4[0x18] = 0;
  *(undefined8 *)((longlong)plVar4 + 0xc5) = 0;
  *param_2 = (longlong)plVar7;
  param_2[1] = (longlong)plVar4;
  if (plVar7 == (longlong *)0x0) {
    return param_2;
  }
  if (((plVar4[3] != 0) && (plVar4[4] != 0)) && (0 < *(int *)(plVar4[4] + 8))) {
    return param_2;
  }
  if (plVar4 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar7 = (longlong *)&DAT_00000020;
    plVar5 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar4[3] = (longlong)plVar7;
    if ((longlong *)plVar4[4] == plVar4) goto LAB_140cc7328;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    if ((longlong *)plVar4[4] == (longlong *)0x0) {
      plVar4[4] = (longlong)plVar4;
      goto LAB_140cc7328;
    }
    plVar7 = plVar4 + 4;
    plVar5 = (longlong *)plVar4[4];
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar5 + 0x10))();
  }
  *plVar7 = (longlong)plVar4;
  if (plVar4 == (longlong *)0x0) {
    return param_2;
  }
LAB_140cc7328:
  LOCK();
  plVar7 = plVar4 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return param_2;
}



// FUNCTION 140cc7410 FUN_140cc7410 body=135 status=ok
// SIG undefined FUN_140cc7410(void)

void FUN_140cc7410(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_14048bbc8(param_1 + 0xeb);
  plVar3 = (longlong *)FUN_14048bbc8(param_1 + 0xeb);
  if ((plVar3 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar3 + 0xa00))(plVar3), lVar4 == 0)) {
    plVar3 = (longlong *)0x0;
  }
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    if (*(char *)((longlong)plVar2 + 0x6f1) == '\0') {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x6f4);
      *(undefined1 *)((longlong)plVar2 + 0x6f1) = 1;
      *(undefined4 *)((longlong)plVar2 + 0x6f4) = uVar1;
    }
    if (plVar2 == param_1) break;
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x9f8))(plVar2);
    if (plVar2 == plVar3) {
      return;
    }
  }
  return;
}



// FUNCTION 140cc7497 FUN_140cc7497 body=52 status=ok
// SIG undefined FUN_140cc7497(void)

void FUN_140cc7497(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140cc74cc FUN_140cc74cc body=38 status=ok
// SIG undefined FUN_140cc74cc(void)

undefined8 FUN_140cc74cc(undefined8 param_1,int param_2)

{
  FUN_140cc74f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cc74f2 FUN_140cc74f2 body=69 status=ok
// SIG undefined FUN_140cc74f2(void)

void FUN_140cc74f2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149ef0338;
  param_1[4] = &PTR_LAB_149ef0340;
  if ((param_1[1] != 0) && (lVar1 = *(longlong *)(param_1[1] + 8), lVar1 != 0)) {
    FUN_140c4c666(lVar1,param_1 + 4);
  }
  FUN_140cc7538(param_1);
  return;
}



// FUNCTION 140cc7538 FUN_140cc7538 body=104 status=ok
// SIG undefined FUN_140cc7538(void)

void FUN_140cc7538(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_149edb640;
  if (param_1[2] != DAT_14c98dec8) {
    if (param_1[1] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1[1] + 8);
    }
    FUN_14066af28(param_1[2],uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x000140cc7595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cc75a0 FUN_140cc75a0 body=292 status=ok
// SIG undefined FUN_140cc75a0(void)

undefined8 * FUN_140cc75a0(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  if ((int)uVar2 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar4 = uVar2;
    do {
      uVar1 = (uVar4 >> 1) + uVar6;
      lVar7 = (ulonglong)uVar1 * 0x30;
      iVar8 = *(int *)(lVar5 + lVar7) - *param_2;
      if (iVar8 == 0) {
        iVar8 = *(int *)(lVar5 + 4 + lVar7) - param_2[1];
      }
      if (iVar8 < 0) {
        uVar6 = uVar1 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
    if ((int)uVar6 < (int)uVar2) {
      lVar7 = (ulonglong)uVar6 * 0x30;
      iVar8 = *param_2 - *(int *)(lVar5 + lVar7);
      if (iVar8 == 0) {
        iVar8 = param_2[1] - *(int *)(lVar5 + 4 + lVar7);
      }
      if (-1 < iVar8) {
        puVar9 = (undefined8 *)(lVar5 + lVar7);
        FUN_14006e3c1(puVar9,1);
        goto LAB_140cc7668;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_140cc76c4(param_1,uVar2);
    lVar5 = *param_1;
  }
  lVar7 = (ulonglong)uVar6 * 0x30;
  memmove((void *)(lVar5 + lVar7 + 0x30),(void *)(lVar5 + lVar7),(ulonglong)(uVar2 - uVar6) * 0x30);
  puVar9 = (undefined8 *)(lVar7 + *param_1);
LAB_140cc7668:
  *puVar9 = *(undefined8 *)param_2;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  *(undefined4 *)(puVar9 + 5) = 0;
  return puVar9 + 1;
}



// FUNCTION 140cc76c4 FUN_140cc76c4 body=275 status=ok
// SIG undefined FUN_140cc76c4(void)

void FUN_140cc76c4(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 140cc77d8 FUN_140cc77d8 body=802 status=ok
// SIG undefined FUN_140cc77d8(void)

void FUN_140cc77d8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_58 [8];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_88 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_88);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_90 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_a8 = FUN_1446ddbd2();
    local_a0 = FUN_1468d96f0;
    local_b0 = 0;
    local_b8 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_90);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_90);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_90 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_90);
    }
  }
  puVar6 = &local_88;
  if (puVar4 != (undefined8 *)0x0) {
    puVar6 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140cc7afc(local_58,puVar6,local_90);
  FUN_1403719a4(param_3,local_58);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar5 = (undefined8 ****)local_50[0];
    if (local_38 < 0x19) {
      ppppuVar5 = local_50;
    }
    (*pcVar3)(ppppuVar5);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cc7afc FUN_140cc7afc body=250 status=ok
// SIG undefined FUN_140cc7afc(void)

undefined8 FUN_140cc7afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [40];
  char local_80 [16];
  longlong *local_70;
  undefined4 local_58 [2];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = '\0';
  local_58[0] = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_140168c66(param_2,local_50,local_80);
  FUN_140cc7bf8(param_1,local_50);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar3 = local_50;
    if (0x18 < local_38) {
      pppuVar3 = (undefined8 ***)local_50[0];
    }
    (*pcVar2)(pppuVar3);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_1448173f8(local_58);
  if ((local_80[0] == '\x03') && (local_70 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc7bf8 FUN_140cc7bf8 body=150 status=ok
// SIG undefined FUN_140cc7bf8(void)

undefined8 * FUN_140cc7bf8(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined8 *_Dst;
  ulonglong uVar3;
  code *pcVar4;
  
  *param_1 = 0;
  _Dst = param_1 + 1;
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 4) = uVar2;
  if (uVar2 < 0x19) {
    uVar3 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b8 + uVar3);
    if ((pcVar4 == (code *)0x0) &&
       (pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar3), pcVar4 == (code *)0x0)) {
      memcpy(_Dst,param_2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
    }
    else {
      (*pcVar4)(_Dst,param_2);
    }
  }
  else {
    *_Dst = *param_2;
    *param_2 = 0;
    *(undefined2 *)(param_2 + 3) = 0;
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_1 + 5);
  return param_1;
}



// FUNCTION 140cc7c96 FUN_140cc7c96 body=184 status=ok
// SIG undefined FUN_140cc7c96(void)

undefined8 * FUN_140cc7c96(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *param_1 = &PTR_FUN_14b72ce30;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1446f470e(param_1 + 0x10,L"User.PlayerLocation",1);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 140cc7d4e FUN_140cc7d4e body=336 status=ok
// SIG undefined FUN_140cc7d4e(void)

longlong * FUN_140cc7d4e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_14156aaea(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar3 + lVar7);
          *(undefined8 *)(lVar4 + 0x28 + lVar7) = 0;
          *(undefined4 *)(lVar4 + 0x30 + lVar7) = 0;
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x34 + lVar7) = 0xffffffff00000080;
          *(undefined4 *)(lVar4 + 0x3c + lVar7) = 0;
          *(undefined8 *)(lVar4 + 0x48 + lVar7) = 0;
          *(undefined4 *)(lVar4 + 0x50 + lVar7) = 0;
          FUN_140cc7e9e(lVar4 + 8 + lVar7,lVar7 + lVar3 + 8);
          *(undefined8 *)(lVar4 + 0x58 + lVar7) = *(undefined8 *)(lVar3 + 0x58 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x60;
      } while (uVar2 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 140cc7e9e FUN_140cc7e9e body=154 status=ok
// SIG undefined FUN_140cc7e9e(void)

longlong FUN_140cc7e9e(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_140cc7ef3;
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
LAB_140cc7ef3:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140cc7f38(param_1,param_2);
  return param_1;
}



// FUNCTION 140cc7f38 FUN_140cc7f38 body=239 status=ok
// SIG undefined FUN_140cc7f38(void)

undefined8 * FUN_140cc7f38(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140a11a2c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 140cc802e FUN_140cc802e body=57 status=ok
// SIG undefined FUN_140cc802e(void)

void FUN_140cc802e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0848 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0848 = FUN_140002ddd(FUN_1465aab4e,uVar1,L"FastTravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 140cc8068 FUN_140cc8068 body=205 status=ok
// SIG undefined FUN_140cc8068(void)

int FUN_140cc8068(longlong *param_1,longlong param_2,int param_3,char param_4,undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 0x2c) < 1) {
    iVar5 = -1;
  }
  else {
    iVar5 = -1;
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x10);
      lVar1 = lVar2 + lVar7;
      *(undefined1 *)(lVar2 + 0x15 + lVar7) = param_5;
      *(undefined1 *)(lVar2 + 0x14 + lVar7) = 1;
      *(int *)(lVar2 + 0xc + lVar7) = *(int *)(lVar2 + 8 + lVar7) - param_3;
      cVar3 = (**(code **)(*param_1 + 0x128))(param_1,lVar1);
      if (cVar3 != '\0') {
        iVar4 = *(int *)(lVar2 + 0xc + lVar7);
        if ((param_4 != '\0') && (iVar5 < iVar4)) {
          cVar3 = (**(code **)(*param_1 + 0x130))(param_1,lVar1);
          iVar4 = *(int *)(lVar2 + 0xc + lVar7);
          if (cVar3 != '\0') {
            iVar5 = iVar4;
          }
        }
        (**(code **)(*param_1 + 0x68))(param_1,iVar4,lVar1);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x70;
    } while (lVar6 < *(int *)(param_2 + 0x2c));
  }
  return iVar5;
}



// FUNCTION 140cc8188 FUN_140cc8188 body=40 status=ok
// SIG undefined FUN_140cc8188(void)

undefined8 FUN_140cc8188(undefined8 param_1,int param_2)

{
  FUN_140cc81b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cc81b0 FUN_140cc81b0 body=583 status=ok
// SIG undefined FUN_140cc81b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cc81b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b471330;
  FUN_140cc84f4();
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc845a(param_1 + 0x37);
  FUN_140cc8428(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1407f634a(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc85ea(param_1 + 0x20,0);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc83f7(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000140cc83ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140cc83f7 FUN_140cc83f7 body=49 status=ok
// SIG undefined FUN_140cc83f7(void)

void FUN_140cc83f7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cc8428 FUN_140cc8428 body=49 status=ok
// SIG undefined FUN_140cc8428(void)

void FUN_140cc8428(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cc845a FUN_140cc845a body=153 status=ok
// SIG undefined FUN_140cc845a(void)

void FUN_140cc845a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x78);
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
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140cc84f4 FUN_140cc84f4 body=150 status=ok
// SIG undefined FUN_140cc84f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cc84f4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x240);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x238);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        FUN_140cc845a(plVar3);
        _DAT_14cb92fcc = _DAT_14cb92fcc + -1;
        *plVar3 = (longlong)DAT_14cb92fc0;
        DAT_14cb92fc0 = plVar3;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_140cc858a(param_1 + 0x238,0);
    return;
  }
  return;
}



// FUNCTION 140cc858a FUN_140cc858a body=96 status=ok
// SIG undefined FUN_140cc858a(void)

void FUN_140cc858a(longlong param_1,int param_2)

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



// FUNCTION 140cc85ea FUN_140cc85ea body=529 status=ok
// SIG undefined FUN_140cc85ea(void)

void FUN_140cc85ea(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140cc861d;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar6 * 0x38) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_140cc861d;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140cc861d:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140cc880a FUN_140cc880a body=62 status=ok
// SIG undefined FUN_140cc880a(void)

undefined8 * FUN_140cc880a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cc8848 FUN_140cc8848 body=305 status=ok
// SIG undefined FUN_140cc8848(void)

void FUN_140cc8848(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140cc897a();
  lVar7 = *(longlong *)(param_1 + 0x38);
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((lVar7 != 0) &&
     (((*(char *)(lVar7 + 0x99) != '\0' || (*(int *)(lVar7 + 0x88) == -1)) &&
      (lVar7 = FUN_1411d67c8(param_1), lVar7 != 0)))) {
    iVar2 = *(int *)(lVar7 + 0x358);
    if ((longlong)iVar2 != 0) {
      lVar4 = *(longlong *)(lVar7 + 0x350);
      lVar8 = 0;
      do {
        if (((*(int *)(lVar4 + 8 + lVar8) != 0) &&
            (plVar5 = *(longlong **)(lVar4 + lVar8), plVar5 != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1), cVar6 != '\0'))
        goto LAB_140cc8894;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar8);
    }
    FUN_145794bbe(local_48,param_1,FUN_145979c3a);
    FUN_1448b6402(lVar7 + 0x350,local_50,local_48);
    FUN_1449db362(local_48);
  }
LAB_140cc8894:
  if (plVar3 != (longlong *)0x0) {
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
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cc897a FUN_140cc897a body=70 status=ok
// SIG undefined FUN_140cc897a(void)

void FUN_140cc897a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x50) + 8) >> 0x1e & 1) == 0) &&
       (FUN_140b4f29a(), *(longlong *)(param_1 + 0x50) == 0)) {
      return;
    }
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 140cc89c0 FUN_140cc89c0 body=110 status=ok
// SIG undefined FUN_140cc89c0(void)

void FUN_140cc89c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140cc8a2e();
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x3d0) + 0xa1) = 1;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x3d8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3d8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140cc8a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140cc8a2e FUN_140cc8a2e body=126 status=ok
// SIG undefined FUN_140cc8a2e(void)

void FUN_140cc8a2e(longlong *param_1)

{
  longlong lVar1;
  
  param_1[0x22] = 0;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) & 0xfe;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (((*(byte *)(param_1 + 0x17) & 6) != 0) &&
     ((lVar1 = param_1[0x16], lVar1 != 0 || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)))) {
    FUN_1401b4182(lVar1,param_1);
  }
  FUN_140e6887e(param_1);
  if ((*(byte *)(param_1 + 0x55) & 2) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140cc8a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5f0))(param_1);
  return;
}



// FUNCTION 140cc8aac FUN_140cc8aac body=3619 status=ok
// SIG undefined FUN_140cc8aac(void)

void FUN_140cc8aac(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined *puVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  uint *puVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  longlong local_d8;
  uint local_d0;
  undefined4 uStack_cc;
  longlong *local_c0;
  ushort local_b8;
  byte local_b0;
  int local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  uint local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar8 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x398) = uVar8;
    plVar15 = *(longlong **)(param_1 + 0x3a0);
    if (plVar15 == (longlong *)0x0) goto LAB_140cc8b30;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
LAB_140cc94fc:
    LOCK();
    plVar2 = plVar15 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_140cc8b30;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x398) = uVar8;
    plVar15 = *(longlong **)(param_1 + 0x3a0);
    if (plVar3 == plVar15) {
      LOCK();
      plVar15 = plVar3 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x3a0) = plVar3;
      if (plVar15 != (longlong *)0x0) goto LAB_140cc94fc;
    }
  }
  LOCK();
  plVar15 = plVar3 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_140cc8b30:
  local_e0 = *param_2;
  local_d8 = param_2[1];
  if (local_d8 != 0) {
    LOCK();
    *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
    UNLOCK();
  }
  FUN_140cc98d0(param_1,&local_e0,param_3,param_4);
  *(byte *)(param_1 + 0x2d1) = *(byte *)(param_1 + 0x2d1) | 4;
  lVar17 = *param_3;
  uVar8 = FUN_140839e50();
  lVar11 = *(longlong *)(lVar17 + 0x200);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar11,uVar8,0);
  }
  puVar12 = &local_78;
  FUN_140ccc900(lVar17,puVar12,uVar8,param_4);
  if (local_58 == 3) {
    uVar18 = local_78;
    bVar5 = 3;
  }
  else {
    puVar16 = &local_d0;
    FUN_1400b56fe(puVar16,&local_78,3);
    uVar18 = 0;
    if (local_b0 != 0) {
      uVar18 = local_d0;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b8) {
        puVar16 = (uint *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar4)(puVar16);
    }
    bVar5 = local_58;
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      bVar5 = local_58;
    }
  }
  *(uint *)(param_1 + 0x3b4) = uVar18;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar12 = (uint *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  lVar17 = *param_3;
  uVar8 = FUN_140839e50();
  lVar11 = *(longlong *)(lVar17 + 0x200);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar11,uVar8,1);
  }
  puVar12 = &local_78;
  FUN_140ccc900(lVar17,puVar12,uVar8,param_4);
  if (local_58 == 3) {
    uVar18 = local_78;
    bVar5 = 3;
  }
  else {
    puVar16 = &local_d0;
    FUN_1400b56fe(puVar16,&local_78,3);
    uVar18 = 0;
    if (local_b0 != 0) {
      uVar18 = local_d0;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b8) {
        puVar16 = (uint *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar4)(puVar16);
    }
    bVar5 = local_58;
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      bVar5 = local_58;
    }
  }
  *(uint *)(param_1 + 0x3b8) = uVar18;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar12 = (uint *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  lVar17 = *param_3;
  uVar8 = FUN_140839e50();
  lVar11 = *(longlong *)(lVar17 + 0x200);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar11,uVar8,2);
  }
  puVar12 = &local_78;
  FUN_140ccc900(lVar17,puVar12,uVar8,param_4);
  if (local_58 == 3) {
    uVar18 = local_78;
    bVar5 = 3;
  }
  else {
    puVar16 = &local_d0;
    FUN_1400b56fe(puVar16,&local_78,3);
    uVar18 = 0;
    if (local_b0 != 0) {
      uVar18 = local_d0;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b8) {
        puVar16 = (uint *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar4)(puVar16);
    }
    bVar5 = local_58;
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      bVar5 = local_58;
    }
  }
  *(uint *)(param_1 + 0x3bc) = uVar18;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar12 = (uint *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  lVar17 = *param_3;
  uVar8 = FUN_140839e50();
  lVar11 = *(longlong *)(lVar17 + 0x200);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar11,uVar8,3);
  }
  puVar12 = &local_78;
  FUN_140ccc900(lVar17,puVar12,uVar8,param_4);
  if (local_58 == 3) {
    uVar18 = local_78;
    bVar5 = 3;
  }
  else {
    puVar16 = &local_d0;
    FUN_1400b56fe(puVar16,&local_78,3);
    uVar18 = 0;
    if (local_b0 != 0) {
      uVar18 = local_d0;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b8) {
        puVar16 = (uint *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar4)(puVar16);
    }
    bVar5 = local_58;
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      bVar5 = local_58;
    }
  }
  *(uint *)(param_1 + 0x3c0) = uVar18;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar12 = (uint *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  lVar17 = *param_3;
  uVar8 = FUN_140839e50();
  lVar11 = *(longlong *)(lVar17 + 0x200);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar11,uVar8,4);
  }
  puVar12 = &local_78;
  FUN_140ccc900(lVar17,puVar12,uVar8,param_4);
  if (local_58 == 3) {
    uVar18 = local_78;
    bVar5 = 3;
  }
  else {
    puVar16 = &local_d0;
    FUN_1400b56fe(puVar16,&local_78,3);
    uVar18 = 0;
    if (local_b0 != 0) {
      uVar18 = local_d0;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b8) {
        puVar16 = (uint *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar4)(puVar16);
    }
    bVar5 = local_58;
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      bVar5 = local_58;
    }
  }
  *(uint *)(param_1 + 0x3c4) = uVar18;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar12 = (uint *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  lVar17 = *param_3;
  uVar8 = FUN_140839e50();
  lVar11 = *(longlong *)(lVar17 + 0x200);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar11,uVar8,5);
  }
  puVar12 = &local_78;
  FUN_140ccc900(lVar17,puVar12,uVar8,param_4);
  if (local_58 == 3) {
    uVar18 = local_78;
    bVar5 = 3;
  }
  else {
    puVar16 = &local_d0;
    FUN_1400b56fe(puVar16,&local_78,3);
    uVar18 = 0;
    if (local_b0 != 0) {
      uVar18 = local_d0;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b8) {
        puVar16 = (uint *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar4)(puVar16);
    }
    bVar5 = local_58;
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      bVar5 = local_58;
    }
  }
  *(uint *)(param_1 + 0x3c8) = uVar18;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar12 = (uint *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  lVar17 = *param_3;
  uVar8 = FUN_140839e50();
  lVar11 = *(longlong *)(lVar17 + 0x200);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar11,uVar8,6);
  }
  puVar12 = &local_78;
  FUN_140ccc900(lVar17,puVar12,uVar8,param_4);
  if (local_58 == 3) {
    uVar18 = local_78;
    bVar5 = 3;
  }
  else {
    puVar16 = &local_d0;
    FUN_1400b56fe(puVar16,&local_78,3);
    uVar18 = 0;
    if (local_b0 != 0) {
      uVar18 = local_d0;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b8) {
        puVar16 = (uint *)CONCAT44(uStack_cc,local_d0);
      }
      (*pcVar4)(puVar16);
    }
    bVar5 = local_58;
    if (0x18 < local_b8) {
      FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      bVar5 = local_58;
    }
  }
  *(uint *)(param_1 + 0x3cc) = uVar18;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_60) {
      puVar12 = (uint *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  lVar17 = *param_3;
  uVar8 = FUN_140839e50();
  lVar11 = *(longlong *)(lVar17 + 0x200);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar11,uVar8,7);
  }
  puVar12 = &local_d0;
  FUN_140ccc900(lVar17,puVar12,uVar8,param_4);
  uVar6 = FUN_14005fbd2(puVar12,1);
  *(undefined4 *)(param_1 + 0x3d0) = uVar6;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_b8) {
      puVar12 = (uint *)CONCAT44(uStack_cc,local_d0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_b8) {
    FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
  }
  lVar17 = *param_3;
  uVar8 = FUN_140839e50();
  lVar11 = *(longlong *)(lVar17 + 0x200);
  if (lVar11 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1403f69f4(lVar11,uVar8,8);
  }
  puVar12 = &local_d0;
  FUN_140ccc900(lVar17,puVar12,uVar8,param_4);
  uVar6 = FUN_14005fbd2(puVar12,0);
  *(undefined4 *)(param_1 + 0x3d4) = uVar6;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_b8) {
      puVar12 = (uint *)CONCAT44(uStack_cc,local_d0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_b8) {
    FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
  }
  lVar17 = *(longlong *)(param_1 + 0x398);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar17 = (ulonglong)((uint)*(ushort *)(lVar17 + 0x406) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_d0 = local_d0 & 0xffffff00;
  local_a8 = 0;
  FUN_1456bb102(&local_d0,*(undefined8 *)(param_1 + 0x30));
  puVar12 = &local_a0;
  FUN_1448729ea(lVar17,puVar12,&local_d0);
  if (local_80 == 3) {
    uVar7 = 3;
    uVar18 = local_a0;
  }
  else {
    puVar16 = &local_78;
    FUN_1400b56fe(puVar16,&local_a0,3);
    uVar18 = 0;
    if (local_58 != 0) {
      uVar18 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar16 = (uint *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar16);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar7 = (uint)local_80;
  }
  *(uint *)(param_1 + 0x3d8) = uVar18;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar12 = (uint *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar12);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar17 = DAT_14c9a3da0;
  if ((longlong)local_a8 != 0) {
    lVar14 = (longlong)local_a8 + -1;
    lVar11 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar17 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar17 = DAT_14c9a3da0;
    iVar13 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
    }
    *(undefined4 *)(lVar17 + lVar11) = 0xffffffff;
    iVar9 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar9 = DAT_14c9a3dd0;
    }
    *(int *)(lVar17 + 4 + lVar11) = iVar9;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar9 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar9 = iVar13;
    }
    bVar5 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar13;
    *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_a8 = 0;
  }
  if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar3 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cc98d0 FUN_140cc98d0 body=1331 status=ok
// SIG undefined FUN_140cc98d0(void)

void FUN_140cc98d0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 *****pppppuVar15;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined8 ****local_a0 [3];
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  undefined6 uStack_5e;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = *param_2;
  plVar11 = (longlong *)param_2[1];
  if (plVar11 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x358) = uVar7;
    plVar14 = *(longlong **)(param_1 + 0x360);
    if (plVar14 == (longlong *)0x0) goto LAB_140cc9952;
    *(undefined8 *)(param_1 + 0x360) = 0;
LAB_140cc9cbe:
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (plVar11 == (longlong *)0x0) goto LAB_140cc9952;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x358) = uVar7;
    plVar14 = *(longlong **)(param_1 + 0x360);
    if (plVar11 == plVar14) {
      LOCK();
      plVar14 = plVar11 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x360) = plVar11;
      if (plVar14 != (longlong *)0x0) goto LAB_140cc9cbe;
    }
  }
  LOCK();
  plVar14 = plVar11 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_140cc9952:
  local_b0 = *param_2;
  local_a8 = param_2[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_140cc9e04(param_1,&local_b0,param_3,param_4);
  pppppuVar15 = *(undefined8 ******)(*(longlong *)(param_1 + 0x358) + 0x2e0);
  if ((pppppuVar15 == (undefined8 *****)0x0) ||
     (0xfffffffd < *(int *)(*(longlong *)(param_1 + 0x358) + 0x2e8) - 1U)) {
    uVar7 = 0;
  }
  else {
    local_a0[0] = pppppuVar15;
    FUN_1446dcdd4(&local_78);
    if (DAT_14cb853e8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_144837462(DAT_14cb853e8,&local_78);
    }
    if (CONCAT62(uStack_5e,local_60) != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x368) = uVar7;
  pppppuVar15 = *(undefined8 ******)(*(longlong *)(param_1 + 0x358) + 0x2f8);
  if (pppppuVar15 == (undefined8 *****)0x0) {
    uVar7 = 0;
  }
  else {
    local_a0[0] = pppppuVar15;
    FUN_1446dcdd4(&local_78);
    uVar7 = FUN_140a4bd48(&local_78);
    if (CONCAT62(uStack_5e,local_60) != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x370) = uVar7;
  lVar8 = *param_3;
  uVar7 = FUN_14083a087();
  lVar3 = *(longlong *)(lVar8 + 0x200);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar3,uVar7,0);
  }
  FUN_140ccc900(lVar8,&local_78,uVar7,param_4);
  uVar6 = FUN_14005fbd2(&local_78,1);
  *(undefined4 *)(param_1 + 0x380) = uVar6;
  FUN_140841e14(param_1 + 0x378,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)();
  }
  if (0x18 < local_60) {
    FUN_1400020a8();
  }
  uVar5 = *(ulonglong *)(param_1 + 0x170);
  if (uVar5 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar5,0xc);
  }
  else {
    uVar13 = (uint)uVar5;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar5 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 0x1000;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar7 = FUN_14083a087();
  lVar3 = *(longlong *)(lVar8 + 0x200);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar3,uVar7,1);
  }
  FUN_140ccc900(lVar8,local_a0,uVar7,param_4);
  if (local_80 == 3) {
    uVar6 = local_a0[0]._0_4_;
  }
  else {
    puVar12 = &local_78;
    FUN_1400b56fe(puVar12,local_a0,3);
    uVar6 = 0;
    if (local_58 != 0) {
      uVar6 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar12 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar12);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x38c) = uVar6;
  FUN_14020a6cc(param_1 + 900,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    pppppuVar15 = local_a0;
    if (0x18 < local_88) {
      pppppuVar15 = (undefined8 *****)local_a0[0];
    }
    (*pcVar4)(pppppuVar15);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  plVar11 = (longlong *)param_2[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar11 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cc9e04 FUN_140cc9e04 body=1242 status=ok
// SIG undefined FUN_140cc9e04(void)

void FUN_140cc9e04(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = *param_2;
  local_a8 = param_2[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_140cca2e0(param_1,&local_b0,param_3,param_4);
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x3f0) != 0)) && (lVar5 = FUN_140a2d0dc(), lVar5 != 0)
     ) {
    if (*(longlong *)(lVar6 + 0x3f0) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_140a2d0dc();
    }
    if (*(longlong *)(lVar5 + 0xf8) != 0) {
      if (*(longlong *)(lVar6 + 0x3f0) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_140a2d0dc();
      }
      FUN_140559328(param_1 + 0x278,lVar6 + 0xf8);
    }
  }
  lVar6 = *param_3;
  uVar7 = FUN_14083a680();
  lVar5 = *(longlong *)(lVar6 + 0x200);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar5,uVar7,0);
  }
  puVar9 = &local_a0;
  FUN_140ccc900(lVar6,puVar9,uVar7,param_4);
  uVar10 = local_a0;
  if (local_80 != 3) {
    puVar8 = &local_78;
    FUN_1400b56fe(puVar8,&local_a0,3);
    uVar10 = 0;
    if (local_58 != 0) {
      uVar10 = local_78;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar8 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x338) = uVar10;
  FUN_14020a6cc(param_1 + 0x330,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar9 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar6 = *param_3;
  uVar7 = FUN_14083a680();
  lVar5 = *(longlong *)(lVar6 + 0x200);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar5,uVar7,1);
  }
  puVar9 = &local_a0;
  FUN_140ccc900(lVar6,puVar9,uVar7,param_4);
  uVar10 = local_a0;
  if (local_80 != 3) {
    puVar8 = &local_78;
    FUN_1400b56fe(puVar8,&local_a0,3);
    uVar10 = 0;
    if (local_58 != 0) {
      uVar10 = local_78;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar8 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x344) = uVar10;
  FUN_14020a6cc(param_1 + 0x33c,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar9 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar6 = *param_3;
  uVar7 = FUN_14083a680();
  lVar5 = *(longlong *)(lVar6 + 0x200);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1403f69f4(lVar5,uVar7,2);
  }
  puVar9 = &local_a0;
  FUN_140ccc900(lVar6,puVar9,uVar7,param_4);
  uVar10 = local_a0;
  if (local_80 != 3) {
    puVar8 = &local_78;
    FUN_1400b56fe(puVar8,&local_a0,3);
    uVar10 = 0;
    if (local_58 != 0) {
      uVar10 = local_78;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar8 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar3)(puVar8);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x350) = uVar10;
  FUN_14020a6cc(param_1 + 0x348,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar9 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar3)(puVar9);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cca2e0 FUN_140cca2e0 body=9758 status=ok
// SIG undefined FUN_140cca2e0(void)

void FUN_140cca2e0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  uint *puVar10;
  longlong *plVar11;
  byte bVar12;
  int *piVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 *****pppppuVar16;
  bool bVar17;
  int iVar18;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 ****local_b0 [3];
  ushort local_98;
  byte local_90;
  int local_88;
  undefined4 uStack_84;
  ushort local_70;
  undefined6 uStack_6e;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar5 = *param_2;
  plVar11 = (longlong *)param_2[1];
  if (plVar11 == (longlong *)0x0) {
    local_d0 = (longlong *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = uVar5;
    plVar15 = *(longlong **)(param_1 + 0x180);
    if (plVar15 == (longlong *)0x0) goto LAB_140cca36e;
    *(undefined8 *)(param_1 + 0x180) = 0;
LAB_140ccbfa7:
    local_d0 = (longlong *)(param_1 + 0x178);
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar13 = (int *)((longlong)plVar15 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    if (plVar11 == (longlong *)0x0) goto LAB_140cca36e;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_d0 = (longlong *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = uVar5;
    plVar15 = *(longlong **)(param_1 + 0x180);
    if (plVar11 == plVar15) {
      LOCK();
      plVar15 = plVar11 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar13 = (int *)((longlong)plVar11 + 0xc);
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (*piVar13 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x180) = plVar11;
      if (plVar15 != (longlong *)0x0) goto LAB_140ccbfa7;
    }
  }
  LOCK();
  plVar15 = plVar11 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar13 = (int *)((longlong)plVar11 + 0xc);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_140cca36e:
  local_c0 = *param_2;
  local_b8 = param_2[1];
  if (local_b8 != 0) {
    LOCK();
    *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
    UNLOCK();
  }
  local_c8 = param_2;
  FUN_140ccca82(param_1,&local_c0,param_3,param_4);
  *(byte *)(param_1 + 0x2d2) =
       *(byte *)(param_1 + 0x2d2) & 0xfe | *(byte *)(*(longlong *)(param_1 + 0x178) + 0xdc);
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 400) = iVar18;
  FUN_14020a6cc(param_1 + 0x188,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = (longlong *)0x0;
    if (DAT_14c9980d8 != 0) {
      plVar11 = DAT_14c9980d0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,0);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 1;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0x17);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x19c) = iVar18;
  FUN_14020a6cc(param_1 + 0x194,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,1);
  }
  FUN_140ccc900(lVar8,&local_88,uVar5,param_4);
  uVar4 = FUN_1405d5f74(&local_88);
  *(undefined4 *)(param_1 + 0x1a8) = uVar4;
  FUN_140841e14(param_1 + 0x1a0,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_70) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,1);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 2;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,2);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x1b4) = iVar18;
  FUN_14020a6cc(param_1 + 0x1ac,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,2);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 4;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0x15);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
    bVar12 = 3;
  }
  else {
    FUN_1400b56fe(&local_88,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    bVar12 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8();
      bVar12 = local_90;
    }
  }
  *(int *)(param_1 + 0x1b8) = iVar18;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar12 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,3);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 8;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,5);
  }
  FUN_140ccc900(lVar8,&local_88,uVar5,param_4);
  uVar4 = FUN_1405d5f74(&local_88);
  *(undefined4 *)(param_1 + 0x1e0) = uVar4;
  FUN_140841e14(param_1 + 0x1d8,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_70) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,4);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 0x10;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,3);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x1c8) = iVar18;
  FUN_14020a6cc(param_1 + 0x1c0,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,4);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x1d4) = iVar18;
  FUN_14020a6cc(param_1 + 0x1cc,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,6);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x1ec) = iVar18;
  FUN_14020a6cc(param_1 + 0x1e4,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,5);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 0x20;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,7);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x1f8) = iVar18;
  FUN_14020a6cc(param_1 + 0x1f0,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,6);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 0x40;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,8);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x204) = iVar18;
  FUN_14020a6cc(param_1 + 0x1fc,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,7);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 0x80;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  uVar5 = FUN_1405faa04(*(longlong *)(param_1 + 0x178) + 0xe8);
  *(undefined8 *)(param_1 + 0x270) = uVar5;
  lVar8 = *(longlong *)(param_1 + 0x178);
  uVar6 = 0;
  (**(code **)(*(longlong *)(param_1 + 0x278) + 0x20))(param_1 + 0x278,0);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(lVar8 + 0x148);
  FUN_1406022fe(param_1 + 0x288,lVar8 + 0x150);
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 != 0) {
    uVar6 = FUN_1403f69f4(lVar7,uVar5,9);
  }
  FUN_140ccc900(lVar8,local_b0,uVar6,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x210) = iVar18;
  FUN_14020a6cc(param_1 + 0x208,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,8);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 0x100;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,10);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x21c) = iVar18;
  FUN_14020a6cc(param_1 + 0x214,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0x14);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
    bVar12 = 3;
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = local_88;
    if (local_68 == 0) {
      iVar18 = 0x3f800000;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    bVar12 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar12 = local_90;
    }
  }
  *(int *)(param_1 + 0x1bc) = iVar18;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar12 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *local_d0;
  if (*(int *)(lVar8 + 0xa0) < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = **(undefined8 **)(lVar8 + 0x98);
  }
  *(undefined8 *)(param_1 + 0x2f0) = uVar5;
  lVar7 = *(longlong *)(lVar8 + 0x170);
  if (lVar7 == 0) {
    local_b0[0] = *(undefined8 *****)(lVar8 + 0x160);
    FUN_1446dcdd4(&local_88);
    if (DAT_14cb95020 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_144837462(DAT_14cb95020,&local_88);
    }
    if (CONCAT62(uStack_6e,local_70) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar8 + 0x170) = lVar7;
  }
  *(longlong *)(param_1 + 0x2b0) = lVar7;
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0xb);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
    bVar12 = 3;
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    bVar12 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar12 = local_90;
    }
  }
  *(int *)(param_1 + 0x2b8) = iVar18;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar12 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0xc);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
    bVar12 = 3;
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    bVar12 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar12 = local_90;
    }
  }
  *(int *)(param_1 + 700) = iVar18;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar12 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0xd);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x228) = iVar18;
  FUN_14020a6cc(param_1 + 0x220,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0x16);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x234) = iVar18;
  FUN_14020a6cc(param_1 + 0x22c,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0xe);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x240) = iVar18;
  FUN_14020a6cc(param_1 + 0x238,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0xf);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x24c) = iVar18;
  FUN_14020a6cc(param_1 + 0x244,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0x10);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 1) {
    bVar17 = (int)local_b0[0] != 0;
    bVar12 = 1;
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,1);
    bVar17 = local_68 != 0;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    bVar12 = local_88 != 0;
    if (pcVar2 != (code *)0x0) {
      local_d0 = (longlong *)CONCAT71(local_d0._1_7_,local_88 != 0);
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
      bVar12 = (byte)local_d0;
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    bVar17 = (bool)(bVar17 & bVar12);
    bVar12 = local_90;
  }
  *(bool *)(param_1 + 0x250) = bVar17;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar12 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0x11);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x25c) = iVar18;
  FUN_14020a6cc(param_1 + 0x254,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if (uVar3 < 0xffffffff00000000) {
    plVar11 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar11 = (longlong *)0x0;
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,9);
  }
  else {
    uVar14 = (uint)uVar3;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar14 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar8 + 8);
        }
        *puVar10 = *puVar10 | 0x200;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0x12);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(int *)(param_1 + 0x268) = iVar18;
  FUN_14020a6cc(param_1 + 0x260,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *param_3;
  uVar5 = FUN_14083c23d();
  lVar7 = *(longlong *)(lVar8 + 0x200);
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar7,uVar5,0x13);
  }
  FUN_140ccc900(lVar8,local_b0,uVar5,param_4);
  if (local_90 == 3) {
    uVar14 = 3;
    iVar18 = (int)local_b0[0];
  }
  else {
    piVar13 = &local_88;
    FUN_1400b56fe(piVar13,local_b0,3);
    iVar18 = 0;
    if (local_68 != 0) {
      iVar18 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        piVar13 = (int *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(piVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    uVar14 = (uint)local_90;
  }
  *(int *)(param_1 + 0x2c0) = iVar18;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar14 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppppuVar16 = local_b0;
    if (0x18 < local_98) {
      pppppuVar16 = (undefined8 *****)local_b0[0];
    }
    (*pcVar2)(pppppuVar16);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar8 = *(longlong *)(param_1 + 0x178);
  *(byte *)(param_1 + 0x2d0) = *(byte *)(param_1 + 0x2d0) & 0xbf | *(char *)(lVar8 + 0x2b0) << 6;
  bVar12 = *(byte *)(param_1 + 0x2d1) & 0xfb | *(char *)(lVar8 + 0x2b3) << 2;
  *(byte *)(param_1 + 0x2d1) = bVar12;
  *(byte *)(param_1 + 0x2d1) = bVar12 & 0xbf | *(char *)(lVar8 + 0x2b7) << 6;
  if ((*(char *)(lVar8 + 0x2b1) == '\x01') && (0 < *(int *)(lVar8 + 0xa0))) {
    *(char *)(param_1 + 0x2f8) = (char)*(int *)(lVar8 + 0xa0) + -1;
  }
  FUN_140ccc9ac(param_1);
  plVar11 = (longlong *)local_c8[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar11 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar13 = (int *)((longlong)plVar11 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ccc900 FUN_140ccc900 body=172 status=ok
// SIG undefined FUN_140ccc900(void)

void FUN_140ccc900(longlong param_1,float *param_2,longlong param_3,byte param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  uVar5 = 1 << (param_4 & 0x1f);
  if (((param_3 != 0) && ((*(uint *)(param_1 + 0x288) & uVar5) != 0)) &&
     ((longlong)*(int *)(param_1 + 0x298) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x290);
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar4) == param_3) &&
         ((*(uint *)(lVar2 + 0x18 + lVar4) & uVar5) != 0)) {
        fVar6 = *(float *)(lVar2 + 0xc + lVar4);
        auVar7 = ZEXT416((uint)fVar6);
        cVar1 = *(char *)(lVar2 + 0x14 + lVar4);
        if (cVar1 == '\x03') {
          auVar7 = roundps(auVar7,ZEXT416((uint)fVar6),2);
          fVar6 = auVar7._0_4_;
        }
        else {
          if (cVar1 != '\x02') {
            if (cVar1 != '\x01') goto LAB_140ccc978;
            auVar7 = ZEXT416((uint)(fVar6 + 0.5));
          }
          auVar7 = roundps(auVar7,ZEXT416(auVar7._0_4_),1);
          fVar6 = auVar7._0_4_;
        }
LAB_140ccc978:
        *(undefined2 *)(param_2 + 6) = 4;
        *param_2 = fVar6;
        uVar3 = 3;
        goto LAB_140ccc958;
      }
      lVar4 = lVar4 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x298) * 0x20 != lVar4);
  }
  *(undefined2 *)(param_2 + 6) = 0;
  uVar3 = 0;
LAB_140ccc958:
  *(undefined1 *)(param_2 + 8) = uVar3;
  return;
}



// FUNCTION 140ccc9ac FUN_140ccc9ac body=212 status=ok
// SIG undefined FUN_140ccc9ac(void)

void FUN_140ccc9ac(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(byte *)(param_1 + 0x2d1) & 2) == 0) &&
      (lVar1 = *(longlong *)(param_1 + 0x178), *(longlong *)(lVar1 + 0x1c0) != 0)) &&
     (*(int *)(lVar1 + 0x1c8) - 1U < 0xfffffffe)) {
    local_30 = *(undefined8 *)(param_1 + 0x30);
    local_28 = *(undefined4 *)(param_1 + 500);
    local_20 = *(undefined8 *)(param_1 + 0x270);
    FUN_141125464(lVar1 + 0x1c0,&local_48);
    if ((*(longlong *)(param_1 + 0x298) != local_48) || (*(int *)(param_1 + 0x2a0) != local_40)) {
      *(longlong *)(param_1 + 0x298) = local_48;
      *(int *)(param_1 + 0x2a0) = local_40;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ccca82 FUN_140ccca82 body=4218 status=ok
// SIG undefined FUN_140ccca82(void)

void FUN_140ccca82(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined8 ****ppppuVar12;
  undefined1 auStack_d8 [40];
  undefined8 ***local_b0 [3];
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  undefined6 uStack_6e;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    plVar11 = *(longlong **)(param_1 + 0xa8);
    if (plVar11 == (longlong *)0x0) goto LAB_140cccb0b;
    *(undefined8 *)(param_1 + 0xa8) = 0;
LAB_140ccd708:
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_140cccb0b;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xa0) = uVar9;
    plVar11 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 == plVar11) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    else {
      *(longlong **)(param_1 + 0xa8) = plVar3;
      if (plVar11 != (longlong *)0x0) goto LAB_140ccd708;
    }
  }
  LOCK();
  plVar11 = plVar3 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_140cccb0b:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar3 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,0);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
    bVar7 = 3;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = local_88;
    if (local_68 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    bVar7 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar7 = local_90;
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar8;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,5);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0xf8) = uVar8;
  FUN_14020a6cc(param_1 + 0xf0,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,6);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0x104) = uVar8;
  FUN_14020a6cc(param_1 + 0xfc,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,7);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0x110) = uVar8;
  FUN_14020a6cc(param_1 + 0x108,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,2);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0x128) = uVar8;
  FUN_14020a6cc(param_1 + 0x120,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,3);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0x11c) = uVar8;
  FUN_14020a6cc(param_1 + 0x114,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  *(byte *)(param_1 + 300) = *(byte *)(*(longlong *)(param_1 + 0xa0) + 0x31) >> 5 & 1;
  *(byte *)(param_1 + 0x12d) = *(byte *)(*(longlong *)(param_1 + 0xa0) + 0x31) >> 6 & 1;
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,8);
  }
  puVar10 = &local_88;
  FUN_140ccc900(lVar4,puVar10,uVar9,param_4);
  uVar8 = FUN_1405d5f74(puVar10);
  *(undefined4 *)(param_1 + 0x130) = uVar8;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_70) {
      puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar6)(puVar10);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,9);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = local_88;
    if (local_68 == 0) {
      uVar8 = 0x40a00000;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0x13c) = uVar8;
  FUN_14020a6cc(param_1 + 0x134,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,10);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = local_88;
    if (local_68 == 0) {
      uVar8 = 0x3e4ccccd;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0x148) = uVar8;
  FUN_14020a6cc(param_1 + 0x140,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,1);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0x154) = uVar8;
  FUN_14020a6cc(param_1 + 0x14c,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,0xb);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = local_88;
    if (local_68 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0x160) = uVar8;
  FUN_14020a6cc(param_1 + 0x158,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  lVar4 = *param_3;
  uVar9 = FUN_14083e305();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar5,uVar9,4);
  }
  FUN_140ccc900(lVar4,local_b0,uVar9,param_4);
  if (local_90 == 3) {
    uVar8 = local_b0[0]._0_4_;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,local_b0,3);
    uVar8 = local_88;
    if (local_68 == 0) {
      uVar8 = 0x3e800000;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_1 + 0x16c) = uVar8;
  FUN_14020a6cc(param_1 + 0x164,1);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar12 = local_b0;
    if (0x18 < local_98) {
      ppppuVar12 = (undefined8 ****)local_b0[0];
    }
    (*pcVar6)(ppppuVar12);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  local_b0[0] = *(undefined8 ****)(*(longlong *)(param_1 + 0xa0) + 0x50);
  FUN_1446dcdd4(&local_88);
  if (DAT_14cb94de8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_144837462(DAT_14cb94de8,&local_88);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  if (CONCAT62(uStack_6e,local_70) != 0) {
    FUN_1400020a8();
  }
  local_b0[0] = *(undefined8 ****)(*(longlong *)(param_1 + 0xa0) + 0x68);
  FUN_1446dcdd4(&local_88);
  if (DAT_14cb94de8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_144837462(DAT_14cb94de8,&local_88);
  }
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  if (CONCAT62(uStack_6e,local_70) != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar3 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ccdafe FUN_140ccdafe body=3651 status=ok
// SIG undefined FUN_140ccdafe(void)

float FUN_140ccdafe(longlong *param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
                   float param_6,float *param_7,undefined1 param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  double *pdVar14;
  float *pfVar15;
  float *pfVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  float *pfVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_2a8 [32];
  float *local_288;
  float *local_280;
  float *local_278;
  float *local_270;
  float *local_268;
  float *local_260;
  float *local_258;
  undefined1 local_250;
  uint local_240;
  int local_23c;
  float *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  float *local_228;
  undefined4 local_21c;
  longlong local_218;
  longlong *local_210;
  undefined8 local_208;
  longlong local_200;
  float local_1f4;
  float *local_1f0;
  longlong *local_1e8;
  int local_1dc;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  float *local_1a0;
  float *local_198;
  undefined1 local_190;
  undefined1 local_18f;
  byte local_18e;
  byte local_18d;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float *local_120;
  float *local_118;
  float *local_110;
  float local_104;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_104 = 1.0 / param_3[2];
  local_118 = &local_104;
  plVar7 = (longlong *)((longlong)param_1 + 0x431);
  if (*(char *)((longlong)param_1 + 0x151) != '\0') {
    plVar7 = param_1 + 0x2a;
  }
  cVar4 = (char)*plVar7;
  local_208 = CONCAT71((int7)((ulonglong)(param_1 + 0x2a) >> 8),cVar4);
  uVar19 = *(uint *)(param_1 + 7);
  uVar11 = (ulonglong)uVar19;
  uVar10 = 0;
  local_238 = param_4;
  local_120 = param_3;
  local_110 = param_4;
  fVar35 = param_6;
  if ((int)uVar19 < 2) {
LAB_140ccdbfa:
    iVar5 = (int)local_208;
    if ((int)uVar19 < 1) goto LAB_140cce26a;
  }
  else {
    local_228 = param_3;
    local_218 = param_2;
    if (cVar4 == '\x02') {
      dVar23 = (double)local_104;
      fVar34 = param_3[7];
      fVar31 = param_3[8];
      fVar30 = param_3[10];
      fVar21 = param_3[9];
      local_1f0 = (float *)CONCAT44(local_1f0._4_4_,param_3[0xc]);
      fVar24 = param_3[0xb];
      fVar27 = param_4[2];
      fVar28 = *param_4;
      fVar33 = param_4[1];
      local_1f4 = param_4[3];
      pdVar14 = (double *)(param_1[6] + 0x48);
      uVar17 = 0;
      uVar10 = 0;
      do {
        fVar36 = (float)(pdVar14[-2] * dVar23);
        fVar25 = (float)(*pdVar14 * dVar23 + pdVar14[-2] * dVar23) - fVar36;
        fVar26 = (float)(pdVar14[-3] * dVar23);
        fVar29 = (float)(pdVar14[-1] * dVar23 + pdVar14[-3] * dVar23) - fVar26;
        local_1a8 = (longlong *)
                    CONCAT44(fVar26 * fVar31 + fVar30 * fVar36 + local_1f0._0_4_,
                             fVar26 * fVar34 + fVar36 * fVar21 + fVar24);
        local_1a0 = (float *)CONCAT44(fVar29 * fVar31 + fVar30 * 0.0,fVar29 * fVar34 + fVar21 * 0.0)
        ;
        local_198 = (float *)CONCAT44(fVar25 * fVar30 + fVar31 * 0.0,fVar34 * 0.0 + fVar25 * fVar21)
        ;
        FUN_144b01024(&local_1a8,&local_100);
        if ((fVar33 <= local_100._4_4_ && (!NAN(fVar27) && !NAN(fVar28))) &&
           (local_f8._4_4_ <= local_1f4)) {
          uVar10 = uVar17 & 0xffffffff;
        }
        uVar17 = uVar17 + 1;
        pdVar14 = pdVar14 + 0xd;
      } while (uVar11 != uVar17);
      iVar5 = (int)uVar10;
LAB_140cce7b6:
      uVar19 = iVar5 + 1;
      param_3 = local_228;
      param_2 = local_218;
      goto LAB_140ccdbfa;
    }
    if (cVar4 == '\x01') {
      puVar13 = (undefined8 *)(param_1[6] + 0x40);
      uVar17 = 0;
      uVar10 = 0;
      do {
        local_138 = *puVar13;
        uStack_130 = puVar13[1];
        local_148 = puVar13[-2];
        uStack_140 = puVar13[-1];
        cVar4 = FUN_1428fe644(&local_120,&local_148,&local_138);
        if (cVar4 != '\0') {
          uVar10 = uVar17 & 0xffffffff;
        }
        uVar17 = uVar17 + 1;
        puVar13 = puVar13 + 0xd;
      } while (uVar11 != uVar17);
      iVar5 = (int)uVar10;
      goto LAB_140cce7b6;
    }
    uVar10 = (ulonglong)(uVar19 - 1);
    iVar5 = (int)local_208;
  }
  local_1f0 = (float *)(param_1 + 0x2c);
  local_1dc = iVar5 + -1;
  local_1c0 = (ulonglong)uVar19;
  uVar17 = 0;
  pfVar20 = local_238;
  local_210 = param_1;
  local_1d0 = uVar10;
  local_1c8 = uVar11;
  do {
    lVar12 = param_1[6];
    lVar8 = uVar17 * 0x68;
    dVar22 = (double)*local_118;
    dVar23 = *(double *)(lVar12 + 0x38 + lVar8) * dVar22;
    dVar32 = *(double *)(lVar12 + 0x30 + lVar8) * dVar22;
    fVar27 = (float)dVar23;
    fVar21 = (float)dVar32;
    fVar24 = (float)(dVar22 * *(double *)(lVar12 + 0x40 + lVar8) + dVar32) - fVar21;
    fVar28 = (float)(*(double *)(lVar12 + 0x48 + lVar8) * dVar22 + dVar23) - fVar27;
    fVar34 = local_120[7];
    fVar31 = local_120[9];
    fVar33 = fVar34 * 0.0 + fVar28 * fVar31;
    fVar30 = fVar34 * fVar21 + fVar31 * fVar27 + local_120[0xb];
    fVar34 = fVar24 * fVar34 + fVar31 * 0.0 + fVar30;
    fVar36 = fVar33 + fVar30;
    fVar33 = fVar33 + fVar34;
    fVar31 = fVar34;
    if (fVar36 <= fVar34) {
      fVar31 = fVar36;
    }
    if (fVar33 <= fVar31) {
      fVar31 = fVar33;
    }
    fVar25 = fVar30;
    if (fVar31 <= fVar30) {
      fVar25 = fVar31;
    }
    local_1d8 = uVar17;
    if (fVar25 < local_110[2] || fVar25 == local_110[2]) {
      if (fVar34 <= fVar36) {
        fVar34 = fVar36;
      }
      if (fVar34 <= fVar33) {
        fVar34 = fVar33;
      }
      if (fVar30 <= fVar34) {
        fVar30 = fVar34;
      }
      if (*local_110 <= fVar30) {
        fVar34 = local_120[8];
        fVar31 = local_120[10];
        fVar28 = fVar34 * 0.0 + fVar28 * fVar31;
        fVar30 = fVar21 * fVar34 + fVar27 * fVar31 + local_120[0xc];
        fVar34 = fVar24 * fVar34 + fVar31 * 0.0 + fVar30;
        fVar21 = fVar30 + fVar28;
        fVar28 = fVar28 + fVar34;
        fVar31 = fVar34;
        if (fVar21 <= fVar34) {
          fVar31 = fVar21;
        }
        if (fVar28 <= fVar31) {
          fVar31 = fVar28;
        }
        fVar24 = fVar30;
        if (fVar31 <= fVar30) {
          fVar24 = fVar31;
        }
        if (fVar24 < local_110[3] || fVar24 == local_110[3]) {
          if (fVar34 <= fVar21) {
            fVar34 = fVar21;
          }
          if (fVar34 <= fVar28) {
            fVar34 = fVar28;
          }
          if (fVar30 <= fVar34) {
            fVar30 = fVar34;
          }
          if (local_110[1] <= fVar30) {
            plVar18 = (longlong *)(lVar12 + lVar8);
            local_258 = (float *)CONCAT71(local_258._1_7_,param_8);
            local_260 = param_7;
            local_268 = (float *)CONCAT44(local_268._4_4_,param_6);
            local_270 = param_5;
            local_288 = local_1f0;
            plVar7 = param_1;
            local_280 = param_3;
            local_278 = pfVar20;
            local_1f4 = fVar35;
            iVar5 = (**(code **)(*param_1 + 0x48))(param_1,param_2,plVar18,plVar18 + 2);
            local_22c = 0;
            pfVar15 = (float *)&DAT_ffffffff;
            if ((byte)local_1dc < 3) {
              local_23c = iVar5;
              local_228 = param_3;
              local_218 = param_2;
              if ((int)local_1c8 < 2) {
                uVar19 = *(uint *)(local_210 + 0x16);
                uVar10 = (ulonglong)uVar19;
                if ((char)plVar18[0xc] == '\x01') {
                  local_22c = 0;
                  if (uVar19 == 0) {
LAB_140cce858:
                    local_22c = 0;
                    goto LAB_140cce860;
                  }
                  local_21c = (undefined4)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
                  if (uVar19 != 2) {
LAB_140cce5bc:
                    local_240 = (uint)local_208;
                    goto LAB_140cce3fc;
                  }
                }
                else {
                  local_22c = 0;
                  if (uVar19 != 0) {
                    if (uVar19 != 2) {
                      local_21c = (undefined4)CONCAT71((uint7)(uint3)(uVar19 >> 8),1);
                      goto LAB_140cce5bc;
                    }
                    goto LAB_140cce858;
                  }
                }
LAB_140cce813:
                local_240 = *(uint *)(plVar18 + 1);
                uVar19 = 0;
                iVar6 = 1;
                uVar9 = CONCAT71((uint7)(uint3)(local_240 >> 8),1);
                local_230 = (undefined4)uVar9;
              }
              else {
                if (((char)local_208 == '\x03') || (local_1d8 != (local_1d0 & 0xffffffff))) {
                  local_21c = 0;
                  local_240 = 0;
LAB_140cce3fc:
                  local_22c = 0;
                  local_230 = 0;
                  iVar6 = 0;
                  param_1 = local_210;
                  pfVar20 = local_238;
                  goto LAB_140ccde69;
                }
                lVar12 = (local_1d0 & 0xffffffff) + 1;
                uVar10 = CONCAT71((int7)((ulonglong)lVar12 >> 8),lVar12 < (int)local_210[7]);
                local_22c = (undefined4)uVar10;
                if ((char)plVar18[0xc] == '\0') goto LAB_140cce813;
LAB_140cce860:
                uVar19 = (int)plVar18[1] - 1;
                iVar6 = -1;
                uVar9 = CONCAT71((int7)(uVar10 >> 8),2);
                local_230 = (undefined4)uVar9;
                local_240 = 0xffffffff;
              }
              local_21c = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
              if (uVar19 != local_240) {
                lVar12 = (longlong)(int)uVar19 << 4;
                local_200 = (longlong)iVar6 << 4;
                do {
                  lVar8 = *plVar18;
                  plVar7 = *(longlong **)(lVar8 + lVar12);
                  (**(code **)(*plVar7 + 0x18))(plVar7,local_158);
                  plVar7 = *(longlong **)(lVar8 + lVar12);
                  (**(code **)(*plVar7 + 0x38))(plVar7,local_168);
                  cVar4 = FUN_1428fe644(&local_120,local_168,local_158);
                  if (cVar4 != '\0') {
                    pfVar15 = (float *)(ulonglong)uVar19;
                  }
                  uVar19 = uVar19 + iVar6;
                  lVar12 = lVar12 + local_200;
                } while (local_240 != uVar19);
              }
              local_240 = (uint)local_208;
              param_3 = local_228;
              param_2 = local_218;
              param_1 = local_210;
              pfVar20 = local_238;
              iVar5 = local_23c;
            }
            else {
              local_21c = 0;
              local_240 = 0;
              local_230 = 0;
              iVar6 = 0;
            }
LAB_140ccde69:
            iVar5 = iVar5 + 1;
            if (0 < (int)plVar18[1]) {
              local_218 = (longlong)iVar6;
              lVar12 = 0;
              pfVar16 = (float *)0x0;
              local_23c = iVar5;
              local_228 = pfVar15;
              do {
                local_200 = CONCAT44(local_200._4_4_,iVar5);
                lVar8 = *plVar18;
                (**(code **)(**(longlong **)(lVar8 + lVar12) + 0x18))
                          (*(longlong **)(lVar8 + lVar12),&local_178);
                (**(code **)(**(longlong **)(lVar8 + lVar12) + 0x38))
                          (*(longlong **)(lVar8 + lVar12),&local_188);
                dVar23 = (double)*local_118;
                fVar24 = (float)(local_180 * dVar23);
                fVar30 = (float)(local_188 * dVar23);
                fVar21 = (float)(dVar23 * local_178 + local_188 * dVar23) - fVar30;
                fVar27 = (float)(local_170 * dVar23 + local_180 * dVar23) - fVar24;
                fVar35 = local_120[7];
                fVar34 = local_120[9];
                fVar28 = fVar35 * 0.0 + fVar27 * fVar34;
                fVar31 = fVar35 * fVar30 + fVar34 * fVar24 + local_120[0xb];
                fVar35 = fVar21 * fVar35 + fVar34 * 0.0 + fVar31;
                fVar33 = fVar28 + fVar31;
                fVar28 = fVar28 + fVar35;
                fVar34 = fVar35;
                if (fVar33 <= fVar35) {
                  fVar34 = fVar33;
                }
                if (fVar28 <= fVar34) {
                  fVar34 = fVar28;
                }
                fVar36 = fVar31;
                if (fVar34 <= fVar31) {
                  fVar36 = fVar34;
                }
                if (local_110[2] <= fVar36 && fVar36 != local_110[2]) {
LAB_140cce302:
                  pfVar20 = local_238;
                  iVar5 = (int)local_200;
                }
                else {
                  if (fVar35 <= fVar33) {
                    fVar35 = fVar33;
                  }
                  if (fVar35 <= fVar28) {
                    fVar35 = fVar28;
                  }
                  if (fVar31 <= fVar35) {
                    fVar31 = fVar35;
                  }
                  if (fVar31 < *local_110) goto LAB_140cce302;
                  fVar35 = local_120[8];
                  fVar34 = local_120[10];
                  fVar27 = fVar35 * 0.0 + fVar27 * fVar34;
                  fVar31 = fVar30 * fVar35 + fVar24 * fVar34 + local_120[0xc];
                  fVar35 = fVar21 * fVar35 + fVar34 * 0.0 + fVar31;
                  fVar30 = fVar27 + fVar31;
                  fVar27 = fVar27 + fVar35;
                  fVar34 = fVar35;
                  if (fVar30 <= fVar35) {
                    fVar34 = fVar30;
                  }
                  if (fVar27 <= fVar34) {
                    fVar34 = fVar27;
                  }
                  fVar21 = fVar31;
                  if (fVar34 <= fVar31) {
                    fVar21 = fVar34;
                  }
                  if (local_110[3] <= fVar21 && fVar21 != local_110[3]) goto LAB_140cce302;
                  if (fVar35 <= fVar30) {
                    fVar35 = fVar30;
                  }
                  if (fVar35 <= fVar27) {
                    fVar35 = fVar27;
                  }
                  if (fVar31 <= fVar35) {
                    fVar31 = fVar35;
                  }
                  if (fVar31 < local_110[1]) goto LAB_140cce302;
                  pfVar15 = (float *)(lVar8 + lVar12);
                  local_198 = local_1f0;
                  local_190 = (undefined1)local_240;
                  local_18f = (undefined1)local_230;
                  local_18e = local_228 == pfVar16 & (byte)local_21c;
                  if ((char)local_22c == '\0') {
                    local_18d = 0;
                  }
                  else if (local_218 + (longlong)pfVar16 < 0) {
                    local_18d = 1;
                  }
                  else {
                    local_18d = 1;
                    if ((longlong)(local_218 + (longlong)pfVar16) < (longlong)(int)plVar18[1]) {
                      local_18d = local_18e;
                    }
                  }
                  local_1a8 = plVar18;
                  local_1a0 = pfVar15;
                  (**(code **)(**(longlong **)pfVar15 + 8))(*(longlong **)pfVar15,&local_1b8);
                  plVar7 = local_1b0;
                  local_100 = local_1b8;
                  local_f8 = local_1b0;
                  if (local_1b0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
                    UNLOCK();
                    if (local_1b0 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_1b0 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_1b0)(local_1b0);
                        LOCK();
                        piVar3 = (int *)((longlong)plVar7 + 0xc);
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (*piVar3 == 0) {
                          (**(code **)(*plVar7 + 0x10))(plVar7);
                        }
                      }
                    }
                  }
                  (**(code **)(**(longlong **)pfVar15 + 0x28))(*(longlong **)pfVar15,&local_1b8);
                  plVar1 = local_1b0;
                  plVar7 = local_1b8;
                  if (local_1b0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
                    UNLOCK();
                    local_1e8 = local_1b0;
                    if (local_1b0 != (longlong *)0x0) {
                      LOCK();
                      plVar2 = local_1b0 + 1;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      UNLOCK();
                      if ((int)*plVar2 == 0) {
                        (**(code **)*local_1b0)();
                        LOCK();
                        piVar3 = (int *)((longlong)local_1e8 + 0xc);
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (*piVar3 == 0) {
                          (**(code **)(*local_1e8 + 0x10))();
                        }
                      }
                    }
                  }
                  pfVar20 = local_238;
                  if (plVar7 == (longlong *)0x0) {
                    local_268 = (float *)CONCAT71(local_268._1_7_,param_8);
                    local_270 = param_7;
                    local_278 = (float *)CONCAT44(local_278._4_4_,local_23c);
                    local_280 = param_5;
                    local_288 = local_238;
                    iVar6 = (**(code **)(*local_100 + 0x90))(local_100,param_2,&local_1a8,param_3);
                  }
                  else {
                    local_250 = param_8;
                    local_258 = param_7;
                    local_260 = (float *)CONCAT44(local_260._4_4_,local_23c);
                    local_268 = param_5;
                    local_270 = local_238;
                    local_280 = local_1f0;
                    local_288 = pfVar15;
                    local_278 = param_3;
                    iVar6 = (**(code **)(*plVar7 + 8))(plVar7,param_2,plVar18,&local_100);
                  }
                  iVar5 = (int)local_200;
                  if ((int)local_200 < iVar6) {
                    iVar5 = iVar6;
                  }
                  if (plVar1 != (longlong *)0x0) {
                    LOCK();
                    plVar7 = plVar1 + 1;
                    *(int *)plVar7 = (int)*plVar7 + -1;
                    UNLOCK();
                    if ((int)*plVar7 == 0) {
                      (**(code **)*plVar1)(plVar1);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar1 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar1 + 0x10))(plVar1);
                      }
                    }
                  }
                  plVar7 = local_f8;
                  param_1 = local_210;
                  if (local_f8 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_f8 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_f8)(local_f8);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar7 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      param_1 = local_210;
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar7 + 0x10))(plVar7);
                        param_1 = local_210;
                      }
                    }
                  }
                }
                pfVar16 = (float *)((longlong)pfVar16 + 1);
                lVar12 = lVar12 + 0x10;
              } while ((longlong)pfVar16 < (longlong)(int)plVar18[1]);
            }
            local_258 = (float *)CONCAT71(local_258._1_7_,param_8);
            local_260 = param_7;
            local_268 = (float *)CONCAT44(local_268._4_4_,iVar5);
            local_270 = param_5;
            local_288 = local_1f0;
            local_280 = param_3;
            local_278 = pfVar20;
            fVar34 = (float)(**(code **)(*param_1 + 0x48))(param_1,param_2,plVar18,plVar18 + 4);
            fVar35 = local_1f4;
            if ((int)local_1f4 < (int)fVar34) {
              fVar35 = fVar34;
            }
          }
        }
      }
    }
    uVar17 = local_1d8 + 1;
  } while (uVar17 != local_1c0);
LAB_140cce26a:
  if ((local_f0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar35;
}



// FUNCTION 140cce942 FUN_140cce942 body=264 status=ok
// SIG undefined FUN_140cce942(void)

undefined4
FUN_140cce942(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined8 param_10,undefined1 param_11)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_4[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_4;
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar6);
      plVar4 = *(longlong **)(lVar2 + 0x10 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
        param_9 = (**(code **)(*plVar3 + 8))
                            (plVar3,param_2,param_3,*(undefined4 *)(lVar2 + lVar6),
                             *(undefined4 *)(lVar2 + 4 + lVar6),param_5,param_6,param_7,param_8,
                             param_9,param_10,param_11);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      lVar6 = lVar6 + 0x18;
    } while ((longlong)(int)lVar5 * 0x18 != lVar6);
  }
  return param_9;
}



// FUNCTION 140ccea4a FUN_140ccea4a body=3714 status=ok
// SIG undefined FUN_140ccea4a(void)

int FUN_140ccea4a(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,float *param_8,byte param_9)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  float *pfVar19;
  undefined4 uVar20;
  longlong *plVar21;
  undefined2 uVar22;
  byte bVar23;
  char cVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  longlong *local_290;
  byte local_27d;
  undefined4 local_27c;
  float *local_278;
  longlong *local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 *local_250;
  longlong local_248;
  longlong *local_240;
  undefined4 local_238;
  double local_230;
  double local_228;
  longlong local_220;
  longlong *local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined2 local_1c0 [4];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [8];
  undefined1 local_198 [16];
  undefined8 local_188;
  float fStack_180;
  float fStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  longlong local_168;
  float local_160;
  undefined2 uStack_15c;
  undefined2 uStack_15a;
  undefined4 local_158;
  float fStack_154;
  undefined8 local_150;
  float fStack_148;
  undefined2 uStack_144;
  byte bStack_142;
  undefined1 uStack_141;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong *local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  puVar25 = (undefined8 *)param_3[1];
  if (*(float *)(param_1 + 0x120) <= 0.0) {
    bVar12 = false;
  }
  else {
    bVar12 = 0.0 < *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x10c) +
                   *(float *)(param_1 + 0x110) * *(float *)(param_1 + 0x110);
  }
  plVar26 = (longlong *)*param_3;
  (**(code **)(*(longlong *)*puVar25 + 0x38))((longlong *)*puVar25,local_198);
  (**(code **)(*(longlong *)*puVar25 + 0x10))((longlong *)*puVar25,local_1a0);
  (**(code **)(*(longlong *)*puVar25 + 0x20))((longlong *)*puVar25,local_1c0);
  uVar17 = local_1a8;
  fVar3 = *(float *)(param_4 + 8);
  fVar28 = *(float *)(param_1 + 0x10c);
  fVar29 = *(float *)(param_1 + 0x110);
  fVar30 = -fVar29;
  dVar7 = 0.0;
  if (fVar30 < fVar29) {
    dVar9 = (double)(fVar3 * fVar29);
  }
  else {
    dVar9 = 0.0;
  }
  fVar27 = -fVar28;
  if (fVar27 < fVar28) {
    dVar10 = (double)(fVar3 * fVar28);
  }
  else {
    dVar10 = 0.0;
  }
  if (fVar29 < fVar30) {
    dVar8 = (double)(fVar30 * fVar3);
  }
  else {
    dVar8 = 0.0;
  }
  if (fVar28 < fVar27) {
    dVar7 = (double)(fVar27 * fVar3);
  }
  if (*(int *)(*(undefined8 **)(param_1 + 0x78) + 1) == 0) {
    plVar21 = (longlong *)&DAT_149dfb77a;
  }
  else {
    plVar21 = (longlong *)**(undefined8 **)(param_1 + 0x78);
  }
  local_168 = plVar26[0xb];
  uStack_15c = local_1c0[0];
  lVar5 = *(longlong *)(param_1 + 0x98);
  local_158 = (undefined4)lVar5;
  fStack_154 = (float)((ulonglong)lVar5 >> 0x20);
  local_160 = fVar3;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_150 = *(longlong *)(param_1 + 0xa0);
  if ((local_150 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  fStack_148 = *(float *)(param_1 + 0xa8);
  uStack_144 = (undefined2)((uint)*(undefined4 *)(param_1 + 0xab) >> 8);
  bStack_142 = (byte)((uint)*(undefined4 *)(param_1 + 0xab) >> 0x18);
  local_140 = *(longlong *)(param_1 + 0xb0);
  if ((local_140 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_138 = *(undefined8 *)(param_1 + 0xb8);
  uStack_130 = *(undefined8 *)(param_1 + 0xc0);
  local_128 = *(undefined8 *)(param_1 + 200);
  local_120 = *(longlong **)(param_1 + 0xd0);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_120 + 1) = (int)local_120[1] + 1;
    UNLOCK();
  }
  uStack_118 = *(undefined4 *)(param_1 + 0xd8);
  uStack_114 = *(undefined4 *)(param_1 + 0xdc);
  uStack_110 = *(undefined4 *)(param_1 + 0xe0);
  local_10c = *(undefined8 *)(param_1 + 0xe4);
  uStack_104 = *(undefined8 *)(param_1 + 0xec);
  local_2a0 = (undefined8 *)CONCAT71(local_2a0._1_7_,uVar17);
  local_2a8 = plVar21;
  local_270 = plVar26;
  local_250 = puVar25;
  FUN_141720e02(&local_1d0,&local_1b8,&local_168,local_1a0);
  plVar26 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_120 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  if (((byte)(*(char *)(param_3 + 3) - 1U) < 3) && (*(char *)((longlong)param_3 + 0x19) != '\0')) {
    local_2a8 = (longlong *)(param_1 + 0x98);
    FUN_146a23c16(local_1b8,&local_168,*(undefined4 *)(param_4 + 8));
    plVar26 = (longlong *)CONCAT26(uStack_15a,CONCAT24(uStack_15c,local_160));
    local_248 = local_168;
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      UNLOCK();
      plVar21 = (longlong *)CONCAT26(uStack_15a,CONCAT24(uStack_15c,local_160));
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar21 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          local_268 = local_168;
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          local_248 = local_268;
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            local_248 = local_268;
          }
        }
      }
    }
    uVar20 = CONCAT13(*(undefined1 *)((longlong)param_3 + 0x1b),
                      CONCAT12(*(undefined1 *)((longlong)param_3 + 0x1a),
                               *(ushort *)(param_3 + 3) << 8 | *(ushort *)(param_3 + 3) >> 8));
  }
  else {
    local_248 = 0;
    plVar26 = (longlong *)0x0;
    uVar20 = 0;
  }
  cVar24 = (param_9 ^ 1) << 5;
  puVar25 = local_250;
  local_238 = uVar20;
  if (!bVar12) goto LAB_140ccf415;
  pfVar19 = (float *)(param_1 + 0x114);
  local_1e8 = local_1d0;
  uStack_1e0 = local_1c8;
  if (local_1c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
    UNLOCK();
  }
  local_27c = uVar20;
  local_268 = local_248;
  local_258 = plVar26;
  if (((((*pfVar19 != *(float *)(param_1 + 0xb8)) ||
        (NAN(*pfVar19) || NAN(*(float *)(param_1 + 0xb8)))) ||
       (*(float *)(param_1 + 0x118) != *(float *)(param_1 + 0xbc))) ||
      ((NAN(*(float *)(param_1 + 0x118)) || NAN(*(float *)(param_1 + 0xbc)) ||
       (*(float *)(param_1 + 0x11c) != *(float *)(param_1 + 0xc0))))) ||
     (NAN(*(float *)(param_1 + 0x11c)) || NAN(*(float *)(param_1 + 0xc0)))) {
LAB_140cceead:
    lVar5 = *(longlong *)(param_1 + 0x98);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      local_278 = pfVar19;
      FUN_1456cec3c(lVar5);
      pfVar19 = local_278;
    }
    local_278 = (float *)CONCAT71(local_278._1_7_,cVar24);
    lVar6 = *(longlong *)(param_1 + 0xa0);
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    fVar28 = *(float *)(param_1 + 0xa8);
    bVar23 = *(byte *)(param_1 + 0xae);
    uVar22 = *(undefined2 *)(param_1 + 0xac);
    if ((*(longlong *)(param_1 + 0xb0) != 0 & DAT_14c950c29) == 1) {
      local_260 = CONCAT62(local_260._2_6_,*(undefined2 *)(param_1 + 0xac));
      local_27d = *(byte *)(param_1 + 0xae);
      FUN_1456cec3c();
      bVar23 = local_27d;
      uVar22 = (undefined2)local_260;
      uVar20 = local_27c;
    }
    uVar18 = *(undefined8 *)(param_1 + 200);
    plVar26 = *(longlong **)(param_1 + 0xd0);
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      UNLOCK();
    }
    local_188 = *(undefined8 *)(param_1 + 0xd8);
    uStack_178 = *(undefined4 *)(param_1 + 0xe8);
    uStack_174 = *(undefined4 *)(param_1 + 0xec);
    uStack_170 = *(undefined4 *)(param_1 + 0xf0);
    fStack_180 = (float)*(undefined8 *)(param_1 + 0xe0);
    fStack_17c = (float)((ulonglong)*(undefined8 *)(param_1 + 0xe0) >> 0x20);
    local_1f8 = *(double *)pfVar19;
    uStack_1f0 = *(double *)(pfVar19 + 2);
    fVar29 = 0.0;
    if ((bVar23 & 1) != 0) {
      fVar29 = fVar28;
    }
    if (*(int *)(*(undefined8 **)(param_1 + 0x78) + 1) == 0) {
      plVar21 = (longlong *)&DAT_149dfb77a;
    }
    else {
      plVar21 = (longlong *)**(undefined8 **)(param_1 + 0x78);
    }
    cVar24 = (char)local_278;
    local_278 = (float *)CONCAT71(local_278._1_7_,local_1a8);
    local_160 = *(float *)(param_4 + 8);
    local_168 = local_270[0xb];
    uStack_15c = local_1c0[0];
    local_158 = (undefined4)lVar5;
    fStack_154 = (float)((ulonglong)lVar5 >> 0x20);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      local_27d = bVar23;
      local_270 = plVar21;
      local_260 = uVar18;
      FUN_1456cec3c(lVar5);
      uVar18 = local_260;
      plVar21 = local_270;
      bVar23 = local_27d;
      uVar20 = local_27c;
    }
    local_150 = lVar6;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      local_27d = bVar23;
      local_270 = plVar21;
      FUN_1456cec3c(lVar6);
      plVar21 = local_270;
      bVar23 = local_27d;
      uVar20 = local_27c;
    }
    local_140 = 0;
    local_138 = local_1f8;
    uStack_130 = uStack_1f0;
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      UNLOCK();
    }
    uStack_104 = CONCAT44(uStack_170,uStack_174);
    uStack_118 = (undefined4)local_188;
    uStack_114 = local_188._4_4_;
    uStack_110 = fStack_180;
    local_10c = CONCAT44(uStack_178,fStack_17c);
    local_2a0 = (undefined8 *)CONCAT71(local_2a0._1_7_,(char)local_278);
    local_2a8 = plVar21;
    fStack_148 = fVar29;
    uStack_144 = uVar22;
    bStack_142 = bVar23;
    local_128 = uVar18;
    local_120 = plVar26;
    FUN_141720e02(&local_208,&local_1b8,&local_168,local_1a0);
    plVar21 = uStack_1e0;
    uVar13 = (undefined4)local_1e8;
    uVar14 = local_1e8._4_4_;
    uVar15 = (undefined4)uStack_1e0;
    uVar16 = uStack_1e0._4_4_;
    local_1e8 = CONCAT44(uStack_204,local_208);
    uStack_1e0 = (longlong *)CONCAT44(uStack_1fc,uStack_200);
    local_208 = uVar13;
    uStack_204 = uVar14;
    uStack_200 = uVar15;
    uStack_1fc = uVar16;
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar21 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    plVar21 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_120 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    local_210 = uVar20;
    if (plVar26 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar26 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar26)(plVar26);
        LOCK();
        piVar1 = (int *)((longlong)plVar26 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
      }
    }
  }
  else if ((*(float *)(param_1 + 0x120) != *(float *)(param_1 + 0xc4)) ||
          (local_210 = uVar20, NAN(*(float *)(param_1 + 0x120)) || NAN(*(float *)(param_1 + 0xc4))))
  goto LAB_140cceead;
  puVar25 = local_250;
  if (local_258 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_258 + 1) = (int)local_258[1] + 1;
    UNLOCK();
  }
  fStack_17c = *(float *)(param_1 + 0xc4) * param_8[3];
  fStack_180 = *(float *)(param_1 + 0xc0) * param_8[2];
  local_188 = CONCAT44(*(float *)(param_1 + 0xbc) * param_8[1],*(float *)(param_1 + 0xb8) * *param_8
                      );
  local_1f8 = (double)CONCAT44(param_8[1] * *(float *)(param_1 + 0x118),
                               *param_8 * *(float *)(param_1 + 0x114));
  uStack_1f0 = (double)CONCAT44(param_8[3] * *(float *)(param_1 + 0x120),
                                param_8[2] * *(float *)(param_1 + 0x11c));
  local_220 = local_268;
  local_218 = local_258;
  (**(code **)(*(longlong *)*local_250 + 0x38))((longlong *)*local_250,&local_208);
  dVar11 = (double)(1.0 / fVar3);
  fVar32 = (float)((dVar9 + (double)CONCAT44(uStack_1fc,uStack_200)) * dVar11);
  fVar31 = (float)((dVar10 + (double)CONCAT44(uStack_204,local_208)) * dVar11);
  (**(code **)(*(longlong *)*puVar25 + 0x18))((longlong *)*puVar25,&local_230);
  fStack_154 = (float)(dVar11 * local_230);
  local_160 = *(float *)(param_4 + 8);
  fVar28 = *(float *)(param_4 + 0x1c);
  local_168 = CONCAT44(local_160 * fVar32 + *(float *)(param_4 + 0x10),
                       local_160 * fVar31 + *(float *)(param_4 + 0xc));
  fVar29 = *(float *)(param_4 + 0x20);
  fVar30 = *(float *)(param_4 + 0x28);
  fVar27 = *(float *)(param_4 + 0x24);
  fVar33 = fVar28 * 0.0 + fVar27;
  fStack_148 = fVar30 * 0.0 + fVar29;
  uStack_15c = 0;
  uStack_15a = 0;
  local_158 = 0;
  local_150 = CONCAT44(fVar27 * 0.0 + fVar28,(float)(local_228 * dVar11));
  uStack_144 = SUB42(fVar33,0);
  bStack_142 = (byte)((uint)fVar33 >> 0x10);
  uStack_141 = (undefined1)((uint)fVar33 >> 0x18);
  local_140 = CONCAT44(fVar31 * fVar28 + fVar32 * fVar27 + *(float *)(param_4 + 0x2c),
                       fVar29 * 0.0 + fVar30);
  local_138._0_5_ =
       CONCAT14(local_138._4_1_ & 0xfc | *(char *)(param_4 + 0x34) * '\x02' & 2U,
                fVar31 * fVar29 + fVar30 * fVar32 + *(float *)(param_4 + 0x30));
  param_7 = param_7 + 1;
  local_290 = &local_220;
  local_2a8 = (longlong *)CONCAT71(local_2a8._1_7_,cVar24);
  local_2a0 = &local_1f8;
  local_298 = &local_188;
  FUN_14286987a(param_6,param_7,&local_168,&local_1e8);
  plVar21 = uStack_1e0;
  local_248 = local_268;
  plVar26 = local_258;
  local_238 = local_27c;
  if (uStack_1e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_1e0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*uStack_1e0)(uStack_1e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_248 = local_268;
      plVar26 = local_258;
      local_238 = local_27c;
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
        local_248 = local_268;
        plVar26 = local_258;
        local_238 = local_27c;
      }
    }
  }
LAB_140ccf415:
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
    UNLOCK();
  }
  fVar28 = param_8[3];
  fStack_17c = *(float *)(param_1 + 0xc4) * fVar28;
  fVar29 = param_8[2];
  fStack_180 = *(float *)(param_1 + 0xc0) * fVar29;
  fVar30 = *param_8;
  fVar27 = param_8[1];
  local_188 = CONCAT44(*(float *)(param_1 + 0xbc) * fVar27,*(float *)(param_1 + 0xb8) * fVar30);
  cVar4 = *(char *)(param_1 + 0x108);
  pfVar19 = (float *)(param_1 + 0xf8);
  local_240 = plVar26;
  if (cVar4 != '\0') {
    if (cVar4 == '\x01') {
      pfVar19 = (float *)FUN_1400c06fe(pfVar19);
      fVar28 = param_8[3];
      fVar29 = param_8[2];
      fVar30 = *param_8;
      fVar27 = param_8[1];
    }
    else if (cVar4 == '\x03') {
      pfVar19 = param_8 + 8;
    }
    else {
      pfVar19 = param_8 + 4;
    }
  }
  local_1e8 = CONCAT44(fVar27 * pfVar19[1],fVar30 * *pfVar19);
  uStack_1e0 = (longlong *)CONCAT44(fVar28 * pfVar19[3],fVar29 * pfVar19[2]);
  (**(code **)(*(longlong *)*puVar25 + 0x38))((longlong *)*puVar25,&local_1f8);
  dVar9 = (double)(1.0 / fVar3);
  fVar31 = (float)((dVar8 + uStack_1f0) * dVar9);
  fVar27 = (float)((dVar7 + local_1f8) * dVar9);
  (**(code **)(*(longlong *)*puVar25 + 0x18))((longlong *)*puVar25,&local_208);
  fStack_154 = (float)(dVar9 * (double)CONCAT44(uStack_204,local_208));
  local_160 = *(float *)(param_4 + 8);
  fVar3 = *(float *)(param_4 + 0x1c);
  local_168 = CONCAT44(local_160 * fVar31 + *(float *)(param_4 + 0x10),
                       local_160 * fVar27 + *(float *)(param_4 + 0xc));
  fVar28 = *(float *)(param_4 + 0x20);
  fVar29 = *(float *)(param_4 + 0x28);
  fVar30 = *(float *)(param_4 + 0x24);
  fVar32 = fVar3 * 0.0 + fVar30;
  fStack_148 = fVar29 * 0.0 + fVar28;
  uStack_15c = 0;
  uStack_15a = 0;
  local_158 = 0;
  local_150 = CONCAT44(fVar30 * 0.0 + fVar3,(float)((double)CONCAT44(uStack_1fc,uStack_200) * dVar9)
                      );
  uStack_144 = SUB42(fVar32,0);
  bStack_142 = (byte)((uint)fVar32 >> 0x10);
  uStack_141 = (undefined1)((uint)fVar32 >> 0x18);
  local_140 = CONCAT44(fVar27 * fVar3 + fVar31 * fVar30 + *(float *)(param_4 + 0x2c),
                       fVar28 * 0.0 + fVar29);
  local_138._0_5_ =
       CONCAT14(local_138._4_1_ & 0xfc | *(char *)(param_4 + 0x34) * '\x02' & 2U,
                fVar27 * fVar28 + fVar29 * fVar31 + *(float *)(param_4 + 0x30));
  local_290 = &local_248;
  local_298 = &local_188;
  local_2a8 = (longlong *)CONCAT71(local_2a8._1_7_,cVar24);
  local_2a0 = &local_1e8;
  FUN_14286987a(param_6,param_7 + 1,&local_168,&local_1d0);
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar26 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar26)(plVar26);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  if (local_1c8 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_1c8 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*local_1c8)(local_1c8);
      LOCK();
      piVar1 = (int *)((longlong)local_1c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1c8 + 0x10))(local_1c8);
      }
    }
  }
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_1b0 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar1 = (int *)((longlong)local_1b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1b0 + 0x10))(local_1b0);
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_7 + 1;
}



// FUNCTION 140ccf8ce FUN_140ccf8ce body=118 status=ok
// SIG undefined FUN_140ccf8ce(void)

void FUN_140ccf8ce(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a4e0980;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140ccf944(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140ccf97c(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ccf940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140ccf944 FUN_140ccf944 body=55 status=ok
// SIG undefined FUN_140ccf944(void)

void FUN_140ccf944(longlong *param_1)

{
  FUN_140ccf9b4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ccf97c FUN_140ccf97c body=55 status=ok
// SIG undefined FUN_140ccf97c(void)

void FUN_140ccf97c(longlong *param_1)

{
  FUN_140ccfa30(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ccf9b4 FUN_140ccf9b4 body=123 status=ok
// SIG undefined FUN_140ccf9b4(void)

void FUN_140ccf9b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
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



// FUNCTION 140ccfa30 FUN_140ccfa30 body=123 status=ok
// SIG undefined FUN_140ccfa30(void)

void FUN_140ccfa30(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1407f13e6(param_1,param_2);
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



// FUNCTION 140ccfaac FUN_140ccfaac body=59 status=ok
// SIG undefined FUN_140ccfaac(void)

void FUN_140ccfaac(longlong param_1,int param_2)

{
  if ((param_2 < 1) && (param_2 = 1, *(longlong *)(param_1 + 0x18) != 0)) {
    FUN_1446efa72(param_1 + 0x18,0,0,0x18);
  }
  *(int *)(param_1 + 0x24) = param_2;
  return;
}



// FUNCTION 140ccfae8 FUN_140ccfae8 body=122 status=ok
// SIG undefined FUN_140ccfae8(void)

void FUN_140ccfae8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1449e2712(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146c4da92(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140ccfb62 FUN_140ccfb62 body=18 status=ok
// SIG undefined FUN_140ccfb62(void)

void FUN_140ccfb62(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14480f766(param_1 + 0x88);
    return;
  }
  return;
}



// FUNCTION 140ccfb74 FUN_140ccfb74 body=33 status=ok
// SIG undefined FUN_140ccfb74(void)

undefined8 FUN_140ccfb74(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x32b8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ccfb8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x1238) + 0x10))(lVar1 + 0x1238);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140ccfb96 FUN_140ccfb96 body=122 status=ok
// SIG undefined FUN_140ccfb96(void)

float FUN_140ccfb96(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  param_2 = param_2 * *(float *)(param_1 + 0xed8);
  lVar1 = FUN_140ccfc10();
  lVar2 = *(longlong *)(lVar1 + 0xf60) + 0x30;
  if (*(longlong *)(lVar1 + 0xf60) == 0) {
    lVar2 = lVar1 + 0xee0;
  }
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0xf68) != '\x01') {
      fVar3 = (float)FUN_1448c9f94(lVar2,param_2,param_2);
      return fVar3;
    }
    fVar3 = (float)FUN_1448c9f94(lVar2,param_2,0x3f800000);
    param_2 = param_2 * fVar3;
  }
  return param_2;
}



// FUNCTION 140ccfc10 FUN_140ccfc10 body=442 status=ok
// SIG undefined FUN_140ccfc10(void)

longlong * FUN_140ccfc10(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb76c98 == (longlong *)0x0) {
    memset(&DAT_14cb76ca0,0,4000);
    FUN_1415e05cc(&DAT_14cb76ca0);
    DAT_14cb76c98 = (longlong *)&DAT_14cb76ca0;
  }
  plVar1 = DAT_14cb76c98;
  plVar4 = DAT_14cb76c98 + 1;
  cVar2 = (char)DAT_14cb76c98[2];
  plVar5 = plVar4;
  if (cVar2 == '\0') {
LAB_140ccfc44:
    if (*plVar5 == 0) goto LAB_140ccfd1d;
    plVar5 = plVar4;
    if (cVar2 == '\0') {
LAB_140ccfc55:
      if (*plVar5 == 0) goto LAB_140ccfcbe;
      if ((((int)DAT_14cb76c98[3] == *(int *)(*plVar5 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar4 == 0 ||
          (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
          plVar4 == (longlong *)0x0)))) goto LAB_140ccfc69;
      cVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar1);
    }
    else {
      if (cVar2 == '\x02') {
        plVar5 = (longlong *)(*plVar4 + 0x30);
        goto LAB_140ccfc55;
      }
LAB_140ccfcbe:
      if (((DAT_14c9a1ab0 == 0) || (*plVar4 == 0)) ||
         (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar4 + 0x28)),
         plVar4 == (longlong *)0x0)) goto LAB_140ccfc69;
      puVar6 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4,plVar1,puVar6);
    }
    if (cVar2 == '\0') goto LAB_140ccfc69;
  }
  else {
    if (cVar2 == '\x02') {
      plVar5 = (longlong *)(*plVar4 + 0x30);
      goto LAB_140ccfc44;
    }
LAB_140ccfd1d:
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_140ccfc69;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_damage",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_140ccfc69:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 140ccfdcb FUN_140ccfdcb body=171 status=ok
// SIG undefined FUN_140ccfdcb(void)

void FUN_140ccfdcb(undefined8 param_1,undefined4 *param_2,float param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1402ad1e0();
  if ((0.0 < param_3) && (lVar1 != 0)) {
    local_38 = DAT_14c8464f0;
    local_48 = DAT_14c8464e0;
    uStack_40 = DAT_14c8464e8;
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_58 = *(undefined8 *)(param_2 + 4);
    local_78 = param_4;
    FUN_140ccfe78(*(undefined8 *)(lVar1 + 0x40),&local_68,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ccfe78 FUN_140ccfe78 body=285 status=ok
// SIG undefined FUN_140ccfe78(void)

void FUN_140ccfe78(longlong param_1,double *param_2,undefined4 param_3,double *param_4,
                  undefined4 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  iVar7 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar7 + 1U) {
    FUN_14038f800((longlong *)(param_1 + 0x38),iVar7);
  }
  lVar8 = *(longlong *)(param_1 + 0x38);
  lVar9 = (longlong)iVar7 * 0x20;
  *(float *)(lVar8 + lVar9) = (float)dVar4;
  *(float *)(lVar8 + 4 + lVar9) = (float)dVar5;
  *(float *)(lVar8 + 8 + lVar9) = (float)dVar6;
  *(undefined4 *)(lVar8 + 0xc + lVar9) = param_3;
  *(float *)(lVar8 + 0x10 + lVar9) = (float)dVar1;
  *(float *)(lVar8 + 0x14 + lVar9) = (float)dVar2;
  *(float *)(lVar8 + 0x18 + lVar9) = (float)dVar3;
  *(undefined4 *)(lVar8 + 0x1c + lVar9) = param_5;
  return;
}



// FUNCTION 140ccff96 FUN_140ccff96 body=462 status=ok
// SIG undefined FUN_140ccff96(void)

double * FUN_140ccff96(double *param_1,double *param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar8 = sin(param_3);
  dVar9 = cos(param_3);
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  dVar7 = 1.0 - dVar9;
  dVar10 = dVar1 * dVar3 * dVar7;
  dVar11 = dVar2 * dVar3 * dVar7;
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar6 = param_1[2];
  dVar12 = dVar1 * dVar2 * dVar7;
  *param_2 = (dVar10 + dVar8 * dVar2) * dVar6 +
             (dVar7 * dVar1 * dVar1 + dVar9) * dVar4 + (dVar12 - dVar8 * dVar3) * dVar5;
  param_2[1] = (dVar11 - dVar8 * dVar1) * dVar6 +
               (dVar12 + dVar8 * dVar3) * dVar4 + (dVar2 * dVar2 * dVar7 + dVar9) * dVar5;
  param_2[2] = (dVar3 * dVar3 * dVar7 + dVar9) * dVar6 +
               (dVar10 - dVar8 * dVar2) * dVar4 + (dVar11 + dVar8 * dVar1) * dVar5;
  return param_2;
}



// FUNCTION 140cd0164 FUN_140cd0164 body=875 status=ok
// SIG undefined FUN_140cd0164(void)

void FUN_140cd0164(longlong *param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_b8 [40];
  longlong local_90;
  int local_88;
  int local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_140cd0340;
  local_4c = 0;
  local_50 = *(uint *)(param_2 + 0xc);
  if ((int)local_50 < DAT_14c9647dc) {
    lVar13 = (ulonglong)((local_50 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
  }
  else {
    lVar13 = 0;
  }
  iVar16 = *(int *)(lVar13 + 0x10);
  if (*(int *)(lVar13 + 0x10) == 0) {
    LOCK();
    iVar16 = DAT_14c964868 + 1;
    UNLOCK();
    iVar12 = DAT_14c964868 + 1;
    bVar18 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar16;
    if (bVar18) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar12);
    }
    LOCK();
    iVar16 = *(int *)(lVar13 + 0x10);
    bVar18 = iVar16 == 0;
    if (bVar18) {
      *(int *)(lVar13 + 0x10) = iVar12;
      iVar16 = 0;
    }
    UNLOCK();
    if (bVar18) {
      iVar16 = iVar12;
    }
  }
  iVar12 = (int)param_1[0x1344];
  lVar13 = (longlong)iVar12;
  local_4c = iVar16;
  if (lVar13 != 0) {
    lVar17 = param_1[0x1343];
    local_70 = param_2;
    bVar5 = FUN_140cd04d0(lVar17,&local_50);
    lVar10 = lVar17 + 8;
    iVar8 = 0;
    iVar16 = 0;
    local_78 = lVar17;
    do {
      lVar17 = (longlong)iVar16;
      iVar3 = iVar16 + 1;
      if (iVar16 + 1 < iVar12) {
        iVar3 = iVar12;
      }
      lVar9 = lVar10 + lVar17 * 8;
      lVar15 = lVar17;
      iVar14 = iVar16;
      do {
        lVar15 = lVar15 + 1;
        iVar4 = iVar3;
        if (lVar13 <= lVar15) break;
        local_90 = lVar10;
        local_88 = iVar14;
        local_84 = iVar8;
        local_80 = lVar9;
        bVar7 = FUN_140cd04d0(lVar9,&local_50);
        iVar16 = iVar16 + 1;
        lVar9 = local_80 + 8;
        lVar10 = local_90;
        iVar8 = local_84;
        iVar14 = local_88;
        iVar4 = iVar16;
      } while ((bVar5 & 1) == bVar7);
      iVar16 = iVar4;
      if ((bVar5 & 1) == 0) {
        local_90 = lVar10;
        if (iVar8 != iVar14) {
          memmove((void *)(local_78 + (longlong)iVar8 * 8),(void *)(local_78 + lVar17 * 8),
                  (longlong)(iVar16 - iVar14) << 3);
        }
        iVar8 = iVar8 + (iVar16 - iVar14);
        lVar10 = local_90;
      }
      bVar5 = bVar5 ^ 1;
    } while (lVar15 < lVar13);
    *(int *)(param_1 + 0x1344) = iVar8;
    param_2 = local_70;
  }
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (param_1[0x76] == 0) {
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
                (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) &&
               ((int)uVar1 < DAT_14c9647dc)) &&
              ((plVar11 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar11 != (longlong *)0x0 &&
               ((int)plVar11[2] == *(int *)((longlong)param_1 + 0x75b4))))) &&
             ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
              lVar13 = *plVar11;
            }
            else {
              lVar13 = 0;
            }
            lVar13 = lVar13 + 0x110;
            goto LAB_140cd037b;
          }
        }
        else {
          lVar13 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140cd037b:
          if (lVar13 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20);
            goto LAB_140cd0388;
          }
        }
      }
      else {
        lVar13 = (*pcVar2)(param_1);
LAB_140cd0388:
        if (lVar13 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x3b0);
          goto LAB_140cd0398;
        }
      }
      goto LAB_140cd02ef;
    }
  }
  else {
    lVar13 = (*pcVar2)(param_1);
LAB_140cd0398:
    if (lVar13 == 0) {
LAB_140cd02ef:
      cVar6 = FUN_140e263d0(param_1,param_2);
      if ((cVar6 == '\0') && (lVar13 = *(longlong *)(param_2 + 0x3b0), lVar13 != 0)) {
        local_58 = *(undefined8 *)(lVar13 + 0x638);
        local_68 = *(undefined4 *)(lVar13 + 0x628);
        uStack_64 = *(undefined4 *)(lVar13 + 0x62c);
        uStack_60 = *(undefined4 *)(lVar13 + 0x630);
        uStack_5c = *(undefined4 *)(lVar13 + 0x634);
        FUN_140e264c4(param_1,0);
      }
    }
  }
  lVar13 = FUN_140cf8aa6(param_1);
  if ((lVar13 != 0) && ((int)param_1[0x1344] == 0)) {
    lVar13 = FUN_140cf8aa6(param_1);
    FUN_1407ae792(lVar13 + 0x3910,0,DAT_14cbc1ef8);
  }
LAB_140cd0340:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd04d0 FUN_140cd04d0 body=55 status=ok
// SIG undefined FUN_140cd04d0(void)

ulonglong FUN_140cd04d0(int *param_1,int *param_2)

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



// FUNCTION 140cd0508 FUN_140cd0508 body=1949 status=ok
// SIG undefined FUN_140cd0508(void)

void FUN_140cd0508(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint *puVar17;
  byte *pbVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  code *local_a0;
  ulonglong local_90;
  uint *local_88;
  longlong local_80;
  uint local_74;
  undefined1 local_6d;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_b0 = &local_68;
    local_68 = FUN_1449e2820;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_145a62952;
    local_b8 = &LAB_147c8cd45;
    local_c0 = &LAB_1461468ae;
    local_c8 = L"Engine";
    local_d0 = 0;
    local_d8 = 0x10000006;
    local_e0 = 8;
    local_e8 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar1 = DAT_14caf84d0;
  lVar6 = DAT_14caf84d0[0x22];
  if (lVar6 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar6 = plVar1[0x22];
    if (lVar6 != 0) goto LAB_140cd0652;
  }
  else {
LAB_140cd0652:
    local_80 = param_1 + 0x1f8;
    FUN_1488238d0();
    puVar17 = (uint *)(param_1 + 0x1b8);
    uVar5 = *(uint *)(param_1 + 0x1d0);
    uVar16 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      uVar14 = 1;
      uVar19 = 0;
      iVar12 = 0;
      uVar8 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x1c8);
      if (*(uint **)(param_1 + 0x1c8) == (uint *)0x0) {
        puVar7 = puVar17;
      }
      uVar8 = *puVar7;
      if (uVar8 == 0) {
        iVar12 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar12 = uVar5 - 1;
        }
        uVar19 = 0;
        uVar14 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar14 = uVar19;
        }
        iVar12 = 0;
        do {
          if (uVar14 == uVar19) goto LAB_140cd056c;
          iVar12 = iVar12 + 0x20;
          uVar8 = puVar7[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar19 = 0;
        iVar12 = 0;
      }
      uVar14 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar8 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 <= (int)uVar8) {
        uVar8 = uVar5;
      }
    }
    if (uVar8 != uVar5) {
      uVar20 = 0xffffffff;
      local_90 = uVar16;
      do {
        if ((longlong)*(int *)(lVar6 + 0x188) != 0) {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)(int)uVar8 * 0x18);
          pbVar18 = *(byte **)(lVar6 + 0x180);
          lVar11 = (longlong)*(int *)(lVar6 + 0x188) * 0xc;
          do {
            if (*(longlong *)(pbVar18 + 4) == *plVar1) {
              if (pbVar18 != (byte *)0x0) {
                local_88 = puVar17;
                lVar11 = FUN_1486b374e();
                iVar13 = FUN_1448e5bf4(lVar11,plVar1[1],0);
                if (iVar13 == -1) {
                  local_6d = 0xff;
                }
                else {
                  local_6d = (undefined1)
                             *(undefined8 *)
                              (*(longlong *)(lVar11 + 0x40) + 8 + (longlong)iVar13 * 0x10);
                }
                local_74 = (uint)*pbVar18;
                local_68 = (code *)&local_74;
                uStack_60 = &local_6d;
                FUN_145ef8618(local_80,local_6c,&local_68);
                uVar5 = *(uint *)(param_1 + 0x1d0);
                uVar16 = local_90;
                puVar17 = local_88;
              }
              break;
            }
            pbVar18 = pbVar18 + 0xc;
            lVar11 = lVar11 + -0xc;
          } while (lVar11 != 0);
        }
        uVar20 = uVar20 & ~(uint)uVar14;
        puVar7 = *(uint **)(param_1 + 0x1c8);
        if (*(uint **)(param_1 + 0x1c8) == (uint *)0x0) {
          puVar7 = puVar17;
        }
        iVar13 = (int)uVar19;
        lVar11 = (longlong)iVar13;
        uVar8 = puVar7[lVar11] & uVar20;
        if (uVar8 == 0) {
          iVar9 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar9 = uVar5 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar13) {
            iVar10 = iVar13;
          }
          uVar16 = local_90;
          if (iVar13 < iVar9) {
            lVar15 = 0;
            do {
              uVar8 = puVar7[lVar11 + lVar15 + 1];
              if (uVar8 != 0) {
                uVar19 = (ulonglong)(iVar13 + (int)lVar15 + 1);
                uVar20 = 0xffffffff;
                goto LAB_140cd0a6a;
              }
              iVar12 = iVar12 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar10 - lVar11 != lVar15);
            uVar20 = 0xffffffff;
            lVar11 = (longlong)iVar10;
          }
          uVar19 = lVar11 + 1U & 0xffffffff;
          uVar8 = uVar5;
        }
        else {
LAB_140cd0a6a:
          uVar14 = (ulonglong)(-uVar8 & uVar8);
          uVar2 = uVar14 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar8 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if ((int)uVar5 <= (int)uVar8) {
            uVar8 = uVar5;
          }
        }
      } while (uVar8 != (uint)uVar16);
    }
  }
LAB_140cd056c:
  puVar17 = (uint *)(param_1 + 0xe58);
  lVar6 = FUN_14000e0c8();
  if (lVar6 == 0) {
    lVar6 = FUN_14029b478();
    if (lVar6 == 0) {
      puVar17[0] = 0;
      puVar17[1] = 0;
      *(undefined8 *)(param_1 + 0xe60) = 0;
      *(undefined8 *)(param_1 + 0xe68) = 0;
      *(undefined4 *)(param_1 + 0xe78) = 0;
      if (*(int *)(param_1 + 0xe7c) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0xe70),0);
      }
      puVar3 = *(undefined2 **)(param_1 + 0xe70);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    else {
      FUN_1400bbfc4(&local_68,lVar6);
      *(undefined4 *)(param_1 + 0xe60) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0xe64) = local_68._4_4_;
      *(undefined4 *)(param_1 + 0xe68) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0xe6c) = uStack_60._4_4_;
      if ((undefined8 *)(param_1 + 0xe60) == &local_68) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0xe70) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0xe70) = local_58;
        local_58 = 0;
        *(undefined4 *)(param_1 + 0xe78) = local_50;
        *(undefined4 *)(param_1 + 0xe7c) = local_4c;
      }
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      iVar12 = DAT_14c9647dc;
      uVar5 = *(uint *)(lVar6 + 0xc);
      if (cVar4 != '\0') {
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
          *(undefined8 *)(param_1 + 0xe58) = 0;
          goto LAB_140cd0783;
        }
      }
      *puVar17 = uVar5;
      if ((int)uVar5 < iVar12) {
        lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar12 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar12 = *(int *)(lVar6 + 0x10);
        bVar21 = iVar12 == 0;
        if (bVar21) {
          *(int *)(lVar6 + 0x10) = iVar13;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar12 = iVar13;
        }
      }
      *(int *)(param_1 + 0xe5c) = iVar12;
    }
  }
LAB_140cd0783:
  if (*(longlong *)(param_1 + 0xe88) == 0) {
    puVar17 = (uint *)(param_1 + 0xe80);
    lVar6 = FUN_1401726e6();
    if (lVar6 == 0) {
      puVar17[0] = 0;
      puVar17[1] = 0;
      *(undefined8 *)(param_1 + 0xe88) = 0;
      *(undefined8 *)(param_1 + 0xe90) = 0;
      *(undefined4 *)(param_1 + 0xea0) = 0;
      if (*(int *)(param_1 + 0xea4) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0xe98),0);
      }
      puVar3 = *(undefined2 **)(param_1 + 0xe98);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    else {
      FUN_1400bbfc4(&local_68,lVar6);
      *(undefined4 *)(param_1 + 0xe88) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0xe8c) = local_68._4_4_;
      *(undefined4 *)(param_1 + 0xe90) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0xe94) = uStack_60._4_4_;
      if ((undefined8 *)(param_1 + 0xe88) == &local_68) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0xe98) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0xe98) = local_58;
        local_58 = 0;
        *(undefined4 *)(param_1 + 0xea0) = local_50;
        *(undefined4 *)(param_1 + 0xea4) = local_4c;
      }
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      iVar12 = DAT_14c9647dc;
      uVar5 = *(uint *)(lVar6 + 0xc);
      if (cVar4 != '\0') {
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
          *(undefined8 *)(param_1 + 0xe80) = 0;
          goto LAB_140cd08f4;
        }
      }
      *puVar17 = uVar5;
      if ((int)uVar5 < iVar12) {
        lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar12 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar12 = *(int *)(lVar6 + 0x10);
        bVar21 = iVar12 == 0;
        if (bVar21) {
          *(int *)(lVar6 + 0x10) = iVar13;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar12 = iVar13;
        }
      }
      *(int *)(param_1 + 0xe84) = iVar12;
    }
  }
LAB_140cd08f4:
  if (0 < *(int *)(param_1 + 0x160)) {
    lVar6 = 0;
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 1;
      *(int *)(*(longlong *)(param_1 + 0x158) + lVar6) = (int)lVar11;
      lVar6 = lVar6 + 0xc;
    } while (lVar11 < *(int *)(param_1 + 0x160));
  }
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar6 = 0;
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 1;
      *(int *)(*(longlong *)(param_1 + 0x168) + lVar6) = (int)lVar11;
      lVar6 = lVar6 + 0xc;
    } while (lVar11 < *(int *)(param_1 + 0x170));
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd0ca6 FUN_140cd0ca6 body=91 status=ok
// SIG undefined FUN_140cd0ca6(void)

void FUN_140cd0ca6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1448c4a0e();
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x6b0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x6b0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140cd0cfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cd0d02 FUN_140cd0d02 body=9 status=ok
// SIG undefined FUN_140cd0d02(void)

void FUN_140cd0d02(longlong param_1)

{
  FUN_140cd0d0c(param_1 + 0x10);
  return;
}



// FUNCTION 140cd0d0c FUN_140cd0d0c body=344 status=ok
// SIG undefined FUN_140cd0d0c(void)

void FUN_140cd0d0c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b3e8790;
  FUN_140cd0e64();
  if (((*(int *)((longlong)param_1 + 100) != 0) &&
      (uVar3 = *(uint *)(param_1 + 0xc), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 100))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
        (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
      (**(code **)(*plVar4 + 0x5c8))(plVar4,0);
    }
  }
  FUN_140cd0e64(param_1);
  if (*(int *)((longlong)param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    FUN_140373bdc(param_1 + 10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  param_1[0xc] = 0;
  FUN_1448a8284(param_1 + 6);
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  plVar4 = (longlong *)param_1[0xe];
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
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140cd0e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140cd0e64 FUN_140cd0e64 body=107 status=ok
// SIG undefined FUN_140cd0e64(void)

void FUN_140cd0e64(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140cd0ed0();
  FUN_1448a8284(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1411cdc38(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    plVar3 = *(longlong **)(param_1 + 0x70);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140cd0ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140cd0ed0 FUN_140cd0ed0 body=103 status=ok
// SIG undefined FUN_140cd0ed0(void)

void FUN_140cd0ed0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x78);
    lVar3 = FUN_145795626();
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar4;
      lVar3 = FUN_144a61814(uVar2,puVar1);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*puVar1);
      }
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 140cd0f38 FUN_140cd0f38 body=74 status=ok
// SIG undefined FUN_140cd0f38(void)

void FUN_140cd0f38(undefined8 param_1,longlong *param_2)

{
  FUN_140cd0f82(param_2[4],(int)param_2[5]);
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cd0f82 FUN_140cd0f82 body=96 status=ok
// SIG undefined FUN_140cd0f82(void)

void FUN_140cd0f82(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x80);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1406f0462(puVar1 + -0x12);
      if (*(longlong *)(puVar1 + -0x1c) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0x20) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cd0fea FUN_140cd0fea body=310 status=ok
// SIG undefined FUN_140cd0fea(void)

void FUN_140cd0fea(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14064c898(local_20,param_1);
  if (*param_1 == '\x01') {
    iVar8 = *(int *)(param_1 + 0x30);
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8);
    local_28 = (uint)bVar3;
    *(int *)(param_1 + 0x30) = iVar8 + 1;
    local_30 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar3 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar4 = *puVar5;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar5 + 1;
    uVar7 = uVar4 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_30 = &local_24;
      local_28 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x80);
      local_28 = 1;
      local_30 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70) +
                 (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar9 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar9) {
    uVar2 = *(undefined4 *)(local_18 + 0x28);
    iVar8 = 0;
    do {
      puVar1 = local_30 + (int)local_28;
      *local_30 = uVar2;
      iVar8 = iVar8 + 1;
      piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar9 = (int *)(param_1 + 0x3c);
      }
      local_30 = puVar1;
    } while (iVar8 < *piVar9);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd1122 FUN_140cd1122 body=999 status=ok
// SIG undefined FUN_140cd1122(void)

undefined8 FUN_140cd1122(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
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
  cVar1 = *param_3;
  if (cVar1 == '\x01') {
    if (*(longlong *)(param_3 + 8) != 0) {
LAB_140cd1187:
      lVar3 = FUN_1447262c2(param_3);
      if (lVar3 == 0) {
LAB_140cd11c2:
        lVar3 = FUN_140cd1640(param_3);
        if ((lVar3 == 0) || (lVar3 = FUN_14494e0ba(lVar3), lVar3 == 0)) {
LAB_140cd141e:
          lVar3 = 0;
        }
        else {
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
          }
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
          goto LAB_140cd141e;
        }
        lVar4 = FUN_140cd1532(param_3);
        if (lVar4 == 0) {
          if (lVar3 != 0) goto LAB_140cd1234;
        }
        else {
          lVar3 = FUN_1401b2ade(lVar4);
          if (lVar3 != 0) {
            lVar4 = FUN_144a5dd5e();
            if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_140cd1234;
          }
        }
        lVar3 = FUN_140cd1532(param_3);
        if (lVar3 == 0) {
          lVar3 = FUN_140cd1640(param_3);
          if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x3b0), lVar3 != 0)) {
            lVar4 = FUN_144a7b4ca();
            lVar3 = *(longlong *)(lVar3 + 0x10);
            if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)) goto LAB_140cd1489;
          }
        }
        else {
LAB_140cd1489:
          if (*(char *)(param_1 + 0x11) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
          if (*(char *)(param_1 + 0x11) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
        }
      }
      else {
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
        }
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
        goto LAB_140cd11c2;
LAB_140cd1234:
        if (*(char *)(param_1 + 0x11) == '\0') {
          lVar4 = (ulonglong)*(byte *)(param_1 + 0x10) * 0x40;
          uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),
                           *(int *)(lVar3 + 0x2608 + lVar4) <= *(int *)(lVar3 + 0x2600 + lVar4));
          goto LAB_140cd115e;
        }
        if (*(char *)(param_1 + 0x11) == '\x01') {
          lVar4 = (ulonglong)*(byte *)(param_1 + 0x10) * 0x40;
          uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(int *)(lVar3 + 0x2600 + lVar4) == 0);
          goto LAB_140cd115e;
        }
      }
    }
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(param_3 + 0xc) != 0) {
      uVar2 = *(uint *)(param_3 + 8);
      uVar5 = 0;
      if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140cd115e;
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_3 + 0xc) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) goto LAB_140cd1187;
    }
  }
  else if ((cVar1 == '\x03') &&
          (((*(longlong *)(param_3 + 8) != 0 && (*(longlong *)(param_3 + 0x10) != 0)) &&
           (0 < *(int *)(*(longlong *)(param_3 + 0x10) + 8))))) goto LAB_140cd1187;
  uVar5 = 0;
LAB_140cd115e:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140cd1532 FUN_140cd1532 body=269 status=ok
// SIG undefined FUN_140cd1532(void)

longlong FUN_140cd1532(void)

{
  longlong lVar1;
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
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464f5fc4;
      local_38 = &LAB_148c3dd26;
      local_40 = &LAB_1459673ba;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) goto LAB_140cd157f;
  }
  lVar1 = 0;
LAB_140cd157f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd1640 FUN_140cd1640 body=277 status=ok
// SIG undefined FUN_140cd1640(void)

longlong FUN_140cd1640(void)

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
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = &DAT_149e063b2;
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) goto LAB_140cd168b;
  }
  lVar1 = 0;
LAB_140cd168b:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd1756 FUN_140cd1756 body=49 status=ok
// SIG undefined FUN_140cd1756(void)

longlong FUN_140cd1756(void)

{
  if (DAT_14c99ed68 == 0) {
    FUN_140f50038(&DAT_14c99ed68,&PTR_s__Script_TypedElementFramework_14a13fbd8);
  }
  return DAT_14c99ed68;
}



// FUNCTION 140cd1796 FUN_140cd1796 body=87 status=ok
// SIG undefined FUN_140cd1796(void)

undefined8 * FUN_140cd1796(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b082af8;
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



// FUNCTION 140cd17f6 FUN_140cd17f6 body=102 status=ok
// SIG undefined FUN_140cd17f6(void)

undefined8 * FUN_140cd17f6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140751bbe(param_1,uVar1);
  *param_1 = &PTR_FUN_14aca37d0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 140cd185c FUN_140cd185c body=49 status=ok
// SIG undefined FUN_140cd185c(void)

longlong FUN_140cd185c(void)

{
  if (DAT_14cb24b58 == 0) {
    FUN_140f50038(&DAT_14cb24b58,&PTR_s__Script_GbxAudio_14ac99128);
  }
  return DAT_14cb24b58;
}



// FUNCTION 140cd188e FUN_140cd188e body=29 status=ok
// SIG undefined FUN_140cd188e(void)

undefined1 FUN_140cd188e(void)

{
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  
  FUN_140cd18ac(in_stack_00000028);
  *in_R9 = 1;
  return 1;
}



// FUNCTION 140cd18ac FUN_140cd18ac body=455 status=ok
// SIG undefined FUN_140cd18ac(void)

void FUN_140cd18ac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 ***_Src;
  int iVar5;
  undefined1 auStack_98 [32];
  void *local_78;
  undefined8 uStack_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_2 + 0x28) & 4) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_140cd19f9;
    *(undefined8 *)(param_1 + 0x90) = 0;
    plVar3 = *(longlong **)(param_1 + 0x98);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
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
    FUN_1401b9920(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_140cd20a6(param_1 + 0x30,0);
    }
    local_78 = (void *)0x0;
    uStack_70 = 0;
    FUN_140077068(param_2,&local_78);
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140cd1a74(&local_68,local_78,(longlong)(int)uStack_70);
    FUN_140cd2106(param_1,&local_68);
  }
  else {
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_68 = (undefined8 ***)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0xf;
    cVar4 = FUN_140cd1ba8(param_1,&local_68,0);
    if (cVar4 != '\0') {
      iVar5 = (int)local_58;
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar5);
      if (iVar5 != 0) {
        _Src = &local_68;
        if (0xf < uStack_50) {
          _Src = (undefined8 ***)local_68;
        }
        FUN_1447403be(&local_78,0);
        memcpy(local_78,_Src,(longlong)iVar5);
      }
    }
    FUN_140077068(param_2,&local_78);
  }
  FUN_1401d9a90(&local_68);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_140cd19f9:
  if ((*(byte *)(param_2 + 0x28) & 4) == 0) {
    FUN_140cd1b28(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd1a74 FUN_140cd1a74 body=179 status=ok
// SIG undefined FUN_140cd1a74(void)

void FUN_140cd1a74(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *_Dst;
  ulonglong uVar2;
  
  if (-1 < (longlong)param_3) {
    if (param_3 < 0x10) {
      param_1[2] = param_3;
      param_1[3] = 0xf;
      memcpy(param_1,param_2,param_3);
    }
    else {
      param_1[3] = 0xf;
      uVar1 = param_3 | 0xf;
      uVar2 = 0x16;
      if (0x16 < uVar1) {
        uVar2 = uVar1;
      }
      if (uVar1 < 0xfff) {
        _Dst = (undefined8 *)FUN_14001cc68(uVar2 + 1,0x10);
      }
      else {
        _Dst = (undefined8 *)FUN_140c1ca1d(uVar2 + 1);
      }
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      memcpy(_Dst,param_2,param_3);
      param_1 = _Dst;
    }
    *(undefined1 *)((longlong)param_1 + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 140cd1b28 FUN_140cd1b28 body=127 status=ok
// SIG undefined FUN_140cd1b28(void)

void FUN_140cd1b28(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    if ((longlong)(int)param_1[3] != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar2) == 0) {
          return;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar2);
    }
    if (((int)param_1[7] < 1) && (*(char *)(*param_1 + 0x148) == '\0')) {
      lVar2 = FUN_140b47a16(param_1,&DAT_14cb843e8);
      uVar1 = 0;
      if ((lVar2 != 0) && (*(char *)(lVar2 + 8) == '\0')) {
        uVar1 = *(undefined4 *)(lVar2 + 0x28);
      }
      FUN_140cd1da0(*param_1,param_1,uVar1,param_1 + 6);
      return;
    }
  }
  return;
}



// FUNCTION 140cd1ba8 FUN_140cd1ba8 body=257 status=ok
// SIG undefined FUN_140cd1ba8(void)

undefined8 FUN_140cd1ba8(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*param_1 == 0) {
LAB_140cd1c35:
    uVar1 = 0;
  }
  else {
    if ((longlong)(int)param_1[3] != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar4) == 0) goto LAB_140cd1c35;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar4);
    }
    lVar4 = param_1[0x16];
    if ((lVar4 == 0) || ((char)param_1[0x18] == '\x01')) {
      FUN_140cd1caa(param_1);
      *(undefined1 *)(param_1 + 0x18) = 0;
      lVar4 = param_1[0x16];
      if (lVar4 == 0) goto LAB_140cd1c35;
    }
    plVar5 = param_1 + 0x14;
    if (param_3 == '\0') {
      FUN_1401d7e14(param_2,plVar5);
    }
    else {
      uVar2 = param_2[3];
      if (uVar2 < lVar4 + 1U) {
        FUN_140c1c900(param_2,(lVar4 + 1U) - param_2[2]);
        uVar2 = param_2[3];
      }
      param_2[2] = 1;
      puVar3 = param_2;
      if (0xf < uVar2) {
        puVar3 = (undefined8 *)*param_2;
      }
      *(undefined2 *)puVar3 = 0x22;
      if (0xf < (ulonglong)param_1[0x17]) {
        plVar5 = (longlong *)param_1[0x14];
      }
      FUN_144a6594a(param_2,plVar5,param_1[0x16]);
      plVar5 = param_2 + 2;
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      *(undefined1 *)((longlong)param_2 + *plVar5 + -1) = 0x22;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 140cd1caa FUN_140cd1caa body=245 status=ok
// SIG undefined FUN_140cd1caa(void)

undefined4 FUN_140cd1caa(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [112];
  undefined8 local_38;
  undefined2 local_30;
  char local_2e;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_1 == 0) {
LAB_140cd1d77:
    uVar1 = 0;
  }
  else {
    if ((longlong)(int)param_1[3] != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar2) == 0) goto LAB_140cd1d77;
        lVar2 = lVar2 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar2);
    }
    local_38 = 0x801010000;
    local_30 = 0;
    local_2e = '\0';
    local_28 = (undefined8 *)0x0;
    FUN_143da6b0c(local_a8,param_1);
    FUN_143da6b8a(local_a8);
    uVar1 = FUN_1409e3d90(local_a8,param_1 + 0x14,&local_38);
    FUN_1409ddcc2(local_a8);
    if ((local_2e == '\x01') && (local_28 != (undefined8 *)0x0)) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd1da0 FUN_140cd1da0 body=742 status=ok
// SIG undefined FUN_140cd1da0(void)

void FUN_140cd1da0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  void **local_78;
  void *local_68;
  ulonglong uStack_60;
  void *local_58;
  ulonglong uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1401b9920(*param_4,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_140cd20a6(param_4,0);
  }
  lVar7 = *(longlong *)(param_1 + 0x138);
  if (lVar7 == 0) {
    uVar6 = FUN_14152a5ca();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x138) = lVar7;
  }
  lVar8 = *(longlong *)(param_1 + 0x140);
  if (lVar8 == 0) {
    if ((lVar7 == 0) || (*(longlong *)(param_1 + 0x130) == 0)) goto LAB_140cd1f0e;
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if (plVar4 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar8 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x130));
        *(longlong *)(param_1 + 0x140) = lVar8;
        if (lVar8 == 0) goto LAB_140cd1f0e;
        goto LAB_140cd1e1b;
      }
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  else {
LAB_140cd1e1b:
    lVar7 = *(longlong *)(lVar8 + 0x18);
    plVar4 = *(longlong **)(lVar8 + 0x20);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
    }
  }
LAB_140cd1f0e:
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_78 = &local_68;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  cVar5 = FUN_14001cda4(param_2,param_3);
  if (cVar5 == '\0') {
    lVar7 = (longlong)(int)(uint)uStack_40;
    if (lVar7 != 0) {
      iVar3 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar3 + (uint)uStack_40;
      if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar3) < (uint)uStack_40) {
        FUN_14001d63e(param_4,iVar3);
      }
      memmove((void *)((longlong)iVar3 * 0x10 + *param_4),local_48,lVar7 << 4);
      uStack_40 = uStack_40 & 0xffffffff00000000;
    }
  }
  lVar7 = (longlong)(int)(uint)uStack_50;
  if (lVar7 != 0) {
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + (uint)uStack_50;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar3) < (uint)uStack_50) {
      FUN_14001d63e(param_4,iVar3);
    }
    memmove((void *)((longlong)iVar3 * 0x10 + *param_4),local_58,lVar7 << 4);
    uStack_50 = uStack_50 & 0xffffffff00000000;
  }
  lVar7 = (longlong)(int)(uint)uStack_60;
  if (lVar7 != 0) {
    iVar3 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar3 + (uint)uStack_60;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar3) < (uint)uStack_60) {
      FUN_14001d63e(param_4,iVar3);
    }
    memmove((void *)((longlong)iVar3 * 0x10 + *param_4),local_68,lVar7 << 4);
    uStack_60 = uStack_60 & 0xffffffff00000000;
  }
  FUN_1401b9920(local_68,0);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd20a6 FUN_140cd20a6 body=96 status=ok
// SIG undefined FUN_140cd20a6(void)

void FUN_140cd20a6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140cd2106 FUN_140cd2106 body=1930 status=ok
// SIG undefined FUN_140cd2106(void)

ulonglong FUN_140cd2106(longlong *param_1,char *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  void *_Src;
  uint *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_128 [32];
  longlong *local_108;
  uint *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  char *local_e0;
  longlong local_d8;
  longlong *local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0xf;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    pcVar8 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar8 = *(char **)param_2;
    }
    if ((*pcVar8 == '\"') && (pcVar8[*(longlong *)(param_2 + 0x10) + -1] == '\"')) {
      local_108 = &local_d8;
      FUN_1408f7a26(&local_c8,param_2,1,0xffffffffffffffff);
      param_2 = (char *)&local_88;
      FUN_1401d9a90(param_2);
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_88 = (char *)CONCAT44(uStack_c4,local_c8);
      uStack_80 = uStack_c0;
      local_b8 = 0;
      uStack_b0 = 0xf;
      local_c8 = local_c8 & 0xffffff00;
      FUN_1401d9a90(&local_c8);
      pcVar8 = param_2;
      if (0xf < uStack_70) {
        pcVar8 = local_88;
      }
      pcVar8[local_78 + -1] = '\0';
    }
  }
  FUN_140b96410(param_1);
  local_c8 = 0x1010100;
  uStack_c4 = CONCAT22(uStack_c4._2_2_,0xffff);
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0xf;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_141173dd4(&local_d8,param_2,&local_c8,&DAT_14cb83188);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_d0 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
  }
  if (local_d8 != 0) {
    local_e8 = local_d0;
    param_1[1] = *(longlong *)(local_d8 + 0x30);
    *param_1 = *(longlong *)(local_d8 + 0x28);
    local_e0 = param_2;
    FUN_1407b26d0(param_1 + 2,local_d8 + 0x38);
    FUN_1407b2728(param_1 + 4);
    FUN_14087e154();
    if ((longlong)*(int *)(local_d8 + 0x68) != 0) {
      plVar18 = *(longlong **)(local_d8 + 0x60);
      plVar12 = plVar18 + (longlong)*(int *)(local_d8 + 0x68) * 10;
      local_f0 = param_1 + 0xf;
      local_f8 = (uint *)(param_1 + 10);
LAB_140cd22f0:
      if ((short)plVar18[1] < 1) {
        lVar17 = *plVar18;
        if ((lVar17 != 0) && ((int)param_1[9] != *(int *)((longlong)param_1 + 0x74))) {
          uVar20 = (uint)((ulonglong)lVar17 >> 0x10);
          uVar14 = (uint)lVar17 & 0xffff;
          plVar9 = (longlong *)param_1[0x10];
          if ((longlong *)param_1[0x10] == (longlong *)0x0) {
            plVar9 = local_f0;
          }
          iVar10 = *(int *)((longlong)plVar9 +
                           (ulonglong)
                           ((int)param_1[0x11] - 1U &
                           (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar14) +
                           (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar14 >> 4)) * 4);
          if (iVar10 != -1) {
            do {
              plVar9 = (longlong *)(param_1[8] + (longlong)iVar10 * 0x18);
              if (*plVar9 == lVar17) {
                if ((plVar9 + 1 != (longlong *)0x0 && plVar9 != (longlong *)0x0) &&
                   (plVar9 = (longlong *)plVar9[1], plVar9 != (longlong *)0x0)) goto LAB_140cd251b;
                break;
              }
              iVar10 = (int)plVar9[2];
            } while (iVar10 != -1);
          }
        }
      }
      else {
        iVar10 = (int)param_1[0xd];
        if (iVar10 == 0) {
          uVar19 = 1;
          uVar11 = 0;
          iVar13 = 0;
          iVar15 = 0;
        }
        else {
          puVar5 = (uint *)param_1[0xc];
          if ((uint *)param_1[0xc] == (uint *)0x0) {
            puVar5 = local_f8;
          }
          uVar20 = *puVar5;
          if (uVar20 == 0) {
            iVar13 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar13 = iVar10 + -1;
            }
            uVar11 = 0;
            uVar14 = iVar13 >> 5;
            if (iVar13 >> 5 < 1) {
              uVar14 = 0;
            }
            iVar15 = 0;
            do {
              if (uVar14 == uVar11) goto LAB_140cd2579;
              iVar15 = iVar15 + 0x20;
              uVar20 = puVar5[uVar11 + 1];
              uVar11 = uVar11 + 1;
            } while (uVar20 == 0);
          }
          else {
            uVar11 = 0;
            iVar15 = 0;
          }
          uVar19 = (ulonglong)(-uVar20 & uVar20);
          uVar2 = uVar19 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar10 <= iVar13) {
            iVar13 = iVar10;
          }
        }
        if (iVar13 != iVar10) {
          puVar5 = (uint *)param_1[0xc];
          if ((uint *)param_1[0xc] == (uint *)0x0) {
            puVar5 = local_f8;
          }
          iVar16 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar16 = iVar10 + -1;
          }
          iVar16 = iVar16 >> 5;
          uVar20 = 0xffffffff;
          do {
            plVar9 = *(longlong **)(param_1[8] + 8 + (longlong)iVar13 * 0x18);
            if ((plVar9 != (longlong *)0x0) &&
               ((short)plVar18[1] == *(short *)((longlong)plVar9 + 0x26))) goto LAB_140cd251b;
            uVar20 = uVar20 & ~(uint)uVar19;
            iVar13 = (int)uVar11;
            lVar17 = (longlong)iVar13;
            uVar14 = puVar5[lVar17] & uVar20;
            if (uVar14 == 0) {
              iVar6 = iVar16;
              if (iVar16 < iVar13) {
                iVar6 = iVar13;
              }
              if (iVar16 <= iVar13) break;
              lVar21 = 0;
              while( true ) {
                iVar15 = iVar15 + 0x20;
                uVar14 = puVar5[lVar17 + lVar21 + 1];
                if (uVar14 != 0) break;
                lVar21 = lVar21 + 1;
                if (iVar6 - lVar17 == lVar21) goto LAB_140cd2579;
              }
              uVar11 = (ulonglong)(iVar13 + (int)lVar21 + 1);
              uVar20 = 0xffffffff;
            }
            uVar19 = (ulonglong)(-uVar14 & uVar14);
            uVar2 = uVar19 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          } while (iVar13 < iVar10);
        }
      }
      goto LAB_140cd2579;
    }
LAB_140cd25f6:
    if (*(char *)((longlong)param_1 + 0xc1) == '\x01') {
      iVar10 = (int)param_1[0xd];
      if (iVar10 == 0) {
        uVar19 = 1;
        uVar11 = 0;
        iVar13 = 0;
        iVar15 = 0;
      }
      else {
        puVar5 = (uint *)param_1[0xc];
        if ((uint *)param_1[0xc] == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 10);
        }
        uVar20 = *puVar5;
        if (uVar20 == 0) {
          iVar13 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar13 = iVar10 + -1;
          }
          uVar11 = 0;
          uVar19 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar19 = uVar11;
          }
          iVar15 = 0;
          do {
            if (uVar19 == uVar11) goto LAB_140cd2781;
            iVar15 = iVar15 + 0x20;
            uVar20 = puVar5[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar20 == 0);
        }
        else {
          uVar11 = 0;
          iVar15 = 0;
        }
        uVar19 = (ulonglong)(-uVar20 & uVar20);
        uVar2 = uVar19 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar13) {
          iVar13 = iVar10;
        }
      }
      if (iVar13 != iVar10) {
        uVar20 = 0xffffffff;
        iVar16 = iVar10;
        do {
          lVar17 = *(longlong *)(param_1[8] + 8 + (longlong)iVar13 * 0x18);
          if ((lVar17 != 0) && (*(char *)(lVar17 + 0x34) == '\0')) {
            *(undefined1 *)(lVar17 + 0x34) = 1;
            *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar17 + 0x10);
            *(undefined4 *)(lVar17 + 0x30) = *(undefined4 *)(lVar17 + 0x18);
            FUN_14087eae0(lVar17,lVar17 + 0x28,lVar17 + 0x30);
            iVar16 = (int)param_1[0xd];
          }
          uVar20 = uVar20 & ~(uint)uVar19;
          puVar5 = (uint *)param_1[0xc];
          if ((uint *)param_1[0xc] == (uint *)0x0) {
            puVar5 = (uint *)(param_1 + 10);
          }
          iVar13 = (int)uVar11;
          lVar17 = (longlong)iVar13;
          uVar14 = puVar5[lVar17] & uVar20;
          if (uVar14 == 0) {
            iVar6 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar6 = iVar16 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar13) {
              iVar7 = iVar13;
            }
            if (iVar13 < iVar6) {
              lVar21 = 0;
              do {
                uVar14 = puVar5[lVar17 + lVar21 + 1];
                if (uVar14 != 0) {
                  uVar11 = (ulonglong)(iVar13 + (int)lVar21 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_140cd2745;
                }
                iVar15 = iVar15 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar7 - lVar17 != lVar21);
              uVar20 = 0xffffffff;
              iVar13 = iVar7;
            }
            uVar11 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar16;
          }
          else {
LAB_140cd2745:
            uVar19 = (ulonglong)(-uVar14 & uVar14);
            uVar2 = uVar19 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar13) {
              iVar13 = iVar16;
            }
          }
        } while (iVar13 != iVar10);
      }
    }
LAB_140cd2781:
    *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
    FUN_140cd1b28(param_1);
    FUN_1401d7e14(param_1 + 0x14);
    local_d0 = local_e8;
  }
  if (*param_1 == 0) {
    param_1 = (longlong *)0x0;
  }
  else {
    plVar18 = param_1 + 3;
    if ((longlong)(int)*plVar18 == 0) {
      param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    }
    else {
      plVar12 = param_1 + 2;
      lVar17 = 0;
      do {
        bVar22 = *(longlong *)(*plVar12 + lVar17) == 0;
        param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),!bVar22);
        if (bVar22) break;
        bVar22 = (longlong)(int)*plVar18 * 8 + -8 != lVar17;
        lVar17 = lVar17 + 8;
      } while (bVar22);
    }
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_d0 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  FUN_14151bfc4(&local_c8);
  FUN_1401d9a90(&local_88);
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_1 & 0xffffffff;
LAB_140cd251b:
  *(undefined1 *)((longlong)plVar9 + 0x34) = 1;
  plVar9[5] = plVar18[2];
  if (plVar9 != plVar18) {
    iVar10 = (int)plVar18[8];
    _Src = (void *)plVar18[7];
    *(int *)(plVar9 + 8) = iVar10;
    if (iVar10 == 0 && *(int *)((longlong)plVar9 + 0x44) == 0) {
      *(undefined4 *)((longlong)plVar9 + 0x44) = 0;
    }
    else {
      FUN_1446dd670();
      if (iVar10 != 0) {
        memcpy((void *)plVar9[7],_Src,(longlong)iVar10 * 2);
      }
    }
  }
  if ((char)plVar9[1] == '\x01') {
    fVar3 = *(float *)((longlong)plVar9 + 0x1c);
    fVar4 = *(float *)(plVar9 + 4);
    fVar23 = ((fVar4 - fVar3) * (float)(ulonglong)plVar18[2]) /
             (float)~(-1L << (*(byte *)((longlong)plVar9 + 0x25) & 0x3f)) + fVar3;
    if (fVar4 <= fVar23) {
      fVar23 = fVar4;
    }
    if (fVar23 <= fVar3) {
      fVar23 = fVar3;
    }
    *(float *)(plVar9 + 6) = fVar23;
  }
LAB_140cd2579:
  plVar18 = plVar18 + 10;
  if (plVar18 == plVar12) goto LAB_140cd25f6;
  goto LAB_140cd22f0;
}



// FUNCTION 140cd2892 FUN_140cd2892 body=1923 status=ok
// SIG undefined FUN_140cd2892(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cd2892(longlong param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
                  undefined1 (*param_5) [16],undefined8 *param_6,undefined8 param_7,longlong param_8
                  )

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  float fVar32;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  float local_190;
  undefined8 local_180;
  float local_174;
  float local_170 [4];
  longlong *local_160;
  int local_148;
  float local_140;
  undefined4 uStack_13c;
  ushort local_128;
  byte local_120;
  float local_118;
  undefined4 uStack_114;
  ushort local_100;
  byte local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((param_8 == 0) || (*(char *)(param_8 + 0x7c) != '\x01')) {
    local_170[0] = (float)((uint)local_170[0] & 0xffffff00);
    local_148 = 0;
    local_180 = param_3;
    FUN_1456bb102(local_170,*param_6);
    pfVar15 = &local_140;
    FUN_1448729ea(param_1 + 0x48,pfVar15,local_170);
    if (local_120 == 3) {
      uVar7 = 3;
      fVar32 = local_140;
    }
    else {
      pfVar17 = &local_118;
      FUN_1400b56fe(pfVar17,&local_140,3);
      fVar32 = local_118;
      if (local_f8 == 0) {
        fVar32 = 200.0;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_100) {
          pfVar17 = (float *)CONCAT44(uStack_114,local_118);
        }
        (*pcVar2)(pfVar17);
      }
      if (0x18 < local_100) {
        FUN_1400020a8(CONCAT44(uStack_114,local_118));
      }
      uVar7 = (uint)local_120;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_128) {
        pfVar15 = (float *)CONCAT44(uStack_13c,local_140);
      }
      (*pcVar2)(pfVar15);
    }
    if (0x18 < local_128) {
      FUN_1400020a8(CONCAT44(uStack_13c,local_140));
    }
    lVar9 = DAT_14c9a3da0;
    if ((longlong)local_148 != 0) {
      lVar14 = (longlong)local_148 + -1;
      lVar16 = lVar14 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
      if (*(longlong *)(lVar9 + lVar16) != 0) {
        FUN_1400020a8();
      }
      lVar9 = DAT_14c9a3da0;
      iVar13 = (int)lVar14;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
      }
      *(undefined4 *)(lVar9 + lVar16) = 0xffffffff;
      iVar8 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar8 = DAT_14c9a3dd0;
      }
      *(int *)(lVar9 + 4 + lVar16) = iVar8;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar10 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar10 = DAT_14c9a3dc0;
      }
      iVar8 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar8 = iVar13;
      }
      bVar3 = (byte)lVar14 & 0x1f;
      DAT_14c9a3dd0 = iVar13;
      *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
           *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) &
           (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      local_148 = 0;
    }
    if ((local_170[0]._0_1_ == '\x03') && (local_160 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_160 + 0x10))();
      }
    }
    param_3 = local_180;
    if (param_8 == 0) goto LAB_140cd2970;
  }
  else {
    fVar32 = *(float *)(param_8 + 0x78);
  }
  if ((*(byte *)(param_8 + 0x278) & 4) != 0) {
    fVar18 = (float)FUN_140acff56(param_6[1]);
    fVar32 = fVar32 * fVar18;
  }
LAB_140cd2970:
  local_198 = param_3;
  local_190 = fVar32;
  FUN_140cd3016(param_1,local_170,&local_118,param_7);
  local_180 = CONCAT44(local_180._4_4_,local_170[0]);
  local_174 = local_170[0] * local_170[0];
  *param_2 = 1;
  param_2[1] = param_2[1] | 1;
  *(undefined4 *)(param_2 + 4) = 2;
  *(float *)(param_2 + 8) = local_118;
  *(float *)(param_2 + 0x164) = fVar32;
  *(double *)(param_2 + 0x30) = param_4[2];
  dVar19 = param_4[1];
  *(double *)(param_2 + 0x20) = *param_4;
  *(double *)(param_2 + 0x28) = dVar19;
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)param_5[1];
  uVar6 = *(undefined8 *)(*param_5 + 8);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)*param_5;
  *(undefined8 *)(param_2 + 0x40) = uVar6;
  dVar19 = param_4[1];
  *(double *)(param_2 + 0x50) = *param_4;
  *(double *)(param_2 + 0x58) = dVar19;
  *(double *)(param_2 + 0x60) = param_4[2];
  dVar19 = (double)FUN_144719204(*(undefined8 *)*param_5);
  dVar20 = (double)FUN_144719204(*(undefined8 *)(*param_5 + 8));
  dVar21 = sin(dVar19 * 0.017453292519943295);
  dVar19 = cos(dVar19 * 0.017453292519943295);
  dVar22 = sin(dVar20 * 0.017453292519943295);
  dVar20 = cos(dVar20 * 0.017453292519943295);
  dVar27 = (double)fVar32;
  *(double *)(param_2 + 0x68) = dVar20 * dVar19 * dVar27;
  *(double *)(param_2 + 0x70) = dVar22 * dVar19 * dVar27;
  *(double *)(param_2 + 0x78) = dVar21 * dVar27;
  auVar28 = divpd(*param_5,_DAT_1499387d0);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = *(double *)param_5[1];
  auVar30 = divpd(auVar30,_DAT_1499387d0);
  auVar28 = roundpd(auVar28,auVar28,3);
  auVar30 = roundpd(auVar30,auVar30,3);
  dVar19 = (*(double *)*param_5 - auVar28._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar20 = (*(double *)(*param_5 + 8) - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar21 = (*(double *)param_5[1] - auVar30._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar22 = (0.0 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar27 = sin(dVar19);
  dVar23 = sin(dVar20);
  dVar24 = sin(dVar21);
  sin(dVar22);
  dVar25 = cos(dVar19);
  dVar20 = cos(dVar20);
  dVar21 = cos(dVar21);
  cos(dVar22);
  dVar26 = dVar27 * dVar23 * dVar21 - dVar25 * dVar20 * dVar24;
  dVar4 = *param_4;
  dVar5 = param_4[1];
  dVar29 = -dVar26;
  dVar31 = -(-(dVar27 * dVar20 * dVar21) - dVar25 * dVar23 * dVar24);
  dVar19 = (-(dVar20 * dVar27 * dVar24) + dVar23 * dVar25 * dVar21) * -1.0;
  dVar20 = (dVar23 * dVar27 * dVar24 + dVar20 * dVar25 * dVar21) * 1.0;
  dVar23 = param_4[2] * 1.0;
  dVar21 = dVar5 * dVar29 - dVar4 * dVar31;
  dVar22 = dVar23 * dVar31 - dVar5 * dVar19;
  dVar27 = *param_4 * dVar19 - dVar29 * dVar23;
  dVar22 = dVar22 + dVar22;
  dVar27 = dVar27 + dVar27;
  dVar21 = dVar21 + dVar21;
  *(double *)(param_2 + 0x80) = dVar29;
  *(double *)(param_2 + 0x88) = dVar31;
  auVar28._8_4_ = SUB84(dVar20,0);
  auVar28._0_8_ = dVar19;
  auVar28._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x90) = auVar28;
  *(double *)(param_2 + 0xa0) =
       0.0 - ((dVar21 * dVar31 - dVar27 * dVar19) + dVar20 * dVar22 + dVar4);
  *(double *)(param_2 + 0xa8) = 0.0 - (dVar21 * dVar26 + dVar19 * dVar22 + dVar20 * dVar27 + dVar5);
  *(double *)(param_2 + 0xb0) =
       0.0 - (dVar20 * dVar21 + dVar23 + (dVar27 * dVar29 - dVar22 * dVar31));
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  puVar11 = (undefined8 *)(param_2 + 0x80);
  puVar12 = (undefined8 *)(param_2 + 0xe0);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  *(undefined4 *)(param_2 + 0x168) = (undefined4)local_180;
  *(float *)(param_2 + 0x16c) = local_174;
  *(float *)(param_2 + 0x170) = local_118;
  *(float *)(param_2 + 0x174) = local_118 * local_118;
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd3016 FUN_140cd3016 body=155 status=ok
// SIG undefined FUN_140cd3016(void)

void FUN_140cd3016(longlong param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
                  float param_6)

{
  float fVar1;
  
  *param_2 = 0.0;
  if ((((param_4 != 0) && ((*(byte *)(param_1 + 0x98) & 1) != 0)) &&
      ((*(byte *)(*(longlong *)(param_1 + 8) + 0x1a8) & 8) != 0)) &&
     (fVar1 = *(float *)(param_4 + 0x24), 0.0 < fVar1)) {
    if (((*(byte *)(param_1 + 0x98) & 2) != 0) && (0.0 < *(float *)(param_4 + 0x10))) {
      *param_2 = ((*(float *)(param_4 + 0x10) - *(float *)(param_4 + 0xc)) / fVar1) * param_6;
      fVar1 = *(float *)(param_4 + 0x24);
    }
    param_6 = (float)((double)param_6 *
                     ((*(double *)(param_5 + 0x6d0) - (double)*(float *)(param_4 + 0xc)) /
                     (double)fVar1));
  }
  *param_3 = param_6;
  return;
}



// FUNCTION 140cd30b2 FUN_140cd30b2 body=178 status=ok
// SIG undefined FUN_140cd30b2(void)

void FUN_140cd30b2(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 & 2) != 0) {
    local_70 = FUN_140cd3166(param_1 + 0x58);
    if (local_70 != 0) {
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14b410ff0;
      local_40 = &local_70;
      local_68[0] = FUN_143da08d4;
      FUN_140c019bf(param_2,param_1 + 0x30,local_68);
      if (local_68[0] != (code *)0x0) {
        pppuVar1 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar1 = &local_48;
        }
        (*(code *)(*pppuVar1)[2])();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd3166 FUN_140cd3166 body=398 status=ok
// SIG undefined FUN_140cd3166(void)

longlong FUN_140cd3166(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
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
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_140cd32f4();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140cd32f4 FUN_140cd32f4 body=228 status=ok
// SIG undefined FUN_140cd32f4(void)

longlong FUN_140cd32f4(void)

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
  if (DAT_14cb6a320 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1487615e8;
    local_40 = FUN_14185cff9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryMaterialsDataAsset",&DAT_14cb6a320,FUN_146525d14);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a320;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd33e4 FUN_140cd33e4 body=713 status=ok
// SIG undefined FUN_140cd33e4(void)

longlong * FUN_140cd33e4(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_14480568a();
  *param_1 = (longlong)&PTR_FUN_14a3afab0;
  param_1[5] = (longlong)&PTR_FUN_14a3b04b0;
  param_1[6] = (longlong)&PTR_LAB_14a3b04f0;
  param_1[0x55] = (longlong)&PTR_FUN_14a3b0540;
  param_1[0x56] = (longlong)&PTR_FUN_14a3b05c0;
  param_1[0x57] = (longlong)&PTR_FUN_14a3b05d0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0x3ff0000000000000;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x712) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71a) = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xed] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined1 *)(param_1 + 0xee) = 1;
  param_1[0xef] = 0x7fefffffffffffff;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a3c1a30;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0xffffffff00000080;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  param_1[0xff] = (longlong)(puVar2 + 2);
  param_1[0x100] = (longlong)puVar2;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  FUN_1400ea934(param_1,DAT_14cad0f30,1);
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7;
    (**(code **)(*param_1 + 0x958))();
  }
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) | 0x10;
  *(byte *)((longlong)param_1 + 0x2d4) = *(byte *)((longlong)param_1 + 0x2d4) & 0xfe;
  *(undefined4 *)(param_1 + 0xf2) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  iVar1 = (int)param_1[0xca];
  *(uint *)(param_1 + 0xca) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x654) < iVar1 + 1U) {
    FUN_1409d1a76(param_1 + 0xc9,iVar1);
  }
  *(undefined8 *)(param_1[0xc9] + (longlong)iVar1 * 8) = 0;
  iVar1 = (int)param_1[0xce];
  *(uint *)(param_1 + 0xce) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x674) < iVar1 + 1U) {
    FUN_140cd36ae(param_1 + 0xcd,iVar1);
  }
  *(undefined1 *)(param_1[0xcd] + (longlong)iVar1) = 0;
  param_1[0xd8] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd9] = 0x3ff0000000000000;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0x3ff0000000000000;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 0x10;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) & 0xf7;
  *(undefined4 *)(param_1 + 0x71) = 0xffffffff;
  return param_1;
}



// FUNCTION 140cd36ae FUN_140cd36ae body=345 status=ok
// SIG undefined FUN_140cd36ae(void)

void FUN_140cd36ae(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cd372f;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_140cd372f:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 140cd3816 FUN_140cd3816 body=132 status=ok
// SIG undefined FUN_140cd3816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140cd3816(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cd389a FUN_140cd389a body=81 status=ok
// SIG undefined FUN_140cd389a(void)

undefined4 FUN_140cd389a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_2;
  uVar6 = FUN_140cd38ec();
  uVar5 = FUN_1448093f4(uVar3,uVar6);
  plVar4 = (longlong *)param_2[1];
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
  return uVar5;
}



// FUNCTION 140cd38ec FUN_140cd38ec body=57 status=ok
// SIG undefined FUN_140cd38ec(void)

void FUN_140cd38ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1aa20 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1aa20 = FUN_140002ddd(FUN_1464194ab,uVar1,L"SpawnerStyleDef_Single");
  }
  return;
}



// FUNCTION 140cd3926 FUN_140cd3926 body=144 status=ok
// SIG undefined FUN_140cd3926(void)

undefined8 FUN_140cd3926(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  FUN_140cd39b6(param_1,param_2,DAT_14c844be0);
  return param_1;
}



// FUNCTION 140cd39b6 FUN_140cd39b6 body=118 status=ok
// SIG undefined FUN_140cd39b6(void)

undefined8 FUN_140cd39b6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_38,L"en-US-POSIX");
  FUN_1414037a4(param_1,param_2,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd3a2e FUN_140cd3a2e body=40 status=ok
// SIG undefined FUN_140cd3a2e(void)

undefined8 FUN_140cd3a2e(undefined8 param_1,int param_2)

{
  FUN_140cd3a56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cd3a56 FUN_140cd3a56 body=139 status=ok
// SIG undefined FUN_140cd3a56(void)

void FUN_140cd3a56(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a39f130;
  param_1[0x72] = &PTR_FUN_14a39f770;
  param_1[0x73] = &PTR_FUN_14a39f800;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  FUN_140cd3ae2(param_1 + 0x74,0);
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140cd3ae2 FUN_140cd3ae2 body=534 status=ok
// SIG undefined FUN_140cd3ae2(void)

void FUN_140cd3ae2(longlong *param_1,int param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar15 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_140cd3bdf;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x18);
      if (lVar12 != 0) {
        puVar2 = *(undefined8 **)(lVar12 + 8);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        FUN_1400020a8(lVar12);
        iVar3 = (int)param_1[5];
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar7 = (int)uVar15;
      lVar12 = (longlong)iVar7;
      uVar4 = puVar8[lVar12] & uVar14;
      if (uVar4 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar12 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar6 - lVar12 == lVar10) goto LAB_140cd3bdf;
        }
        uVar15 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_140cd3bdf:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar4 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar4 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140cd3cfa FUN_140cd3cfa body=29 status=ok
// SIG undefined FUN_140cd3cfa(void)

undefined8 FUN_140cd3cfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cd3d18 FUN_140cd3d18 body=370 status=ok
// SIG undefined FUN_140cd3d18(void)

undefined8 * FUN_140cd3d18(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140cd3eb4 FUN_140cd3eb4 body=352 status=ok
// SIG undefined FUN_140cd3eb4(void)

void FUN_140cd3eb4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != (longlong *)0x0) {
    uVar6 = FUN_140b17338();
    plVar7 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_140b17338();
      plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
      if ((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) {
        lVar2 = *(longlong *)(param_1 + 0x48);
        if ((*(longlong *)(lVar2 + 0x58) != 0) ||
           (iVar1 = *(int *)(lVar2 + 0x50), (longlong)iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
        local_48 = 0;
        uStack_40 = 0;
        lVar2 = *(longlong *)(lVar2 + 0x48);
        lVar10 = 0;
        do {
          uVar4 = uStack_40;
          lVar9 = (longlong)(int)uStack_40;
          uVar5 = (int)uStack_40 + 1;
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar5);
          if (uStack_40._4_4_ < uVar5) {
            FUN_140cd402e(&local_48,uVar4 & 0xffffffff);
          }
          lVar3 = *(longlong *)(lVar2 + lVar10);
          *(longlong *)(local_48 + lVar9 * 8) = lVar3;
          if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
            FUN_1456cec3c();
          }
          lVar10 = lVar10 + 0x18;
        } while ((longlong)iVar1 * 0x18 != lVar10);
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_48);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd402e FUN_140cd402e body=353 status=ok
// SIG undefined FUN_140cd402e(void)

void FUN_140cd402e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cd40b3;
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
LAB_140cd40b3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140cd4190 FUN_140cd4190 body=70 status=ok
// SIG undefined FUN_140cd4190(void)

void FUN_140cd4190(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140cd41d6();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140cd41d6 FUN_140cd41d6 body=477 status=ok
// SIG undefined FUN_140cd41d6(void)

void FUN_140cd41d6(longlong *param_1)

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
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0xc + (longlong)iVar9 * 0x10) * 4) =
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
                goto LAB_140cd433a;
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
LAB_140cd433a:
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



// FUNCTION 140cd43ba FUN_140cd43ba body=57 status=ok
// SIG undefined FUN_140cd43ba(void)

void FUN_140cd43ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22b68 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22b68 = FUN_140002ddd(FUN_14643af44,uVar1,L"GpsGenerator_Targetables");
  }
  return;
}



// FUNCTION 140cd43f4 FUN_140cd43f4 body=412 status=ok
// SIG undefined FUN_140cd43f4(void)

void FUN_140cd43f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  longlong local_108;
  undefined8 local_100;
  undefined2 local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined1 local_e0 [40];
  longlong local_b8;
  undefined **local_a0 [4];
  char local_80;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((*(int *)(param_1 + 0x70) == 0) && (*(char *)(param_1 + 0x8c) == '\0')) &&
     ((*(longlong *)(param_1 + 0x120) == 0 || (iVar2 = FUN_1475331a8(), iVar2 == 0))))
  goto LAB_140cd4510;
  lVar1 = param_1 + -0xf8;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_140cd4466;
    local_e8 = 0;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_140cd4466:
    local_e8 = param_1 + 8;
  }
  local_f0 = lVar1;
  FUN_140cd4592(local_e0,lVar4 + 0x30);
  local_118 = &local_100;
  local_100 = 0;
  local_f8 = *(undefined2 *)(lVar3 + 0xbc);
  local_108 = param_1 + 0x10;
  FUN_140cd4770(local_e0,local_a0,*(undefined2 *)(lVar3 + 0x7e));
  FUN_140cd48e4(local_a0,lVar1,param_3,param_4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_a0[0] = &PTR_FUN_14a4c3740;
  if (local_80 == '\x01') {
    local_80 = '\0';
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_140cd4510:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd4592 FUN_140cd4592 body=119 status=ok
// SIG undefined FUN_140cd4592(void)

undefined8 FUN_140cd4592(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_28 = param_3[1];
  FUN_140cd460a(param_1,*param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd460a FUN_140cd460a body=138 status=ok
// SIG undefined FUN_140cd460a(void)

undefined8 * FUN_140cd460a(undefined8 *param_1,undefined2 param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined2 *)(param_1 + 1) = param_2;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *param_1 = &PTR_FUN_14a4995a0;
  local_30 = *param_3;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_28 = param_3[1];
  FUN_140cd4696(param_1 + 2);
  *(undefined2 *)(param_1 + 7) = param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd4696 FUN_140cd4696 body=133 status=ok
// SIG undefined FUN_140cd4696(void)

longlong * FUN_140cd4696(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((*param_2 != 0) && (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    param_1[2] = lVar2;
  }
  return param_1;
}



// FUNCTION 140cd471c FUN_140cd471c body=83 status=ok
// SIG undefined FUN_140cd471c(void)

longlong FUN_140cd471c(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((param_2 != '\0') && (lVar1 == 0)) {
    lVar1 = FUN_1475bdf32(param_1 + -0x100);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x118) = lVar1;
  }
  return lVar1;
}



// FUNCTION 140cd4770 FUN_140cd4770 body=372 status=ok
// SIG undefined FUN_140cd4770(void)

undefined8 *
FUN_140cd4770(longlong param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  byte bVar6;
  char cVar7;
  uint uVar8;
  
  uVar8 = 0x10000;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar7 = FUN_14753313a(*(longlong *)(param_1 + 0x20),*param_5);
    if (cVar7 != '\0') {
      iVar3 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
        FUN_147650ab2((longlong *)(param_1 + 0x28),iVar3);
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      *(undefined4 *)(lVar5 + 8 + (longlong)iVar3 * 0xc) = *(undefined4 *)(param_5 + 1);
      *(undefined8 *)(lVar5 + (longlong)iVar3 * 0xc) = *param_5;
      uVar8 = 0;
    }
  }
  uVar2 = *(undefined2 *)(param_1 + 0x38);
  uVar4 = *param_4;
  uVar1 = *(undefined1 *)(param_1 + 10);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 8);
  *(uint *)(param_2 + 2) = param_3 & 0xffff | uVar8;
  *(undefined1 *)(param_2 + 4) = 1;
  param_2[3] = uVar4;
  *(undefined1 *)(param_2 + 5) = uVar1;
  *param_2 = &PTR_FUN_14a4c7380;
  lVar5 = *(longlong *)(param_1 + 0x10);
  param_2[6] = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar6 = DAT_14c950c29;
  param_2[7] = *(undefined8 *)(param_1 + 0x18);
  lVar5 = *(longlong *)(param_1 + 0x20);
  param_2[8] = lVar5;
  if ((lVar5 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
  }
  param_2[9] = 0;
  iVar3 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(param_2 + 10) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  }
  else {
    FUN_147650b46(param_2 + 9,iVar3);
    memcpy((void *)param_2[9],_Src,(longlong)iVar3 * 0xc);
  }
  *(undefined2 *)(param_2 + 0xb) = uVar2;
  return param_2;
}



// FUNCTION 140cd48e4 FUN_140cd48e4 body=1064 status=ok
// SIG undefined FUN_140cd48e4(void)

void FUN_140cd48e4(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong ****pppplVar13;
  longlong *plVar14;
  int iVar15;
  undefined8 in_R10;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_138 [36];
  int local_114;
  int local_110;
  int local_10c;
  longlong local_108;
  longlong local_100;
  longlong ***local_f8 [8];
  byte local_b8;
  undefined **local_b0;
  undefined2 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  char local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined1 local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  piVar6 = *(int **)(param_3 + 8);
  if (piVar6 == (int *)0x0) {
    iVar15 = 0;
    iVar16 = 0;
    uVar18 = 0;
    local_114 = 0;
  }
  else {
    local_114 = *piVar6;
    uVar18 = (ulonglong)(uint)piVar6[1];
    iVar16 = piVar6[2];
    iVar15 = piVar6[3];
  }
  lVar9 = FUN_14009d2a0();
  FUN_14038fb82();
  lVar12 = *(longlong *)(param_2 + 0x20);
  iVar17 = (int)uVar18;
  if (lVar12 != 0) {
    lVar10 = FUN_140bc7f26();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
         ) == lVar10 + 0x30)) {
      if (*(int *)(param_3 + 0x10) == 0) {
        local_a8 = *(undefined2 *)(param_1 + 8);
        uStack_a0 = *(undefined4 *)(param_1 + 0x10);
        local_90 = *(char *)(param_1 + 0x20);
        if (local_90 == '\x01') {
          in_R10 = *(undefined8 *)(param_1 + 0x18);
        }
        local_50 = *(undefined1 *)(param_1 + 0x28);
        if (local_90 != '\0') {
          uStack_98 = in_R10;
        }
        local_88 = CONCAT22(local_88._2_2_,*(undefined2 *)(lVar9 + 0x62));
        local_70 = 1;
        local_84 = *(int *)(lVar12 + 0x100);
        iStack_80 = *(int *)(lVar12 + 0x104);
        iStack_7c = *(int *)(lVar12 + 0x108);
        uStack_78 = *(undefined4 *)(lVar12 + 0x10c);
        local_74 = *(undefined4 *)(lVar12 + 0x110);
        local_6c = (uint)CONCAT12((iVar17 != 0 || local_114 != 0) || (iVar16 != 0 || iVar15 != 0),
                                  *(undefined2 *)(lVar9 + 100));
        local_58 = 1;
        local_68 = local_114;
        local_b0 = &PTR_FUN_14a4c75a0;
        local_64 = iVar17;
        local_60 = iVar16;
        local_5c = iVar15;
        FUN_1457956a2(param_4);
      }
      else {
        cVar8 = FUN_145e0c77a(param_3);
        if (cVar8 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
        }
        if (((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
           (*(longlong *)(param_1 + 0x38) != 0)) {
          local_a8 = *(undefined2 *)(lVar9 + 0x62);
          local_88 = local_114;
          local_8c = (uint)CONCAT12(((iVar16 != 0 || iVar15 != 0) || iVar17 != 0) || local_114 != 0,
                                    *(undefined2 *)(lVar9 + 100));
          local_90 = '\x01';
          local_a4 = *(undefined4 *)(lVar12 + 0x100);
          uStack_a0 = *(undefined4 *)(lVar12 + 0x104);
          uStack_9c = *(undefined4 *)(lVar12 + 0x108);
          uStack_98 = *(undefined8 *)(lVar12 + 0x10c);
          uStack_78 = CONCAT31(uStack_78._1_3_,1);
          local_74 = CONCAT22(local_74._2_2_,*(undefined2 *)(param_1 + 0x58));
          local_70 = 0;
          local_b0 = &PTR_FUN_14a4c75e0;
          local_84 = iVar17;
          iStack_80 = iVar16;
          iStack_7c = iVar15;
          FUN_147650bb0();
          if (*(longlong *)(param_1 + 0x30) == 0) {
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = *(longlong **)(param_1 + 0x38);
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,local_f8);
          pppplVar13 = local_f8;
          if ((local_b8 & 2) == 0) {
            pppplVar13 = (longlong ****)local_f8[0];
          }
          (*(code *)(*pppplVar13)[3])(pppplVar13,&local_100,*(undefined4 *)(param_3 + 0x10));
          if ((longlong)*(int *)(param_1 + 0x50) != 0) {
            plVar14 = *(longlong **)(param_1 + 0x48);
            lVar12 = (longlong)*(int *)(param_1 + 0x50) * 0xc;
            do {
              if (*plVar14 == local_100) {
                if (plVar14 != (longlong *)0x0) {
                  FUN_147533240(*(undefined8 *)(param_1 + 0x40),plVar14,param_3,param_4);
                }
                break;
              }
              plVar14 = (longlong *)((longlong)plVar14 + 0xc);
              lVar12 = lVar12 + -0xc;
            } while (lVar12 != 0);
          }
          if ((local_b8 & 1) != 0) {
            pppplVar13 = (longlong ****)local_f8[0];
            if ((local_b8 & 2) != 0) {
              pppplVar13 = local_f8;
            }
            local_b8 = local_b8 & 0xfe;
            (*(code *)**pppplVar13)(pppplVar13,0);
            if ((local_b8 & 2) == 0) {
              FUN_1400020a8(local_f8[0]);
            }
          }
        }
      }
      goto LAB_140cd4a59;
    }
  }
  uVar3 = *(undefined2 *)(lVar9 + 100);
  uVar4 = *(undefined2 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  cVar8 = *(char *)(param_1 + 0x20);
  if (cVar8 == '\x01') {
    uVar18 = *(ulonglong *)(param_1 + 0x18);
  }
  uVar2 = *(undefined1 *)(param_1 + 0x28);
  bVar7 = local_114 != 0;
  local_110 = iVar16;
  local_10c = iVar15;
  local_108 = param_4;
  puVar11 = (undefined8 *)FUN_14001cc68(0x48,8);
  lVar12 = local_108;
  *(undefined2 *)(puVar11 + 1) = uVar4;
  *(undefined4 *)(puVar11 + 2) = uVar5;
  *(char *)(puVar11 + 4) = cVar8;
  if (cVar8 != '\0') {
    puVar11[3] = uVar18;
  }
  *(uint *)(puVar11 + 5) =
       (uint)CONCAT12((iVar17 != 0 || bVar7) || (iVar16 != 0 || iVar15 != 0),uVar3);
  *(undefined1 *)((longlong)puVar11 + 0x3c) = 1;
  *(int *)((longlong)puVar11 + 0x2c) = local_114;
  *(int *)(puVar11 + 6) = iVar17;
  *(int *)((longlong)puVar11 + 0x34) = local_110;
  *(int *)(puVar11 + 7) = local_10c;
  *(undefined1 *)(puVar11 + 8) = uVar2;
  *puVar11 = &PTR_FUN_14a4c7620;
  iVar16 = *(int *)(local_108 + 0x50);
  *(uint *)(local_108 + 0x50) = iVar16 + 1U;
  if (*(uint *)(local_108 + 0x54) < iVar16 + 1U) {
    FUN_140561fb4(local_108,iVar16);
  }
  lVar9 = *(longlong *)(lVar12 + 0x48);
  if (lVar9 == 0) {
    lVar9 = lVar12;
  }
  puVar1 = (undefined8 *)(lVar9 + (longlong)iVar16 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar11;
LAB_140cd4a59:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd4d2c FUN_140cd4d2c body=465 status=ok
// SIG undefined FUN_140cd4d2c(void)

void FUN_140cd4d2c(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_1;
  lVar7 = *(longlong *)(lVar6 + 0x40);
  if ((lVar7 != 0) && (*(byte *)(lVar7 + 0x90) != 0)) {
    if ((*(byte *)(lVar7 + 0x90) < 2) || (cVar3 = *(char *)(lVar7 + 0x1ac), cVar3 == '\x02')) {
      if (param_2 == '\0') {
        FUN_140cd4f30(lVar6,4,0,1);
        lVar6 = *(longlong *)(*param_1 + 0x40);
        if ((lVar6 != 0) && (1 < *(byte *)(lVar6 + 0x90))) {
          lVar7 = *(longlong *)(lVar6 + 0x10);
          *(undefined1 *)(lVar6 + 0x68) = 0;
          *(byte *)(lVar6 + 0x94) = *(byte *)(lVar6 + 0x94) | 0x10;
          if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 8), lVar6 != 0)) {
            if (DAT_14c992a90 != '\x01') {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
            }
            AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
            if (*(int *)(lVar7 + 0x18) == -1) {
              lVar6 = *(longlong *)(lVar6 + 0x98);
              uVar4 = *(uint *)(lVar7 + 0x1c);
              piVar2 = (int *)(lVar6 + 0x160 + (ulonglong)uVar4 * 4);
              *piVar2 = *piVar2 + 1;
              *(int *)(lVar6 + 0x194) = *(int *)(lVar6 + 0x194) + 1;
              lVar6 = lVar6 + (ulonglong)uVar4 * 0x10;
              iVar5 = *(int *)(lVar6 + 0x1a0);
              *(int *)(lVar7 + 0x18) = iVar5;
              *(uint *)(lVar6 + 0x1a0) = iVar5 + 1U;
              if (*(uint *)(lVar6 + 0x1a4) < iVar5 + 1U) {
                FUN_140431d5c((longlong *)(lVar6 + 0x198),iVar5);
              }
              lVar6 = *(longlong *)(lVar6 + 0x198);
              lVar8 = (longlong)iVar5 * 0x20;
              *(longlong *)(lVar6 + lVar8) = lVar7;
              *(undefined4 *)(lVar6 + 8 + lVar8) = 0;
              puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar8);
              *puVar1 = 0;
              puVar1[1] = 0;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
          }
        }
      }
    }
    else if (((cVar3 == '\x01') || (cVar3 == '\x04')) && (param_2 != '\0')) {
      FUN_140cd4f30(lVar6,2,0,1);
      local_48 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_1402a3ce4(*param_1,&local_58,1);
      local_48 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_140431a82(*param_1,&local_58,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd4f30 FUN_140cd4f30 body=404 status=ok
// SIG undefined FUN_140cd4f30(void)

void FUN_140cd4f30(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0x40);
  if ((lVar3 != 0) && (1 < *(byte *)(lVar3 + 0x90))) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    plVar5 = *(longlong **)(param_1 + 0x28);
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
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x78);
    }
    *(undefined4 *)(lVar4 + 4) = uVar6;
    if ((char)param_2 != '\x04') {
      if (*(char *)(lVar3 + 0x1ac) == '\x04') {
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        FUN_1402a3ce4(param_1,&local_98,param_4);
        local_88 = 0;
        local_98 = 0;
        uStack_90 = 0;
        FUN_140431a82(param_1,&local_98,param_4);
      }
      if (((char)param_2 == '\x02') && (*(char *)(lVar3 + 0x1ac) != '\x02')) {
        local_a8 = &local_98;
        local_78 = 0;
        local_70 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_6c = 0x3f800000;
        local_a0 = (char)param_4;
        FUN_144a678a8(&local_a8,*(undefined8 *)(param_1 + 0x40));
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if ((lVar3 != 0) && (1 < *(byte *)(lVar3 + 0x90))) {
    FUN_144a05e16(lVar3,param_2,param_3,param_4);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd50cc FUN_140cd50cc body=57 status=ok
// SIG undefined FUN_140cd50cc(void)

void FUN_140cd50cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a720 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a720 =
         FUN_140002ddd(FUN_1464caa5e,uVar1,L"GbxBodyNodeSettings_MovingPlatformMoveSwitch");
  }
  return;
}



// FUNCTION 140cd510e FUN_140cd510e body=261 status=ok
// SIG undefined FUN_140cd510e(void)

longlong * FUN_140cd510e(longlong *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (longlong)&PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = (longlong)&PTR_FUN_14ac3cbb0;
  FUN_140440628(param_1 + 0x10,&DAT_14cb23c64,0);
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 3;
  *(char *)(param_1 + 0x1d) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x1e) = 1;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x23) = 4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 3;
  *(char *)(param_1 + 0x25) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined1 *)((longlong)param_1 + 0x132) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



// FUNCTION 140cd5214 FUN_140cd5214 body=24 status=ok
// SIG undefined FUN_140cd5214(void)

void FUN_140cd5214(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = *(undefined1 *)(param_1 + 0x131);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 140cd522c FUN_140cd522c body=552 status=ok
// SIG undefined FUN_140cd522c(void)

void FUN_140cd522c(uint *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong **)(param_1 + 2) != (longlong *)0x0) && (param_1[1] != 0)) {
    uVar3 = *param_1;
    uVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140cd52c1;
    lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((((lVar8 != 0) && (*(uint *)(lVar8 + 0x10) == param_1[1])) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)) &&
       (lVar8 = (**(code **)(**(longlong **)(param_1 + 2) + 0x18))(), lVar8 != 0)) {
      uVar7 = FUN_1447210f0(lVar8);
      goto LAB_140cd52c1;
    }
  }
  uVar7 = 0;
LAB_140cd52c1:
  FUN_14027ab42(&local_30,uVar7);
  if (local_28 != (longlong *)0x0) {
    iVar6 = (int)local_28[1];
    do {
      if (iVar6 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_28[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(local_28 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar9 = local_28;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar9 != (longlong *)0x0) {
      if (((((local_30 != 0) && (*(longlong *)(param_1 + 2) != 0)) &&
           ((uVar3 = param_1[1], uVar3 != 0 &&
            ((uVar4 = *param_1, -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)))))) &&
          (lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar8 != 0)) &&
         (((*(uint *)(lVar8 + 0x10) == uVar3 && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)) &&
          (*(int *)(local_30 + 0x90) != *(int *)(local_30 + 0xbc))))) {
        lVar8 = local_30 + 0xc0;
        if (*(longlong *)(local_30 + 200) != 0) {
          lVar8 = *(longlong *)(local_30 + 200);
        }
        iVar6 = *(int *)(lVar8 + ((longlong)(int)(uVar4 ^ uVar3) &
                                 (longlong)*(int *)(local_30 + 0xd0) - 1U) * 4);
        if (iVar6 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(local_30 + 0x88) + 8 + (longlong)iVar6 * 0x18) ==
                *(longlong *)(param_1 + 2)) {
              FUN_140cd5456();
              FUN_140fd76d8(local_30 + 0x28,param_1,1);
              break;
            }
            iVar6 = *(int *)(*(longlong *)(local_30 + 0x88) + (longlong)iVar6 * 0x18 + 0x10);
          } while (iVar6 != -1);
        }
      }
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd5456 FUN_140cd5456 body=85 status=ok
// SIG undefined FUN_140cd5456(void)

void FUN_140cd5456(longlong *param_1,int param_2)

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
  FUN_140cd54ac();
  return;
}



// FUNCTION 140cd54ac FUN_140cd54ac body=114 status=ok
// SIG undefined FUN_140cd54ac(void)

void FUN_140cd54ac(longlong *param_1,int param_2)

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



// FUNCTION 140cd551e FUN_140cd551e body=3412 status=ok
// SIG undefined FUN_140cd551e(void)

void FUN_140cd551e(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar23;
  ulonglong *puVar24;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  wchar_t *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  code **local_2b0;
  code *local_2a8;
  code *local_2a0;
  char local_289;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  longlong *local_278;
  longlong local_270;
  longlong local_268;
  longlong *local_260;
  ulonglong local_258;
  longlong local_250;
  undefined1 *local_248;
  longlong local_240;
  int local_238;
  longlong local_230;
  int local_228;
  undefined1 local_219;
  longlong local_218;
  int local_210;
  undefined1 local_208 [8];
  code *local_200;
  ushort local_1f4 [2];
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  uint local_1e0;
  uint local_1d8 [8];
  undefined8 local_1b8;
  uint local_1b0 [8];
  undefined8 local_190;
  longlong local_188;
  ulonglong uStack_180;
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined1 auStack_150 [32];
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  undefined1 local_110 [32];
  longlong local_f0;
  undefined1 local_e8 [32];
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [32];
  longlong local_90;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  undefined7 uVar22;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar8 = FUN_14009d2a0();
  lVar9 = FUN_14038fb82();
  local_278 = *(longlong **)(param_1 + 0x40);
  local_260 = *(longlong **)(param_1 + 0x48);
  if (local_260 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_260 + 1) = (int)local_260[1] + 1;
    UNLOCK();
  }
  uVar3 = *(ushort *)(lVar8 + 0x50);
  iVar16 = uVar3 + 1;
  local_1f4[0] = *(ushort *)(lVar8 + 0x11a);
  local_1f4[1] = *(undefined2 *)(lVar9 + 0xf16);
  local_1f0 = CONCAT22(uVar3,(undefined2)local_1f0);
  uStack_1ec = CONCAT22(*(undefined2 *)(lVar8 + 0x6e),*(undefined2 *)(lVar8 + 0x4a));
  uStack_1e8._0_2_ = (ushort)(byte)uStack_1e8;
  uStack_1e4 = 0x6ff;
  local_1e0 = local_1e0 & 0xffffff00;
  local_1b8 = 0x10000000000;
  local_190 = 0x10000000000;
  local_158 = 0x10000000000;
  local_188 = 0;
  uStack_180 = 0;
  local_130 = 0x10000000000;
  iVar11 = iVar16;
  if (0xff < uVar3) {
    FUN_14497ddce(local_1d8,0);
    iVar11 = (int)local_1b8 + iVar16;
  }
  iVar17 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar17 = iVar11;
  }
  local_1b8._0_4_ = iVar11;
  if (iVar11 % 0x20 != 0) {
    bVar10 = -(char)(iVar11 % 0x20);
    local_1d8[iVar17 >> 5] = (local_1d8[iVar17 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
  }
  FUN_1447c45ca(local_1d8,0,iVar16,0);
  uVar7 = uStack_1ec;
  local_1d8[uVar3 >> 5] = local_1d8[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  iVar11 = (int)local_1b8;
  uVar3 = (ushort)uStack_1ec;
  iVar16 = (uStack_1ec & 0xffff) + 1;
  iVar17 = iVar16 - (int)local_1b8;
  if (iVar17 != 0 && (int)local_1b8 <= iVar16) {
    if ((int)local_1b8 == 0) {
LAB_140cd5696:
      if (local_1b8._4_4_ <= (int)(uStack_1ec & 0xffff)) {
        local_1b8._4_4_ = 0x100;
        FUN_14497ddce(local_1d8,(int)local_1b8);
        iVar16 = (int)local_1b8 + iVar17;
      }
      iVar15 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar15 = iVar16;
      }
      local_1b8._0_4_ = iVar16;
      iVar16 = (int)local_1b8;
      if (iVar16 % 0x20 != 0) {
        bVar10 = -(char)(iVar16 % 0x20);
        local_1d8[iVar15 >> 5] = (local_1d8[iVar15 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
        iVar16 = (int)local_1b8;
      }
    }
    else {
      iVar15 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar15 = (int)local_1b8 + -1;
      }
      if (iVar15 >> 5 != (uint)((ushort)uStack_1ec >> 5)) goto LAB_140cd5696;
    }
    local_1b8._0_4_ = iVar16;
    FUN_1447c45ca(local_1d8,iVar11,iVar17,0);
  }
  uVar12 = uStack_1ec;
  local_1d8[uVar3 >> 5] = local_1d8[uVar3 >> 5] | 1 << ((byte)uVar7 & 0x1f);
  iVar11 = (int)local_1b8;
  uVar3 = uStack_1ec._2_2_;
  iVar16 = uStack_1ec._2_2_ + 1;
  iVar17 = iVar16 - (int)local_1b8;
  if (iVar17 != 0 && (int)local_1b8 <= iVar16) {
    if ((int)local_1b8 == 0) {
LAB_140cd5731:
      if (local_1b8._4_4_ <= (int)(uint)uStack_1ec._2_2_) {
        local_1b8._4_4_ = 0x100;
        FUN_14497ddce(local_1d8,(int)local_1b8);
        iVar16 = (int)local_1b8 + iVar17;
      }
      iVar15 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar15 = iVar16;
      }
      local_1b8._0_4_ = iVar16;
      iVar16 = (int)local_1b8;
      if (iVar16 % 0x20 != 0) {
        bVar10 = -(char)(iVar16 % 0x20);
        local_1d8[iVar15 >> 5] = (local_1d8[iVar15 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
        iVar16 = (int)local_1b8;
      }
    }
    else {
      iVar15 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar15 = (int)local_1b8 + -1;
      }
      if (iVar15 >> 5 != (uint)(uStack_1ec._2_2_ >> 5)) goto LAB_140cd5731;
    }
    local_1b8._0_4_ = iVar16;
    FUN_1447c45ca(local_1d8,iVar11,iVar17,0);
  }
  local_1d8[uVar3 >> 5] = local_1d8[uVar3 >> 5] | 1 << ((byte)(uVar12 >> 0x10) & 0x1f);
  lVar9 = 0;
  do {
    iVar11 = (int)local_1b8;
    uVar3 = *(ushort *)((longlong)local_1f4 + lVar9);
    iVar16 = uVar3 + 1;
    iVar17 = iVar16 - (int)local_1b8;
    if (iVar17 != 0 && (int)local_1b8 <= iVar16) {
      if ((int)local_1b8 == 0) {
LAB_140cd57cf:
        if (local_1b8._4_4_ <= (int)(uint)uVar3) {
          local_1b8._4_4_ = 0x100;
          FUN_14497ddce(local_1d8,(int)local_1b8);
          iVar16 = (int)local_1b8 + iVar17;
        }
        iVar15 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar15 = iVar16;
        }
        local_1b8._0_4_ = iVar16;
        iVar16 = (int)local_1b8;
        if (iVar16 % 0x20 != 0) {
          bVar10 = -(char)(iVar16 % 0x20);
          local_1d8[iVar15 >> 5] = (local_1d8[iVar15 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
          iVar16 = (int)local_1b8;
        }
      }
      else {
        iVar15 = (int)local_1b8 + 0x1e;
        if (-1 < (int)local_1b8 + -1) {
          iVar15 = (int)local_1b8 + -1;
        }
        if (iVar15 >> 5 != (uint)(uVar3 >> 5)) goto LAB_140cd57cf;
      }
      local_1b8._0_4_ = iVar16;
      FUN_1447c45ca(local_1d8,iVar11,iVar17,0);
    }
    local_1d8[uVar3 >> 5] = local_1d8[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
    uVar21 = local_190;
    lVar9 = lVar9 + 2;
  } while (lVar9 != 4);
  uVar3 = *(ushort *)(lVar8 + 0x130);
  iVar11 = uVar3 + 1;
  iVar16 = iVar11 - (int)local_190;
  if (iVar16 == 0 || iVar11 < (int)local_190) goto LAB_140cd58da;
  if ((int)local_190 == 0) {
LAB_140cd588b:
    if (local_190._4_4_ <= (int)(uint)uVar3) {
      local_190 = CONCAT44(0x100,(int)local_190);
      FUN_14497ddce(local_1b0,uVar21 & 0xffffffff);
      iVar11 = (int)local_190 + iVar16;
    }
    iVar17 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar17 = iVar11;
    }
    local_190 = CONCAT44(local_190._4_4_,iVar11);
    if (iVar11 % 0x20 != 0) {
      bVar10 = -(char)(iVar11 % 0x20);
      local_1b0[iVar17 >> 5] = (local_1b0[iVar17 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
    }
  }
  else {
    iVar17 = (int)local_190 + 0x1e;
    if (-1 < (int)local_190 + -1) {
      iVar17 = (int)local_190 + -1;
    }
    if (iVar17 >> 5 != (uint)(uVar3 >> 5)) goto LAB_140cd588b;
    local_190 = CONCAT44(local_190._4_4_,iVar11);
  }
  FUN_1447c45ca(local_1b0,uVar21 & 0xffffffff,iVar16,0);
LAB_140cd58da:
  local_1b0[uVar3 >> 5] = local_1b0[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  if (((local_1f0._2_2_ != -1) && ((ushort)uStack_1ec != -1)) && (uStack_1ec._2_2_ != -1)) {
    lVar8 = *(longlong *)(param_1 + 0x28);
    local_118 = local_1e0;
    local_128 = local_1f0;
    uStack_124 = uStack_1ec;
    uStack_120 = uStack_1e8;
    uStack_11c = uStack_1e4;
    local_f0 = 0;
    uVar7 = (int)local_1b8 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar7) {
      uVar12 = 0x100;
      if (0x100 < uVar7) {
        uVar12 = uVar7;
      }
      local_f0 = (ulonglong)uVar12 << 0x20;
      FUN_14497ddce(local_110,0);
    }
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_1b8);
    if ((int)local_1b8 != 0) {
      memcpy(local_110,local_1d8,(ulonglong)((int)local_1b8 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_c8 = 0;
    uVar7 = (int)local_190 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar7) {
      uVar12 = 0x100;
      if (0x100 < uVar7) {
        uVar12 = uVar7;
      }
      local_c8 = (ulonglong)uVar12 << 0x20;
      FUN_14497ddce(local_e8,0);
    }
    local_c8 = CONCAT44(local_c8._4_4_,(int)local_190);
    if ((int)local_190 != 0) {
      memcpy(local_e8,local_1b0,(ulonglong)((int)local_190 + 0x1fU >> 3 & 0xfffffffc));
    }
    uVar21 = uStack_180;
    lVar9 = local_188;
    local_c0 = 0;
    local_b8 = (int)uStack_180;
    if ((int)uStack_180 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1403b8c86(&local_c0,uStack_180 & 0xffffffff,0);
      FUN_1403b8bfd(local_c0,lVar9,uVar21 & 0xffffffff);
    }
    local_90 = 0;
    uVar7 = (int)local_158 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar7) {
      uVar12 = 0x100;
      if (0x100 < uVar7) {
        uVar12 = uVar7;
      }
      local_90 = (ulonglong)uVar12 << 0x20;
      FUN_14497ddce(local_b0,0);
    }
    local_90 = CONCAT44(local_90._4_4_,(int)local_158);
    if ((int)local_158 != 0) {
      memcpy(local_b0,local_178,(ulonglong)((int)local_158 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_68 = 0;
    uVar7 = (int)local_130 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar7) {
      uVar12 = 0x100;
      if (0x100 < uVar7) {
        uVar12 = uVar7;
      }
      local_68 = (ulonglong)uVar12 << 0x20;
      FUN_14497ddce(auStack_88,0);
    }
    local_68 = CONCAT44(local_68._4_4_,(int)local_130);
    if ((int)local_130 != 0) {
      memcpy(auStack_88,auStack_150,(ulonglong)((int)local_130 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_58 = *(undefined8 *)(lVar8 + 0x270);
    local_289 = *(char *)(lVar8 + 0x298);
    if (local_289 == '\0') {
      *(int *)(lVar8 + 0x28c) = *(int *)(lVar8 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar8 + 0x28c) = *(int *)(lVar8 + 0x28c) + 1;
      UNLOCK();
    }
    local_248 = local_110;
    local_240 = lVar8 + 0x28;
    local_60 = lVar8 + 0x28;
    iVar11 = FUN_1403b8464(&local_248,0);
    local_288 = *(int *)(lVar8 + 0x38);
    local_238 = iVar11;
    if (iVar11 != local_288) {
      local_278 = local_278 + 0x1b;
      do {
        lVar8 = local_240;
        if (local_289 == '\0') {
          local_270 = *(longlong *)(*(longlong *)(local_240 + 0x60) + (longlong)iVar11 * 8);
          *(undefined4 *)(local_270 + 0x14) = 0;
        }
        else {
          local_270 = 0;
        }
        lVar23 = (longlong)iVar11;
        lVar9 = *(longlong *)(*(longlong *)(local_240 + 0x60) + lVar23 * 8);
        if (*(ushort *)(lVar9 + 0xc) != 0) {
          plVar18 = *(longlong **)(lVar9 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar9 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar18 + 0x1e) == uStack_124._2_2_) goto LAB_140cd5caa;
            plVar18 = plVar18 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar18 = (longlong *)0x0;
LAB_140cd5caa:
        local_27c = *(int *)(lVar9 + 0x14);
        local_238 = iVar11;
        if (local_27c == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
        }
        LOCK();
        *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
        UNLOCK();
        lVar9 = *plVar18;
        lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0x60) + lVar23 * 8);
        if (*(ushort *)(lVar13 + 0xc) != 0) {
          plVar19 = *(longlong **)(lVar13 + 0x28);
          lVar14 = (ulonglong)*(ushort *)(lVar13 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar19 + 0x1e) == (short)uStack_124) goto LAB_140cd5cfe;
            plVar19 = plVar19 + 4;
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != 0);
        }
        plVar19 = (longlong *)0x0;
LAB_140cd5cfe:
        local_280 = *(int *)(lVar13 + 0x14);
        if (local_280 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar19 + 1));
        }
        LOCK();
        *(int *)(plVar19 + 3) = (int)plVar19[3] + 1;
        UNLOCK();
        local_268 = *plVar19;
        lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0x60) + lVar23 * 8);
        if (*(ushort *)(lVar13 + 0xc) != 0) {
          puVar24 = *(ulonglong **)(lVar13 + 0x28);
          lVar14 = (ulonglong)*(ushort *)(lVar13 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar24 + 0x1e) == local_128._2_2_) goto LAB_140cd5d5a;
            puVar24 = puVar24 + 4;
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != 0);
        }
        puVar24 = (ulonglong *)0x0;
LAB_140cd5d5a:
        local_284 = *(int *)(lVar13 + 0x14);
        local_250 = lVar9;
        if (local_284 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar24 + 1));
        }
        LOCK();
        *(int *)(puVar24 + 3) = (int)puVar24[3] + 1;
        UNLOCK();
        uVar21 = *puVar24;
        lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x60) + lVar23 * 8);
        uVar4 = *(undefined8 *)(lVar9 + 0x18);
        local_258 = (ulonglong)*(ushort *)(lVar9 + 0xe);
        local_218 = lVar8;
        local_210 = iVar11;
        FUN_140cd6274(local_208,&local_218);
        lVar8 = local_268;
        plVar5 = local_278;
        local_2e8 = local_268;
        (**(code **)*local_278)(local_278,local_208,uVar4,uVar21);
        uVar6 = local_258;
        local_219 = 0;
        local_230 = lVar8;
        iVar11 = (int)local_258;
        local_228 = iVar11;
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_219,&local_230);
        lVar8 = local_250;
        if (iVar11 != 0) {
          uVar20 = 0;
          do {
            plVar5 = *(longlong **)(local_268 + uVar20 * 8);
            if (plVar5 != (longlong *)0x0) {
              uVar2 = *(undefined1 *)(lVar8 + uVar20);
              uVar22 = (undefined7)(uVar21 >> 8);
              uVar21 = CONCAT71(uVar22,uVar2);
              if (DAT_14cac9ca8 == 0) {
                local_2b0 = &local_200;
                local_200 = FUN_141030f22;
                local_2a0 = FUN_14081d0ea;
                local_2a8 = FUN_14081d0ea;
                local_2b8 = &LAB_1478c0a72;
                local_2c0 = &LAB_1417b2375;
                local_2c8 = L"Engine";
                local_2d0 = 0x1000000000;
                local_2d8 = 0x10000004;
                local_2e0 = 8;
                local_2e8 = CONCAT44(local_2e8._4_4_,0x390);
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              }
              lVar9 = plVar5[2];
              iVar11 = *(int *)(lVar9 + 0x38);
              if ((iVar11 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
                  DAT_14cac9ca8 + 0x30)) {
                if (DAT_14cac7648 == 0) {
                  local_2b0 = &local_200;
                  local_200 = FUN_144a7958c;
                  local_2a0 = FUN_14081d0ea;
                  local_2a8 = FUN_143242436;
                  local_2b8 = &LAB_14789ef1f;
                  local_2c0 = &LAB_1417b008f;
                  local_2c8 = L"Engine";
                  local_2d0 = 0x8000000000;
                  local_2d8 = 0x10000004;
                  local_2e0 = 0x10;
                  local_2e8 = CONCAT44(local_2e8._4_4_,0x2b0);
                  FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
                  lVar9 = plVar5[2];
                  iVar11 = *(int *)(lVar9 + 0x38);
                }
                iVar16 = *(int *)(DAT_14cac7648 + 0x38);
                if ((iVar16 <= iVar11) &&
                   (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar16 * 8) ==
                    DAT_14cac7648 + 0x30)) {
                  FUN_1449e3cec(plVar5,uVar21 & 0xffffffff ^ 1,
                                CONCAT71((int7)(int3)((uint)iVar16 >> 8),1));
                  FUN_14045627c(plVar5,uVar21 & 0xffffffff,1);
                }
              }
              else {
                uVar21 = CONCAT71(uVar22,uVar2) ^ 1;
                (**(code **)(*plVar5 + 0x330))(plVar5,uVar21 & 0xffffffff);
              }
            }
            uVar20 = uVar20 + 1;
          } while (uVar6 != uVar20);
        }
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar18 + 3) = (int)plVar18[3] + -1;
          UNLOCK();
          if (local_27c == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar18 + 1));
          }
        }
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar19 + 3) = (int)plVar19[3] + -1;
          UNLOCK();
          if (local_280 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar19 + 1));
          }
        }
        if (puVar24 != (ulonglong *)0x0) {
          LOCK();
          *(int *)(puVar24 + 3) = (int)puVar24[3] + -1;
          UNLOCK();
          if (local_284 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(puVar24 + 1));
          }
        }
        if (local_270 != 0) {
          *(undefined4 *)(local_270 + 0x14) = 1;
        }
        iVar11 = FUN_1403b8464(&local_248,local_238 + 1);
        local_238 = iVar11;
      } while (iVar11 != local_288);
    }
    if (local_248 != (undefined1 *)0x0) {
      if (*(char *)(local_240 + 0x270) == '\0') {
        *(int *)(local_240 + 0x264) = *(int *)(local_240 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_240 + 0x264) = *(int *)(local_240 + 0x264) + -1;
        UNLOCK();
      }
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  plVar18 = local_260;
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar18 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd6274 FUN_140cd6274 body=104 status=ok
// SIG undefined FUN_140cd6274(void)

uint * FUN_140cd6274(uint *param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = (uint)*(ushort *)
                    (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) +
                    0xe);
  lVar4 = (longlong)(int)param_2[1] * 0x28 + *(longlong *)(*param_2 + 8);
  lVar3 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar3 + 0x10a);
  if ((uVar1 == 0xffff) ||
     (uVar2 = *(uint *)(lVar4 + 0x20), uVar2 == uVar1 || (int)uVar2 < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  *(bool *)(param_1 + 1) = bVar5;
  return param_1;
}



// FUNCTION 140cd62f6 FUN_140cd62f6 body=59 status=ok
// SIG undefined FUN_140cd62f6(void)

undefined8 * FUN_140cd62f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63870;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cd633a FUN_140cd633a body=931 status=ok
// SIG undefined FUN_140cd633a(void)

undefined8 FUN_140cd633a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined2 local_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_60;
  uint local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = DAT_14cb73f90;
  local_78 = DAT_14cb73f88;
  FUN_1448075d0(local_50);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar8 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar5[9];
      }
      iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar5[10] - 1U & local_50[0]) * 4);
      if (iVar9 != -1) {
        do {
          lVar1 = *plVar5 + (longlong)iVar9 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar9 * 0x40) == local_50[0]) {
            if ((((lVar1 != 0) &&
                 (puVar6 = (undefined8 *)(lVar1 + 0x28), puVar6 != (undefined8 *)0x0)) &&
                ((byte *)*puVar6 != (byte *)0x0)) && ((*(byte *)*puVar6 & 0x40) == 0))
            goto LAB_140cd63f4;
            break;
          }
          iVar9 = *(int *)(lVar1 + 0x38);
        } while (iVar9 != -1);
      }
    }
  }
  puVar6 = &DAT_14c9a1308;
LAB_140cd63f4:
  if (((byte *)*puVar6 == (byte *)0x0) ||
     (bVar2 = *(byte *)*puVar6, (bVar2 & 0x68) != 0 || (bVar2 & 3) == 0)) {
    local_80 = DAT_14cb73fa8;
    local_88 = (undefined4)DAT_14cb73fa0;
    uStack_84 = (undefined4)((ulonglong)DAT_14cb73fa0 >> 0x20);
    FUN_1448075d0(&local_78);
    pbVar3 = (byte *)*param_2;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar5 = &DAT_14c9a1288;
      }
      else {
        plVar5 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
        plVar8 = plVar5 + 8;
        if ((longlong *)plVar5[9] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar5[9];
        }
        iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar5[10] - 1U & (uint)local_78) * 4);
        if (iVar9 != -1) {
          do {
            lVar1 = *plVar5 + (longlong)iVar9 * 0x40;
            if (*(uint *)(*plVar5 + (longlong)iVar9 * 0x40) == (uint)local_78) {
              if (((lVar1 != 0) &&
                  (puVar6 = (undefined8 *)(lVar1 + 0x28), puVar6 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar6 != (byte *)0x0 && ((*(byte *)*puVar6 & 0x40) == 0))))
              goto LAB_140cd64a6;
              break;
            }
            iVar9 = *(int *)(lVar1 + 0x38);
          } while (iVar9 != -1);
        }
      }
    }
    puVar6 = &DAT_14c9a1308;
LAB_140cd64a6:
    if ((byte *)*puVar6 == (byte *)0x0) {
      bVar7 = false;
    }
    else {
      bVar2 = *(byte *)*puVar6;
      bVar7 = (bVar2 & 0x68) == 0 && (bVar2 & 3) != 0;
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (!bVar7) goto LAB_140cd64db;
  }
  else if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  local_8a = 0xffff;
  local_70 = DAT_14cb73f90;
  local_78 = DAT_14cb73f88;
  FUN_1448075d0(local_50);
  uVar4 = FUN_144a06846(param_2,local_50);
  uVar4 = FUN_144a89cb0(uVar4,&local_8a);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1447325ac(uVar4,&local_98,1);
  if (*(longlong *)(param_1 + 0x10) != local_98) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(longlong *)(param_1 + 0x10) = local_98;
  local_88 = 0xffffffff;
  uStack_84 = 0;
  local_80 = 0;
  local_70 = DAT_14cb73fa8;
  local_78 = DAT_14cb73fa0;
  FUN_1448075d0(local_50);
  puVar6 = (undefined8 *)FUN_144a06846(param_2,local_50);
  pbVar3 = (byte *)*puVar6;
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(pbVar3 + 8);
  }
  FUN_1470e1166(&local_88,uVar4);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  *(ulonglong *)(param_1 + 0x28) = CONCAT44(local_80,uStack_84);
LAB_140cd64db:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140cd66ea FUN_140cd66ea body=113 status=ok
// SIG undefined FUN_140cd66ea(void)

undefined8 * FUN_140cd66ea(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14a6a9db0;
  return param_1;
}



// FUNCTION 140cd676a FUN_140cd676a body=40 status=ok
// SIG undefined FUN_140cd676a(void)

undefined8 FUN_140cd676a(undefined8 param_1,int param_2)

{
  FUN_140cd6792();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cd6792 FUN_140cd6792 body=148 status=ok
// SIG undefined FUN_140cd6792(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cd6792(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b2f7f30;
  FUN_140cd6826(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x000140cd6818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140cd6826 FUN_140cd6826 body=63 status=ok
// SIG undefined FUN_140cd6826(void)

void FUN_140cd6826(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x68);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_140cd6866(puVar1 + -0x12);
      puVar1 = puVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140cd6866 FUN_140cd6866 body=55 status=ok
// SIG undefined FUN_140cd6866(void)

void FUN_140cd6866(longlong *param_1)

{
  FUN_140cd689e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cd689e FUN_140cd689e body=121 status=ok
// SIG undefined FUN_140cd689e(void)

void FUN_140cd689e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
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



// FUNCTION 140cd6918 FUN_140cd6918 body=2271 status=ok
// SIG undefined FUN_140cd6918(void)

/* WARNING: Removing unreachable block (ram,0x000140cd6c5a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff50 : 0x000140cd69a1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_140cd6918(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined *****pppppuVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined1 auStack_148 [32];
  undefined ****local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110;
  byte local_108;
  int local_100 [2];
  int local_f8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  char local_b8 [8];
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  byte local_98;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_b8[0] = '\0';
  local_90 = 0;
  FUN_1456bb102(local_b8,*(undefined8 *)(param_1 + 0x5a8));
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar6 + 0xd0) == '\x01') {
    local_128 = (undefined ****)((ulonglong)local_128._1_7_ << 8);
    local_100[0] = 0;
    FUN_1456bb102(&local_128,param_3);
  }
  else {
    local_128 = (undefined ****)CONCAT71(local_128._1_7_,local_b8[0]);
    if (local_b8[0] == '\x01') {
      local_128 = (undefined ****)CONCAT71(local_128._1_7_,2);
      if (local_b0 == 0) {
        local_120._0_4_ = 0;
        iVar5 = 0;
        uVar2 = (uint)local_120;
      }
      else {
        uVar2 = *(uint *)(local_b0 + 0xc);
        local_120 = (ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar5 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar5 = *(int *)(lVar12 + 0x10);
          bVar16 = iVar5 == 0;
          if (bVar16) {
            *(int *)(lVar12 + 0x10) = iVar11;
            iVar5 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_120;
          if (bVar16) {
            iVar5 = iVar11;
          }
        }
      }
      local_120._0_4_ = uVar2;
      local_120 = CONCAT44(iVar5,(uint)local_120);
    }
    else if (local_b8[0] == '\x02') {
      local_120 = local_b0;
    }
    else if (local_b8[0] == '\x03') {
      local_120 = local_b0;
      local_118 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        local_110 = local_a0;
        local_108 = local_98;
      }
      else {
        LOCK();
        *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
        UNLOCK();
        local_110 = local_a0;
        local_108 = local_98;
      }
    }
    local_100[0] = 0;
    if (local_90 != 0) {
      uVar7 = FUN_1448174c4(local_100);
      FUN_1400e08b0(uVar7,DAT_14c9a3da0 + (longlong)local_90 * 0x10 + -0x10);
    }
  }
  puVar14 = &local_e0;
  FUN_1448729ea(lVar6 + 0x78,puVar14,&local_128);
  if (local_c0 == 3) {
    local_c0 = 3;
    uVar17 = local_e0;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,&local_e0,3);
    uVar17 = 0;
    if (local_68 != 0) {
      uVar17 = local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar3)(puVar10);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(param_2 + 4) = uVar17;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_c8) {
      puVar14 = (undefined4 *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar3)(puVar14);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  lVar6 = DAT_14c9a3da0;
  if ((longlong)local_100[0] != 0) {
    lVar12 = (longlong)local_100[0] + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar6 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar5 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
    }
    *(undefined4 *)(lVar6 + lVar13) = 0xffffffff;
    iVar11 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar11 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar13) = iVar11;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar9 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar9 = DAT_14c9a3dc0;
    }
    iVar11 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
    bVar4 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar5;
    *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) =
         *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_100[0] = 0;
  }
  if (((char)local_128 == '\x03') && (local_118 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_118 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_118 + 0x10))();
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x80);
  FUN_140cd71f8(&local_128,param_2 + 8,&DAT_14cb81728,local_b8);
  FUN_140cd739a(lVar6 + 0x110,&local_128);
  lVar6 = DAT_14c9a3da0;
  local_128 = (undefined ****)&PTR_LAB_14b3f62b0;
  if ((longlong)local_f8 != 0) {
    lVar12 = (longlong)local_f8 + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar6 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar5 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
    }
    *(undefined4 *)(lVar6 + lVar13) = 0xffffffff;
    iVar11 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar11 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar13) = iVar11;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar9 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar9 = DAT_14c9a3dc0;
    }
    iVar11 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
    bVar4 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar5;
    *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) =
         *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_f8 = 0;
  }
  if (((char)local_120 == '\x03') && (local_110 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_110 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x5d0);
  if (lVar6 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x80);
    if ((longlong)*(int *)(lVar6 + 0x58) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(longlong *)(lVar6 + 0x50);
      lVar6 = (longlong)*(int *)(lVar6 + 0x58) * 0x88;
      do {
        lVar8 = FUN_14060002e(lVar13);
        if (lVar8 == lVar12) goto LAB_140cd7109;
        lVar13 = lVar13 + 0x88;
        lVar6 = lVar6 + -0x88;
      } while (lVar6 != 0);
      lVar13 = 0;
LAB_140cd7109:
      lVar6 = *(longlong *)(param_1 + 0x5d0);
    }
    lVar6 = FUN_14060002e(lVar6 + 0x20);
    if (lVar6 == lVar12) {
      lVar13 = *(longlong *)(param_1 + 0x5d0) + 0x60;
    }
    if (lVar13 != 0) {
      if ((*(byte *)(lVar13 + 0x24) & 1) != 0) {
        FUN_1448729ea(lVar13 + 0x28,&local_128,local_b8);
        uVar17 = FUN_144a7b41a(&local_128);
        *(undefined4 *)(param_2 + 4) = uVar17;
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_108 * 0x120));
        if (pcVar3 != (code *)0x0) {
          pppppuVar15 = &local_128;
          if (0x18 < (ushort)local_110) {
            pppppuVar15 = (undefined *****)local_128;
          }
          (*pcVar3)(pppppuVar15);
        }
        if (0x18 < (ushort)local_110) {
          FUN_1400020a8(local_128);
        }
      }
      FUN_140cd71f8(&local_128,param_2 + 8,&DAT_14cb81720,local_b8);
      FUN_140cd739a(lVar13 + 0x78,&local_128);
      lVar6 = DAT_14c9a3da0;
      local_128 = (undefined ****)&PTR_LAB_14b3f62b0;
      if ((longlong)local_f8 != 0) {
        lVar12 = (longlong)local_f8 + -1;
        lVar13 = lVar12 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
        if (*(longlong *)(lVar6 + lVar13) != 0) {
          FUN_1400020a8();
        }
        lVar6 = DAT_14c9a3da0;
        iVar5 = (int)lVar12;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
        }
        *(undefined4 *)(lVar6 + lVar13) = 0xffffffff;
        iVar11 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar11 = DAT_14c9a3dd0;
        }
        *(int *)(lVar6 + 4 + lVar13) = iVar11;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar9 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar9 = DAT_14c9a3dc0;
        }
        iVar11 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar11 = iVar5;
        }
        bVar4 = (byte)lVar12 & 0x1f;
        DAT_14c9a3dd0 = iVar5;
        *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) =
             *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) &
             (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        local_f8 = 0;
      }
      if (((char)local_120 == '\x03') && (local_110 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_110 + 0x10))();
        }
      }
    }
  }
  if (0.0 <= *(float *)(param_1 + 0x5ec)) {
    *(float *)(param_2 + 4) = *(float *)(param_1 + 0x5ec);
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_1 + 0x5e8) >> 7;
  lVar6 = DAT_14c9a3da0;
  if ((longlong)local_90 != 0) {
    lVar12 = (longlong)local_90 + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar6 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar5 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
    }
    *(undefined4 *)(lVar6 + lVar13) = 0xffffffff;
    iVar11 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar11 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar13) = iVar11;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar9 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar9 = DAT_14c9a3dc0;
    }
    iVar11 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
    bVar4 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar5;
    *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) =
         *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_90 = 0;
  }
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd71f8 FUN_140cd71f8 body=418 status=ok
// SIG undefined FUN_140cd71f8(void)

undefined8 * FUN_140cd71f8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = &PTR_LAB_14b3f62b0;
  *(undefined1 *)(param_1 + 1) = 0;
  cVar1 = *param_4;
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\x01') {
    plVar4 = (longlong *)(param_4 + 8);
  }
  else {
    if (cVar1 == '\x02') {
      param_1[2] = *(undefined8 *)(param_4 + 8);
      goto LAB_140cd7284;
    }
    if (cVar1 != '\x03') goto LAB_140cd7284;
    param_1[2] = *(undefined8 *)(param_4 + 8);
    lVar7 = *(longlong *)(param_4 + 0x10);
    param_1[3] = lVar7;
    if (lVar7 == 0) {
      param_1[4] = *(undefined8 *)(param_4 + 0x18);
      *(char *)(param_1 + 5) = param_4[0x20];
      goto LAB_140cd7284;
    }
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
    param_1[4] = *(undefined8 *)(param_4 + 0x18);
    *(char *)(param_1 + 5) = param_4[0x20];
    if (*(char *)(param_1 + 1) != '\x01') goto LAB_140cd7284;
    plVar4 = param_1 + 2;
  }
  lVar7 = *plVar4;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0;
  if (lVar7 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 2) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
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
  }
  *(int *)((longlong)param_1 + 0x14) = iVar3;
LAB_140cd7284:
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)(param_4 + 0x28) != 0) {
    uVar5 = FUN_1448174c4(param_1 + 6);
    FUN_1400e08b0(uVar5,DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10);
  }
  *param_1 = &PTR_FUN_14b42f720;
  param_1[7] = param_2;
  param_1[8] = *param_3;
  return param_1;
}



// FUNCTION 140cd739a FUN_140cd739a body=581 status=ok
// SIG undefined FUN_140cd739a(void)

void FUN_140cd739a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  ulonglong unaff_RBP;
  longlong *plVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint local_a0;
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar12 = (longlong)(int)param_1[1] * 0x88;
    plVar11 = (longlong *)(*param_1 + 0x68);
    do {
      bVar2 = *(byte *)(plVar11 + -0xc);
      uVar3 = *(undefined4 *)((longlong)plVar11 + -100);
      uVar7 = (**(code **)(*param_2 + 0x10))(param_2);
      FUN_1448729ea(plVar11 + -0xb,local_98,uVar7);
      uVar13 = FUN_144a7b41a(local_98,0x3f800000);
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),(char)plVar11[-0xd]);
      plVar1 = plVar11 + -1;
      lVar8 = FUN_14479d2ce(plVar1);
      if (lVar8 == 0) {
        if (*plVar11 != 0) {
          lVar8 = FUN_140007850();
          cVar6 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar8 == 0) || (cVar6 == '\0')) {
            FUN_14485c47a(plVar1,lVar8);
            if (lVar8 == 0) goto LAB_140cd756a;
          }
          else {
            uVar4 = *(uint *)(lVar8 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,lVar8);
            }
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_140cd7473;
        }
LAB_140cd756a:
        lVar8 = 0;
      }
      else {
LAB_140cd7473:
        lVar9 = FUN_144a797b2();
        if ((((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) ||
            (lVar9 = FUN_140553c72(), lVar9 == 0)) ||
           (*(int *)(lVar8 + 0x38) < *(int *)(lVar9 + 0x38))) goto LAB_140cd756a;
        if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
            lVar9 + 0x30) {
          lVar8 = 0;
        }
      }
      local_a0 = (uint)bVar2;
      local_a8 = uVar3;
      (**(code **)(*param_2 + 8))(param_2,lVar8,unaff_RBP & 0xffffffff,uVar13);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar10 = local_98;
        if (0x18 < local_80) {
          ppppuVar10 = (undefined8 ****)local_98[0];
        }
        (*pcVar5)(ppppuVar10);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(local_98[0]);
      }
      plVar11 = plVar11 + 0x11;
      lVar12 = lVar12 + -0x88;
    } while (lVar12 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd75e0 FUN_140cd75e0 body=185 status=ok
// SIG undefined FUN_140cd75e0(void)

void FUN_140cd75e0(longlong param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_140cd769a(plVar3,iVar1);
  }
  plVar3 = (longlong *)((longlong)iVar1 * 0x20 + *plVar3);
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar2 = DAT_14c950c29;
  *plVar3 = param_2;
  if ((param_2 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(undefined1 *)(plVar3 + 1) = param_3;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_4;
  *(undefined4 *)(plVar3 + 2) = param_5;
  *(undefined8 *)((longlong)plVar3 + 0x14) = *(undefined8 *)(param_1 + 0x40);
  *(undefined1 *)((longlong)plVar3 + 0x1c) = param_6;
  return;
}



// FUNCTION 140cd769a FUN_140cd769a body=255 status=ok
// SIG undefined FUN_140cd769a(void)

void FUN_140cd769a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
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



// FUNCTION 140cd77a2 FUN_140cd77a2 body=277 status=ok
// SIG undefined FUN_140cd77a2(void)

undefined8 * FUN_140cd77a2(undefined8 *param_1)

{
  FUN_140cd78b8();
  *param_1 = &PTR_FUN_14b966980;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 2;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5dc) = 0xff;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62c) = 0;
  param_1[199] = 0xc2c800000000000a;
  param_1[0xca] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0xc2,0xc2c8000000000001);
  *(undefined4 *)((longlong)param_1 + 0x624) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x61c,1);
  *(undefined4 *)(param_1 + 0xc6) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0xc5,1);
  return param_1;
}



// FUNCTION 140cd78b8 FUN_140cd78b8 body=1038 status=ok
// SIG undefined FUN_140cd78b8(void)

undefined8 * FUN_140cd78b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14b3f6c30;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x200000000;
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
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x200000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 2;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x41) = 2;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x44) = 2;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x49) = 2;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  param_1[0x62] = 0;
  *(undefined1 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 99) = 0x3002;
  param_1[100] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0x200000000;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x73] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x71] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x72] = uVar1;
  param_1[0x76] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x74] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x75] = uVar1;
  param_1[0x79] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x77] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x78] = uVar1;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0x3006;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x82] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x80) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x404) = uVar2;
  *(undefined4 *)(param_1 + 0x81) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x40c) = uVar4;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
  FUN_1405c5fa2();
  param_1[0x85] = &DAT_14cb769e8;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x84] = &PTR_FUN_14b0394b0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x89) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0x200000000;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  FUN_1405c5fa2();
  param_1[0xa6] = &DAT_14cb769e8;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa5] = &PTR_FUN_14b0394b0;
  *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 6 | 0x30;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0x9041;
  *(byte *)((longlong)param_1 + 0x471) = *(byte *)((longlong)param_1 + 0x471) & 0xf8;
  param_1[0x10] = 0x3f00000041a00000;
  *(undefined4 *)(param_1 + 0x11) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x4d4,1);
  *(undefined4 *)(param_1 + 0x9a) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0x99,1);
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0xb,1);
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 100,1);
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  FUN_14020a6cc(param_1 + 0xe,1);
  return param_1;
}



// FUNCTION 140cd7d64 FUN_140cd7d64 body=863 status=ok
// SIG undefined FUN_140cd7d64(void)

void FUN_140cd7d64(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ushort *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong *plVar27;
  longlong *in_stack_00000038;
  
  lVar12 = FUN_14009d2a0();
  sVar3 = *(short *)(lVar12 + 0x4a);
  lVar13 = FUN_14009d2a0();
  lVar12 = *in_stack_00000038;
  if (*(ushort *)(lVar12 + 0xc) != 0) {
    plVar21 = *(longlong **)(lVar12 + 0x28);
    lVar15 = (ulonglong)*(ushort *)(lVar12 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar21 + 0x1e) == *(short *)(lVar13 + 0x48)) goto LAB_140cd7db8;
      plVar21 = plVar21 + 4;
      lVar15 = lVar15 + -0x20;
    } while (lVar15 != 0);
  }
  plVar21 = (longlong *)0x0;
LAB_140cd7db8:
  lVar13 = *(longlong *)(lVar12 + 0x18);
  iVar7 = *(int *)(lVar12 + 0x14);
  if (iVar7 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar21 + 1));
  }
  LOCK();
  *(int *)(plVar21 + 3) = (int)plVar21[3] + 1;
  UNLOCK();
  lVar12 = *in_stack_00000038;
  if (*(ushort *)(lVar12 + 0xc) != 0) {
    plVar27 = *(longlong **)(lVar12 + 0x28);
    lVar15 = (ulonglong)*(ushort *)(lVar12 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar27 + 0x1e) == sVar3) goto LAB_140cd7e03;
      plVar27 = plVar27 + 4;
      lVar15 = lVar15 + -0x20;
    } while (lVar15 != 0);
  }
  plVar27 = (longlong *)0x0;
LAB_140cd7e03:
  lVar15 = *plVar21;
  iVar8 = *(int *)(lVar12 + 0x14);
  if (iVar8 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar27 + 1));
  }
  LOCK();
  *(int *)(plVar27 + 3) = (int)plVar27[3] + 1;
  UNLOCK();
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar12 = -1;
  }
  else {
    lVar12 = (longlong)
             (int)((ulonglong)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x18)) >> 2);
  }
  if (0 < *(int *)((longlong)in_stack_00000038 + 0xc)) {
    lVar9 = *plVar27;
    lVar22 = (longlong)(int)in_stack_00000038[1];
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      uVar4 = *(ushort *)(lVar15 + lVar22 * 2);
      uVar5 = *(ushort *)(lVar13 + lVar22 * 2);
      uVar25 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + lVar12 * 8);
      *(ulonglong *)(lVar9 + lVar22 * 8) = uVar25;
      plVar10 = *(longlong **)(param_1 + 0x28);
      if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
        uVar18 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        uVar18 = uVar18 >> 0x10 ^ uVar18;
        plVar23 = plVar10 + 7;
        if ((longlong *)plVar10[8] != (longlong *)0x0) {
          plVar23 = (longlong *)plVar10[8];
        }
        iVar19 = *(int *)((longlong)plVar23 +
                         (ulonglong)
                         ((int)plVar10[9] - 1U &
                         (uVar18 * 0x40 + (uint)uVar4 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18)) * 4);
        if (iVar19 != -1) {
          lVar14 = *plVar10;
LAB_140cd7f80:
          lVar24 = (longlong)iVar19 * 0x20;
          lVar2 = lVar14 + lVar24;
          if ((*(ulonglong *)(lVar14 + lVar24) != uVar25) ||
             (*(ushort *)(lVar14 + 8 + lVar24) != uVar4)) goto LAB_140cd7f99;
          if ((lVar2 != 0) && (uVar6 = *(ushort *)(lVar2 + 0x10), uVar6 != 0xffff)) {
            uVar18 = *(uint *)(param_1 + 0x38);
            lVar14 = *(longlong *)(param_1 + 0x30);
            uVar25 = 0;
            if ((int)uVar18 < 1) goto LAB_140cd8004;
            uVar25 = 0;
            uVar16 = (ulonglong)uVar18;
            uVar20 = uVar18;
            do {
              uVar16 = uVar16 >> 1;
              uVar26 = (uint)uVar16 + (int)uVar25;
              if (*(ushort *)(lVar14 + (ulonglong)uVar26 * 4) < uVar5) {
                uVar25 = (ulonglong)(uVar26 + (uVar20 & 1));
              }
              bVar11 = 1 < uVar20;
              uVar20 = (uint)uVar16;
            } while (bVar11);
            if (((int)uVar25 < (int)uVar18) && (*(ushort *)(lVar14 + uVar25 * 4) <= uVar5)) {
              puVar17 = (ushort *)(lVar14 + uVar25 * 4);
            }
            else {
LAB_140cd8004:
              *(uint *)(param_1 + 0x38) = uVar18 + 1;
              if (*(uint *)(param_1 + 0x3c) == uVar18) {
                FUN_140cd86aa(plVar1,uVar18);
                lVar14 = *plVar1;
              }
              memmove((void *)(lVar14 + uVar25 * 4 + 4),(void *)(lVar14 + uVar25 * 4),
                      (ulonglong)(uVar18 - (int)uVar25) << 2);
              puVar17 = (ushort *)(uVar25 * 4 + *plVar1);
            }
            *puVar17 = uVar5;
            puVar17[1] = uVar6;
          }
        }
      }
LAB_140cd7e90:
      lVar12 = lVar12 + 1;
      FUN_140cd80c4(param_2 + 0x28,uVar4,uVar5);
      lVar22 = lVar22 + 1;
    } while (lVar22 < (longlong)*(int *)((longlong)in_stack_00000038 + 0xc) +
                      (longlong)(int)in_stack_00000038[1]);
  }
  if (plVar27 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar27 + 3) = (int)plVar27[3] + -1;
    UNLOCK();
    if (iVar8 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar27 + 1));
    }
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 3) = (int)plVar21[3] + -1;
    UNLOCK();
    if (iVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140cd7f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar21 + 1));
      return;
    }
  }
  return;
LAB_140cd7f99:
  iVar19 = *(int *)(lVar2 + 0x18);
  if (iVar19 == -1) goto LAB_140cd7e90;
  goto LAB_140cd7f80;
}



// FUNCTION 140cd80c4 FUN_140cd80c4 body=1508 status=ok
// SIG undefined FUN_140cd80c4(void)

void FUN_140cd80c4(longlong param_1,ushort param_2,ushort param_3)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong local_58;
  short local_4c;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(param_1 + 0x98);
  sVar4 = *(short *)(lVar6 + 4 + (ulonglong)param_3 * 8);
  local_4a = param_3;
  if (sVar4 != -1) {
    local_4c = sVar4;
    FUN_1403b68b0(param_1 + 0xd0,&local_4c,&local_4a);
  }
  local_58 = lVar6;
  if (*(int *)(param_1 + 0x104) == 0) {
    iVar13 = *(int *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = iVar13 + 1;
    if (*(int *)(param_1 + 0xdc) == iVar13) {
      FUN_1447cc1b4(param_1 + 0xd0,iVar13);
    }
    iVar17 = *(int *)(param_1 + 0xf8);
    if (iVar17 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar5 = iVar17 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    lVar18 = param_1 + 0xe0;
    iVar11 = iVar17 + 1;
    iVar19 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar19 = iVar17;
    }
    if (iVar19 >> 5 == iVar5) {
      *(int *)(param_1 + 0xf8) = iVar11;
    }
    else {
      if (*(int *)(param_1 + 0xfc) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar17;
        }
        else {
          uVar10 = iVar17 + 0x20U >> 5;
          local_60 = (ulonglong)uVar10;
          if (*(int *)(param_1 + 0xfc) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar10) {
              uVar15 = uVar10;
            }
          }
          else {
            uVar15 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar7 = FUN_144a3809e(uVar15 << 2,0);
          iVar5 = (int)(uVar7 >> 2);
          iVar11 = -0x20;
          if ((int)local_60 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = *(int *)(param_1 + 0xf8);
        }
        *(int *)(param_1 + 0xfc) = iVar11;
        FUN_1446efbd8(lVar18,iVar5);
        iVar11 = *(int *)(param_1 + 0xf8) + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 0xf8) = iVar11;
      if (iVar11 % 0x20 != 0) {
        lVar6 = *(longlong *)(param_1 + 0xf0);
        if (*(longlong *)(param_1 + 0xf0) == 0) {
          lVar6 = lVar18;
        }
        bVar8 = -(char)(iVar11 % 0x20);
        *(uint *)(lVar6 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)(lVar6 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar13;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar18 = *(longlong *)(param_1 + 0xf0);
    }
    bVar8 = (byte)iVar17 & 0x1f;
    puVar2 = (uint *)(lVar18 + (longlong)(iVar19 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar13 = *(int *)(param_1 + 0x100);
    lVar6 = (longlong)iVar13;
    iVar17 = *(int *)(*(longlong *)(param_1 + 0xd0) + 4 + lVar6 * 0xc);
    *(int *)(param_1 + 0x100) = iVar17;
    iVar5 = *(int *)(param_1 + 0x104) + -1;
    *(int *)(param_1 + 0x104) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar17 * 0xc) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 0xe0);
  uVar10 = 1;
  puVar9 = *(uint **)(param_1 + 0xf0);
  if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
    puVar9 = puVar2;
  }
  iVar17 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar17 = iVar13;
  }
  puVar9[iVar17 >> 5] = puVar9[iVar17 >> 5] | 1 << ((byte)iVar13 & 0x1f);
  lVar18 = *(longlong *)(param_1 + 0xd0);
  *(ushort *)(lVar18 + lVar6 * 0xc) = param_2;
  *(ushort *)(lVar18 + 2 + lVar6 * 0xc) = param_3;
  *(undefined4 *)(lVar18 + 4 + lVar6 * 0xc) = 0xffffffff;
  uVar15 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104);
  if (3 < uVar15) {
    uVar7 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar15 < 1) || ((int)uVar10 <= *(int *)(param_1 + 0x118))) {
    lVar18 = lVar18 + lVar6 * 0xc;
    uVar10 = *(int *)(param_1 + 0x118) - 1U & (uint)param_2;
    *(uint *)(lVar18 + 8) = uVar10;
    lVar6 = *(longlong *)(param_1 + 0x110);
    if (*(longlong *)(param_1 + 0x110) == 0) {
      lVar6 = param_1 + 0x108;
    }
    *(undefined4 *)(lVar18 + 4) =
         *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & uVar10) * 4);
    lVar6 = *(longlong *)(param_1 + 0x110);
    if (*(longlong *)(param_1 + 0x110) == 0) {
      lVar6 = param_1 + 0x108;
    }
    *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & uVar10) * 4) = iVar13;
    goto LAB_140cd8495;
  }
  *(uint *)(param_1 + 0x118) = uVar10;
  plVar1 = (longlong *)(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1446efa72(plVar1,0,0,4);
    uVar10 = *(uint *)(param_1 + 0x118);
  }
  lVar6 = param_1 + 0x108;
  if (uVar10 == 1) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
LAB_140cd8270:
    uVar15 = 0;
    do {
      lVar18 = *(longlong *)(param_1 + 0x110);
      if (*(longlong *)(param_1 + 0x110) == 0) {
        lVar18 = lVar6;
      }
      *(undefined4 *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x118) + 0x7fffffffU & uVar15) * 4) =
           0xffffffff;
      uVar15 = uVar15 + 1;
    } while (uVar10 != uVar15);
  }
  else {
    if (uVar10 == 0) goto LAB_140cd8495;
    FUN_1446efa72(plVar1,0,uVar10,4);
    if (0 < (int)uVar10) goto LAB_140cd8270;
  }
  iVar13 = *(int *)(param_1 + 0xf8);
  if (iVar13 == 0) {
    uVar7 = 0;
    uVar12 = 1;
    iVar17 = 0;
    iVar5 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar10 = *puVar9;
    if (uVar10 == 0) {
      iVar17 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar17 = iVar13 + -1;
      }
      uVar7 = 0;
      uVar12 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar12 = uVar7;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar7) goto LAB_140cd8495;
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar9[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar7 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar10 & uVar10);
    uVar3 = uVar12 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar17 = (iVar5 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar17) {
      iVar17 = iVar13;
    }
  }
  if (iVar17 < iVar13) {
    uVar10 = 0xffffffff;
    do {
      lVar18 = *(longlong *)(param_1 + 0xd0);
      lVar14 = (longlong)iVar17;
      uVar15 = *(int *)(param_1 + 0x118) - 1U & (uint)*(ushort *)(lVar18 + lVar14 * 0xc);
      *(uint *)(lVar18 + 8 + lVar14 * 0xc) = uVar15;
      lVar16 = *(longlong *)(param_1 + 0x110);
      if (*(longlong *)(param_1 + 0x110) == 0) {
        lVar16 = lVar6;
      }
      *(undefined4 *)(lVar18 + 4 + lVar14 * 0xc) =
           *(undefined4 *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & uVar15) * 4);
      lVar18 = *(longlong *)(param_1 + 0x110);
      if (*(longlong *)(param_1 + 0x110) == 0) {
        lVar18 = lVar6;
      }
      *(int *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & uVar15) * 4) = iVar17;
      uVar10 = ~(uint)uVar12 & uVar10;
      puVar9 = *(uint **)(param_1 + 0xf0);
      if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar13 = *(int *)(param_1 + 0xf8);
      iVar17 = (int)uVar7;
      lVar18 = (longlong)iVar17;
      uVar15 = puVar9[lVar18] & uVar10;
      if (uVar15 == 0) {
        iVar11 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar11 = iVar13 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar19 = iVar11;
        if (iVar11 < iVar17) {
          iVar19 = iVar17;
        }
        if (iVar11 <= iVar17) break;
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar15 = puVar9[lVar18 + lVar16 + 1];
          if (uVar15 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar19 - lVar18 == lVar16) goto LAB_140cd8495;
        }
        uVar7 = (ulonglong)(iVar17 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar15 & uVar15);
      uVar3 = uVar12 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar17 = (iVar5 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar17 < iVar13);
  }
LAB_140cd8495:
  *(ushort *)(local_58 + 4 + (ulonglong)param_3 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd86aa FUN_140cd86aa body=353 status=ok
// SIG undefined FUN_140cd86aa(void)

void FUN_140cd86aa(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140cd872f;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_140cd872f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,2);
  return;
}



// FUNCTION 140cd880c FUN_140cd880c body=21 status=ok
// SIG undefined FUN_140cd880c(void)

undefined8 FUN_140cd880c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140cd8822 FUN_140cd8822 body=36 status=ok
// SIG undefined FUN_140cd8822(void)

void FUN_140cd8822(undefined8 param_1)

{
  FUN_140cd8846(param_1,0x24,0);
  FUN_140cd93e0(param_1,0x24,0);
  return;
}



// FUNCTION 140cd8846 FUN_140cd8846 body=112 status=ok
// SIG undefined FUN_140cd8846(void)

void FUN_140cd8846(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x80) == '\x01') && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = (longlong)*(int *)(param_1 + 0x10) * 0x160;
    do {
      cVar1 = FUN_140cd88b6(param_1,lVar2,param_2,param_3);
      if (cVar1 != '\0') {
        FUN_140cd99cc();
      }
      lVar2 = lVar2 + 0x160;
      lVar3 = lVar3 + -0x160;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 140cd88b6 FUN_140cd88b6 body=2857 status=ok
// SIG undefined FUN_140cd88b6(void)

/* WARNING: Removing unreachable block (ram,0x000140cd8df5) */
/* WARNING: Removing unreachable block (ram,0x000140cd8d98) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff50 : 0x000140cd8a2b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_140cd88b6(longlong param_1,longlong param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  char *pcVar14;
  int *piVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_168 [39];
  byte local_141;
  char local_140 [8];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  byte local_120;
  undefined4 local_118 [2];
  char local_110 [8];
  undefined8 local_108;
  longlong *local_100;
  undefined4 local_e8 [2];
  int local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  char local_b8;
  undefined7 uStack_b7;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  byte local_98;
  int local_90 [2];
  uint local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  undefined4 local_60 [2];
  uint *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_4 == 0) ||
     (((*(char *)(param_4 + 0x10) != '\x01' || (*(char *)(param_2 + 0x14e) == '\x01')) &&
      ((*(char *)(param_2 + 0x14f) != '\x01' || (*(char *)(param_4 + 0x11) == '\0')))))) {
    if (*(char *)(param_2 + 0x157) == '\0') {
      uVar10 = 0;
      if ((*(char *)(param_2 + 0x14d) != '\x02') ||
         (uVar10 = 0, *(char *)(param_2 + 0x12) != param_3)) goto LAB_140cd8918;
      lVar11 = *(longlong *)(param_2 + 0x50);
      if (lVar11 == 0) {
        uVar10 = FUN_14016979c();
        lVar11 = FUN_14477b664(uVar10);
        *(longlong *)(param_2 + 0x50) = lVar11;
      }
      plVar1 = (longlong *)(param_2 + 0x48);
      if (*(longlong *)(param_2 + 0x58) == 0) {
        if ((*plVar1 != 0) && (lVar11 != 0)) {
          plVar5 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
            *(undefined8 *)(param_2 + 0x58) = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar11 = FUN_144aff482(uVar10,plVar1);
            *(longlong *)(param_2 + 0x58) = lVar11;
            if (lVar11 != 0) goto LAB_140cd8973;
          }
        }
      }
      else {
LAB_140cd8973:
        if (*(char *)(param_2 + 0x16) == '\x01') {
          if (param_4 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_14479d2ce(param_4 + 8);
          }
          local_b8 = '\0';
          local_90[0] = 0;
          FUN_1456bb102(&local_b8,uVar10);
        }
        else {
          local_90[0] = 0;
          local_b8 = *(char *)(param_1 + 0x18);
          if (local_b8 == '\x01') {
            local_b8 = '\x02';
            if (*(longlong *)(param_1 + 0x20) == 0) {
              local_b0._0_4_ = 0;
              iVar8 = 0;
              uVar4 = (uint)local_b0;
            }
            else {
              uVar4 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xc);
              local_b0 = (ulonglong)uVar4;
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar11 = 0;
              }
              iVar8 = *(int *)(lVar11 + 0x10);
              if (*(int *)(lVar11 + 0x10) == 0) {
                LOCK();
                iVar8 = DAT_14c964868 + 1;
                UNLOCK();
                iVar16 = DAT_14c964868 + 1;
                bVar17 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar8;
                if (bVar17) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                iVar8 = *(int *)(lVar11 + 0x10);
                bVar17 = iVar8 == 0;
                if (bVar17) {
                  *(int *)(lVar11 + 0x10) = iVar16;
                  iVar8 = 0;
                }
                UNLOCK();
                uVar4 = (uint)local_b0;
                if (bVar17) {
                  iVar8 = iVar16;
                }
              }
            }
            local_b0._0_4_ = uVar4;
            local_b0 = CONCAT44(iVar8,(uint)local_b0);
          }
          else if (local_b8 == '\x02') {
            local_b0 = *(longlong *)(param_1 + 0x20);
          }
          else if (local_b8 == '\x03') {
            local_b0 = *(longlong *)(param_1 + 0x20);
            local_a8 = *(longlong **)(param_1 + 0x28);
            if (local_a8 == (longlong *)0x0) {
              local_a0 = *(undefined8 *)(param_1 + 0x30);
              local_98 = *(byte *)(param_1 + 0x38);
            }
            else {
              LOCK();
              *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
              UNLOCK();
              local_a0 = *(undefined8 *)(param_1 + 0x30);
              local_98 = *(byte *)(param_1 + 0x38);
            }
          }
          FUN_14495544a(local_90,param_1 + 0x40);
        }
        local_140[0] = local_b8;
        if (local_b8 == '\x01') {
          local_140[0] = '\x02';
          if (local_b0 == 0) {
            local_138._0_4_ = 0;
            iVar8 = 0;
            uVar4 = (uint)local_138;
          }
          else {
            uVar4 = *(uint *)(local_b0 + 0xc);
            local_138 = (ulonglong)uVar4;
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar8 = *(int *)(lVar11 + 0x10);
            if (*(int *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                             );
              }
              LOCK();
              iVar8 = *(int *)(lVar11 + 0x10);
              bVar17 = iVar8 == 0;
              if (bVar17) {
                *(int *)(lVar11 + 0x10) = iVar16;
                iVar8 = 0;
              }
              UNLOCK();
              uVar4 = (uint)local_138;
              if (bVar17) {
                iVar8 = iVar16;
              }
            }
          }
          local_138._0_4_ = uVar4;
          local_138 = CONCAT44(iVar8,(uint)local_138);
        }
        else if (local_b8 == '\x02') {
          local_138 = local_b0;
        }
        else if (local_b8 == '\x03') {
          local_138 = local_b0;
          local_130 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            local_128 = local_a0;
            local_120 = local_98;
          }
          else {
            LOCK();
            *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
            UNLOCK();
            local_128 = local_a0;
            local_120 = local_98;
          }
        }
        local_118[0] = 0;
        if (local_90[0] != 0) {
          uVar10 = FUN_1448174c4(local_118);
          FUN_1400e08b0(uVar10,DAT_14c9a3da0 + (longlong)local_90[0] * 0x10 + -0x10);
        }
        local_110[0] = '\0';
        local_e8[0] = 0;
        lVar11 = *(longlong *)(param_2 + 0x50);
        if (lVar11 == 0) {
          uVar10 = FUN_14016979c();
          lVar11 = FUN_14477b664(uVar10);
          *(longlong *)(param_2 + 0x50) = lVar11;
        }
        lVar13 = *(longlong *)(param_2 + 0x58);
        if (((lVar13 == 0) && (lVar13 = 0, lVar11 != 0)) && (*plVar1 != 0)) {
          plVar5 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
            lVar13 = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar13 = FUN_144aff482(uVar10,plVar1);
          }
          *(longlong *)(param_2 + 0x58) = lVar13;
        }
        FUN_1400606f6(&local_88,lVar13,local_140);
        puVar9 = local_58;
        if (local_58 == (uint *)0x0) {
          puVar9 = &local_88;
        }
        puVar12 = (uint *)&DAT_14c9a40e0;
        if (0 < local_50) {
          puVar12 = puVar9;
        }
        piVar15 = &local_e0;
        FUN_1400603ec(piVar15,lVar13,puVar12);
        puVar9 = local_58;
        if (local_58 == (uint *)0x0) {
          puVar9 = &local_88;
        }
        FUN_1446fdf58(puVar9,local_50);
        if (local_58 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_c0 == 1) {
          bVar17 = local_e0 != 0;
          local_c0 = 1;
        }
        else {
          puVar9 = &local_88;
          FUN_1400b56fe(puVar9,&local_e0,1);
          local_141 = local_88 != 0;
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar6 != (code *)0x0) {
            if (0x18 < local_70) {
              puVar9 = (uint *)CONCAT44(uStack_84,local_88);
            }
            (*pcVar6)(puVar9);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(CONCAT44(uStack_84,local_88));
          }
          bVar17 = (bool)(local_68 != 0 & local_141);
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
        if (pcVar6 != (code *)0x0) {
          if (0x18 < local_c8) {
            piVar15 = (int *)CONCAT44(uStack_dc,local_e0);
          }
          (*pcVar6)(piVar15);
        }
        if (0x18 < local_c8) {
          FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
        }
        FUN_1448173f8(local_e8);
        if (local_110[0] != '\0') {
          if (local_110[0] == '\x01') {
            local_108 = 0;
          }
          else if ((local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
            LOCK();
            piVar15 = (int *)((longlong)local_100 + 0xc);
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (*piVar15 == 0) {
              (**(code **)(*local_100 + 0x10))();
            }
          }
          local_110[0] = '\0';
        }
        FUN_1448173f8(local_118);
        if ((local_140[0] == '\x03') && (local_130 != (longlong *)0x0)) {
          LOCK();
          piVar15 = (int *)((longlong)local_130 + 0xc);
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            (**(code **)(*local_130 + 0x10))();
          }
        }
        FUN_1448173f8(local_90);
        if ((local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
          LOCK();
          piVar15 = (int *)((longlong)local_a8 + 0xc);
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            (**(code **)(*local_a8 + 0x10))();
          }
        }
        if (bVar17 == false) goto LAB_140cd8d3d;
      }
      *(undefined1 *)(param_2 + 0x157) = 1;
      FUN_140898514(param_2 + 0xc0,1);
    }
    else if (*(char *)(param_2 + 0x13) == param_3) goto LAB_140cd8d3d;
    uVar10 = 0;
    if ((*(char *)(param_2 + 0x14c) != '\x02') || (*(char *)(param_2 + 0x10) != param_3))
    goto LAB_140cd8918;
    lVar11 = *(longlong *)(param_2 + 0x20);
    if (lVar11 == 0) {
      uVar10 = FUN_14016979c();
      lVar11 = FUN_14477b664(uVar10);
      *(longlong *)(param_2 + 0x20) = lVar11;
    }
    plVar1 = (longlong *)(param_2 + 0x18);
    if (*(longlong *)(param_2 + 0x28) == 0) {
      if ((*plVar1 != 0) && (lVar11 != 0)) {
        plVar5 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
          *(undefined8 *)(param_2 + 0x28) = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar11 = FUN_144aff482(uVar10,plVar1);
          *(longlong *)(param_2 + 0x28) = lVar11;
          if (lVar11 != 0) goto LAB_140cd8fea;
        }
      }
    }
    else {
LAB_140cd8fea:
      if (*(char *)(param_2 + 0x14) == '\x01') {
        if (param_4 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_14479d2ce(param_4 + 8);
        }
        local_88 = local_88 & 0xffffff00;
        local_60[0] = 0;
        FUN_1456bb102(&local_88,uVar10);
      }
      else {
        local_88 = local_88 & 0xffffff00;
        local_60[0] = 0;
        FUN_1447f8f6a(&local_88,param_1 + 0x18);
        FUN_14495544a(local_60,param_1 + 0x40);
      }
      local_140[0] = '\0';
      FUN_1447f8f6a(local_140,&local_88);
      FUN_1447f8ea6(local_118,local_60);
      local_110[0] = '\0';
      local_e8[0] = 0;
      lVar11 = *(longlong *)(param_2 + 0x20);
      if (lVar11 == 0) {
        uVar10 = FUN_14016979c();
        lVar11 = FUN_14477b664(uVar10);
        *(longlong *)(param_2 + 0x20) = lVar11;
      }
      lVar13 = *(longlong *)(param_2 + 0x28);
      if (((lVar13 == 0) && (lVar13 = 0, lVar11 != 0)) && (*plVar1 != 0)) {
        plVar5 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
          lVar13 = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar13 = FUN_144aff482(uVar10,plVar1);
        }
        *(longlong *)(param_2 + 0x28) = lVar13;
      }
      pcVar14 = &local_b8;
      FUN_144750e81(pcVar14,lVar13,local_140);
      cVar7 = FUN_144a7fca4(pcVar14);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < (ushort)local_a0) {
          pcVar14 = (char *)CONCAT71(uStack_b7,local_b8);
        }
        (*pcVar6)(pcVar14);
      }
      if (0x18 < (ushort)local_a0) {
        FUN_1400020a8(CONCAT71(uStack_b7,local_b8));
      }
      FUN_144a5ac3a(local_110);
      FUN_144a5ac3a(local_140);
      FUN_144a5ac3a(&local_88);
      if (cVar7 == '\0') goto LAB_140cd8d3d;
    }
    fVar2 = *(float *)(param_2 + 0x144);
    uVar10 = 1;
    if ((0.0001 <= fVar2 && *(longlong *)(param_2 + 0xe0) != 0) &&
       ((longlong)*(int *)(param_1 + 0x10) != 0)) {
      lVar11 = *(longlong *)(param_1 + 8);
      lVar13 = 0;
      do {
        if (*(longlong *)(lVar11 + 0xe0 + lVar13) == *(longlong *)(param_2 + 0xe0)) {
          fVar3 = *(float *)(lVar11 + 0x144 + lVar13);
          if ((fVar2 < fVar3) ||
             (((fVar3 == fVar2 && (!NAN(fVar3) && !NAN(fVar2))) &&
              (*(char *)(lVar11 + 0x158 + lVar13) != '\0')))) goto LAB_140cd8d3d;
        }
        lVar13 = lVar13 + 0x160;
      } while ((longlong)*(int *)(param_1 + 0x10) * 0x160 - lVar13 != 0);
    }
  }
  else {
LAB_140cd8d3d:
    uVar10 = 0;
  }
LAB_140cd8918:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd93e0 FUN_140cd93e0 body=1515 status=ok
// SIG undefined FUN_140cd93e0(void)

void FUN_140cd93e0(longlong param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100 [40];
  undefined4 local_d8 [2];
  undefined1 local_d0 [40];
  undefined1 local_a8 [8];
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(char *)(param_1 + 0x80) == '\x01') && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    lVar10 = *(longlong *)(param_1 + 8);
    lVar9 = (longlong)*(int *)(param_1 + 0x10) * 0x160;
    do {
      if (*(char *)(lVar10 + 0x157) == '\x01') {
        if (*(char *)(lVar10 + 0x13) == param_2) {
          lVar7 = *(longlong *)(lVar10 + 0x68);
          if (lVar7 == 0) {
            uVar6 = FUN_14016979c();
            lVar7 = FUN_14477b664(uVar6);
            *(longlong *)(lVar10 + 0x68) = lVar7;
          }
          plVar1 = (longlong *)(lVar10 + 0x60);
          if (*(longlong *)(lVar10 + 0x70) == 0) {
            if ((*plVar1 != 0) && (lVar7 != 0)) {
              plVar2 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                *(undefined8 *)(lVar10 + 0x70) = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar6,plVar1);
                *(longlong *)(lVar10 + 0x70) = lVar7;
                if (lVar7 != 0) goto LAB_140cd9584;
              }
            }
          }
          else {
LAB_140cd9584:
            if (*(char *)(lVar10 + 0x17) == '\x01') {
              if (param_3 == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_14479d2ce(param_3 + 8);
              }
              local_100[0] = 0;
              local_d8[0] = 0;
              FUN_1456bb102(local_100,uVar6);
            }
            else {
              local_100[0] = 0;
              local_d8[0] = 0;
              FUN_1447f8f6a(local_100,param_1 + 0x18);
              FUN_14495544a(local_d8,param_1 + 0x40);
            }
            local_d0[0] = 0;
            FUN_1447f8f6a(local_d0,local_100);
            FUN_1447f8ea6(local_a8,local_d8);
            local_a0[0] = 0;
            local_78 = 0;
            lVar7 = *(longlong *)(lVar10 + 0x68);
            if (lVar7 == 0) {
              uVar6 = FUN_14016979c();
              lVar7 = FUN_14477b664(uVar6);
              *(longlong *)(lVar10 + 0x68) = lVar7;
            }
            lVar8 = *(longlong *)(lVar10 + 0x70);
            if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
              plVar2 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                lVar8 = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar8 = FUN_144aff482(uVar6,plVar1);
              }
              *(longlong *)(lVar10 + 0x70) = lVar8;
            }
            FUN_144750e81(local_70,lVar8,local_d0);
            cVar5 = FUN_144a7fca4(local_70);
            cVar4 = *(char *)(lVar10 + 0x15e);
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
            if (pcVar3 != (code *)0x0) {
              ppppuVar11 = local_70;
              if (0x18 < local_58) {
                ppppuVar11 = (undefined8 ****)local_70[0];
              }
              (*pcVar3)(ppppuVar11);
            }
            if (0x18 < local_58) {
              FUN_1400020a8(local_70[0]);
            }
            FUN_144a5ac3a(local_a0);
            FUN_144a5ac3a(local_d0);
            FUN_144a5ac3a(local_100);
            if (cVar4 != cVar5) goto LAB_140cd943a;
          }
          if (*(char *)(lVar10 + 0x158) == '\x01') {
            FUN_140cd9d86(lVar10);
          }
          *(undefined1 *)(lVar10 + 0x157) = 0;
          FUN_140898514(lVar10 + 0xc0);
        }
        else {
LAB_140cd943a:
          if ((*(char *)(lVar10 + 0x11) == param_2) && ((*(byte *)(lVar10 + 0x14c) & 0xfe) == 2)) {
            lVar7 = *(longlong *)(lVar10 + 0x38);
            if (lVar7 == 0) {
              uVar6 = FUN_14016979c();
              lVar7 = FUN_14477b664(uVar6);
              *(longlong *)(lVar10 + 0x38) = lVar7;
            }
            plVar1 = (longlong *)(lVar10 + 0x30);
            if (*(longlong *)(lVar10 + 0x40) == 0) {
              if ((*plVar1 != 0) && (lVar7 != 0)) {
                plVar2 = *(longlong **)(lVar7 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                  *(undefined8 *)(lVar10 + 0x40) = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar7 = FUN_144aff482(uVar6);
                  *(longlong *)(lVar10 + 0x40) = lVar7;
                  if (lVar7 != 0) goto LAB_140cd9704;
                }
              }
            }
            else {
LAB_140cd9704:
              if (*(char *)(lVar10 + 0x15) == '\x01') {
                if (param_3 == 0) {
                  local_108 = 0;
                }
                else {
                  local_108 = *(undefined8 *)(param_3 + 8);
                }
                local_100[0] = 0;
                local_d8[0] = 0;
                FUN_1405833e0();
              }
              else {
                local_100[0] = 0;
                local_d8[0] = 0;
                FUN_1447f8f6a(local_100,param_1 + 0x18);
                FUN_14495544a(local_d8,param_1 + 0x40);
              }
              local_d0[0] = 0;
              FUN_1447f8f6a(local_d0,local_100);
              FUN_1447f8ea6(local_a8,local_d8);
              local_a0[0] = 0;
              local_78 = 0;
              lVar7 = *(longlong *)(lVar10 + 0x38);
              if (lVar7 == 0) {
                uVar6 = FUN_14016979c();
                lVar7 = FUN_14477b664(uVar6);
                *(longlong *)(lVar10 + 0x38) = lVar7;
              }
              lVar8 = *(longlong *)(lVar10 + 0x40);
              if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
                plVar2 = *(longlong **)(lVar7 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                  lVar8 = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar8 = FUN_144aff482(uVar6,plVar1);
                }
                *(longlong *)(lVar10 + 0x40) = lVar8;
              }
              FUN_144750e81(local_70,lVar8,local_d0);
              cVar5 = FUN_144a7fca4(local_70);
              cVar4 = *(char *)(lVar10 + 0x15d);
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
              if (pcVar3 != (code *)0x0) {
                ppppuVar11 = local_70;
                if (0x18 < local_58) {
                  ppppuVar11 = (undefined8 ****)local_70[0];
                }
                (*pcVar3)(ppppuVar11);
              }
              if (0x18 < local_58) {
                FUN_1400020a8(local_70[0]);
              }
              FUN_144a5ac3a(local_a0);
              FUN_144a5ac3a(local_d0);
              FUN_144a5ac3a(local_100);
              if (cVar4 != cVar5) goto LAB_140cd9444;
            }
            FUN_140cd9d86(lVar10);
          }
        }
      }
LAB_140cd9444:
      lVar10 = lVar10 + 0x160;
      lVar9 = lVar9 + -0x160;
    } while (lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cd99cc FUN_140cd99cc body=922 status=ok
// SIG undefined FUN_140cd99cc(void)

void FUN_140cd99cc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  undefined4 local_98 [2];
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
  if ((1 < *(byte *)(param_2 + 0x154)) && (0.0001 < *(float *)(param_2 + 0x140))) {
    bVar4 = *(char *)(param_2 + 0x156) + 1;
    *(byte *)(param_2 + 0x156) = bVar4;
    if (bVar4 < *(byte *)(param_2 + 0x154)) {
      if (*(float *)(param_2 + 0x148) <= 0.0 && *(float *)(param_2 + 0x148) != 0.0) {
        *(undefined4 *)(param_2 + 0x148) = 0;
      }
      *(undefined1 *)(param_2 + 0x15b) = 1;
      goto LAB_140cd9b47;
    }
    *(undefined1 *)(param_2 + 0x15b) = 0;
    *(undefined4 *)(param_2 + 0x148) = 0xbf800000;
    *(undefined1 *)(param_2 + 0x156) = 0;
  }
  if (*(char *)(param_2 + 0x158) != '\0') {
    if ((0.0 <= *(float *)(param_2 + 0x148)) && (*(char *)(param_2 + 0x159) == '\x01')) {
      *(undefined4 *)(param_2 + 0x148) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
    }
    goto LAB_140cd9b47;
  }
  if ((1 < *(byte *)(param_2 + 0x155)) && (*(char *)(param_2 + 0x11) != '\0')) {
    *(undefined4 *)(param_2 + 0x148) = 0;
    *(undefined1 *)(param_2 + 0x156) = 0;
    *(undefined1 *)(param_2 + 0x15c) = 1;
    FUN_140c43238(param_2 + 0x78,param_3);
    *(undefined1 *)(param_2 + 0x158) = 1;
    goto LAB_140cd9b47;
  }
  if (*(char *)(param_2 + 0x15a) == '\x01') {
    FUN_140c43238(param_2 + 0x78,param_3);
    if ((0.0 < *(float *)(param_2 + 0xe8)) &&
       ((*(float *)(param_2 + 0x148) <= 0.0 && *(float *)(param_2 + 0x148) != 0.0 ||
        (*(char *)(param_2 + 0x159) == '\x01')))) {
      *(undefined4 *)(param_2 + 0x148) = 0;
    }
    goto LAB_140cd9b47;
  }
  if (*(int *)(param_2 + 0xdc) == 0) {
LAB_140cd9cf7:
    uVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xd8);
    uVar5 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_2 + 0xdc) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_140cd9cf7;
      uVar5 = *puVar6;
    }
  }
  local_c0[0] = '\0';
  local_98[0] = 0;
  FUN_1456bb102(local_c0,uVar5);
  pfVar7 = &local_90;
  FUN_1448729ea(param_2 + 0xf0,pfVar7,local_c0);
  if (local_70 == 3) {
    uVar3 = 3;
    fVar9 = local_90;
  }
  else {
    pfVar8 = &local_68;
    FUN_1400b56fe(pfVar8,&local_90,3);
    fVar9 = 0.0;
    if (local_48 != 0) {
      fVar9 = local_68;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_50) {
        pfVar8 = (float *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar2)(pfVar8);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar3 = (uint)local_70;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_78) {
      pfVar7 = (float *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar2)(pfVar7);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  FUN_1448173f8(local_98);
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  uVar3 = rand();
  if ((float)(uVar3 & 0x7fff) / 32767.0 <= fVar9) {
    FUN_140c43238(param_2 + 0x78,param_3);
    if (*(char *)(param_2 + 0x11) == '\0') {
      if (*(float *)(param_2 + 0xe8) <= 0.0) {
        FUN_1447f69b6(param_2 + 0x90);
        goto LAB_140cd9b47;
      }
      *(undefined4 *)(param_2 + 0x148) = 0;
    }
    *(undefined1 *)(param_2 + 0x158) = 1;
  }
LAB_140cd9b47:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cd9d86 FUN_140cd9d86 body=200 status=ok
// SIG undefined FUN_140cd9d86(void)

void FUN_140cd9d86(longlong param_1)

{
  byte bVar1;
  
  if (((1 < *(byte *)(param_1 + 0x155)) && (0.0001 < *(float *)(param_1 + 0x140))) &&
     (*(char *)(param_1 + 0x15c) == '\x01')) {
    bVar1 = *(char *)(param_1 + 0x156) + 1;
    *(byte *)(param_1 + 0x156) = bVar1;
    if (bVar1 < *(byte *)(param_1 + 0x155)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x156) = 0;
  }
  if (*(char *)(param_1 + 0x15a) == '\x01') {
    if (*(float *)(param_1 + 0xe8) <= 0.0) {
      FUN_1447f69b6(param_1 + 0x90);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x158) == '\x01') {
    FUN_1447f69b6(param_1 + 0x90);
    if (*(char *)(param_1 + 0x14c) != '\x03') {
      *(undefined1 *)(param_1 + 0x158) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0xe8)) {
      *(undefined4 *)(param_1 + 0x148) = 0xbf800000;
    }
  }
  return;
}



// FUNCTION 140cd9e4e FUN_140cd9e4e body=175 status=ok
// SIG undefined FUN_140cd9e4e(void)

void FUN_140cd9e4e(longlong param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 8));
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_140cd9fe2((longlong *)(param_3 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_3 + 8);
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = *(int *)(puVar5 + 1);
  _Src = (void *)*puVar5;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_140cd9efe(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 4);
  }
  FUN_1400565e2(param_1 + 8,param_2,1);
  return;
}



// FUNCTION 140cd9efe FUN_140cd9efe body=228 status=ok
// SIG undefined FUN_140cd9efe(void)

void FUN_140cd9efe(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140cd9fe2 FUN_140cd9fe2 body=269 status=ok
// SIG undefined FUN_140cd9fe2(void)

void FUN_140cd9fe2(longlong param_1,int param_2)

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



// FUNCTION 140cda0f0 FUN_140cda0f0 body=25 status=ok
// SIG undefined FUN_140cda0f0(void)

undefined8 FUN_140cda0f0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140cda10a FUN_140cda10a body=58 status=ok
// SIG undefined FUN_140cda10a(void)

void FUN_140cda10a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x280);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x278);
    lVar3 = 0;
    do {
      FUN_140164b70(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 140cda14a FUN_140cda14a body=57 status=ok
// SIG undefined FUN_140cda14a(void)

void FUN_140cda14a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1600 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1600 = FUN_140002ddd(FUN_14661bb8c,uVar1,L"ZoneTravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 140cda184 FUN_140cda184 body=50 status=ok
// SIG undefined FUN_140cda184(void)

undefined8
FUN_140cda184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  FUN_140cda1b6(param_2,param_1,param_3,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 140cda1b6 FUN_140cda1b6 body=131 status=ok
// SIG undefined FUN_140cda1b6(void)

undefined8
FUN_140cda1b6(undefined8 param_1,int *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    FUN_1402a453c(param_2);
    iVar1 = *param_2;
  }
  FUN_140cda23a(DAT_14c9a3d60 + (longlong)iVar1 * 0x88 + -0x88,param_1,param_3,param_4,param_5);
  FUN_14020a6cc(param_2,1);
  return param_1;
}



// FUNCTION 140cda23a FUN_140cda23a body=175 status=ok
// SIG undefined FUN_140cda23a(void)

undefined8 *
FUN_140cda23a(longlong param_1,undefined8 *param_2,char *param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*param_3 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = param_1;
    }
    iVar1 = *(int *)(param_1 + 0x68);
    if ((longlong)iVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(lVar2 + 8 + lVar3) == *(int *)(param_3 + 4)) {
          uVar4 = (int)(lVar3 >> 2) * -0x55555555;
          if ((-1 < (int)uVar4) && ((int)uVar4 < iVar1)) {
            lVar3 = (ulonglong)(uVar4 & 0x7fffffff) * 0xc;
            *(char *)(lVar2 + lVar3) = (char)param_4;
            lVar2 = *(longlong *)(param_1 + 0x60);
            if (*(longlong *)(param_1 + 0x60) == 0) {
              lVar2 = param_1;
            }
            *(undefined4 *)(lVar2 + 4 + lVar3) = param_5;
            *param_2 = *(undefined8 *)param_3;
            return param_2;
          }
          break;
        }
        lVar3 = lVar3 + 0xc;
      } while ((longlong)iVar1 * 0xc != lVar3);
    }
  }
  FUN_1402a44ba(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 140cda2f8 FUN_140cda2f8 body=128 status=ok
// SIG undefined FUN_140cda2f8(void)

undefined8 * FUN_140cda2f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab702c0;
  FUN_140cda378(param_1 + 0x24);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (param_1[0x1e] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if (param_1[0xf] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cda378 FUN_140cda378 body=238 status=ok
// SIG undefined FUN_140cda378(void)

void FUN_140cda378(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ab70060;
  lVar1 = 0x4a0;
  do {
    *(undefined ***)((longlong)param_1 + lVar1 + -0x58) = &PTR_FUN_14a42e020;
    FUN_1448d844e(*(undefined8 *)((longlong)param_1 + lVar1 + -8),
                  *(undefined4 *)((longlong)param_1 + lVar1));
    if (*(longlong *)((longlong)param_1 + lVar1 + -8) != 0) {
      FUN_1400020a8();
    }
    FUN_140280a77(*(undefined8 *)((longlong)param_1 + lVar1 + -0x18),
                  *(undefined4 *)((longlong)param_1 + lVar1 + -0x10));
    if (*(longlong *)((longlong)param_1 + lVar1 + -0x18) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x98;
  } while (lVar1 != 0x2d8);
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140cda474 FUN_140cda474 body=132 status=ok
// SIG undefined FUN_140cda474(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140cda474(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cda50e FUN_140cda50e body=237 status=ok
// SIG undefined FUN_140cda50e(void)

void FUN_140cda50e(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = 0x25d0;
  lVar9 = 0x2756;
  lVar6 = 0x25e8;
  lVar7 = 0x2604;
  cVar5 = '\0';
  do {
    if (*(uint *)(param_1 + -0x114a8 + lVar9 * 8) != (uint)*(ushort *)(param_1 + -4 + lVar9)) {
      FUN_14119f284(param_1 + lVar7);
      FUN_1401861f4(param_1 + lVar6,*(undefined4 *)(param_1 + -0x114a8 + lVar9 * 8));
    }
    uVar4 = (uint)*(ushort *)(param_1 + -6 + lVar9);
    if (*(uint *)(param_1 + -0x114b0 + lVar9 * 8) != uVar4) {
      *(uint *)(param_1 + -0x114b0 + lVar9 * 8) = uVar4;
      FUN_1401861f4(param_1 + lVar8);
    }
    uVar1 = *(ushort *)(param_1 + -2 + lVar9);
    uVar2 = *(ushort *)(param_1 + lVar9);
    if (uVar1 != uVar2) {
      uVar3 = ~uVar2;
      if (uVar2 <= uVar1) {
        uVar3 = -uVar2;
      }
      *(ushort *)(param_1 + lVar9) = uVar1;
      if ((ushort)(uVar3 + uVar1) != 0) {
        FUN_140a43580(param_1 + 0x2558,cVar5,uVar3 + uVar1);
      }
    }
    lVar8 = lVar8 + 0x40;
    cVar5 = cVar5 + '\x01';
    lVar9 = lVar9 + 8;
    lVar6 = lVar6 + 0x40;
    lVar7 = lVar7 + 0x40;
  } while (lVar8 != 0x2750);
  return;
}



// FUNCTION 140cda612 FUN_140cda612 body=65 status=ok
// SIG undefined FUN_140cda612(void)

void FUN_140cda612(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x58) != '\x01') || (lVar1 = *(longlong *)(param_1 + 0x40), lVar1 == 0))
  {
    return;
  }
  if ((*(int *)(lVar1 + 0x68) != 0) && (lVar1 = FUN_14494f566(lVar1 + 0x98), lVar1 != 0)) {
    return;
  }
  FUN_140b3e45e(param_1);
  return;
}



// FUNCTION 140cda654 FUN_140cda654 body=9 status=ok
// SIG undefined FUN_140cda654(void)

void FUN_140cda654(longlong param_1)

{
  FUN_140cda65e(param_1 + 0x10);
  return;
}



// FUNCTION 140cda65e FUN_140cda65e body=104 status=ok
// SIG undefined FUN_140cda65e(void)

void FUN_140cda65e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b430d90;
  plVar3 = (longlong *)param_1[7];
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
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140cda6c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140cda6c6 FUN_140cda6c6 body=112 status=ok
// SIG undefined FUN_140cda6c6(void)

undefined8 * FUN_140cda6c6(undefined8 *param_1)

{
  FUN_144a679e2();
  *param_1 = &PTR_FUN_14a8a3730;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe5) = 0;
  *(undefined8 *)((longlong)param_1 + 0xed) = 0;
  *(byte *)((longlong)param_1 + 0xf5) = *(byte *)((longlong)param_1 + 0xf5) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x400000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 140cda736 FUN_140cda736 body=21 status=ok
// SIG undefined FUN_140cda736(void)

undefined8 FUN_140cda736(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140cda74c FUN_140cda74c body=842 status=ok
// SIG undefined FUN_140cda74c(void)

void FUN_140cda74c(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
    uVar17 = (longlong)*(int *)(param_1 + 0xf8);
    do {
      uVar13 = uVar17 - 1;
      if ((longlong)uVar17 <= (longlong)*(int *)(param_1 + 0x118)) {
        lVar14 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar14 = param_1 + 0x100;
        }
        if ((*(uint *)(lVar14 + (uVar13 >> 5) * 4) >> ((uint)uVar13 & 0x1f) & 1) != 0) {
          cVar4 = FUN_140cdaa96(*(longlong *)(param_1 + 0xf0) + uVar13 * 0x40);
          if (cVar4 != '\0') {
            FUN_14765e5ac(*(longlong *)(param_1 + 0xf0) + uVar13 * 0x40 + 0x20);
            FUN_1457db2cc((longlong *)(param_1 + 0xf0),uVar13 & 0xffffffff);
            uVar16 = (uint)(uVar13 & 0xffff);
            if ((int)uVar16 < *(int *)(param_1 + 0x140)) {
              lVar14 = param_1 + 0x128;
              if (*(longlong *)(param_1 + 0x138) != 0) {
                lVar14 = *(longlong *)(param_1 + 0x138);
              }
              puVar8 = (uint *)(lVar14 + ((uVar13 & 0xffff) >> 5) * 4);
              *puVar8 = *puVar8 & ~(1 << ((byte)uVar13 & 0x1f));
            }
            if (*(int *)(param_1 + 0x98) != 0) {
              lVar14 = param_1 + 0x88;
              if (*(longlong *)(param_1 + 0x90) != 0) {
                lVar14 = *(longlong *)(param_1 + 0x90);
              }
              plVar1 = (longlong *)(param_1 + 0x50);
              iVar12 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar16) * 4);
              while (iVar11 = iVar12, iVar11 != -1) {
                lVar14 = *plVar1;
                iVar12 = *(int *)(lVar14 + 4 + (longlong)iVar11 * 0xc);
                if (*(short *)(lVar14 + (longlong)iVar11 * 0xc) == (short)uVar13) {
                  do {
                    FUN_140bbeb1c(param_1,lVar14 + (longlong)iVar11 * 0xc + 2);
                    FUN_14086b624(plVar1,iVar11);
                    do {
                      iVar11 = iVar12;
                      if (iVar11 == -1) goto LAB_140cda7cb;
                      lVar14 = *plVar1;
                      iVar12 = *(int *)(lVar14 + 4 + (longlong)iVar11 * 0xc);
                    } while (*(short *)(lVar14 + (longlong)iVar11 * 0xc) != (short)uVar13);
                  } while( true );
                }
              }
            }
          }
        }
      }
LAB_140cda7cb:
      bVar3 = 1 < (longlong)uVar17;
      uVar17 = uVar13;
    } while (bVar3);
  }
  iVar12 = *(int *)(param_1 + 200);
  if (iVar12 == 0) {
    uVar15 = 1;
    uVar17 = 0;
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0xb0);
    }
    uVar16 = *puVar8;
    if (uVar16 == 0) {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      uVar17 = 0;
      uVar13 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar13 = uVar17;
      }
      iVar11 = 0;
      do {
        if (uVar13 == uVar17) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar16 = puVar8[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar13 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar10 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar10) {
      iVar10 = iVar12;
    }
  }
  if (iVar10 < iVar12) {
    uVar16 = 0xffffffff;
    do {
      cVar4 = FUN_140cdaa96(*(longlong *)(param_1 + 0xa0) + (longlong)iVar10 * 0x30);
      if ((cVar4 == '\0') &&
         (uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xa0) + 0x20 + (longlong)iVar10 * 0x30),
         (int)(uint)uVar2 < *(int *)(param_1 + 0x118))) {
        lVar14 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar14 = param_1 + 0x100;
        }
        if ((*(uint *)(lVar14 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
        goto LAB_140cda993;
      }
      else {
LAB_140cda993:
        FUN_1457db456((longlong *)(param_1 + 0xa0),iVar10);
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar8 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0xb0);
      }
      iVar12 = *(int *)(param_1 + 200);
      iVar10 = (int)uVar17;
      lVar14 = (longlong)iVar10;
      uVar5 = puVar8[lVar14] & uVar16;
      if (uVar5 == 0) {
        iVar6 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar6 = iVar12 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar6 <= iVar10) {
          return;
        }
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar14 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar14 == lVar9) {
            return;
          }
        }
        uVar17 = (ulonglong)(iVar10 + (int)lVar9 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar5 & uVar5);
      uVar13 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar10 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar12);
  }
  return;
}



// FUNCTION 140cdaa96 FUN_140cdaa96 body=81 status=ok
// SIG undefined FUN_140cdaa96(void)

uint FUN_140cdaa96(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1406f4b62();
  uVar1 = 1;
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    uVar1 = *(uint *)(lVar2 + 8) >> 0x1c & 1;
  }
  return uVar1;
}



// FUNCTION 140cdaae8 FUN_140cdaae8 body=894 status=ok
// SIG undefined FUN_140cdaae8(void)

void FUN_140cdaae8(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  byte bVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  longlong *local_80;
  int local_74;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  uint *local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_2;
  lVar4 = FUN_14009d2a0();
  local_82 = *(undefined2 *)(lVar4 + 0x11c);
  puVar17 = (uint *)(param_1 + 2);
  iVar12 = (int)param_1[5];
  if (iVar12 == 0) {
    uVar19 = 1;
    uVar18 = 0;
    iVar13 = 0;
    iVar15 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = puVar17;
    }
    uVar14 = *puVar5;
    if (uVar14 == 0) {
      iVar15 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar15 = iVar12 + -1;
      }
      uVar18 = 0;
      uVar19 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar19 = uVar18;
      }
      iVar15 = 0;
      do {
        if (uVar19 == uVar18) goto LAB_140cdae3f;
        iVar15 = iVar15 + 0x20;
        uVar14 = puVar5[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar18 = 0;
      iVar15 = 0;
    }
    uVar19 = (ulonglong)(-uVar14 & uVar14);
    uVar8 = uVar19 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar13 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar13) {
      iVar13 = iVar12;
    }
  }
  if (iVar13 < iVar12) {
    local_70 = local_70 + 0x28;
    local_60 = param_1 + 10;
    local_80 = param_1 + 0x25;
    uVar14 = 0xffffffff;
    local_58 = puVar17;
    do {
      local_4a = *(undefined2 *)(*param_1 + (longlong)iVar13 * 0xc);
      uVar1 = *(ushort *)(*param_1 + 2 + (longlong)iVar13 * 0xc);
      local_74 = iVar15;
      if ((uVar1 != 0xffff) && (cVar2 = FUN_140bbead8(local_70,local_4a,local_82), cVar2 != '\0')) {
        FUN_14086b58e(local_60,uVar1,&local_4a);
        iVar15 = uVar1 + 1;
        iVar12 = (int)param_1[0x28];
        iVar16 = iVar15 - iVar12;
        if (0 < iVar16) {
          if (iVar12 == 0) {
LAB_140cdad3a:
            uVar3 = *(uint *)((longlong)param_1 + 0x144);
            if (uVar3 == uVar1 || (int)uVar3 < (int)(uint)uVar1) {
              if (uVar1 < 0x80) {
                iVar10 = 0x80;
                iVar15 = iVar12;
              }
              else {
                uVar11 = uVar1 + 0x20 >> 5;
                local_68 = (ulonglong)uVar11;
                if (uVar3 + 0x1f < 0xa0) {
                  uVar8 = 4;
                  if (4 < uVar11) {
                    uVar8 = (ulonglong)uVar11;
                  }
                }
                else {
                  uVar8 = local_68 + (uVar11 * 3 >> 3) + 0x10;
                }
                uVar8 = FUN_144a3809e(uVar8 << 2,0);
                iVar15 = (int)(uVar8 >> 2);
                iVar10 = -0x20;
                if ((int)local_68 <= iVar15) {
                  iVar10 = iVar15 << 5;
                }
                iVar15 = (int)param_1[0x28];
              }
              *(int *)((longlong)param_1 + 0x144) = iVar10;
              FUN_1446efbd8(local_80,iVar15);
              iVar15 = (int)param_1[0x28] + iVar16;
            }
            iVar10 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar10 = iVar15;
            }
            *(int *)(param_1 + 0x28) = iVar15;
            if (iVar15 % 0x20 != 0) {
              plVar7 = (longlong *)param_1[0x27];
              if ((longlong *)param_1[0x27] == (longlong *)0x0) {
                plVar7 = local_80;
              }
              bVar6 = -(char)(iVar15 % 0x20);
              *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)
                         ) >> (bVar6 & 0x1f);
            }
          }
          else {
            iVar10 = iVar12 + 0x1e;
            if (-1 < iVar12 + -1) {
              iVar10 = iVar12 + -1;
            }
            if ((uint)(uVar1 >> 5) != iVar10 >> 5) goto LAB_140cdad3a;
            *(int *)(param_1 + 0x28) = iVar15;
          }
          FUN_1447c6044(local_80,iVar12,iVar16,0);
        }
        plVar7 = (longlong *)param_1[0x27];
        if ((longlong *)param_1[0x27] == (longlong *)0x0) {
          plVar7 = local_80;
        }
        puVar17 = (uint *)((longlong)plVar7 + (ulonglong)(uVar1 >> 5) * 4);
        *puVar17 = *puVar17 | 1 << ((byte)uVar1 & 0x1f);
        FUN_14086b4ac(param_1,iVar13);
        iVar12 = (int)param_1[5];
        puVar17 = local_58;
      }
      uVar14 = uVar14 & ~(uint)uVar19;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = puVar17;
      }
      iVar13 = (int)uVar18;
      lVar4 = (longlong)iVar13;
      uVar3 = puVar5[lVar4] & uVar14;
      iVar15 = local_74;
      if (uVar3 == 0) {
        iVar16 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar16 = iVar12 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar10 = iVar16;
        if (iVar16 < iVar13) {
          iVar10 = iVar13;
        }
        if (iVar16 <= iVar13) break;
        lVar9 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar3 = puVar5[lVar4 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar10 - lVar4 == lVar9) goto LAB_140cdae3f;
        }
        uVar18 = (ulonglong)(iVar13 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar19 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar13 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar12);
  }
LAB_140cdae3f:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cdae68 FUN_140cdae68 body=102 status=ok
// SIG undefined FUN_140cdae68(void)

ulonglong FUN_140cdae68(longlong param_1)

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
LAB_140cdaeb1:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140cdaeb1;
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



// FUNCTION 140cdaece FUN_140cdaece body=109 status=ok
// SIG undefined FUN_140cdaece(void)

void FUN_140cdaece(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140cdaf23;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x44) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_140cdaf23;
    }
  }
  uVar3 = 0;
LAB_140cdaf23:
  uVar2 = FUN_140cdaf3c(*(undefined8 *)(param_1 + 0x30),uVar3);
  FUN_1402a7054(param_1,uVar2);
  return;
}



// FUNCTION 140cdaf3c FUN_140cdaf3c body=112 status=ok
// SIG undefined FUN_140cdaf3c(void)

bool FUN_140cdaf3c(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      lVar2 = (**(code **)(*(longlong *)(param_2 + 0x3ac8) + 0x28))(param_2 + 0x3ac8);
      if (lVar2 != 0) {
        return (*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0;
      }
    }
    else if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(char *)(param_1 + 0x11) == '\x01') {
        lVar2 = (**(code **)(*(longlong *)(param_2 + 0x3b48) + 0x20))(param_2 + 0x3b48);
        return *(char *)(lVar2 + 0x31) != '\0';
      }
                    /* WARNING: Could not recover jumptable at 0x000140cdaf8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(longlong *)(param_2 + 0x3b48) + 0x60))(param_2 + 0x3b48);
      return (bool)uVar1;
    }
  }
  return false;
}



// FUNCTION 140cdafb8 FUN_140cdafb8 body=113 status=ok
// SIG undefined FUN_140cdafb8(void)

undefined8 * FUN_140cdafb8(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14a6aa070;
  return param_1;
}



// FUNCTION 140cdb02a FUN_140cdb02a body=234 status=ok
// SIG undefined FUN_140cdb02a(void)

void FUN_140cdb02a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55) = 0;
  lVar1 = param_1[9];
  cVar3 = FUN_140337e44(lVar1 + 0x38,param_1[8] + 0x240,lVar1 + 0x50);
  *(bool *)((longlong)param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar3;
  uVar5 = FUN_140309e34(param_1[9] + 0x58,param_1[8] + 0x240,param_1[9] + 0x70);
  *(undefined4 *)(param_1 + 0xb) = uVar5;
  lVar1 = param_1[8];
  lVar2 = param_1[9];
  uVar5 = FUN_140309e34(lVar2 + 0x88,lVar1 + 0x240,lVar2 + 0xa0);
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  uVar5 = FUN_140309e34(lVar2 + 0xa8,lVar1 + 0x240,lVar2 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 100) = uVar5;
  cVar3 = *(char *)(lVar2 + 0x84);
  uVar5 = *(undefined4 *)(lVar2 + 0x80);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) < 0) {
    FUN_1447a8aa0(param_1 + 0xd,0);
  }
  uVar4 = 0x7fffffff;
  if (cVar3 != '\0') {
    uVar4 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x000140cdb105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1,param_1 + 0xd,uVar4);
  return;
}



// FUNCTION 140cdb114 FUN_140cdb114 body=433 status=ok
// SIG undefined FUN_140cdb114(void)

void FUN_140cdb114(longlong param_1,longlong *param_2,int param_3)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [44];
  int local_7c;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)*(int *)(lVar2 + 0x890);
  if (0 < lVar5) {
    uVar6 = lVar5 + 1;
    lVar5 = lVar5 * 0x28;
    do {
      lVar5 = lVar5 + -0x28;
      if (param_3 <= (int)param_2[1]) break;
      FUN_1405b801a(*(longlong *)(lVar2 + 0x888) + lVar5,&local_78,&DAT_14cb242e8);
      if ((((((-DAT_14cb242e8 < local_78) && (local_78 < DAT_14cb242e8)) &&
            (-DAT_14cb242f0 < dStack_70)) &&
           ((dStack_70 < DAT_14cb242f0 && (-DAT_14cb242f8 < local_68)))) &&
          ((local_68 < DAT_14cb242f8 &&
           ((iVar4 = _finite(local_78), iVar4 != 0 && (iVar4 = _finite(dStack_70), iVar4 != 0))))))
         && (iVar4 = _finite(local_68), iVar4 != 0)) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        local_7c = param_3;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1403e3958(param_2,iVar4);
        }
        lVar3 = *param_2;
        *(double *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18) = local_68;
        pdVar1 = (double *)(lVar3 + (longlong)iVar4 * 0x18);
        *pdVar1 = local_78;
        pdVar1[1] = dStack_70;
        param_3 = local_7c;
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cdb2c6 FUN_140cdb2c6 body=832 status=ok
// SIG undefined FUN_140cdb2c6(void)

void FUN_140cdb2c6(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  double dVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  code *pcVar14;
  longlong *plVar15;
  undefined8 unaff_RBX;
  char cVar16;
  longlong lVar17;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_90;
  longlong *local_88;
  code *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar6 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0xd0);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if ((((iVar7 != 0) && (uVar8 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), -1 < (int)uVar8))
      && ((int)uVar8 < DAT_14c9647dc)) &&
     (((plVar15 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar15 != (longlong *)0x0 && ((int)plVar15[2] == iVar7)) &&
      (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 && (lVar17 = *plVar15, lVar17 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_c0 = &local_80;
      local_80 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1478c0a72;
      local_d0 = &LAB_1417b2375;
      local_d8 = L"Engine";
      local_e0 = 0x1000000000;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140cdb3a9;
  }
  lVar17 = 0;
LAB_140cdb3a9:
  FUN_140cdbbeb(&local_80,lVar17,(uint)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar6) ^ 1);
  pcVar14 = local_80;
  if ((longlong)local_78 != 0) {
    lVar17 = 0;
    do {
      FUN_14070cbf4(&local_90,*(undefined8 *)(pcVar14 + lVar17));
      if (local_90 == 0) {
        cVar16 = '\x03';
      }
      else {
        lVar9 = *(longlong *)(local_90 + 0x390);
        if (lVar9 == 0) {
          local_a8 = *(undefined4 *)(local_90 + 0x588);
          uStack_a4 = *(undefined4 *)(local_90 + 0x58c);
          uStack_a0 = *(undefined4 *)(local_90 + 0x590);
          uStack_9c = *(undefined4 *)(local_90 + 0x594);
          dVar5 = *(double *)(local_90 + 0x598);
          fVar4 = *(float *)(local_90 + 0x5d4);
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1403e3958(param_2,iVar7);
          }
          lVar9 = *param_2;
          puVar3 = (undefined4 *)(lVar9 + (longlong)iVar7 * 0x18);
          *puVar3 = local_a8;
          puVar3[1] = uStack_a4;
          puVar3[2] = uStack_a0;
          puVar3[3] = uStack_9c;
          *(double *)(lVar9 + 0x10 + (longlong)iVar7 * 0x18) = dVar5 - (double)fVar4;
        }
        else {
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1403e3958(param_2,iVar7);
          }
          lVar10 = *param_2;
          *(undefined8 *)(lVar10 + 0x10 + (longlong)iVar7 * 0x18) = *(undefined8 *)(lVar9 + 600);
          uVar11 = *(undefined4 *)(lVar9 + 0x24c);
          uVar12 = *(undefined4 *)(lVar9 + 0x250);
          uVar13 = *(undefined4 *)(lVar9 + 0x254);
          puVar3 = (undefined4 *)(lVar10 + (longlong)iVar7 * 0x18);
          *puVar3 = *(undefined4 *)(lVar9 + 0x248);
          puVar3[1] = uVar11;
          puVar3[2] = uVar12;
          puVar3[3] = uVar13;
        }
        cVar16 = (param_3 <= (int)param_2[1]) * '\x02';
      }
      plVar15 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
    } while (((cVar16 == '\0') || (cVar16 == '\x03')) &&
            (lVar17 = lVar17 + 8, (longlong)local_78 * 8 != lVar17));
  }
  if (local_80 != (code *)0x0) {
    FUN_1400020a8(local_80);
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cdb608 FUN_140cdb608 body=1506 status=ok
// SIG undefined FUN_140cdb608(void)

void FUN_140cdb608(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  code *pcVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  int local_84;
  longlong *local_80;
  code *local_78;
  PSRWLOCK local_70;
  longlong *local_68;
  code *local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if ((((iVar9 != 0) && (uVar18 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), -1 < (int)uVar18)
       ) && ((int)uVar18 < DAT_14c9647dc)) &&
     (((plVar21 = (longlong *)
                  ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
       plVar21 != (longlong *)0x0 && ((int)plVar21[2] == iVar9)) &&
      (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (lVar20 = *plVar21, lVar20 != 0)))))) {
    local_84 = param_3;
    local_80 = param_2;
    if (DAT_14cac9ca8 == 0) {
      local_a0 = &local_58;
      local_58 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1478c0a72;
      local_b0 = &LAB_1417b2375;
      local_b8 = L"Engine";
      local_c0 = 0x1000000000;
      local_c8 = 0x10000004;
      local_d0 = 8;
      local_d8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       (lVar11 = FUN_1447210f0(lVar20), uVar5 = DAT_14cb1c840, lVar11 != 0)) {
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_58,uVar5,lVar11);
      plVar21 = local_50;
      pcVar8 = local_58;
      if ((local_58 == (code *)0x0) || (local_50 == (longlong *)0x0)) {
        plVar21 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar16 = local_50 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      plVar16 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      if (plVar21 != (longlong *)0x0) {
        iVar9 = (int)plVar21[1];
        do {
          plVar16 = (longlong *)0x0;
          if (iVar9 == 0) break;
          LOCK();
          iVar19 = (int)plVar21[1];
          bVar26 = iVar9 == iVar19;
          if (bVar26) {
            *(int *)(plVar21 + 1) = iVar9 + 1;
            iVar19 = iVar9;
          }
          iVar9 = iVar19;
          UNLOCK();
          plVar16 = plVar21;
        } while (!bVar26);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
        if (plVar16 != (longlong *)0x0) {
          if (pcVar8 != (code *)0x0) {
            FUN_14070cbf4(&local_58,lVar20);
            local_70 = (PSRWLOCK)(pcVar8 + 0x1d0);
            AcquireSRWLockExclusive(local_70);
            pcVar22 = pcVar8 + 0xf0;
            iVar9 = *(int *)(pcVar8 + 0x108);
            local_68 = plVar16;
            if (iVar9 == 0) {
              uVar17 = 1;
              uVar15 = 0;
              iVar19 = 0;
              iVar24 = 0;
            }
            else {
              pcVar12 = *(code **)(pcVar8 + 0x100);
              if (*(code **)(pcVar8 + 0x100) == (code *)0x0) {
                pcVar12 = pcVar22;
              }
              uVar18 = *(uint *)pcVar12;
              if (uVar18 == 0) {
                iVar19 = iVar9 + 0x1e;
                if (-1 < iVar9 + -1) {
                  iVar19 = iVar9 + -1;
                }
                uVar15 = 0;
                uVar17 = (ulonglong)(uint)(iVar19 >> 5);
                if (iVar19 >> 5 < 1) {
                  uVar17 = uVar15;
                }
                iVar24 = 0;
                do {
                  if (uVar17 == uVar15) goto LAB_140cdb9c0;
                  iVar24 = iVar24 + 0x20;
                  uVar18 = *(uint *)(pcVar12 + (uVar15 + 1) * 4);
                  uVar15 = uVar15 + 1;
                } while (uVar18 == 0);
              }
              else {
                uVar15 = 0;
                iVar24 = 0;
              }
              uVar17 = (ulonglong)(-uVar18 & uVar18);
              uVar4 = uVar17 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar19 = (iVar24 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar9 <= iVar19) {
                iVar19 = iVar9;
              }
            }
            if (iVar19 != iVar9) {
              uVar18 = 0xffffffff;
              local_60 = local_58;
              plVar21 = local_80;
              iVar23 = local_84;
              iVar10 = iVar9;
              do {
                pcVar12 = *(code **)(*(longlong *)(pcVar8 + 0xe0) + 8 + (longlong)iVar19 * 0x20);
                if (pcVar12 != (code *)0x0) {
                  iVar19 = (int)plVar21[1];
                  if (((iVar19 < iVar23) && (pcVar12 != local_60)) &&
                     (lVar20 = *(longlong *)(pcVar12 + 0x390), lVar20 != 0)) {
                    *(uint *)(plVar21 + 1) = iVar19 + 1U;
                    if (*(uint *)((longlong)plVar21 + 0xc) < iVar19 + 1U) {
                      local_78 = pcVar22;
                      FUN_1403e3958(plVar21,iVar19);
                      plVar21 = local_80;
                      pcVar22 = local_78;
                      iVar23 = local_84;
                    }
                    lVar11 = *plVar21;
                    *(undefined8 *)(lVar11 + 0x10 + (longlong)iVar19 * 0x18) =
                         *(undefined8 *)(lVar20 + 600);
                    uVar5 = *(undefined4 *)(lVar20 + 0x24c);
                    uVar6 = *(undefined4 *)(lVar20 + 0x250);
                    uVar7 = *(undefined4 *)(lVar20 + 0x254);
                    puVar3 = (undefined4 *)(lVar11 + (longlong)iVar19 * 0x18);
                    *puVar3 = *(undefined4 *)(lVar20 + 0x248);
                    puVar3[1] = uVar5;
                    puVar3[2] = uVar6;
                    puVar3[3] = uVar7;
                    iVar10 = *(int *)(pcVar8 + 0x108);
                  }
                }
                uVar18 = uVar18 & ~(uint)uVar17;
                pcVar12 = *(code **)(pcVar8 + 0x100);
                if (*(code **)(pcVar8 + 0x100) == (code *)0x0) {
                  pcVar12 = pcVar22;
                }
                iVar19 = (int)uVar15;
                lVar20 = (longlong)iVar19;
                uVar25 = *(uint *)(pcVar12 + lVar20 * 4) & uVar18;
                if (uVar25 == 0) {
                  iVar13 = iVar10 + 0x1e;
                  if (-1 < iVar10 + -1) {
                    iVar13 = iVar10 + -1;
                  }
                  iVar13 = iVar13 >> 5;
                  iVar24 = iVar24 + 0x20;
                  iVar14 = iVar13;
                  if (iVar13 < iVar19) {
                    iVar14 = iVar19;
                  }
                  plVar21 = local_80;
                  if (iVar19 < iVar13) {
                    lVar11 = 0;
                    do {
                      uVar25 = *(uint *)(pcVar12 + (lVar20 + lVar11 + 1) * 4);
                      if (uVar25 != 0) {
                        uVar15 = (ulonglong)(iVar19 + (int)lVar11 + 1);
                        uVar18 = 0xffffffff;
                        goto LAB_140cdb966;
                      }
                      iVar24 = iVar24 + 0x20;
                      lVar11 = lVar11 + 1;
                    } while (iVar14 - lVar20 != lVar11);
                    uVar18 = 0xffffffff;
                    iVar19 = iVar14;
                  }
                  uVar15 = (ulonglong)(iVar19 + 1);
                  iVar23 = local_84;
                  iVar19 = iVar10;
                }
                else {
LAB_140cdb966:
                  uVar17 = (ulonglong)(-uVar25 & uVar25);
                  uVar4 = uVar17 * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar4 != 0) {
                    for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  iVar19 = (iVar24 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                  if (iVar10 <= iVar19) {
                    iVar19 = iVar10;
                  }
                }
              } while (iVar19 != iVar9);
            }
LAB_140cdb9c0:
            ReleaseSRWLockExclusive(local_70);
            plVar16 = local_68;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar21 = local_50 + 1;
              *(int *)plVar21 = (int)*plVar21 + -1;
              UNLOCK();
              if ((int)*plVar21 == 0) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar2 = (int *)((longlong)local_50 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar16 = local_68;
                if (*piVar2 == 0) {
                  (**(code **)(*local_50 + 0x10))(local_50);
                  plVar16 = local_68;
                }
              }
            }
          }
          LOCK();
          plVar21 = plVar16 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cdbbeb FUN_140cdbbeb body=2068 status=ok
// SIG undefined FUN_140cdbbeb(void)

longlong * FUN_140cdbbeb(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  code *pcVar14;
  longlong lVar15;
  code *pcVar16;
  bool bVar17;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong uStack_80;
  code *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cb223d8 == 0) {
      local_e0 = &local_78;
      local_78 = FUN_1449e2820;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_1427b09ee;
      local_e8 = &LAB_147f29feb;
      local_f0 = FUN_1464384fe;
      local_f8 = L"Engine";
      local_100 = 0;
      local_108 = 0x10004001;
      local_110 = 8;
      local_118 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb223d8);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_e0 = &local_78;
        local_78 = FUN_1449e2820;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_1427b09ee;
        local_e8 = &LAB_147f29feb;
        local_f0 = FUN_1464384fe;
        local_f8 = L"Engine";
        local_100 = 0;
        local_108 = 0x10004001;
        local_110 = 8;
        local_118 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb223d8);
      if (((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) &&
         (local_c0 = (**(code **)(*plVar6 + 0x10))(plVar6), local_c0 != 0)) {
        local_88 = 0;
        uStack_80 = 0;
        local_a8 = param_1;
        if (param_3 == '\0') {
          uVar7 = FUN_1447210f0(param_2);
          FUN_1403679b6(&local_78,uVar7);
          if (plStack_70 != (longlong *)0x0) {
            iVar3 = (int)plStack_70[1];
            do {
              if (iVar3 == 0) {
                plVar5 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar2 = (int)plStack_70[1];
              bVar17 = iVar3 == iVar2;
              if (bVar17) {
                *(int *)(plStack_70 + 1) = iVar3 + 1;
                iVar2 = iVar3;
              }
              iVar3 = iVar2;
              UNLOCK();
              plVar5 = plStack_70;
            } while (!bVar17);
            LOCK();
            piVar1 = (int *)((longlong)plStack_70 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plStack_70 + 0x10))();
            }
            if (plVar5 != (longlong *)0x0) {
              if (local_78 != (code *)0x0) {
                local_b8 = plVar5;
                FUN_140cdc69c(local_78,&local_78);
                if ((longlong)(int)plStack_70 == 0) {
                  uVar12 = 0;
                }
                else {
                  pcVar14 = local_78 + (longlong)(int)plStack_70 * 0x10;
                  pcVar16 = local_78;
                  local_a0 = param_2;
                  do {
                    uVar12 = uStack_80 >> 0x20;
                    uStack_80 = uStack_80 & 0xffffffff00000000;
                    if ((int)uVar12 != 0) {
                      FUN_140c5c1ec(&local_88,0);
                    }
                    FUN_144a67cdc(*(undefined8 *)pcVar16,2,&local_88);
                    lVar8 = (longlong)(int)uStack_80;
                    if (lVar8 != 0) {
                      lVar15 = 0;
                      lVar13 = local_88;
                      do {
                        plVar5 = *(longlong **)(lVar13 + lVar15);
                        if (((plVar5 != (longlong *)0x0) && (plVar5 != local_a0)) &&
                           ((*(longlong **)(local_c0 + 0x18) != plVar5 &&
                            (iVar3 = FUN_140cdc400(local_c0), plVar6 = local_a8, iVar3 == 0)))) {
                          lVar11 = local_a8[1];
                          uVar4 = (int)lVar11 + 1;
                          *(uint *)(local_a8 + 1) = uVar4;
                          local_b0 = lVar13;
                          if (*(uint *)((longlong)local_a8 + 0xc) < uVar4) {
                            FUN_1447d05f2(local_a8);
                          }
                          *(longlong **)(*plVar6 + (longlong)(int)lVar11 * 8) = plVar5;
                          lVar13 = local_b0;
                        }
                        lVar15 = lVar15 + 8;
                        param_1 = local_a8;
                      } while (lVar8 * 8 != lVar15);
                    }
                    pcVar16 = pcVar16 + 0x10;
                  } while (pcVar16 != pcVar14);
                  uVar12 = (ulonglong)plStack_70 & 0xffffffff;
                }
                FUN_140cdc650(local_78,uVar12);
                plVar5 = local_b8;
                if (local_78 != (code *)0x0) {
                  FUN_1400020a8();
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
        }
        else {
          uVar7 = FUN_1401b0f18();
          plVar5 = (longlong *)FUN_144718840(param_2,uVar7);
          if ((plVar5 == (longlong *)0x0) ||
             (lVar8 = (**(code **)(*plVar5 + 0x20))(plVar5), lVar8 == 0)) goto LAB_140cdbf04;
          if ((longlong)*(int *)(lVar8 + 0x498) != 0) {
            plVar5 = *(longlong **)(lVar8 + 0x490);
            local_b8 = plVar5 + *(int *)(lVar8 + 0x498);
            local_b0 = local_c0 + 0x20;
            do {
              if (*plVar5 != 0) {
                FUN_1448c1924(*plVar5,&local_98);
                if (local_98 != 0) {
                  uVar12 = uStack_80 >> 0x20;
                  uStack_80 = uStack_80 & 0xffffffff00000000;
                  if ((int)uVar12 != 0) {
                    FUN_140c5c1ec(&local_88,0);
                  }
                  FUN_144a67cdc(local_98,2,&local_88);
                  lVar8 = local_88;
                  lVar13 = (longlong)(int)uStack_80;
                  if (lVar13 != 0) {
                    lVar15 = 0;
                    do {
                      plVar6 = *(longlong **)(lVar8 + lVar15);
                      if (((plVar6 != (longlong *)0x0) && (plVar6 != param_2)) &&
                         (plVar9 = *(longlong **)(local_c0 + 0x18), plVar9 != plVar6)) {
                        if (plVar9 == (longlong *)0x0) {
                          uVar7 = 0;
                        }
                        else {
                          uVar7 = (**(code **)(*plVar9 + 0x180))();
                        }
                        if (DAT_14cb223d8 == 0) {
                          local_78 = FUN_1449e2820;
                          local_d0 = FUN_14081d0ea;
                          local_d8 = FUN_1427b09ee;
                          local_e0 = &local_78;
                          local_e8 = &LAB_147f29feb;
                          local_f0 = FUN_1464384fe;
                          local_f8 = L"Engine";
                          local_100 = 0;
                          local_108 = 0x10004001;
                          local_110 = 8;
                          local_118 = 0x28;
                          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
                        }
                        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,DAT_14cb223d8);
                        if (plVar9 == (longlong *)0x0) {
LAB_140cdbf3d:
                          local_78 = (code *)0x0;
                          plStack_70 = (longlong *)0xffff;
                          local_68 = 0;
                        }
                        else {
                          if (DAT_14cb223d8 == 0) {
                            local_78 = FUN_1449e2820;
                            local_d0 = FUN_14081d0ea;
                            local_d8 = FUN_1427b09ee;
                            local_e0 = &local_78;
                            local_e8 = &LAB_147f29feb;
                            local_f0 = FUN_1464384fe;
                            local_f8 = L"Engine";
                            local_100 = 0;
                            local_108 = 0x10004001;
                            local_110 = 8;
                            local_118 = 0x28;
                            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea)
                            ;
                          }
                          plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb223d8);
                          if (((plVar9 == plVar10) || (plVar10 == (longlong *)0x0)) ||
                             (lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar11 == 0))
                          goto LAB_140cdbf3d;
                          local_78 = *(code **)(lVar11 + 0x20);
                          plStack_70 = (longlong *)
                                       CONCAT62(plStack_70._2_6_,*(undefined2 *)(lVar11 + 0x28));
                          local_68 = *(undefined8 *)(lVar11 + 0x30);
                        }
                        iVar3 = FUN_1448618b0(local_b0,&local_78,uVar7);
                        param_1 = local_a8;
                        if (iVar3 == 0) {
                          iVar3 = (int)local_a8[1];
                          *(uint *)(local_a8 + 1) = iVar3 + 1U;
                          if (*(uint *)((longlong)local_a8 + 0xc) < iVar3 + 1U) {
                            FUN_1447d05f2(local_a8,iVar3);
                          }
                          *(longlong **)(*param_1 + (longlong)iVar3 * 8) = plVar6;
                        }
                      }
                      lVar15 = lVar15 + 8;
                    } while (lVar13 * 8 != lVar15);
                  }
                }
                plVar6 = local_90;
                if (local_90 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = local_90 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
                    (**(code **)*local_90)(local_90);
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
              plVar5 = plVar5 + 1;
            } while (plVar5 != local_b8);
          }
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_140cdbf04:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140cdc400 FUN_140cdc400 body=591 status=ok
// SIG undefined FUN_140cdc400(void)

void FUN_140cdc400(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  }
  if (DAT_14cb223d8 == 0) {
    local_60 = &local_28;
    local_28 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_147f29feb;
    local_70 = FUN_1464384fe;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb223d8);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14cb223d8 == 0) {
      local_60 = &local_28;
      local_28 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_147f29feb;
      local_70 = FUN_1464384fe;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb223d8);
    if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (lVar4 != 0) {
        local_48 = *(undefined8 *)(lVar4 + 0x20);
        uStack_40 = CONCAT62(uStack_40._2_6_,*(undefined2 *)(lVar4 + 0x28));
        local_38 = *(undefined8 *)(lVar4 + 0x30);
        goto LAB_140cdc4b1;
      }
    }
  }
  local_48 = 0;
  uStack_40 = 0xffff;
  local_38 = 0;
LAB_140cdc4b1:
  FUN_1448618b0(param_1 + 0x20,&local_48,uVar1);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cdc650 FUN_140cdc650 body=75 status=ok
// SIG undefined FUN_140cdc650(void)

void FUN_140cdc650(longlong param_1,int param_2)

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



// FUNCTION 140cdc69c FUN_140cdc69c body=714 status=ok
// SIG undefined FUN_140cdc69c(void)

longlong * FUN_140cdc69c(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = param_1 + 0xa8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_80 = param_2;
  local_60 = local_78;
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar16 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar13 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar16 = local_68 >> 0x20;
    iVar13 = *(int *)(param_1 + 0xc0);
  }
  lVar4 = local_60;
  plVar14 = local_80;
  iVar6 = (int)local_68;
  uVar9 = (uint)local_58;
  iVar5 = local_58._4_4_;
  iVar15 = local_50;
  iVar2 = iVar13;
  lVar12 = param_1;
  if (local_58._4_4_ != iVar13 || local_60 != local_78) {
    do {
      local_70 = lVar12;
      local_84 = iVar2;
      lVar12 = *(longlong *)(param_1 + 0x98);
      lVar10 = *(longlong *)(lVar12 + 0x10 + (longlong)iVar5 * 0x28);
      if (((((*(char *)(lVar10 + 0xf8) == '\x01') && (*(int *)(lVar10 + 0x110) != 0)) &&
           (uVar7 = *(uint *)(lVar10 + 0x10c), -1 < (int)uVar7)) &&
          (((int)uVar7 < DAT_14c9647dc &&
           (plVar8 = (longlong *)
                     ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0)))) &&
         (((int)plVar8[2] == *(int *)(lVar10 + 0x110) &&
          (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) {
        iVar2 = (int)plVar14[1];
        *(uint *)(plVar14 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar14 + 0xc) < iVar2 + 1U) {
          FUN_145795ace(plVar14,iVar2);
          plVar14 = local_80;
          iVar13 = local_84;
        }
        lVar12 = lVar12 + (longlong)iVar5 * 0x28;
        lVar10 = *plVar14;
        *(undefined8 *)(lVar10 + (longlong)iVar2 * 0x10) = *(undefined8 *)(lVar12 + 0x10);
        lVar12 = *(longlong *)(lVar12 + 0x18);
        *(longlong *)(lVar10 + 8 + (longlong)iVar2 * 0x10) = lVar12;
        param_1 = local_70;
        if (lVar12 != 0) {
          LOCK();
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
          UNLOCK();
        }
      }
      uVar9 = uVar9 & ~(uint)uVar16;
      lVar12 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar12 = lVar4;
      }
      iVar2 = *(int *)(lVar4 + 0x18);
      lVar10 = (longlong)iVar6;
      uVar7 = *(uint *)(lVar12 + lVar10 * 4) & uVar9;
      if (uVar7 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar3 = iVar5;
        if (iVar5 < iVar6) {
          iVar3 = iVar6;
        }
        iVar13 = local_84;
        if (iVar6 < iVar5) {
          lVar11 = 0;
          do {
            uVar7 = *(uint *)(lVar12 + lVar10 * 4 + 4 + lVar11 * 4);
            if (uVar7 != 0) {
              iVar6 = iVar6 + (int)lVar11 + 1;
              uVar9 = 0xffffffff;
              goto LAB_140cdc7e9;
            }
            iVar15 = iVar15 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar3 - lVar10 != lVar11);
          uVar9 = 0xffffffff;
          iVar6 = iVar3;
        }
        iVar6 = iVar6 + 1;
        plVar14 = local_80;
        iVar5 = iVar2;
      }
      else {
LAB_140cdc7e9:
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
      iVar2 = local_84;
      lVar12 = local_70;
    } while (iVar5 != iVar13 || lVar4 != local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar14;
}



// FUNCTION 140cdc968 FUN_140cdc968 body=125 status=ok
// SIG undefined FUN_140cdc968(void)

undefined8 FUN_140cdc968(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
    if (cVar1 != '\0') {
      FUN_140cdcab8(param_1);
      FUN_140cdc9e6(param_1 + 0x150,&local_28);
      uVar2 = CONCAT71((int7)(~*(ulonglong *)(param_2 + 0x40) >> 8),
                       (local_28 & ~*(ulonglong *)(param_2 + 0x40)) == 0);
      goto LAB_140cdc9c3;
    }
  }
  uVar2 = 0;
LAB_140cdc9c3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cdc9e6 FUN_140cdc9e6 body=210 status=ok
// SIG undefined FUN_140cdc9e6(void)

ulonglong * FUN_140cdc9e6(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  *param_2 = 0;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar7 = 0;
    uVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + lVar7);
      if (lVar5 != 0) {
        lVar4 = FUN_140528a88();
        if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30)) && (plVar2 = *(longlong **)(lVar1 + lVar7), plVar2 != (longlong *)0x0))
        {
          lVar5 = plVar2[0x22];
          if (lVar5 == 0) {
            (**(code **)(*plVar2 + 1000))(plVar2);
            lVar5 = plVar2[0x22];
          }
          if (*(char *)(lVar5 + 0x40) == '\0') {
            if ((ulonglong *)(lVar5 + 0x38) != (ulonglong *)&DAT_14c763a58) {
              *(longlong *)(lVar5 + 0x38) = DAT_14c763a58;
              *(undefined1 *)(lVar5 + 0x40) = 1;
            }
            DAT_14c763a58 = DAT_14c763a58 * 2;
          }
          uVar6 = uVar6 | *(ulonglong *)(lVar5 + 0x38);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
    *param_2 = uVar6;
  }
  return param_2;
}



// FUNCTION 140cdcab8 FUN_140cdcab8 body=283 status=ok
// SIG undefined FUN_140cdcab8(void)

void FUN_140cdcab8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((char)param_1[0x29] == '\x01') {
    *(undefined1 *)(param_1 + 0x29) = 0;
    plVar1 = param_1 + 0x2a;
    if (param_1[0x2a] != 0) {
      FUN_1400020a8();
    }
    *plVar1 = 0;
    param_1[0x2b] = 0;
    (**(code **)(*param_1 + 0x2a8))(param_1,plVar1);
    plVar2 = (longlong *)param_1[10];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar1);
    }
    lVar4 = param_1[0xe];
    if ((longlong)(int)lVar4 != 0) {
      lVar3 = param_1[0xd];
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar5);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,plVar1);
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)(int)lVar4 * 0x18 != lVar5);
    }
    lVar4 = param_1[0x10];
    if ((longlong)(int)lVar4 != 0) {
      lVar3 = param_1[0xf];
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar5);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2,plVar1);
          plVar2 = (longlong *)plVar2[1];
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x18))(plVar2,plVar1);
          }
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)(int)lVar4 * 0x18 != lVar5);
    }
    if ((longlong)(int)param_1[0x1c] != 0) {
      lVar4 = param_1[0x1b];
      lVar3 = (longlong)(int)param_1[0x1c] << 3;
      do {
        FUN_1410d48d6(plVar1,lVar4);
        lVar4 = lVar4 + 8;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 140cdcbdc FUN_140cdcbdc body=341 status=ok
// SIG undefined FUN_140cdcbdc(void)

undefined8 * FUN_140cdcbdc(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppvVar1 = (void **)(param_1 + 4);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b677870;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_40 = L"/Script/OakGame.GrenadeBehavior_Delivery";
  local_38 = 0x28;
  FUN_14475bf92(&local_68);
  _Src = local_58;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_68._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  if (ppvVar1 != &local_58) {
    iVar2 = (int)uStack_50;
    lVar3 = (longlong)(int)uStack_50;
    *(int *)(param_1 + 5) = (int)uStack_50;
    if ((int)uStack_50 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_50 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cdcd32 FUN_140cdcd32 body=72 status=ok
// SIG undefined FUN_140cdcd32(void)

undefined8 FUN_140cdcd32(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_11;
  local_11 = 0xf;
  FUN_140cdcd7c();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cdcd7c FUN_140cdcd7c body=257 status=ok
// SIG undefined FUN_140cdcd7c(void)

longlong FUN_140cdcd7c(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                      undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = (int)param_4[1] - 1;
    lVar4 = (longlong)*(int *)(param_1 + 0x18) << 4;
    do {
      if (((((char)param_4[2] == '\x01') || (0x1ffe < (uint)((ulonglong)*puVar5 >> 0x33))) &&
          (-1 < (int)uVar3)) && ((int)uVar3 < (int)param_4[1])) {
        uVar2 = (ulonglong)uVar3;
        uVar3 = uVar3 - 1;
        uVar2 = *(ulonglong *)(*param_4 + uVar2 * 8);
        uVar1 = uVar2 & 0xffffffff00000000;
      }
      else {
        uVar1 = 0;
        uVar2 = 0;
      }
      local_68 = param_5;
      FUN_147559c0e(puVar5,&local_58,param_3,uVar2 & 0xffffffff | uVar1);
      if (local_50 != '\x01') {
        *(undefined1 *)(param_2 + 8) = 0;
        goto LAB_140cdcdbc;
      }
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -0x10;
      param_3 = local_58;
    } while (lVar4 != 0);
  }
  FUN_1400a24f6(param_2,param_3,param_1);
  *(undefined1 *)(param_2 + 8) = 1;
LAB_140cdcdbc:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140cdce7e FUN_140cdce7e body=40 status=ok
// SIG undefined FUN_140cdce7e(void)

undefined8 FUN_140cdce7e(undefined8 param_1,int param_2)

{
  FUN_140cdcea6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cdcea6 FUN_140cdcea6 body=323 status=ok
// SIG undefined FUN_140cdcea6(void)

void FUN_140cdcea6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5553e0;
  param_1[5] = &PTR_FUN_14a555880;
  param_1[0x2d] = &PTR_FUN_14a5558c0;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_140e6585d(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3c],*(undefined4 *)(param_1 + 0x3d));
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 140cdcfea FUN_140cdcfea body=187 status=ok
// SIG undefined FUN_140cdcfea(void)

void FUN_140cdcfea(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a53a8e0;
  param_1[5] = &PTR_FUN_14a53abe0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x22];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x20];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140cdd0a6 FUN_140cdd0a6 body=67 status=ok
// SIG undefined FUN_140cdd0a6(void)

void FUN_140cdd0a6(longlong *param_1)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0xffffffff;
  (**(code **)(*param_1 + 0xc0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cdd0ea FUN_140cdd0ea body=326 status=ok
// SIG undefined FUN_140cdd0ea(void)

undefined8 FUN_140cdd0ea(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_3 = 0xffffffff;
  lVar4 = (**(code **)(*param_1 + 0x10))();
  if (lVar4 != 0) {
    if (param_2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
      FUN_1456cec3c(param_2);
    }
    local_28 = param_2;
    if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
      FUN_1456cec3c(param_2);
    }
    if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    iVar3 = FUN_140cdd232((longlong *)(lVar4 + 0x4f0),uVar2 >> 0x10 ^ uVar2,&local_28);
    if ((iVar3 != -1) && (lVar4 = (longlong)iVar3 * 0x18 + *(longlong *)(lVar4 + 0x4f0), lVar4 != 0)
       ) {
      uVar1 = *(undefined4 *)(lVar4 + 8);
      *param_3 = uVar1;
      uVar5 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      goto LAB_140cdd1b4;
    }
  }
  uVar5 = 0;
LAB_140cdd1b4:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cdd232 FUN_140cdd232 body=204 status=ok
// SIG undefined FUN_140cdd232(void)

int FUN_140cdd232(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 140cdd2fe FUN_140cdd2fe body=117 status=ok
// SIG undefined FUN_140cdd2fe(void)

undefined8 *
FUN_140cdd2fe(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_4 + 0x28))(param_4);
  if (cVar1 == '\0') {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xffffffff00000000;
    if (param_1 + 2 != &DAT_14cbf49e0) {
      FUN_14034a368(param_1 + 2,&DAT_14cbf49e0);
    }
  }
  else {
    FUN_140cdd37d(param_1,param_2,param_3,param_5);
  }
  return param_1;
}



// FUNCTION 140cdd37d FUN_140cdd37d body=767 status=ok
// SIG undefined FUN_140cdd37d(void)

undefined8 *
FUN_140cdd37d(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x110))(param_2,&local_58);
  if (local_58 == 0) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xffffffff00000000;
    if (param_1 == &DAT_14cbf49c0) goto LAB_140cdd544;
    puVar6 = &DAT_14cbf49d0;
  }
  else {
    iVar10 = *(int *)(param_4 + 1);
    puVar13 = &DAT_149dfb77a;
    if (iVar10 != 0) {
      puVar13 = (undefined2 *)*param_4;
    }
    lVar12 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar13 + lVar12);
      uVar9 = (uint)uVar3;
      uVar4 = *(ushort *)((longlong)L"default" + lVar12);
      uVar8 = (uint)uVar4;
      if (uVar3 != uVar4) {
        if ((uVar4 | uVar3) < 0x80) {
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_140cdd3fe;
        }
        iVar5 = uVar9 - uVar8;
        goto LAB_140cdd427;
      }
      if (uVar3 == 0) break;
LAB_140cdd3fe:
      lVar12 = lVar12 + 2;
    }
    iVar5 = 0;
LAB_140cdd427:
    lVar12 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar13 + lVar12);
      uVar8 = (uint)uVar3;
      uVar4 = *(ushort *)((longlong)L"onlinePlayers" + lVar12);
      uVar9 = (uint)uVar4;
      if (uVar3 != uVar4) {
        if ((uVar4 | uVar3) < 0x80) {
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_140cdd445;
        }
        iVar11 = uVar8 - uVar9;
        goto LAB_140cdd471;
      }
      if (uVar3 == 0) break;
LAB_140cdd445:
      lVar12 = lVar12 + 2;
    }
    iVar11 = 0;
LAB_140cdd471:
    lVar12 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar13 + lVar12);
      uVar9 = (uint)uVar3;
      uVar4 = *(ushort *)((longlong)L"inGamePlayers" + lVar12);
      uVar8 = (uint)uVar4;
      if (uVar3 != uVar4) {
        if ((uVar4 | uVar3) < 0x80) {
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_140cdd48e;
        }
        iVar7 = uVar9 - uVar8;
        goto LAB_140cdd4b7;
      }
      if (uVar3 == 0) break;
LAB_140cdd48e:
      lVar12 = lVar12 + 2;
    }
    iVar7 = 0;
LAB_140cdd4b7:
    lVar12 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar13 + lVar12);
      uVar8 = (uint)uVar3;
      uVar4 = *(ushort *)((longlong)L"inGameAndSessionPlayers" + lVar12);
      uVar9 = (uint)uVar4;
      if (uVar3 != uVar4) {
        if ((uVar4 | uVar3) < 0x80) {
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_140cdd4d6;
        }
        iVar14 = uVar8 - uVar9;
        goto LAB_140cdd503;
      }
      if (uVar3 == 0) break;
LAB_140cdd4d6:
      lVar12 = lVar12 + 2;
    }
    iVar14 = 0;
LAB_140cdd503:
    if (iVar10 == DAT_14cbf4a48) {
      bVar15 = true;
      if (1 < iVar10) {
        lVar12 = 0;
        while( true ) {
          uVar3 = *(ushort *)((longlong)*param_4 + lVar12);
          uVar8 = (uint)uVar3;
          uVar4 = *(ushort *)(DAT_14cbf4a40 + lVar12);
          uVar9 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_140cdd5ed;
            }
            iVar10 = uVar8 - uVar9;
            goto LAB_140cdd675;
          }
          if (uVar3 == 0) break;
LAB_140cdd5ed:
          lVar12 = lVar12 + 2;
        }
        iVar10 = 0;
LAB_140cdd675:
        bVar15 = iVar10 == 0;
      }
    }
    else {
      bVar15 = DAT_14cbf4a48 + iVar10 == 1;
    }
    if ((((iVar5 == 0) || (iVar11 == 0)) || (iVar7 == 0)) || ((iVar14 == 0 || (bVar15)))) {
      FUN_140cdd79c(param_1,param_2);
      goto LAB_140cdd544;
    }
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xffffffff00000000;
    if (param_1 == &DAT_14cbf4a10) goto LAB_140cdd544;
    puVar6 = &DAT_14cbf4a20;
  }
  FUN_14034a368(param_1 + 2,puVar6);
LAB_140cdd544:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140cdd67e FUN_140cdd67e body=257 status=ok
// SIG undefined FUN_140cdd67e(void)

undefined8 * FUN_140cdd67e(longlong param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x1c4)) {
    lVar3 = param_1 + 0x1c8;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1d0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1d8) - 1U & param_3) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 400) + (longlong)iVar4 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 400) + (longlong)iVar4 * 0x20) == param_3) {
          if ((lVar3 != 0) && ((undefined8 *)(lVar3 + 8) != (undefined8 *)0x0)) {
            plVar2 = *(longlong **)(lVar3 + 8);
            (**(code **)(*plVar2 + 8))(plVar2,&local_28);
            *param_2 = local_28;
            param_2[1] = local_20;
            if (local_20 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_20 + 1) = (int)local_20[1] + 1;
              UNLOCK();
              if (local_20 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_20 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
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
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140cdd79c FUN_140cdd79c body=305 status=ok
// SIG undefined FUN_140cdd79c(void)

longlong * FUN_140cdd79c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x100))(param_2,&local_38);
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
  if ((local_38 == 0) || (*(int *)(local_38 + 0x14) != 2)) {
    *param_1 = -1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = -0x100000000;
    if (param_1 + 2 != &DAT_14cbf49f0) {
      FUN_14034a368(param_1 + 2,&DAT_14cbf49f0);
    }
    if (local_30 == (longlong *)0x0) goto LAB_140cdd82b;
  }
  else {
    param_1[3] = -0x100000000;
    param_1[2] = 0;
    *param_1 = local_38;
    param_1[1] = (longlong)local_30;
    if (local_30 == (longlong *)0x0) goto LAB_140cdd82b;
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
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
LAB_140cdd82b:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140cdd8ce FUN_140cdd8ce body=420 status=ok
// SIG undefined FUN_140cdd8ce(void)

undefined8 * FUN_140cdd8ce(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_3 + 8) != 0) &&
      (plVar4 = *(longlong **)(param_3 + 0x10), plVar4 != (longlong *)0x0)) && (0 < (int)plVar4[1]))
  {
    iVar7 = (int)plVar4[1];
    do {
      iVar5 = iVar7;
      if (iVar5 == 0) {
        local_48 = (longlong *)0x0;
        plStack_40 = (longlong *)0x0;
        goto LAB_140cdd94b;
      }
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar9 = iVar5 == iVar7;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar5 + 1;
        iVar7 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    local_48 = *(longlong **)(param_3 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plStack_40 = plVar4;
LAB_140cdd94b:
    plVar4 = plStack_40;
    uVar6 = (**(code **)(*local_48 + 0x40))();
    iVar7 = FUN_140cdda76((longlong *)(param_1 + 0x1e0),uVar6,&local_48);
    plVar2 = plStack_40;
    if (iVar7 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x1e0);
    }
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (iVar5 != 0) {
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
    }
    if (lVar8 != 0) {
      *param_2 = *(undefined8 *)(lVar8 + 0x10);
      lVar8 = *(longlong *)(lVar8 + 0x18);
      param_2[1] = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 140cdda76 FUN_140cdda76 body=187 status=ok
// SIG undefined FUN_140cdda76(void)

int FUN_140cdda76(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = '\x01';
        if (puVar3 != (undefined8 *)*param_3) {
          cVar4 = (**(code **)*puVar3)();
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
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 140cddb32 FUN_140cddb32 body=37 status=ok
// SIG undefined FUN_140cddb32(void)

longlong FUN_140cddb32(longlong param_1)

{
  if (*(char *)(param_1 + 0x78) == '\0') {
    FUN_140cddb58(param_1);
  }
  return param_1 + 0x48;
}



// FUNCTION 140cddb58 FUN_140cddb58 body=279 status=ok
// SIG undefined FUN_140cddb58(void)

void FUN_140cddb58(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_140e26d80(param_1 + 0x48);
  }
  *(char *)(param_1 + 0x4c) = *(char *)(param_1 + 8);
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 4);
  }
  *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0xc);
  }
  *(char *)(param_1 + 0x59) = *(char *)(param_1 + 0x15);
  if (*(char *)(param_1 + 0x15) == '\x01') {
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_1 + 0x14);
  }
  *(char *)(param_1 + 0x5b) = *(char *)(param_1 + 0x17);
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_1 + 0x16);
  }
  *(char *)(param_1 + 0x5d) = *(char *)(param_1 + 0x19);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_1 + 0x18);
  }
  *(char *)(param_1 + 0x5f) = *(char *)(param_1 + 0x1b);
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    *(undefined1 *)(param_1 + 0x5e) = *(undefined1 *)(param_1 + 0x1a);
  }
  *(char *)(param_1 + 0x61) = *(char *)(param_1 + 0x1d);
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_1 + 0x1c);
  }
  if (*(int *)(param_1 + 0x20) == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  *(undefined8 *)(param_1 + 100) = uVar1;
  if (*(int *)(param_1 + 0x28) == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x6c) = uVar1;
  *(char *)(param_1 + 0x75) = *(char *)(param_1 + 0x31);
  if (*(char *)(param_1 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_1 + 0x30);
  }
  *(char *)(param_1 + 0x77) = *(char *)(param_1 + 0x33);
  if (*(char *)(param_1 + 0x33) == '\x01') {
    *(undefined1 *)(param_1 + 0x76) = *(undefined1 *)(param_1 + 0x32);
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x38;
    lVar3 = *(longlong *)(param_1 + 0x38) + 8;
    do {
      FUN_140cddc70(param_1 + 0x48,lVar3);
      lVar3 = lVar3 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 140cddc70 FUN_140cddc70 body=261 status=ok
// SIG undefined FUN_140cddc70(void)

void FUN_140cddc70(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_2 != param_1) && (*(char *)(param_2 + 1) != '\0')) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((*(char *)(param_2 + 3) == '\x01') && (param_2 != param_1)) {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = 1;
  }
  if ((*(char *)((longlong)param_2 + 0x11) == '\x01') && (param_2 != param_1)) {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  }
  if ((param_2 != param_1) && (*(char *)((longlong)param_2 + 0x13) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
    *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  }
  if ((param_2 != param_1) && (*(char *)((longlong)param_2 + 0x15) != '\0')) {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  }
  if ((param_2 != param_1) && (*(char *)((longlong)param_2 + 0x17) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x16);
    *(undefined1 *)((longlong)param_1 + 0x17) = 1;
  }
  if ((param_2 != param_1) && (*(char *)((longlong)param_2 + 0x19) != '\0')) {
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  }
  if ((param_2 != param_1) && (param_2[7] != -1)) {
    *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  }
  if ((param_2 != param_1) && (param_2[9] != -1)) {
    *(undefined8 *)(param_1 + 9) = *(undefined8 *)(param_2 + 9);
  }
  if ((param_2 != param_1) && (*(char *)((longlong)param_2 + 0x2d) != '\0')) {
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  }
  if ((param_2 != param_1) && (*(char *)((longlong)param_2 + 0x2f) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
    *(undefined1 *)((longlong)param_1 + 0x2f) = 1;
  }
  return;
}



// FUNCTION 140cddd76 FUN_140cddd76 body=1213 status=ok
// SIG undefined FUN_140cddd76(void)

void FUN_140cddd76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined1 local_140 [8];
  longlong local_138;
  longlong local_e0;
  undefined2 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  int local_b4;
  undefined2 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [48];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(char *)(param_1 + 0x39) != '\x01') || (*(longlong *)(param_1 + 0x40) != DAT_14c872be0)) {
    *(longlong *)(param_1 + 0x40) = DAT_14c872be0;
    *(undefined2 *)(param_1 + 0x38) = 0x100;
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      plVar14 = *(longlong **)(param_1 + 0x48);
      plVar15 = plVar14 + (longlong)*(int *)(param_1 + 0x50) * 0x18;
      do {
        plVar3 = plVar14 + 1;
        lVar9 = FUN_140372754(plVar3);
        if (lVar9 == 0) {
          cVar7 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar9 = DAT_14cb848c0;
          if (cVar7 == '\0') {
            if ((*(char *)(param_1 + 0x38) != '\x02') &&
               (((lVar9 = FUN_140cde26e(plVar3), lVar9 != 0 ||
                 ((lVar9 = FUN_14005ef80(plVar3), lVar9 != 0 &&
                  (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0)))) &&
                (bVar12 = 2, (*(byte *)(lVar9 + 0x368) & 0x40) != 0)))) {
LAB_140cdde4d:
              *(byte *)(param_1 + 0x38) = bVar12;
            }
          }
          else if (*(char *)(param_1 + 0x38) != '\x02') {
            if (DAT_14cb848c0 == 0) {
              bVar12 = 1;
            }
            else {
              FUN_140e45f8a(local_140,plVar14 + 8);
              lVar11 = local_138;
              if (local_138 == 0) {
                bVar12 = 1;
              }
              else {
                local_158 = (longlong *)0x0;
                uStack_150 = 1;
                bVar12 = 0;
                FUN_140cde564(&local_158,0);
                *local_158 = lVar9 + 0x420;
                local_158[1] = lVar11;
                uVar8 = (uint)uStack_150;
                if (0 < (int)(uint)uStack_150) {
                  do {
                    plVar3 = (longlong *)local_158[(ulonglong)uVar8 * 2 + -2];
                    lVar9 = local_158[(ulonglong)uVar8 * 2 + -1];
                    uStack_150 = CONCAT44(uStack_150._4_4_,uVar8 - 1);
                    lVar11 = *plVar3;
                    uVar8 = uVar8 - 1;
                    if (0 < *(int *)(lVar11 + 0x20)) {
                      local_178 = lVar9 + 8;
                      local_180 = lVar9 + 0x20;
                      lVar16 = 0;
                      do {
                        plVar13 = (longlong *)(lVar16 * 8 + *(longlong *)(lVar11 + 0x18));
                        if (lVar9 == 0) {
LAB_140cddf02:
                          plVar4 = (longlong *)*plVar13;
                          if ((longlong)(int)plVar4[2] == 0) {
                            if ((longlong *)*plVar4 == (longlong *)0x0) {
                              local_168 = 0;
                            }
                            else {
                              local_168 = *(longlong *)*plVar4;
                            }
                            lVar11 = FUN_140cde484(local_140,&local_168);
                            if (lVar11 == 0) {
                              if (*(undefined8 **)*plVar13 == (undefined8 *)0x0) {
                                local_170 = 0;
                              }
                              else {
                                local_170 = **(undefined8 **)*plVar13;
                              }
                              local_190 = lVar11;
                              FUN_145795b53(&local_168);
                              plVar4 = local_160;
                              lVar10 = local_168;
                              if (local_160 != (longlong *)0x0) {
                                LOCK();
                                plVar1 = local_160 + 1;
                                *(int *)plVar1 = (int)*plVar1 + -1;
                                UNLOCK();
                                if ((int)*plVar1 == 0) {
                                  local_188 = local_168;
                                  (**(code **)*local_160)(local_160);
                                  LOCK();
                                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                                  *piVar2 = *piVar2 + -1;
                                  UNLOCK();
                                  lVar10 = local_188;
                                  if (*piVar2 == 0) {
                                    (**(code **)(*plVar4 + 0x10))(plVar4);
                                    lVar10 = local_188;
                                  }
                                }
                              }
                              lVar11 = local_190;
                              if (lVar10 == 0) goto LAB_140cddeed;
                            }
                            uVar6 = uStack_150;
                            iVar5 = (uint)uStack_150;
                            uVar8 = (uint)uStack_150 + 1;
                            uStack_150 = CONCAT44(uStack_150._4_4_,uVar8);
                            if (uStack_150._4_4_ < uVar8) {
                              local_190 = lVar11;
                              FUN_140cde564(&local_158,uVar6 & 0xffffffff);
                              lVar11 = local_190;
                            }
                            local_158[(longlong)iVar5 * 2] = (longlong)plVar13;
                            local_158[(longlong)iVar5 * 2 + 1] = lVar11;
                          }
                          else {
                            lVar11 = 0;
                            do {
                              if ((*(byte *)(*(longlong *)(plVar4[1] + lVar11) + 0x368) & 0x40) != 0
                                 ) {
                                bVar12 = 2;
                                goto LAB_140cde0ba;
                              }
                              lVar11 = lVar11 + 8;
                            } while ((longlong)(int)plVar4[2] * 8 != lVar11);
                          }
                        }
                        else {
                          lVar10 = FUN_140c7c082(local_178);
                          lVar11 = lVar10 + 0x30;
                          if (lVar10 == 0) {
                            lVar11 = local_180;
                          }
                          cVar7 = FUN_140cde234(lVar11);
                          if (cVar7 != '\0') goto LAB_140cddf02;
                        }
LAB_140cddeed:
                        lVar16 = lVar16 + 1;
                        lVar11 = *plVar3;
                      } while (lVar16 < *(int *)(lVar11 + 0x20));
                      uVar8 = (uint)uStack_150;
                    }
                  } while (0 < (int)uVar8);
                  bVar12 = 0;
                }
LAB_140cde0ba:
                if (local_158 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
              FUN_140060f6a(local_90);
              local_b0 = &DAT_14a171d50;
              local_98 = 0;
              if (local_94 != 0) {
                FUN_140115c12(&local_a0,0);
              }
              local_a8 = 0;
              if (local_a0 != 0) {
                FUN_1400020a8();
              }
              local_d0 = &DAT_14a171d50;
              local_b8 = 0;
              if (local_b4 != 0) {
                FUN_140115c12(&local_c0,0);
              }
              local_c8 = 0;
              if (local_c0 != 0) {
                FUN_1400020a8();
              }
              if (local_e0 != 0) {
                FUN_1400020a8();
              }
            }
            goto LAB_140cdde4d;
          }
        }
        else {
          FUN_140cddd76(lVar9);
          bVar12 = *(byte *)(lVar9 + 0x38);
          if (*(byte *)(param_1 + 0x38) < bVar12) goto LAB_140cdde4d;
        }
        plVar14 = plVar14 + 0x18;
      } while (plVar14 != plVar15);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cde234 FUN_140cde234 body=57 status=ok
// SIG undefined FUN_140cde234(void)

undefined2 FUN_140cde234(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 8) != 0) && (lVar2 = *param_2, lVar2 != 0)) &&
     (*(longlong *)(param_1 + 8) == *(longlong *)(lVar2 + 0x10))) {
    uVar1 = *(ushort *)(lVar2 + 8);
    if ((int)(uint)(uVar1 >> 6) < *(int *)(param_1 + 0x18)) {
      return CONCAT11((char)(uVar1 >> 8),
                      (*(ulonglong *)
                        (*(longlong *)(param_1 + 0x10) + (ulonglong)(uint)(uVar1 >> 6) * 8) >>
                       ((ulonglong)uVar1 & 0x3f) & 1) != 0);
    }
  }
  return 0;
}



// FUNCTION 140cde26e FUN_140cde26e body=162 status=ok
// SIG undefined FUN_140cde26e(void)

longlong FUN_140cde26e(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && ((int)param_1[1] == 0x1010)) {
    lVar1 = param_1[2];
    if (lVar1 != 0) {
      if (*(char *)((longlong)param_1 + 0x19) == '\x01') goto LAB_140cde2b0;
      if (*(char *)((longlong)param_1 + 0x19) != '\0') goto LAB_140cde2ae;
    }
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_140cde312(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      param_1[2] = lVar1;
      *(undefined1 *)((longlong)param_1 + 0x19) = 1;
      goto LAB_140cde2b0;
    }
  }
LAB_140cde2ae:
  lVar1 = 0;
LAB_140cde2b0:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cde312 FUN_140cde312 body=369 status=ok
// SIG undefined FUN_140cde312(void)

longlong * FUN_140cde312(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  int local_20;
  ulonglong local_18;
  
  plVar4 = DAT_14cb848c0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[1] < 2) && (DAT_14cb848c0 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_14cb848c0 + 0x300))(DAT_14cb848c0);
    if (cVar1 == '\0') {
      lVar5 = FUN_1400e3c00(plVar4,param_1,1);
      if (lVar5 != 0) {
        plVar10 = *(longlong **)(lVar5 + 0x30);
LAB_140cde383:
        if (plVar10 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
          lVar6 = FUN_14042c486();
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
            plVar4 = (longlong *)0x0;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30) {
              plVar4 = plVar10;
            }
            goto LAB_140cde32f;
          }
        }
      }
    }
    else {
      if ((((*param_1 == 0) || (iVar2 = param_1[1], iVar2 == 0)) || (*param_1 == DAT_14c948000)) ||
         (iVar2 < 1)) {
        local_20 = DAT_14c948620;
        local_28 = DAT_14c948618;
      }
      else {
        puVar7 = (ulonglong *)(param_1 + 2);
        if (0 < param_1[9]) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        if (iVar2 != 1) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        local_20 = (int)puVar7[1];
        local_28 = *puVar7;
      }
      plVar4 = plVar4 + 0x3f;
      uVar9 = local_28 & 0xffffffff;
      if (local_20 != 0) {
        uVar3 = FUN_144a78877(uVar9,local_20);
        uVar9 = (ulonglong)uVar3;
      }
      iVar2 = FUN_1448467de(plVar4,uVar9,&local_28);
      if (iVar2 != -1) {
        lVar5 = *plVar4;
        plVar4 = (longlong *)0x0;
        if ((lVar5 + (longlong)iVar2 * 0x70 == 0) ||
           (puVar8 = (undefined8 *)(lVar5 + (longlong)iVar2 * 0x70 + 0x10),
           puVar8 == (undefined8 *)0x0)) goto LAB_140cde32f;
        plVar10 = (longlong *)*puVar8;
        goto LAB_140cde383;
      }
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140cde32f:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 140cde484 FUN_140cde484 body=223 status=ok
// SIG undefined FUN_140cde484(void)

longlong * FUN_140cde484(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar1 = param_1 + 0x16;
  if ((undefined8 *)param_1[0x1a] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x1a];
  }
  if ((longlong)*(int *)(param_1 + 0x1b) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x1b) << 3;
    do {
      if (*(longlong *)*puVar1 == *param_2) {
        if (puVar1 != (undefined8 *)0x0) {
          return (longlong *)*puVar1;
        }
        break;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_14097d9d4(*param_1);
  if ((longlong)*(int *)(puVar1 + 1) != 0) {
    plVar4 = (longlong *)*puVar1;
    lVar2 = (longlong)*(int *)(puVar1 + 1) * 0xe8;
    do {
      if (*plVar4 == *param_2) {
        if (plVar4 == (longlong *)0x0) {
          return (longlong *)0x0;
        }
        lVar2 = FUN_140c7c082(plVar4 + 1);
        plVar3 = plVar4 + 4;
        if (lVar2 != 0) {
          plVar3 = (longlong *)(lVar2 + 0x30);
        }
        if (plVar3[1] == 0) {
          return (longlong *)0x0;
        }
        if ((longlong)(int)plVar3[3] == 0) {
          return (longlong *)0x0;
        }
        lVar2 = 0;
        do {
          if (*(longlong *)(plVar3[2] + lVar2) != 0) {
            return plVar4;
          }
          lVar2 = lVar2 + 8;
        } while ((longlong)(int)plVar3[3] * 8 != lVar2);
        return (longlong *)0x0;
      }
      plVar4 = plVar4 + 0x1d;
      lVar2 = lVar2 + -0xe8;
    } while (lVar2 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 140cde564 FUN_140cde564 body=262 status=ok
// SIG undefined FUN_140cde564(void)

void FUN_140cde564(longlong param_1,int param_2)

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



// FUNCTION 140cde66a FUN_140cde66a body=3935 status=ok
// SIG undefined FUN_140cde66a(void)

void FUN_140cde66a(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_88 [32];
  int local_68;
  ulonglong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((int)*(uint *)(param_1 + 0x30) < 1) ||
     ((*(longlong *)(param_1 + 0x18) != 0 & *(byte *)(param_3 + 8)) != 0)) {
    plVar15 = (longlong *)(param_1 + 8);
    iVar3 = FUN_144a54ea4(param_2,1);
    lVar18 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar18 = param_2;
    }
    iVar2 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    puVar1 = (uint *)(lVar18 + (longlong)(iVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
    iVar3 = FUN_144a54ea4(param_2,1);
    lVar18 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar18 = param_2;
    }
    iVar2 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    puVar1 = (uint *)(lVar18 + (longlong)(iVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
    local_4c = (uint)*(ulonglong *)(param_1 + 0x18);
    uVar5 = (*(ulonglong *)(param_1 + 0x18) & 0xffffffff) * 2 + 1;
    uVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    uVar5 = uVar4 & 0xffffffff;
    if ((ushort)uVar4 < 2) {
      uVar5 = 1;
    }
    FUN_140cdf5ca(&local_4c,uVar5,param_2);
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      plVar15 = (longlong *)*plVar15;
    }
    if (local_4c != 0) {
      iVar3 = 0;
      uVar13 = 0;
      do {
        iVar2 = *(int *)(param_2 + 0x18);
        if (iVar2 == 0) {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar9 = iVar2 + -1;
          }
          iVar9 = iVar9 >> 5;
        }
        iVar14 = iVar2 + 7;
        iVar12 = iVar2 + 0x25;
        if (-1 < iVar2 + 6) {
          iVar12 = iVar2 + 6;
        }
        if (iVar12 >> 5 == iVar9) {
          *(int *)(param_2 + 0x18) = iVar14;
        }
        else {
          if (*(int *)(param_2 + 0x1c) < iVar14) {
            if (iVar2 + 0x26U < 0xa0) {
              iVar14 = 0x80;
              iVar9 = iVar2;
            }
            else {
              uVar17 = iVar2 + 0x26U >> 5;
              if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
                uVar10 = 4;
                if (4 < uVar17) {
                  uVar10 = uVar17;
                }
              }
              else {
                uVar10 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
              }
              uVar5 = FUN_144a3809e(uVar10 << 2,0);
              iVar9 = (int)(uVar5 >> 2);
              iVar14 = iVar9 << 5;
              if (iVar9 < (int)uVar17) {
                iVar14 = -0x20;
              }
              iVar9 = *(int *)(param_2 + 0x18);
            }
            *(int *)(param_2 + 0x1c) = iVar14;
            FUN_1446efbd8(param_2,iVar9);
            iVar14 = *(int *)(param_2 + 0x18) + 7;
          }
          iVar9 = iVar14 + 0x1f;
          if (-1 < iVar14) {
            iVar9 = iVar14;
          }
          *(int *)(param_2 + 0x18) = iVar14;
          if (iVar14 % 0x20 != 0) {
            lVar18 = *(longlong *)(param_2 + 0x10);
            if (*(longlong *)(param_2 + 0x10) == 0) {
              lVar18 = param_2;
            }
            bVar7 = -(char)(iVar14 % 0x20);
            *(uint *)(lVar18 + (longlong)(iVar9 >> 5) * 4) =
                 (uint)(*(int *)(lVar18 + (longlong)(iVar9 >> 5) * 4) << (bVar7 & 0x1f)) >>
                 (bVar7 & 0x1f);
          }
        }
        lVar18 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar18 = param_2;
        }
        local_68 = 7;
        FUN_14493566c(lVar18,iVar2,plVar15,iVar3);
        uVar13 = uVar13 + 1;
        iVar3 = iVar3 + 8;
      } while (uVar13 < local_4c);
    }
  }
  else if (((*(char *)(param_1 + 0x60) == '\0') && (*(uint *)(param_1 + 0x30) < 2)) &&
          (*(char *)(param_1 + 0x61) == '\0')) {
    lVar18 = *(longlong *)(param_1 + 0x28);
    uVar13 = *(uint *)(lVar18 + 0x18);
    uVar5 = (ulonglong)uVar13 * 2 + 1;
    uVar4 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    iVar3 = *(int *)(param_2 + 0x18);
    bVar7 = (byte)iVar3;
    local_4c = uVar13;
    if ((((0x42 - ((uint)uVar4 ^ 0x3f) & 0xffff) >> 2) * 5 & 0xffff) + uVar13 <
        (((uVar13 & 0xffff) + 3 >> 2) * 5 & 0xffff)) {
      if (iVar3 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar2 = iVar3 + -1;
        }
        iVar2 = iVar2 >> 5;
      }
      iVar9 = iVar3 + 1;
      iVar14 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar14 = iVar3;
      }
      if (iVar14 >> 5 == iVar2) {
        *(int *)(param_2 + 0x18) = iVar9;
      }
      else {
        if (*(int *)(param_2 + 0x1c) <= iVar3) {
          if (iVar3 + 0x20U < 0xa0) {
            iVar2 = 0x80;
          }
          else {
            uVar13 = iVar3 + 0x20U >> 5;
            if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
              uVar17 = 4;
              if (4 < uVar13) {
                uVar17 = uVar13;
              }
            }
            else {
              uVar17 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
            }
            uVar5 = FUN_144a3809e(uVar17 << 2,0);
            iVar3 = (int)(uVar5 >> 2);
            iVar2 = -0x20;
            if ((int)uVar13 <= iVar3) {
              iVar2 = iVar3 << 5;
            }
            iVar3 = *(int *)(param_2 + 0x18);
          }
          *(int *)(param_2 + 0x1c) = iVar2;
          FUN_1446efbd8(param_2,iVar3);
          iVar9 = *(int *)(param_2 + 0x18) + 1;
        }
        iVar3 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar3 = iVar9;
        }
        *(int *)(param_2 + 0x18) = iVar9;
        if (iVar9 % 0x20 != 0) {
          lVar16 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar16 = param_2;
          }
          bVar6 = -(char)(iVar9 % 0x20);
          *(uint *)(lVar16 + (longlong)(iVar3 >> 5) * 4) =
               (uint)(*(int *)(lVar16 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
               (bVar6 & 0x1f);
        }
      }
      lVar16 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar16 = param_2;
      }
      puVar1 = (uint *)(lVar16 + (longlong)(iVar14 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << (bVar7 & 0x1f);
      iVar3 = *(int *)(param_2 + 0x18);
      if (iVar3 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar2 = iVar3 + -1;
        }
        iVar2 = iVar2 >> 5;
      }
      iVar9 = iVar3 + 1;
      iVar14 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar14 = iVar3;
      }
      if (iVar14 >> 5 == iVar2) {
        *(int *)(param_2 + 0x18) = iVar9;
      }
      else {
        if (*(int *)(param_2 + 0x1c) <= iVar3) {
          if (iVar3 + 0x20U < 0xa0) {
            iVar9 = 0x80;
            iVar2 = iVar3;
          }
          else {
            uVar13 = iVar3 + 0x20U >> 5;
            if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
              uVar17 = 4;
              if (4 < uVar13) {
                uVar17 = uVar13;
              }
            }
            else {
              uVar17 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
            }
            uVar5 = FUN_144a3809e(uVar17 << 2,0);
            iVar2 = (int)(uVar5 >> 2);
            iVar9 = -0x20;
            if ((int)uVar13 <= iVar2) {
              iVar9 = iVar2 << 5;
            }
            iVar2 = *(int *)(param_2 + 0x18);
          }
          *(int *)(param_2 + 0x1c) = iVar9;
          FUN_1446efbd8(param_2,iVar2);
          iVar9 = *(int *)(param_2 + 0x18) + 1;
        }
        iVar2 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar2 = iVar9;
        }
        *(int *)(param_2 + 0x18) = iVar9;
        if (iVar9 % 0x20 != 0) {
          lVar16 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar16 = param_2;
          }
          bVar7 = -(char)(iVar9 % 0x20);
          *(uint *)(lVar16 + (longlong)(iVar2 >> 5) * 4) =
               (uint)(*(int *)(lVar16 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
               (bVar7 & 0x1f);
        }
      }
      lVar16 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar16 = param_2;
      }
      bVar7 = (byte)iVar3 & 0x1f;
      puVar1 = (uint *)(lVar16 + (longlong)(iVar14 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      FUN_140cdf5ca(&local_4c,uVar4 & 0xffffffff,param_2);
      iVar3 = *(int *)(lVar18 + 0x18);
      iVar2 = *(int *)(param_2 + 0x18);
      if (0 < iVar3) {
        if (iVar2 == 0) {
          iVar9 = -1;
        }
        else {
          iVar9 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar9 = iVar2 + -1;
          }
          iVar9 = iVar9 >> 5;
        }
        iVar14 = iVar2 + iVar3;
        iVar8 = iVar2 + iVar3 + -1;
        iVar12 = iVar2 + iVar3 + 0x1e;
        if (-1 < iVar8) {
          iVar12 = iVar8;
        }
        if (iVar12 >> 5 == iVar9) {
          *(int *)(param_2 + 0x18) = iVar14;
        }
        else {
          if (*(int *)(param_2 + 0x1c) < iVar14) {
            if (iVar14 + 0x1fU < 0xa0) {
              iVar14 = 0x80;
              iVar9 = iVar2;
            }
            else {
              uVar13 = iVar14 + 0x1fU >> 5;
              if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
                uVar17 = 4;
                if (4 < uVar13) {
                  uVar17 = uVar13;
                }
              }
              else {
                uVar17 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
              }
              uVar5 = FUN_144a3809e(uVar17 << 2,0);
              iVar9 = (int)(uVar5 >> 2);
              iVar14 = -0x20;
              if ((int)uVar13 <= iVar9) {
                iVar14 = iVar9 << 5;
              }
              iVar9 = *(int *)(param_2 + 0x18);
            }
            *(int *)(param_2 + 0x1c) = iVar14;
            FUN_1446efbd8(param_2,iVar9);
            iVar14 = *(int *)(param_2 + 0x18) + iVar3;
          }
          iVar9 = iVar14 + 0x1f;
          if (-1 < iVar14) {
            iVar9 = iVar14;
          }
          *(int *)(param_2 + 0x18) = iVar14;
          if (iVar14 % 0x20 != 0) {
            lVar16 = *(longlong *)(param_2 + 0x10);
            if (*(longlong *)(param_2 + 0x10) == 0) {
              lVar16 = param_2;
            }
            bVar7 = -(char)(iVar14 % 0x20);
            *(uint *)(lVar16 + (longlong)(iVar9 >> 5) * 4) =
                 (uint)(*(int *)(lVar16 + (longlong)(iVar9 >> 5) * 4) << (bVar7 & 0x1f)) >>
                 (bVar7 & 0x1f);
          }
        }
      }
      lVar16 = *(longlong *)(lVar18 + 0x10);
      if (*(longlong *)(lVar18 + 0x10) == 0) {
        lVar16 = lVar18;
      }
      lVar18 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar18 = param_2;
      }
      local_68 = iVar3;
      FUN_14493566c(lVar18,iVar2,lVar16,0);
    }
    else {
      if (iVar3 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar2 = iVar3 + -1;
        }
        iVar2 = iVar2 >> 5;
      }
      iVar9 = iVar3 + 1;
      iVar14 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar14 = iVar3;
      }
      if (iVar14 >> 5 == iVar2) {
        *(int *)(param_2 + 0x18) = iVar9;
      }
      else {
        if (*(int *)(param_2 + 0x1c) <= iVar3) {
          if (iVar3 + 0x20U < 0xa0) {
            iVar2 = 0x80;
          }
          else {
            uVar17 = iVar3 + 0x20U >> 5;
            if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
              uVar10 = 4;
              if (4 < uVar17) {
                uVar10 = uVar17;
              }
            }
            else {
              uVar10 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
            }
            uVar5 = FUN_144a3809e(uVar10 << 2,0);
            iVar3 = (int)(uVar5 >> 2);
            iVar2 = -0x20;
            if ((int)uVar17 <= iVar3) {
              iVar2 = iVar3 << 5;
            }
            iVar3 = *(int *)(param_2 + 0x18);
          }
          *(int *)(param_2 + 0x1c) = iVar2;
          FUN_1446efbd8(param_2,iVar3);
          iVar9 = *(int *)(param_2 + 0x18) + 1;
        }
        iVar3 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar3 = iVar9;
        }
        *(int *)(param_2 + 0x18) = iVar9;
        if (iVar9 % 0x20 != 0) {
          lVar16 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar16 = param_2;
          }
          bVar6 = -(char)(iVar9 % 0x20);
          *(uint *)(lVar16 + (longlong)(iVar3 >> 5) * 4) =
               (uint)(*(int *)(lVar16 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
               (bVar6 & 0x1f);
        }
      }
      lVar16 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar16 = param_2;
      }
      bVar7 = bVar7 & 0x1f;
      puVar1 = (uint *)(lVar16 + (longlong)(iVar14 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      iVar3 = *(int *)(param_2 + 0x18);
      if (iVar3 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar2 = iVar3 + -1;
        }
        iVar2 = iVar2 >> 5;
      }
      iVar9 = iVar3 + 1;
      iVar14 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar14 = iVar3;
      }
      if (iVar14 >> 5 == iVar2) {
        *(int *)(param_2 + 0x18) = iVar9;
      }
      else {
        if (*(int *)(param_2 + 0x1c) <= iVar3) {
          if (iVar3 + 0x20U < 0xa0) {
            iVar9 = 0x80;
            iVar2 = iVar3;
          }
          else {
            uVar17 = iVar3 + 0x20U >> 5;
            if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
              uVar10 = 4;
              if (4 < uVar17) {
                uVar10 = uVar17;
              }
            }
            else {
              uVar10 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
            }
            uVar5 = FUN_144a3809e(uVar10 << 2,0);
            iVar2 = (int)(uVar5 >> 2);
            iVar9 = -0x20;
            if ((int)uVar17 <= iVar2) {
              iVar9 = iVar2 << 5;
            }
            iVar2 = *(int *)(param_2 + 0x18);
          }
          *(int *)(param_2 + 0x1c) = iVar9;
          FUN_1446efbd8(param_2,iVar2);
          iVar9 = *(int *)(param_2 + 0x18) + 1;
        }
        iVar2 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar2 = iVar9;
        }
        *(int *)(param_2 + 0x18) = iVar9;
        if (iVar9 % 0x20 != 0) {
          lVar16 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar16 = param_2;
          }
          bVar7 = -(char)(iVar9 % 0x20);
          *(uint *)(lVar16 + (longlong)(iVar2 >> 5) * 4) =
               (uint)(*(int *)(lVar16 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
               (bVar7 & 0x1f);
        }
      }
      lVar16 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar16 = param_2;
      }
      bVar7 = (byte)iVar3 & 0x1f;
      puVar1 = (uint *)(lVar16 + (longlong)(iVar14 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      lVar16 = *(longlong *)(lVar18 + 0x10);
      if (*(longlong *)(lVar18 + 0x10) == 0) {
        lVar16 = lVar18;
      }
      FUN_140cdf5ca(lVar16,uVar13,param_2);
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x18);
    if (iVar3 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar2 = iVar3 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    iVar9 = iVar3 + 1;
    iVar14 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar14 = iVar3;
    }
    if (iVar14 >> 5 == iVar2) {
      *(int *)(param_2 + 0x18) = iVar9;
    }
    else {
      if (*(int *)(param_2 + 0x1c) <= iVar3) {
        if (iVar3 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar2 = iVar3;
        }
        else {
          uVar13 = iVar3 + 0x20U >> 5;
          if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar13) {
              uVar17 = uVar13;
            }
          }
          else {
            uVar17 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar17 << 2,0);
          iVar2 = (int)(uVar5 >> 2);
          iVar9 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar9 = iVar2 << 5;
          }
          iVar2 = *(int *)(param_2 + 0x18);
        }
        *(int *)(param_2 + 0x1c) = iVar9;
        FUN_1446efbd8(param_2,iVar2);
        iVar9 = *(int *)(param_2 + 0x18) + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_2 + 0x18) = iVar9;
      if (iVar9 % 0x20 != 0) {
        lVar18 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar18 = param_2;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)(lVar18 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar18 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar18 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar18 = param_2;
    }
    bVar7 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    iVar3 = *(int *)(param_2 + 0x18);
    if (iVar3 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar2 = iVar3 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    iVar9 = iVar3 + 1;
    iVar14 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar14 = iVar3;
    }
    if (iVar14 >> 5 == iVar2) {
      *(int *)(param_2 + 0x18) = iVar9;
    }
    else {
      if (*(int *)(param_2 + 0x1c) <= iVar3) {
        if (iVar3 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar2 = iVar3;
        }
        else {
          uVar13 = iVar3 + 0x20U >> 5;
          if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar13) {
              uVar17 = uVar13;
            }
          }
          else {
            uVar17 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar17 << 2,0);
          iVar2 = (int)(uVar5 >> 2);
          iVar9 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar9 = iVar2 << 5;
          }
          iVar2 = *(int *)(param_2 + 0x18);
        }
        *(int *)(param_2 + 0x1c) = iVar9;
        FUN_1446efbd8(param_2,iVar2);
        iVar9 = *(int *)(param_2 + 0x18) + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_2 + 0x18) = iVar9;
      if (iVar9 % 0x20 != 0) {
        lVar18 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar18 = param_2;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)(lVar18 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar18 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar18 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar18 = param_2;
    }
    uVar13 = 1 << ((byte)iVar3 & 0x1f);
    puVar1 = (uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 | uVar13;
    uVar5 = (ulonglong)*(int *)(param_1 + 0x30);
    if (uVar5 == 0) {
      local_4c = 0;
      FUN_140cdf5ca(&local_4c,CONCAT62((uint6)(ushort)(uVar13 >> 0x10),1),param_2);
      iVar3 = FUN_144a54ea4(param_2,1);
      lVar18 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar18 = param_2;
      }
      iVar2 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      bVar7 = (byte)iVar3 & 0x1f;
      puVar1 = (uint *)(lVar18 + (longlong)(iVar2 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    }
    else {
      lVar18 = *(longlong *)(param_1 + 0x28);
      lVar16 = uVar5 << 5;
      do {
        lVar11 = *(longlong *)(lVar18 + 0x10);
        if (*(longlong *)(lVar18 + 0x10) == 0) {
          lVar11 = lVar18;
        }
        FUN_140cdf5ca(lVar11,*(undefined2 *)(lVar18 + 0x18),param_2);
        uVar13 = *(uint *)(param_2 + 0x18);
        if (uVar13 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = uVar13 + 0x1e;
          if (-1 < (int)(uVar13 - 1)) {
            iVar3 = uVar13 - 1;
          }
          iVar3 = iVar3 >> 5;
        }
        uVar17 = uVar13 + 0x1f;
        if (-1 < (int)uVar13) {
          uVar17 = uVar13;
        }
        iVar2 = uVar13 + 1;
        iVar9 = (int)uVar17 >> 5;
        if (iVar9 == iVar3) {
          *(int *)(param_2 + 0x18) = iVar2;
        }
        else {
          if (*(int *)(param_2 + 0x1c) <= (int)uVar13) {
            if (uVar13 + 0x20 < 0xa0) {
              iVar3 = 0x80;
              uVar17 = uVar13;
            }
            else {
              uVar17 = uVar13 + 0x20 >> 5;
              local_58 = (ulonglong)uVar17;
              if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
                uVar10 = 4;
                if (4 < uVar17) {
                  uVar10 = uVar17;
                }
              }
              else {
                uVar10 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
              }
              uVar4 = FUN_144a3809e(uVar10 << 2,0);
              iVar2 = (int)(uVar4 >> 2);
              iVar3 = -0x20;
              if ((int)local_58 <= iVar2) {
                iVar3 = iVar2 << 5;
              }
              uVar17 = *(uint *)(param_2 + 0x18);
            }
            *(int *)(param_2 + 0x1c) = iVar3;
            FUN_1446efbd8(param_2,uVar17);
            iVar2 = *(int *)(param_2 + 0x18) + 1;
          }
          iVar3 = iVar2 + 0x1f;
          if (-1 < iVar2) {
            iVar3 = iVar2;
          }
          *(int *)(param_2 + 0x18) = iVar2;
          if (iVar2 % 0x20 != 0) {
            lVar11 = *(longlong *)(param_2 + 0x10);
            if (*(longlong *)(param_2 + 0x10) == 0) {
              lVar11 = param_2;
            }
            bVar7 = -(char)(iVar2 % 0x20);
            *(uint *)(lVar11 + (longlong)(iVar3 >> 5) * 4) =
                 (uint)(*(int *)(lVar11 + (longlong)(iVar3 >> 5) * 4) << (bVar7 & 0x1f)) >>
                 (bVar7 & 0x1f);
          }
        }
        lVar11 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar11 = param_2;
        }
        *(uint *)(lVar11 + (longlong)iVar9 * 4) =
             (uint)(1 < (int)uVar5) << ((byte)uVar13 & 0x1f) |
             *(uint *)(lVar11 + (longlong)iVar9 * 4) & ~(1 << (uVar13 & 0x1f));
        lVar18 = lVar18 + 0x20;
        uVar5 = (ulonglong)((int)uVar5 - 1);
        lVar16 = lVar16 + -0x20;
      } while (lVar16 != 0);
    }
    iVar3 = *(int *)(param_2 + 0x18);
    if (iVar3 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar2 = iVar3 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    bVar7 = *(byte *)(param_1 + 0x60);
    iVar14 = iVar3 + 1;
    iVar9 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar9 = iVar3;
    }
    iVar9 = iVar9 >> 5;
    uVar13 = iVar3 % 0x20;
    if (iVar9 == iVar2) {
      *(int *)(param_2 + 0x18) = iVar14;
    }
    else {
      if (*(int *)(param_2 + 0x1c) <= iVar3) {
        if (iVar3 + 0x20U < 0xa0) {
          iVar2 = 0x80;
        }
        else {
          uVar17 = iVar3 + 0x20U >> 5;
          if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar17) {
              uVar10 = uVar17;
            }
          }
          else {
            uVar10 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar10 << 2,0);
          iVar3 = (int)(uVar5 >> 2);
          iVar2 = -0x20;
          if ((int)uVar17 <= iVar3) {
            iVar2 = iVar3 << 5;
          }
          iVar3 = *(int *)(param_2 + 0x18);
        }
        *(int *)(param_2 + 0x1c) = iVar2;
        FUN_1446efbd8(param_2,iVar3);
        iVar14 = *(int *)(param_2 + 0x18) + 1;
      }
      iVar3 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar3 = iVar14;
      }
      *(int *)(param_2 + 0x18) = iVar14;
      if (iVar14 % 0x20 != 0) {
        lVar18 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar18 = param_2;
        }
        bVar6 = -(char)(iVar14 % 0x20);
        *(uint *)(lVar18 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)(lVar18 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar18 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar18 = param_2;
    }
    *(uint *)(lVar18 + (longlong)iVar9 * 4) =
         (uint)bVar7 << ((byte)uVar13 & 0x1f) |
         *(uint *)(lVar18 + (longlong)iVar9 * 4) & ~(1 << (uVar13 & 0x1f));
    iVar3 = *(int *)(param_2 + 0x18);
    if (iVar3 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar2 = iVar3 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    bVar7 = *(byte *)(param_1 + 0x61);
    iVar14 = iVar3 + 1;
    iVar9 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar9 = iVar3;
    }
    iVar9 = iVar9 >> 5;
    uVar13 = iVar3 % 0x20;
    if (iVar9 == iVar2) {
      *(int *)(param_2 + 0x18) = iVar14;
    }
    else {
      if (*(int *)(param_2 + 0x1c) <= iVar3) {
        if (iVar3 + 0x20U < 0xa0) {
          iVar2 = 0x80;
        }
        else {
          uVar17 = iVar3 + 0x20U >> 5;
          if (*(int *)(param_2 + 0x1c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar17) {
              uVar10 = uVar17;
            }
          }
          else {
            uVar10 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar10 << 2,0);
          iVar3 = (int)(uVar5 >> 2);
          iVar2 = -0x20;
          if ((int)uVar17 <= iVar3) {
            iVar2 = iVar3 << 5;
          }
          iVar3 = *(int *)(param_2 + 0x18);
        }
        *(int *)(param_2 + 0x1c) = iVar2;
        FUN_1446efbd8(param_2,iVar3);
        iVar14 = *(int *)(param_2 + 0x18) + 1;
      }
      iVar3 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar3 = iVar14;
      }
      *(int *)(param_2 + 0x18) = iVar14;
      if (iVar14 % 0x20 != 0) {
        lVar18 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar18 = param_2;
        }
        bVar6 = -(char)(iVar14 % 0x20);
        *(uint *)(lVar18 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)(lVar18 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar18 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar18 = param_2;
    }
    *(uint *)(lVar18 + (longlong)iVar9 * 4) =
         (uint)bVar7 << ((byte)uVar13 & 0x1f) |
         *(uint *)(lVar18 + (longlong)iVar9 * 4) & ~(1 << (uVar13 & 0x1f));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cdf5ca FUN_140cdf5ca body=1686 status=ok
// SIG undefined FUN_140cdf5ca(void)

void FUN_140cdf5ca(undefined8 param_1,ushort param_2,longlong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar11 = 0;
  uVar12 = 0;
  if (param_2 < 4) {
    if (param_2 == 0) {
LAB_140cdf825:
      iVar2 = *(int *)(param_3 + 0x18);
      if (iVar2 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar3 = iVar2 + -1;
        }
        iVar3 = iVar3 >> 5;
      }
      iVar4 = iVar2 + 1;
      iVar13 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar13 = iVar2;
      }
      if (iVar13 >> 5 == iVar3) {
        *(int *)(param_3 + 0x18) = iVar4;
      }
      else {
        if (*(int *)(param_3 + 0x1c) <= iVar2) {
          if (iVar2 + 0x20U < 0xa0) {
            iVar4 = 0x80;
            iVar3 = iVar2;
          }
          else {
            uVar11 = iVar2 + 0x20U >> 5;
            if (*(int *)(param_3 + 0x1c) + 0x1fU < 0xa0) {
              uVar12 = 4;
              if (4 < uVar11) {
                uVar12 = uVar11;
              }
            }
            else {
              uVar12 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
            }
            uVar6 = FUN_144a3809e(uVar12 << 2,0);
            iVar3 = (int)(uVar6 >> 2);
            iVar4 = -0x20;
            if ((int)uVar11 <= iVar3) {
              iVar4 = iVar3 << 5;
            }
            iVar3 = *(int *)(param_3 + 0x18);
          }
          *(int *)(param_3 + 0x1c) = iVar4;
          FUN_1446efbd8(param_3,iVar3);
          iVar4 = *(int *)(param_3 + 0x18) + 1;
        }
        iVar3 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar3 = iVar4;
        }
        *(int *)(param_3 + 0x18) = iVar4;
        if (iVar4 % 0x20 != 0) {
          lVar5 = *(longlong *)(param_3 + 0x10);
          if (*(longlong *)(param_3 + 0x10) == 0) {
            lVar5 = param_3;
          }
          bVar10 = -(char)(iVar4 % 0x20);
          *(uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4) =
               (uint)(*(int *)(lVar5 + (longlong)(iVar3 >> 5) * 4) << (bVar10 & 0x1f)) >>
               (bVar10 & 0x1f);
        }
      }
      lVar5 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar5 = param_3;
      }
      bVar10 = (byte)iVar2 & 0x1f;
      puVar1 = (uint *)(lVar5 + (longlong)(iVar13 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
      goto LAB_140cdf7f6;
    }
  }
  else {
    do {
      iVar2 = *(int *)(param_3 + 0x18);
      if (iVar2 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar3 = iVar2 + -1;
        }
        iVar3 = iVar3 >> 5;
      }
      iVar4 = iVar2 + 4;
      iVar13 = iVar2 + 0x22;
      if (-1 < iVar2 + 3) {
        iVar13 = iVar2 + 3;
      }
      if (iVar13 >> 5 == iVar3) {
        *(int *)(param_3 + 0x18) = iVar4;
      }
      else {
        if (*(int *)(param_3 + 0x1c) < iVar4) {
          if (iVar2 + 0x23U < 0xa0) {
            iVar4 = 0x80;
            iVar3 = iVar2;
          }
          else {
            uVar12 = iVar2 + 0x23U >> 5;
            if (*(int *)(param_3 + 0x1c) + 0x1fU < 0xa0) {
              uVar14 = 4;
              if (4 < uVar12) {
                uVar14 = uVar12;
              }
            }
            else {
              uVar14 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
            }
            uVar6 = FUN_144a3809e(uVar14 << 2,0);
            iVar3 = (int)(uVar6 >> 2);
            iVar4 = -0x20;
            if ((int)uVar12 <= iVar3) {
              iVar4 = iVar3 << 5;
            }
            iVar3 = *(int *)(param_3 + 0x18);
          }
          *(int *)(param_3 + 0x1c) = iVar4;
          FUN_1446efbd8(param_3,iVar3);
          iVar4 = *(int *)(param_3 + 0x18) + 4;
        }
        iVar3 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar3 = iVar4;
        }
        *(int *)(param_3 + 0x18) = iVar4;
        if (iVar4 % 0x20 != 0) {
          lVar5 = *(longlong *)(param_3 + 0x10);
          if (*(longlong *)(param_3 + 0x10) == 0) {
            lVar5 = param_3;
          }
          bVar10 = -(char)(iVar4 % 0x20);
          *(uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4) =
               (uint)(*(int *)(lVar5 + (longlong)(iVar3 >> 5) * 4) << (bVar10 & 0x1f)) >>
               (bVar10 & 0x1f);
        }
      }
      lVar5 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar5 = param_3;
      }
      local_58 = 4;
      FUN_14493566c(lVar5,iVar2,param_1,uVar11);
      if (param_2 == 4) goto LAB_140cdf825;
      iVar2 = *(int *)(param_3 + 0x18);
      if (iVar2 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar3 = iVar2 + -1;
        }
        iVar3 = iVar3 >> 5;
      }
      iVar4 = iVar2 + 1;
      iVar13 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar13 = iVar2;
      }
      if (iVar13 >> 5 == iVar3) {
        *(int *)(param_3 + 0x18) = iVar4;
      }
      else {
        if (*(int *)(param_3 + 0x1c) <= iVar2) {
          if (iVar2 + 0x20U < 0xa0) {
            iVar4 = 0x80;
            iVar3 = iVar2;
          }
          else {
            uVar12 = iVar2 + 0x20U >> 5;
            if (*(int *)(param_3 + 0x1c) + 0x1fU < 0xa0) {
              uVar14 = 4;
              if (4 < uVar12) {
                uVar14 = uVar12;
              }
            }
            else {
              uVar14 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
            }
            uVar6 = FUN_144a3809e(uVar14 << 2,0);
            iVar3 = (int)(uVar6 >> 2);
            iVar4 = -0x20;
            if ((int)uVar12 <= iVar3) {
              iVar4 = iVar3 << 5;
            }
            iVar3 = *(int *)(param_3 + 0x18);
          }
          *(int *)(param_3 + 0x1c) = iVar4;
          FUN_1446efbd8(param_3,iVar3);
          iVar4 = *(int *)(param_3 + 0x18) + 1;
        }
        iVar3 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar3 = iVar4;
        }
        *(int *)(param_3 + 0x18) = iVar4;
        if (iVar4 % 0x20 != 0) {
          lVar5 = *(longlong *)(param_3 + 0x10);
          if (*(longlong *)(param_3 + 0x10) == 0) {
            lVar5 = param_3;
          }
          bVar10 = -(char)(iVar4 % 0x20);
          *(uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4) =
               (uint)(*(int *)(lVar5 + (longlong)(iVar3 >> 5) * 4) << (bVar10 & 0x1f)) >>
               (bVar10 & 0x1f);
        }
      }
      param_2 = param_2 - 4;
      lVar5 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar5 = param_3;
      }
      puVar1 = (uint *)(lVar5 + (longlong)(iVar13 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
      uVar11 = uVar11 + 4;
    } while (3 < param_2);
    uVar12 = uVar11 & 0xfffc;
  }
  uVar11 = (uint)param_2;
  iVar2 = *(int *)(param_3 + 0x18);
  if (iVar2 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar3 = iVar2 + -1;
    }
    iVar3 = iVar3 >> 5;
  }
  iVar4 = iVar2 + uVar11;
  iVar7 = iVar2 + uVar11 + -1;
  iVar13 = iVar2 + uVar11 + 0x1e;
  if (-1 < iVar7) {
    iVar13 = iVar7;
  }
  if (iVar13 >> 5 == iVar3) {
    *(int *)(param_3 + 0x18) = iVar4;
  }
  else {
    if (*(int *)(param_3 + 0x1c) < iVar4) {
      if (iVar4 + 0x1fU < 0xa0) {
        iVar4 = 0x80;
        iVar3 = iVar2;
      }
      else {
        uVar14 = iVar4 + 0x1fU >> 5;
        if (*(int *)(param_3 + 0x1c) + 0x1fU < 0xa0) {
          uVar9 = 4;
          if (4 < uVar14) {
            uVar9 = uVar14;
          }
        }
        else {
          uVar9 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
        }
        uVar6 = FUN_144a3809e(uVar9 << 2,0);
        iVar3 = (int)(uVar6 >> 2);
        iVar4 = -0x20;
        if ((int)uVar14 <= iVar3) {
          iVar4 = iVar3 << 5;
        }
        iVar3 = *(int *)(param_3 + 0x18);
      }
      *(int *)(param_3 + 0x1c) = iVar4;
      FUN_1446efbd8(param_3,iVar3);
      iVar4 = *(int *)(param_3 + 0x18) + uVar11;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    *(int *)(param_3 + 0x18) = iVar4;
    if (iVar4 % 0x20 != 0) {
      lVar5 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar5 = param_3;
      }
      bVar10 = -(char)(iVar4 % 0x20);
      *(uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)(lVar5 + (longlong)(iVar3 >> 5) * 4) << (bVar10 & 0x1f)) >>
           (bVar10 & 0x1f);
    }
  }
  lVar5 = *(longlong *)(param_3 + 0x10);
  if (*(longlong *)(param_3 + 0x10) == 0) {
    lVar5 = param_3;
  }
  local_58 = uVar11;
  FUN_14493566c(lVar5,iVar2,param_1,uVar12);
  local_44 = 0;
  iVar3 = 5 - uVar11;
  iVar2 = *(int *)(param_3 + 0x18);
  if (iVar2 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar4 = iVar2 + -1;
    }
    iVar4 = iVar4 >> 5;
  }
  iVar13 = iVar2 + iVar3;
  iVar8 = iVar2 + iVar3 + -1;
  iVar7 = iVar2 + iVar3 + 0x1e;
  if (-1 < iVar8) {
    iVar7 = iVar8;
  }
  if (iVar7 >> 5 == iVar4) {
    *(int *)(param_3 + 0x18) = iVar13;
  }
  else {
    if (*(int *)(param_3 + 0x1c) < iVar13) {
      if (iVar13 + 0x1fU < 0xa0) {
        iVar13 = 0x80;
        iVar4 = iVar2;
      }
      else {
        uVar11 = iVar13 + 0x1fU >> 5;
        if (*(int *)(param_3 + 0x1c) + 0x1fU < 0xa0) {
          uVar12 = 4;
          if (4 < uVar11) {
            uVar12 = uVar11;
          }
        }
        else {
          uVar12 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
        }
        uVar6 = FUN_144a3809e(uVar12 << 2,0);
        iVar4 = (int)(uVar6 >> 2);
        iVar13 = -0x20;
        if ((int)uVar11 <= iVar4) {
          iVar13 = iVar4 << 5;
        }
        iVar4 = *(int *)(param_3 + 0x18);
      }
      *(int *)(param_3 + 0x1c) = iVar13;
      FUN_1446efbd8(param_3,iVar4);
      iVar13 = *(int *)(param_3 + 0x18) + iVar3;
    }
    iVar4 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar4 = iVar13;
    }
    *(int *)(param_3 + 0x18) = iVar13;
    if (iVar13 % 0x20 != 0) {
      lVar5 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar5 = param_3;
      }
      bVar10 = -(char)(iVar13 % 0x20);
      *(uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4) =
           (uint)(*(int *)(lVar5 + (longlong)(iVar4 >> 5) * 4) << (bVar10 & 0x1f)) >>
           (bVar10 & 0x1f);
    }
  }
  lVar5 = *(longlong *)(param_3 + 0x10);
  if (*(longlong *)(param_3 + 0x10) == 0) {
    lVar5 = param_3;
  }
  local_58 = iVar3;
  FUN_14493566c(lVar5,iVar2,&local_44,0);
LAB_140cdf7f6:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cdfc70 FUN_140cdfc70 body=90 status=ok
// SIG undefined FUN_140cdfc70(void)

undefined8 * FUN_140cdfc70(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b24c860;
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
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140cdfcd0 FUN_140cdfcd0 body=57 status=ok
// SIG undefined FUN_140cdfcd0(void)

void FUN_140cdfcd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4218 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4218 = FUN_140002ddd(FUN_141739bc3,uVar1,L"DataTableValueHandle");
  }
  return;
}



// FUNCTION 140cdfd0a FUN_140cdfd0a body=362 status=ok
// SIG undefined FUN_140cdfd0a(void)

void FUN_140cdfd0a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  int local_80 [2];
  undefined4 local_78;
  int local_74 [2];
  undefined4 local_6c;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1401b2056();
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1447210f0(param_1);
    if ((lVar1 != 0) && (DAT_14cb84f20 != 0)) {
      FUN_1405f0c40(DAT_14cb84f20,local_58,*(undefined8 *)(lVar1 + 0x18));
      FUN_1401533ba(local_74,local_58,1);
      if (local_74[0] != 0) {
        FUN_1406f1bc8(param_1 + 0x400,local_58);
        FUN_140cdff3b(local_68,local_58);
        FUN_1401533ba(local_80,local_68,1);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        if ((local_80[0] != 0) && (DAT_14cb84f20 != 0)) {
          local_50 = local_78;
          local_60 = local_6c;
          lVar1 = FUN_140cdfe8a();
          if (lVar1 != 0) {
            FUN_1405dc634(param_1 + 0x3a0,lVar1 + 0x50);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cdfe8a FUN_140cdfe8a body=176 status=ok
// SIG undefined FUN_140cdfe8a(void)

longlong * FUN_140cdfe8a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1401ad114();
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_14050b224(param_1,&local_40,&local_30,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_1401ad114();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar5 = plVar2;
      }
      goto LAB_140cdff18;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_140cdff18:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


