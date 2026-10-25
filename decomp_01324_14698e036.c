// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14698e036 FUN_14698e036 body=251 status=ok
// SIG undefined FUN_14698e036(void)

void FUN_14698e036(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698e132;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698e13a FUN_14698e13a body=141 status=ok
// SIG undefined FUN_14698e13a(void)

void FUN_14698e13a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  bVar2 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar2 != 0) {
    lVar6 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar7 = 0;
    do {
      lVar1 = (ulonglong)bVar2 * (longlong)param_2 + lVar7;
      uVar4 = (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x38) + 1);
      uVar5 = lVar1 % (longlong)uVar4;
      bVar3 = ~(byte)uVar5 & 7;
      *(char *)(**(longlong **)(param_1 + 0x10) + lVar6) =
           -(char)(((uint)*(byte *)((uVar5 >> 3 & 0x1fffffff) +
                                   (lVar1 / (longlong)uVar4 & 0xffffffffU) *
                                   **(longlong **)(param_1 + 0x38) + **(longlong **)(param_1 + 0x18)
                                   ) & 1 << bVar3) >> bVar3);
      lVar6 = lVar6 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698e1d8 FUN_14698e1d8 body=29 status=ok
// SIG undefined FUN_14698e1d8(void)

void FUN_14698e1d8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698e1f6 FUN_14698e1f6 body=52 status=ok
// SIG undefined FUN_14698e1f6(void)

undefined8 * FUN_14698e1f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6920;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698e22a FUN_14698e22a body=127 status=ok
// SIG undefined FUN_14698e22a(void)

undefined8 FUN_14698e22a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698e036(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698e2d4 FUN_14698e2d4 body=29 status=ok
// SIG undefined FUN_14698e2d4(void)

void FUN_14698e2d4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698e2f2 FUN_14698e2f2 body=52 status=ok
// SIG undefined FUN_14698e2f2(void)

undefined8 * FUN_14698e2f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6940;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698e326 FUN_14698e326 body=125 status=ok
// SIG undefined FUN_14698e326(void)

undefined8 FUN_14698e326(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698e3a4(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698e3a4 FUN_14698e3a4 body=277 status=ok
// SIG undefined FUN_14698e3a4(void)

void FUN_14698e3a4(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698e4ba;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698e4c2 FUN_14698e4c2 body=139 status=ok
// SIG undefined FUN_14698e4c2(void)

void FUN_14698e4c2(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_14698e54e(param_1[7],param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,
                    param_1[2],lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698e54e FUN_14698e54e body=110 status=ok
// SIG undefined FUN_14698e54e(void)

void FUN_14698e54e(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  ulonglong param_5)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_3 % (longlong)(ulonglong)*(uint *)(param_1 + 1);
  bVar2 = ~(byte)uVar4 & 7;
  cVar1 = -(char)(((uint)*(byte *)((uVar4 >> 3 & 0x1fffffff) +
                                  (param_3 / (longlong)(ulonglong)*(uint *)(param_1 + 1) &
                                  0xffffffffU) * *param_1 + *param_2) & 1 << bVar2) >> bVar2);
  lVar3 = *param_4;
  if ((param_5 & 0x8000000000000001) != 1) {
    *(char *)(lVar3 + param_5) = cVar1;
    cVar1 = *(char *)(*param_4 + param_5);
    *(char *)(*param_4 + 1 + param_5) = cVar1;
    lVar3 = *param_4;
  }
  *(char *)(lVar3 + 2 + param_5) = cVar1;
  return;
}



// FUNCTION 14698e5cc FUN_14698e5cc body=29 status=ok
// SIG undefined FUN_14698e5cc(void)

void FUN_14698e5cc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698e5ea FUN_14698e5ea body=52 status=ok
// SIG undefined FUN_14698e5ea(void)

undefined8 * FUN_14698e5ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6960;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698e61e FUN_14698e61e body=125 status=ok
// SIG undefined FUN_14698e61e(void)

undefined8 FUN_14698e61e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698e69c(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698e69c FUN_14698e69c body=251 status=ok
// SIG undefined FUN_14698e69c(void)

void FUN_14698e69c(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698e798;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698e7a0 FUN_14698e7a0 body=105 status=ok
// SIG undefined FUN_14698e7a0(void)

void FUN_14698e7a0(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_14698e54e(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18),
                    (ulonglong)bVar1 * (longlong)param_2 + lVar3,*(undefined8 *)(param_1 + 0x10),
                    lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698e81a FUN_14698e81a body=29 status=ok
// SIG undefined FUN_14698e81a(void)

void FUN_14698e81a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698e838 FUN_14698e838 body=52 status=ok
// SIG undefined FUN_14698e838(void)

undefined8 * FUN_14698e838(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6980;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698e86c FUN_14698e86c body=127 status=ok
// SIG undefined FUN_14698e86c(void)

undefined8 FUN_14698e86c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698e69c(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698e8fc FUN_14698e8fc body=29 status=ok
// SIG undefined FUN_14698e8fc(void)

void FUN_14698e8fc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698e91a FUN_14698e91a body=52 status=ok
// SIG undefined FUN_14698e91a(void)

undefined8 * FUN_14698e91a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef69a0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698e94e FUN_14698e94e body=125 status=ok
// SIG undefined FUN_14698e94e(void)

undefined8 FUN_14698e94e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698e9cc(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698e9cc FUN_14698e9cc body=277 status=ok
// SIG undefined FUN_14698e9cc(void)

void FUN_14698e9cc(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698eae2;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698eaea FUN_14698eaea body=214 status=ok
// SIG undefined FUN_14698eaea(void)

void FUN_14698eaea(longlong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar2 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    lVar8 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar9 = 0;
    do {
      lVar1 = (int)((iVar4 * iVar3 + param_2) * (uint)bVar2) + lVar9;
      uVar6 = (ulonglong)*(uint *)((longlong *)param_1[7] + 1);
      uVar7 = lVar1 % (longlong)uVar6;
      bVar5 = ~((char)uVar7 * '\x02') & 6;
      *(char *)(*(longlong *)param_1[2] + lVar8) =
           (char)(int)(((double)(int)(((uint)*(byte *)((uVar7 >> 2 & 0x3fffffff) +
                                                      (lVar1 / (longlong)uVar6 & 0xffffffffU) *
                                                      *(longlong *)param_1[7] +
                                                      *(longlong *)param_1[3]) & 3 << bVar5) >>
                                     bVar5) / 3.0) * 255.0);
      lVar8 = lVar8 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698ebea FUN_14698ebea body=29 status=ok
// SIG undefined FUN_14698ebea(void)

void FUN_14698ebea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698ec08 FUN_14698ec08 body=52 status=ok
// SIG undefined FUN_14698ec08(void)

undefined8 * FUN_14698ec08(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef69c0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698ec3c FUN_14698ec3c body=125 status=ok
// SIG undefined FUN_14698ec3c(void)

undefined8 FUN_14698ec3c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698ecba(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698ecba FUN_14698ecba body=251 status=ok
// SIG undefined FUN_14698ecba(void)

void FUN_14698ecba(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698edb6;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698edbe FUN_14698edbe body=178 status=ok
// SIG undefined FUN_14698edbe(void)

void FUN_14698edbe(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  bVar2 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar2 != 0) {
    lVar6 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar7 = 0;
    do {
      lVar1 = (ulonglong)bVar2 * (longlong)param_2 + lVar7;
      uVar4 = (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x38) + 1);
      uVar5 = lVar1 % (longlong)uVar4;
      bVar3 = ~((char)uVar5 * '\x02') & 6;
      *(char *)(**(longlong **)(param_1 + 0x10) + lVar6) =
           (char)(int)(((double)(int)(((uint)*(byte *)((uVar5 >> 2 & 0x3fffffff) +
                                                      (lVar1 / (longlong)uVar4 & 0xffffffffU) *
                                                      **(longlong **)(param_1 + 0x38) +
                                                      **(longlong **)(param_1 + 0x18)) & 3 << bVar3)
                                     >> bVar3) / 3.0) * 255.0);
      lVar6 = lVar6 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698ee80 FUN_14698ee80 body=29 status=ok
// SIG undefined FUN_14698ee80(void)

void FUN_14698ee80(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698ee9e FUN_14698ee9e body=52 status=ok
// SIG undefined FUN_14698ee9e(void)

undefined8 * FUN_14698ee9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef69e0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698eed2 FUN_14698eed2 body=127 status=ok
// SIG undefined FUN_14698eed2(void)

undefined8 FUN_14698eed2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698ecba(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698ef7c FUN_14698ef7c body=29 status=ok
// SIG undefined FUN_14698ef7c(void)

void FUN_14698ef7c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698ef9a FUN_14698ef9a body=52 status=ok
// SIG undefined FUN_14698ef9a(void)

undefined8 * FUN_14698ef9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6a00;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698efce FUN_14698efce body=125 status=ok
// SIG undefined FUN_14698efce(void)

undefined8 FUN_14698efce(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698f04c(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698f04c FUN_14698f04c body=277 status=ok
// SIG undefined FUN_14698f04c(void)

void FUN_14698f04c(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698f162;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698f16a FUN_14698f16a body=139 status=ok
// SIG undefined FUN_14698f16a(void)

void FUN_14698f16a(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_14698f1f6(param_1[7],param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,
                    param_1[2],lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698f1f6 FUN_14698f1f6 body=130 status=ok
// SIG undefined FUN_14698f1f6(void)

void FUN_14698f1f6(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  ulonglong param_5)

{
  undefined1 uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_3 % (longlong)(ulonglong)*(uint *)(param_1 + 1);
  bVar2 = ~((char)uVar4 * '\x02') & 6;
  uVar1 = (undefined1)
          (int)(((double)(int)(((uint)*(byte *)((uVar4 >> 2 & 0x3fffffff) +
                                               (param_3 / (longlong)
                                                          (ulonglong)*(uint *)(param_1 + 1) &
                                               0xffffffffU) * *param_1 + *param_2) & 3 << bVar2) >>
                              bVar2) / 3.0) * 255.0);
  lVar3 = *param_4;
  if ((param_5 & 0x8000000000000001) != 1) {
    *(undefined1 *)(lVar3 + param_5) = uVar1;
    uVar1 = *(undefined1 *)(*param_4 + param_5);
    *(undefined1 *)(*param_4 + 1 + param_5) = uVar1;
    lVar3 = *param_4;
  }
  *(undefined1 *)(lVar3 + 2 + param_5) = uVar1;
  return;
}



// FUNCTION 14698f288 FUN_14698f288 body=29 status=ok
// SIG undefined FUN_14698f288(void)

void FUN_14698f288(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698f2a6 FUN_14698f2a6 body=52 status=ok
// SIG undefined FUN_14698f2a6(void)

undefined8 * FUN_14698f2a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6a20;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698f2da FUN_14698f2da body=125 status=ok
// SIG undefined FUN_14698f2da(void)

undefined8 FUN_14698f2da(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698f358(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698f358 FUN_14698f358 body=251 status=ok
// SIG undefined FUN_14698f358(void)

void FUN_14698f358(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698f454;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698f45c FUN_14698f45c body=105 status=ok
// SIG undefined FUN_14698f45c(void)

void FUN_14698f45c(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_14698f1f6(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18),
                    (ulonglong)bVar1 * (longlong)param_2 + lVar3,*(undefined8 *)(param_1 + 0x10),
                    lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698f4d6 FUN_14698f4d6 body=29 status=ok
// SIG undefined FUN_14698f4d6(void)

void FUN_14698f4d6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698f4f4 FUN_14698f4f4 body=52 status=ok
// SIG undefined FUN_14698f4f4(void)

undefined8 * FUN_14698f4f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6a40;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698f528 FUN_14698f528 body=127 status=ok
// SIG undefined FUN_14698f528(void)

undefined8 FUN_14698f528(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698f358(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698f5b8 FUN_14698f5b8 body=29 status=ok
// SIG undefined FUN_14698f5b8(void)

void FUN_14698f5b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698f5d6 FUN_14698f5d6 body=52 status=ok
// SIG undefined FUN_14698f5d6(void)

undefined8 * FUN_14698f5d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6a60;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698f60a FUN_14698f60a body=125 status=ok
// SIG undefined FUN_14698f60a(void)

undefined8 FUN_14698f60a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698f688(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698f688 FUN_14698f688 body=277 status=ok
// SIG undefined FUN_14698f688(void)

void FUN_14698f688(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698f79e;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698f7a6 FUN_14698f7a6 body=217 status=ok
// SIG undefined FUN_14698f7a6(void)

void FUN_14698f7a6(longlong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar2 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    lVar8 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar9 = 0;
    do {
      lVar1 = (int)((iVar4 * iVar3 + param_2) * (uint)bVar2) + lVar9;
      uVar6 = (ulonglong)*(uint *)((longlong *)param_1[7] + 1);
      uVar7 = lVar1 % (longlong)uVar6;
      bVar5 = ~((char)uVar7 * '\x04') & 4;
      *(char *)(*(longlong *)param_1[2] + lVar8) =
           (char)(int)(((double)(int)(((uint)*(byte *)((uVar7 >> 1 & 0x7fffffff) +
                                                      (lVar1 / (longlong)uVar6 & 0xffffffffU) *
                                                      *(longlong *)param_1[7] +
                                                      *(longlong *)param_1[3]) & 0xf << bVar5) >>
                                     bVar5) / 15.0) * 255.0);
      lVar8 = lVar8 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698f8aa FUN_14698f8aa body=29 status=ok
// SIG undefined FUN_14698f8aa(void)

void FUN_14698f8aa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698f8c8 FUN_14698f8c8 body=52 status=ok
// SIG undefined FUN_14698f8c8(void)

undefined8 * FUN_14698f8c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6a80;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698f8fc FUN_14698f8fc body=125 status=ok
// SIG undefined FUN_14698f8fc(void)

undefined8 FUN_14698f8fc(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698f97a(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698f97a FUN_14698f97a body=251 status=ok
// SIG undefined FUN_14698f97a(void)

void FUN_14698f97a(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698fa76;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698fa7e FUN_14698fa7e body=181 status=ok
// SIG undefined FUN_14698fa7e(void)

void FUN_14698fa7e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  bVar2 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar2 != 0) {
    lVar6 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar7 = 0;
    do {
      lVar1 = (ulonglong)bVar2 * (longlong)param_2 + lVar7;
      uVar4 = (ulonglong)*(uint *)(*(longlong **)(param_1 + 0x38) + 1);
      uVar5 = lVar1 % (longlong)uVar4;
      bVar3 = ~((char)uVar5 * '\x04') & 4;
      *(char *)(**(longlong **)(param_1 + 0x10) + lVar6) =
           (char)(int)(((double)(int)(((uint)*(byte *)((uVar5 >> 1 & 0x7fffffff) +
                                                      (lVar1 / (longlong)uVar4 & 0xffffffffU) *
                                                      **(longlong **)(param_1 + 0x38) +
                                                      **(longlong **)(param_1 + 0x18)) &
                                      0xf << bVar3) >> bVar3) / 15.0) * 255.0);
      lVar6 = lVar6 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698fb44 FUN_14698fb44 body=29 status=ok
// SIG undefined FUN_14698fb44(void)

void FUN_14698fb44(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698fb62 FUN_14698fb62 body=52 status=ok
// SIG undefined FUN_14698fb62(void)

undefined8 * FUN_14698fb62(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6aa0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698fb96 FUN_14698fb96 body=127 status=ok
// SIG undefined FUN_14698fb96(void)

undefined8 FUN_14698fb96(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698f97a(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698fc40 FUN_14698fc40 body=29 status=ok
// SIG undefined FUN_14698fc40(void)

void FUN_14698fc40(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698fc5e FUN_14698fc5e body=52 status=ok
// SIG undefined FUN_14698fc5e(void)

undefined8 * FUN_14698fc5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6ac0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698fc92 FUN_14698fc92 body=125 status=ok
// SIG undefined FUN_14698fc92(void)

undefined8 FUN_14698fc92(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14698fd10(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14698fd10 FUN_14698fd10 body=277 status=ok
// SIG undefined FUN_14698fd10(void)

void FUN_14698fd10(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14698fe26;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14698fe2e FUN_14698fe2e body=139 status=ok
// SIG undefined FUN_14698fe2e(void)

void FUN_14698fe2e(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar3 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar3 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar5 = 0;
    do {
      FUN_14698feba(param_1[7],param_1[3],(int)((iVar3 * iVar2 + param_2) * (uint)bVar1) + lVar5,
                    param_1[2],lVar4);
      lVar4 = lVar4 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14698feba FUN_14698feba body=133 status=ok
// SIG undefined FUN_14698feba(void)

void FUN_14698feba(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  ulonglong param_5)

{
  undefined1 uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = param_3 % (longlong)(ulonglong)*(uint *)(param_1 + 1);
  bVar2 = ~((char)uVar4 * '\x04') & 4;
  uVar1 = (undefined1)
          (int)(((double)(int)(((uint)*(byte *)((uVar4 >> 1 & 0x7fffffff) +
                                               (param_3 / (longlong)
                                                          (ulonglong)*(uint *)(param_1 + 1) &
                                               0xffffffffU) * *param_1 + *param_2) & 0xf << bVar2)
                              >> bVar2) / 15.0) * 255.0);
  lVar3 = *param_4;
  if ((param_5 & 0x8000000000000001) != 1) {
    *(undefined1 *)(lVar3 + param_5) = uVar1;
    uVar1 = *(undefined1 *)(*param_4 + param_5);
    *(undefined1 *)(*param_4 + 1 + param_5) = uVar1;
    lVar3 = *param_4;
  }
  *(undefined1 *)(lVar3 + 2 + param_5) = uVar1;
  return;
}



// FUNCTION 14698ff50 FUN_14698ff50 body=29 status=ok
// SIG undefined FUN_14698ff50(void)

void FUN_14698ff50(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14698ff6e FUN_14698ff6e body=52 status=ok
// SIG undefined FUN_14698ff6e(void)

undefined8 * FUN_14698ff6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6ae0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698ffa2 FUN_14698ffa2 body=125 status=ok
// SIG undefined FUN_14698ffa2(void)

undefined8 FUN_14698ffa2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146990020(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146990020 FUN_146990020 body=251 status=ok
// SIG undefined FUN_146990020(void)

void FUN_146990020(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699011c;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146990124 FUN_146990124 body=105 status=ok
// SIG undefined FUN_146990124(void)

void FUN_146990124(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar2 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar3 = 0;
    do {
      FUN_14698feba(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18),
                    (ulonglong)bVar1 * (longlong)param_2 + lVar3,*(undefined8 *)(param_1 + 0x10),
                    lVar2);
      lVar2 = lVar2 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699019e FUN_14699019e body=29 status=ok
// SIG undefined FUN_14699019e(void)

void FUN_14699019e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469901bc FUN_1469901bc body=52 status=ok
// SIG undefined FUN_1469901bc(void)

undefined8 * FUN_1469901bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6b00;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469901f0 FUN_1469901f0 body=127 status=ok
// SIG undefined FUN_1469901f0(void)

undefined8 FUN_1469901f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146990020(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146990270 FUN_146990270 body=116 status=ok
// SIG undefined FUN_146990270(void)

void FUN_146990270(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 in_RAX;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong lStack_1b8;
  undefined4 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428938be(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_142892ae8(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_142895a8e();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined4 *)(param_1 + 0x98);
  uStack_1c4 = *(undefined4 *)(param_1 + 0x9c);
  uStack_1c0 = *(undefined4 *)(param_1 + 0xa0);
  uStack_1bc = *(undefined4 *)(param_1 + 0xa4);
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_142894fd0;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_142894fd0;
  }
  uStack_74 = 1;
LAB_142894fd0:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)(longlong)(int)((uint)bVar21 * iStack_6c * iStack_70)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428950c6:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_14289530f;
LAB_1428952a5:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_14289530f:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef6b80;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_14289549b;
                }
                else {
                  puVar18[0x16] = &LAB_1469908a4;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_14289549b:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428954ce;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428954ce:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428950c6;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428952a5;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428956ef;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428956ef:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1469902f4 FUN_1469902f4 body=29 status=ok
// SIG undefined FUN_1469902f4(void)

void FUN_1469902f4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146990312 FUN_146990312 body=52 status=ok
// SIG undefined FUN_146990312(void)

undefined8 * FUN_146990312(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6b20;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146990346 FUN_146990346 body=125 status=ok
// SIG undefined FUN_146990346(void)

undefined8 FUN_146990346(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469903c4(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469903c4 FUN_1469903c4 body=277 status=ok
// SIG undefined FUN_1469903c4(void)

void FUN_1469903c4(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469904da;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146990586 FUN_146990586 body=29 status=ok
// SIG undefined FUN_146990586(void)

void FUN_146990586(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469905a4 FUN_1469905a4 body=52 status=ok
// SIG undefined FUN_1469905a4(void)

undefined8 * FUN_1469905a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6b40;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469905d8 FUN_1469905d8 body=125 status=ok
// SIG undefined FUN_1469905d8(void)

undefined8 FUN_1469905d8(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146990656(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146990656 FUN_146990656 body=251 status=ok
// SIG undefined FUN_146990656(void)

void FUN_146990656(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146990752;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469907b8 FUN_1469907b8 body=29 status=ok
// SIG undefined FUN_1469907b8(void)

void FUN_1469907b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469907d6 FUN_1469907d6 body=52 status=ok
// SIG undefined FUN_1469907d6(void)

undefined8 * FUN_1469907d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6b60;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699080a FUN_14699080a body=127 status=ok
// SIG undefined FUN_14699080a(void)

undefined8 FUN_14699080a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146990656(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469908b4 FUN_1469908b4 body=29 status=ok
// SIG undefined FUN_1469908b4(void)

void FUN_1469908b4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469908d2 FUN_1469908d2 body=52 status=ok
// SIG undefined FUN_1469908d2(void)

undefined8 * FUN_1469908d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6b80;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146990906 FUN_146990906 body=125 status=ok
// SIG undefined FUN_146990906(void)

undefined8 FUN_146990906(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146990984(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146990984 FUN_146990984 body=277 status=ok
// SIG undefined FUN_146990984(void)

void FUN_146990984(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146990a9a;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146990aa2 FUN_146990aa2 body=172 status=ok
// SIG undefined FUN_146990aa2(void)

void FUN_146990aa2(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      uVar8 = *(undefined1 *)
               (lVar7 + *(longlong *)param_1[3] +
                        (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1));
      lVar6 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(undefined1 *)(lVar6 + uVar5) = uVar8;
        uVar8 = *(undefined1 *)(*plVar3 + uVar5);
        *(undefined1 *)(*plVar3 + 1 + uVar5) = uVar8;
        lVar6 = *plVar3;
      }
      *(undefined1 *)(lVar6 + 2 + uVar5) = uVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146990b5e FUN_146990b5e body=29 status=ok
// SIG undefined FUN_146990b5e(void)

void FUN_146990b5e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146990b7c FUN_146990b7c body=52 status=ok
// SIG undefined FUN_146990b7c(void)

undefined8 * FUN_146990b7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6ba0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146990bb0 FUN_146990bb0 body=125 status=ok
// SIG undefined FUN_146990bb0(void)

undefined8 FUN_146990bb0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146990c2e(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146990c2e FUN_146990c2e body=251 status=ok
// SIG undefined FUN_146990c2e(void)

void FUN_146990c2e(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146990d2a;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146990d32 FUN_146990d32 body=132 status=ok
// SIG undefined FUN_146990d32(void)

void FUN_146990d32(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      uVar6 = *(undefined1 *)
               (lVar5 + **(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2);
      lVar4 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(undefined1 *)(lVar4 + uVar3) = uVar6;
        uVar6 = *(undefined1 *)(*plVar2 + uVar3);
        *(undefined1 *)(*plVar2 + 1 + uVar3) = uVar6;
        lVar4 = *plVar2;
      }
      *(undefined1 *)(lVar4 + 2 + uVar3) = uVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146990dc6 FUN_146990dc6 body=29 status=ok
// SIG undefined FUN_146990dc6(void)

void FUN_146990dc6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146990de4 FUN_146990de4 body=52 status=ok
// SIG undefined FUN_146990de4(void)

undefined8 * FUN_146990de4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6bc0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146990e18 FUN_146990e18 body=127 status=ok
// SIG undefined FUN_146990e18(void)

undefined8 FUN_146990e18(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146990c2e(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146990eb6 FUN_146990eb6 body=29 status=ok
// SIG undefined FUN_146990eb6(void)

void FUN_146990eb6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146990ed4 FUN_146990ed4 body=52 status=ok
// SIG undefined FUN_146990ed4(void)

undefined8 * FUN_146990ed4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6ce0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146990f08 FUN_146990f08 body=125 status=ok
// SIG undefined FUN_146990f08(void)

undefined8 FUN_146990f08(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146990f86(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146990f86 FUN_146990f86 body=277 status=ok
// SIG undefined FUN_146990f86(void)

void FUN_146990f86(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699109c;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469910a4 FUN_1469910a4 body=228 status=ok
// SIG undefined FUN_1469910a4(void)

void FUN_1469910a4(longlong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar2 != 0) {
    iVar6 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    lVar9 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar6 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar10 = 0;
    do {
      lVar1 = (int)((iVar6 * iVar3 + param_2) * (uint)bVar2) + lVar10;
      plVar4 = (longlong *)param_1[7];
      plVar5 = (longlong *)param_1[2];
      uVar8 = lVar1 % (longlong)(ulonglong)*(uint *)(plVar4 + 7);
      bVar7 = ~(byte)uVar8 & 7;
      uVar8 = (ulonglong)
              ((((uint)*(byte *)((uVar8 >> 3 & 0x1fffffff) +
                                (lVar1 / (longlong)(ulonglong)*(uint *)(plVar4 + 7) & 0xffffffffU) *
                                plVar4[6] + *(longlong *)param_1[3]) & 1 << bVar7) >> bVar7) * 2);
      *(undefined2 *)(*plVar5 + lVar9 * 2) = *(undefined2 *)(*plVar4 + uVar8);
      *(undefined2 *)(*plVar5 + 2 + lVar9 * 2) = *(undefined2 *)(plVar4[2] + uVar8);
      *(undefined2 *)(*plVar5 + 4 + lVar9 * 2) = *(undefined2 *)(plVar4[4] + uVar8);
      lVar9 = lVar9 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar10 = lVar10 + 1;
    } while ((uint)lVar10 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469911b4 FUN_1469911b4 body=29 status=ok
// SIG undefined FUN_1469911b4(void)

void FUN_1469911b4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469911d2 FUN_1469911d2 body=52 status=ok
// SIG undefined FUN_1469911d2(void)

undefined8 * FUN_1469911d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6d00;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146991206 FUN_146991206 body=125 status=ok
// SIG undefined FUN_146991206(void)

undefined8 FUN_146991206(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146991284(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146991284 FUN_146991284 body=251 status=ok
// SIG undefined FUN_146991284(void)

void FUN_146991284(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146991380;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146991388 FUN_146991388 body=192 status=ok
// SIG undefined FUN_146991388(void)

void FUN_146991388(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  bVar2 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar2 != 0) {
    lVar7 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar8 = 0;
    do {
      lVar1 = (ulonglong)bVar2 * (longlong)param_2 + lVar8;
      plVar3 = *(longlong **)(param_1 + 0x38);
      plVar4 = *(longlong **)(param_1 + 0x10);
      uVar6 = lVar1 % (longlong)(ulonglong)*(uint *)(plVar3 + 7);
      bVar5 = ~(byte)uVar6 & 7;
      uVar6 = (ulonglong)
              ((((uint)*(byte *)((uVar6 >> 3 & 0x1fffffff) +
                                (lVar1 / (longlong)(ulonglong)*(uint *)(plVar3 + 7) & 0xffffffffU) *
                                plVar3[6] + **(longlong **)(param_1 + 0x18)) & 1 << bVar5) >> bVar5)
              * 2);
      *(undefined2 *)(*plVar4 + lVar7 * 2) = *(undefined2 *)(*plVar3 + uVar6);
      *(undefined2 *)(*plVar4 + 2 + lVar7 * 2) = *(undefined2 *)(plVar3[2] + uVar6);
      *(undefined2 *)(*plVar4 + 4 + lVar7 * 2) = *(undefined2 *)(plVar3[4] + uVar6);
      lVar7 = lVar7 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146991458 FUN_146991458 body=29 status=ok
// SIG undefined FUN_146991458(void)

void FUN_146991458(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146991476 FUN_146991476 body=52 status=ok
// SIG undefined FUN_146991476(void)

undefined8 * FUN_146991476(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6d20;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469914aa FUN_1469914aa body=127 status=ok
// SIG undefined FUN_1469914aa(void)

undefined8 FUN_1469914aa(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146991284(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146991556 FUN_146991556 body=29 status=ok
// SIG undefined FUN_146991556(void)

void FUN_146991556(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146991574 FUN_146991574 body=52 status=ok
// SIG undefined FUN_146991574(void)

undefined8 * FUN_146991574(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6d40;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469915a8 FUN_1469915a8 body=125 status=ok
// SIG undefined FUN_1469915a8(void)

undefined8 FUN_1469915a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146991626(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146991626 FUN_146991626 body=277 status=ok
// SIG undefined FUN_146991626(void)

void FUN_146991626(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699173c;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146991744 FUN_146991744 body=228 status=ok
// SIG undefined FUN_146991744(void)

void FUN_146991744(longlong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar2 != 0) {
    iVar6 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    lVar9 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar6 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar10 = 0;
    do {
      lVar1 = (int)((iVar6 * iVar3 + param_2) * (uint)bVar2) + lVar10;
      plVar4 = (longlong *)param_1[7];
      plVar5 = (longlong *)param_1[2];
      uVar8 = lVar1 % (longlong)(ulonglong)*(uint *)(plVar4 + 7);
      bVar7 = ~((char)uVar8 * '\x02') & 6;
      uVar8 = (ulonglong)
              ((((uint)*(byte *)((uVar8 >> 2 & 0x3fffffff) +
                                (lVar1 / (longlong)(ulonglong)*(uint *)(plVar4 + 7) & 0xffffffffU) *
                                plVar4[6] + *(longlong *)param_1[3]) & 3 << bVar7) >> bVar7) * 2);
      *(undefined2 *)(*plVar5 + lVar9 * 2) = *(undefined2 *)(*plVar4 + uVar8);
      *(undefined2 *)(*plVar5 + 2 + lVar9 * 2) = *(undefined2 *)(plVar4[2] + uVar8);
      *(undefined2 *)(*plVar5 + 4 + lVar9 * 2) = *(undefined2 *)(plVar4[4] + uVar8);
      lVar9 = lVar9 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar10 = lVar10 + 1;
    } while ((uint)lVar10 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146991854 FUN_146991854 body=29 status=ok
// SIG undefined FUN_146991854(void)

void FUN_146991854(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146991872 FUN_146991872 body=52 status=ok
// SIG undefined FUN_146991872(void)

undefined8 * FUN_146991872(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6d60;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469918a6 FUN_1469918a6 body=125 status=ok
// SIG undefined FUN_1469918a6(void)

undefined8 FUN_1469918a6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146991924(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146991924 FUN_146991924 body=251 status=ok
// SIG undefined FUN_146991924(void)

void FUN_146991924(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146991a20;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146991a28 FUN_146991a28 body=192 status=ok
// SIG undefined FUN_146991a28(void)

void FUN_146991a28(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  bVar2 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar2 != 0) {
    lVar7 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar8 = 0;
    do {
      lVar1 = (ulonglong)bVar2 * (longlong)param_2 + lVar8;
      plVar3 = *(longlong **)(param_1 + 0x38);
      plVar4 = *(longlong **)(param_1 + 0x10);
      uVar6 = lVar1 % (longlong)(ulonglong)*(uint *)(plVar3 + 7);
      bVar5 = ~((char)uVar6 * '\x02') & 6;
      uVar6 = (ulonglong)
              ((((uint)*(byte *)((uVar6 >> 2 & 0x3fffffff) +
                                (lVar1 / (longlong)(ulonglong)*(uint *)(plVar3 + 7) & 0xffffffffU) *
                                plVar3[6] + **(longlong **)(param_1 + 0x18)) & 3 << bVar5) >> bVar5)
              * 2);
      *(undefined2 *)(*plVar4 + lVar7 * 2) = *(undefined2 *)(*plVar3 + uVar6);
      *(undefined2 *)(*plVar4 + 2 + lVar7 * 2) = *(undefined2 *)(plVar3[2] + uVar6);
      *(undefined2 *)(*plVar4 + 4 + lVar7 * 2) = *(undefined2 *)(plVar3[4] + uVar6);
      lVar7 = lVar7 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146991af8 FUN_146991af8 body=29 status=ok
// SIG undefined FUN_146991af8(void)

void FUN_146991af8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146991b16 FUN_146991b16 body=52 status=ok
// SIG undefined FUN_146991b16(void)

undefined8 * FUN_146991b16(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6d80;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146991b4a FUN_146991b4a body=127 status=ok
// SIG undefined FUN_146991b4a(void)

undefined8 FUN_146991b4a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146991924(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146991bf6 FUN_146991bf6 body=29 status=ok
// SIG undefined FUN_146991bf6(void)

void FUN_146991bf6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146991c14 FUN_146991c14 body=52 status=ok
// SIG undefined FUN_146991c14(void)

undefined8 * FUN_146991c14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6da0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146991c48 FUN_146991c48 body=125 status=ok
// SIG undefined FUN_146991c48(void)

undefined8 FUN_146991c48(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146991cc6(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146991cc6 FUN_146991cc6 body=277 status=ok
// SIG undefined FUN_146991cc6(void)

void FUN_146991cc6(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146991ddc;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146991de4 FUN_146991de4 body=231 status=ok
// SIG undefined FUN_146991de4(void)

void FUN_146991de4(longlong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar2 != 0) {
    iVar6 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    lVar9 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar6 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar10 = 0;
    do {
      lVar1 = (int)((iVar6 * iVar3 + param_2) * (uint)bVar2) + lVar10;
      plVar4 = (longlong *)param_1[7];
      plVar5 = (longlong *)param_1[2];
      uVar8 = lVar1 % (longlong)(ulonglong)*(uint *)(plVar4 + 7);
      bVar7 = ~((char)uVar8 * '\x04') & 4;
      uVar8 = (ulonglong)
              ((((uint)*(byte *)((uVar8 >> 1 & 0x7fffffff) +
                                (lVar1 / (longlong)(ulonglong)*(uint *)(plVar4 + 7) & 0xffffffffU) *
                                plVar4[6] + *(longlong *)param_1[3]) & 0xf << bVar7) >> bVar7) * 2);
      *(undefined2 *)(*plVar5 + lVar9 * 2) = *(undefined2 *)(*plVar4 + uVar8);
      *(undefined2 *)(*plVar5 + 2 + lVar9 * 2) = *(undefined2 *)(plVar4[2] + uVar8);
      *(undefined2 *)(*plVar5 + 4 + lVar9 * 2) = *(undefined2 *)(plVar4[4] + uVar8);
      lVar9 = lVar9 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar10 = lVar10 + 1;
    } while ((uint)lVar10 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146991ef8 FUN_146991ef8 body=29 status=ok
// SIG undefined FUN_146991ef8(void)

void FUN_146991ef8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146991f16 FUN_146991f16 body=52 status=ok
// SIG undefined FUN_146991f16(void)

undefined8 * FUN_146991f16(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6dc0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146991f4a FUN_146991f4a body=125 status=ok
// SIG undefined FUN_146991f4a(void)

undefined8 FUN_146991f4a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146991fc8(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146991fc8 FUN_146991fc8 body=251 status=ok
// SIG undefined FUN_146991fc8(void)

void FUN_146991fc8(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469920c4;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469920cc FUN_1469920cc body=195 status=ok
// SIG undefined FUN_1469920cc(void)

void FUN_1469920cc(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  bVar2 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar2 != 0) {
    lVar7 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar8 = 0;
    do {
      lVar1 = (ulonglong)bVar2 * (longlong)param_2 + lVar8;
      plVar3 = *(longlong **)(param_1 + 0x38);
      plVar4 = *(longlong **)(param_1 + 0x10);
      uVar6 = lVar1 % (longlong)(ulonglong)*(uint *)(plVar3 + 7);
      bVar5 = ~((char)uVar6 * '\x04') & 4;
      uVar6 = (ulonglong)
              ((((uint)*(byte *)((uVar6 >> 1 & 0x7fffffff) +
                                (lVar1 / (longlong)(ulonglong)*(uint *)(plVar3 + 7) & 0xffffffffU) *
                                plVar3[6] + **(longlong **)(param_1 + 0x18)) & 0xf << bVar5) >>
               bVar5) * 2);
      *(undefined2 *)(*plVar4 + lVar7 * 2) = *(undefined2 *)(*plVar3 + uVar6);
      *(undefined2 *)(*plVar4 + 2 + lVar7 * 2) = *(undefined2 *)(plVar3[2] + uVar6);
      *(undefined2 *)(*plVar4 + 4 + lVar7 * 2) = *(undefined2 *)(plVar3[4] + uVar6);
      lVar7 = lVar7 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469921a0 FUN_1469921a0 body=29 status=ok
// SIG undefined FUN_1469921a0(void)

void FUN_1469921a0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469921be FUN_1469921be body=52 status=ok
// SIG undefined FUN_1469921be(void)

undefined8 * FUN_1469921be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6de0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469921f2 FUN_1469921f2 body=127 status=ok
// SIG undefined FUN_1469921f2(void)

undefined8 FUN_1469921f2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146991fc8(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699229e FUN_14699229e body=29 status=ok
// SIG undefined FUN_14699229e(void)

void FUN_14699229e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469922bc FUN_1469922bc body=52 status=ok
// SIG undefined FUN_1469922bc(void)

undefined8 * FUN_1469922bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6e00;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469922f0 FUN_1469922f0 body=125 status=ok
// SIG undefined FUN_1469922f0(void)

undefined8 FUN_1469922f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699236e(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699236e FUN_14699236e body=277 status=ok
// SIG undefined FUN_14699236e(void)

void FUN_14699236e(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146992484;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699248c FUN_14699248c body=181 status=ok
// SIG undefined FUN_14699248c(void)

void FUN_14699248c(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar5 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar6 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar5 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_1[7];
      plVar4 = (longlong *)param_1[2];
      uVar8 = (ulonglong)
              ((uint)*(byte *)(lVar7 + *(longlong *)param_1[3] +
                                       (longlong)(int)((iVar5 * iVar2 + param_2) * (uint)bVar1)) * 2
              );
      *(undefined2 *)(*plVar4 + lVar6 * 2) = *(undefined2 *)(*plVar3 + uVar8);
      *(undefined2 *)(*plVar4 + 2 + lVar6 * 2) = *(undefined2 *)(plVar3[2] + uVar8);
      *(undefined2 *)(*plVar4 + 4 + lVar6 * 2) = *(undefined2 *)(plVar3[4] + uVar8);
      lVar6 = lVar6 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699256e FUN_14699256e body=29 status=ok
// SIG undefined FUN_14699256e(void)

void FUN_14699256e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699258c FUN_14699258c body=52 status=ok
// SIG undefined FUN_14699258c(void)

undefined8 * FUN_14699258c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6e20;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469925c0 FUN_1469925c0 body=125 status=ok
// SIG undefined FUN_1469925c0(void)

undefined8 FUN_1469925c0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699263e(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699263e FUN_14699263e body=251 status=ok
// SIG undefined FUN_14699263e(void)

void FUN_14699263e(longlong *param_1,int param_2,int param_3,undefined4 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  uStack_ac = param_4[1];
  uStack_a8 = param_4[2];
  uStack_a4 = param_4[3];
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699273a;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146992742 FUN_146992742 body=141 status=ok
// SIG undefined FUN_146992742(void)

void FUN_146992742(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar4 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x38);
      plVar3 = *(longlong **)(param_1 + 0x10);
      uVar6 = (ulonglong)
              ((uint)*(byte *)(lVar5 + **(longlong **)(param_1 + 0x18) +
                                       (ulonglong)bVar1 * (longlong)param_2) * 2);
      *(undefined2 *)(*plVar3 + lVar4 * 2) = *(undefined2 *)(*plVar2 + uVar6);
      *(undefined2 *)(*plVar3 + 2 + lVar4 * 2) = *(undefined2 *)(plVar2[2] + uVar6);
      *(undefined2 *)(*plVar3 + 4 + lVar4 * 2) = *(undefined2 *)(plVar2[4] + uVar6);
      lVar4 = lVar4 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 1469927e0 FUN_1469927e0 body=29 status=ok
// SIG undefined FUN_1469927e0(void)

void FUN_1469927e0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469927fe FUN_1469927fe body=52 status=ok
// SIG undefined FUN_1469927fe(void)

undefined8 * FUN_1469927fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6e40;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146992832 FUN_146992832 body=127 status=ok
// SIG undefined FUN_146992832(void)

undefined8 FUN_146992832(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699263e(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469928de FUN_1469928de body=29 status=ok
// SIG undefined FUN_1469928de(void)

void FUN_1469928de(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469928fc FUN_1469928fc body=52 status=ok
// SIG undefined FUN_1469928fc(void)

undefined8 * FUN_1469928fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6e60;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146992930 FUN_146992930 body=125 status=ok
// SIG undefined FUN_146992930(void)

undefined8 FUN_146992930(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469929ae(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469929ae FUN_1469929ae body=287 status=ok
// SIG undefined FUN_1469929ae(void)

void FUN_1469929ae(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146992ace;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146992ad6 FUN_146992ad6 body=184 status=ok
// SIG undefined FUN_146992ad6(void)

void FUN_146992ad6(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar5 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar6 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar5 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_1[7];
      plVar4 = (longlong *)param_1[2];
      uVar8 = (ulonglong)
              ((uint)*(ushort *)
                      (*(longlong *)param_1[3] +
                       (longlong)(int)((iVar5 * iVar2 + param_2) * (uint)bVar1) * 2 + lVar7 * 2) * 2
              );
      *(undefined2 *)(*plVar4 + lVar6 * 2) = *(undefined2 *)(*plVar3 + uVar8);
      *(undefined2 *)(*plVar4 + 2 + lVar6 * 2) = *(undefined2 *)(plVar3[2] + uVar8);
      *(undefined2 *)(*plVar4 + 4 + lVar6 * 2) = *(undefined2 *)(plVar3[4] + uVar8);
      lVar6 = lVar6 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146992bba FUN_146992bba body=29 status=ok
// SIG undefined FUN_146992bba(void)

void FUN_146992bba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146992bd8 FUN_146992bd8 body=52 status=ok
// SIG undefined FUN_146992bd8(void)

undefined8 * FUN_146992bd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6e80;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146992c0c FUN_146992c0c body=125 status=ok
// SIG undefined FUN_146992c0c(void)

undefined8 FUN_146992c0c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146992c8a(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146992c8a FUN_146992c8a body=261 status=ok
// SIG undefined FUN_146992c8a(void)

void FUN_146992c8a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146992d90;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146992d98 FUN_146992d98 body=148 status=ok
// SIG undefined FUN_146992d98(void)

void FUN_146992d98(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar4 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x38);
      plVar3 = *(longlong **)(param_1 + 0x10);
      uVar6 = (ulonglong)
              ((uint)*(ushort *)
                      (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 2 +
                      lVar5 * 2) * 2);
      *(undefined2 *)(*plVar3 + lVar4 * 2) = *(undefined2 *)(*plVar2 + uVar6);
      *(undefined2 *)(*plVar3 + 2 + lVar4 * 2) = *(undefined2 *)(plVar2[2] + uVar6);
      *(undefined2 *)(*plVar3 + 4 + lVar4 * 2) = *(undefined2 *)(plVar2[4] + uVar6);
      lVar4 = lVar4 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146992e3c FUN_146992e3c body=29 status=ok
// SIG undefined FUN_146992e3c(void)

void FUN_146992e3c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146992e5a FUN_146992e5a body=52 status=ok
// SIG undefined FUN_146992e5a(void)

undefined8 * FUN_146992e5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6ea0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146992e8e FUN_146992e8e body=127 status=ok
// SIG undefined FUN_146992e8e(void)

undefined8 FUN_146992e8e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146992c8a(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146992f3a FUN_146992f3a body=29 status=ok
// SIG undefined FUN_146992f3a(void)

void FUN_146992f3a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146992f58 FUN_146992f58 body=52 status=ok
// SIG undefined FUN_146992f58(void)

undefined8 * FUN_146992f58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6ec0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146992f8c FUN_146992f8c body=125 status=ok
// SIG undefined FUN_146992f8c(void)

undefined8 FUN_146992f8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699300a(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699300a FUN_14699300a body=288 status=ok
// SIG undefined FUN_14699300a(void)

void FUN_14699300a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699312a;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146993132 FUN_146993132 body=181 status=ok
// SIG undefined FUN_146993132(void)

void FUN_146993132(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar5 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    lVar6 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar5 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_1[7];
      plVar4 = (longlong *)param_1[2];
      uVar8 = (ulonglong)
              *(uint *)(*(longlong *)param_1[3] +
                        (longlong)(int)((iVar5 * iVar2 + param_2) * (uint)bVar1) * 4 + lVar7 * 4);
      *(undefined2 *)(*plVar4 + lVar6 * 2) = *(undefined2 *)(*plVar3 + uVar8 * 2);
      *(undefined2 *)(*plVar4 + 2 + lVar6 * 2) = *(undefined2 *)(plVar3[2] + uVar8 * 2);
      *(undefined2 *)(*plVar4 + 4 + lVar6 * 2) = *(undefined2 *)(plVar3[4] + uVar8 * 2);
      lVar6 = lVar6 + (ulonglong)*(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146993214 FUN_146993214 body=29 status=ok
// SIG undefined FUN_146993214(void)

void FUN_146993214(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146993232 FUN_146993232 body=52 status=ok
// SIG undefined FUN_146993232(void)

undefined8 * FUN_146993232(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6ee0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146993266 FUN_146993266 body=125 status=ok
// SIG undefined FUN_146993266(void)

undefined8 FUN_146993266(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469932e4(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469932e4 FUN_1469932e4 body=262 status=ok
// SIG undefined FUN_1469932e4(void)

void FUN_1469932e4(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469933ea;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469933f2 FUN_1469933f2 body=141 status=ok
// SIG undefined FUN_1469933f2(void)

void FUN_1469933f2(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    lVar4 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x38);
      plVar3 = *(longlong **)(param_1 + 0x10);
      uVar6 = (ulonglong)
              *(uint *)(**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 4 +
                       lVar5 * 4);
      *(undefined2 *)(*plVar3 + lVar4 * 2) = *(undefined2 *)(*plVar2 + uVar6 * 2);
      *(undefined2 *)(*plVar3 + 2 + lVar4 * 2) = *(undefined2 *)(plVar2[2] + uVar6 * 2);
      *(undefined2 *)(*plVar3 + 4 + lVar4 * 2) = *(undefined2 *)(plVar2[4] + uVar6 * 2);
      lVar4 = lVar4 + (ulonglong)*(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146993490 FUN_146993490 body=29 status=ok
// SIG undefined FUN_146993490(void)

void FUN_146993490(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469934ae FUN_1469934ae body=52 status=ok
// SIG undefined FUN_1469934ae(void)

undefined8 * FUN_1469934ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6f00;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469934e2 FUN_1469934e2 body=127 status=ok
// SIG undefined FUN_1469934e2(void)

undefined8 FUN_1469934e2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469932e4(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699357e FUN_14699357e body=116 status=ok
// SIG undefined FUN_14699357e(void)

void FUN_14699357e(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 in_RAX;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428a5314(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428a452c(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428a7506();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428a6a44;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428a6a44;
  }
  uStack_74 = 1;
LAB_1428a6a44:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) * 2)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428a6b3d:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428a6d86;
LAB_1428a6d1c:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428a6d86:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef6f80;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428a6f12;
                }
                else {
                  puVar18[0x16] = &LAB_146993bd6;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428a6f12:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428a6f45;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428a6f45:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428a6b3d;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428a6d1c;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428a7166;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428a7166:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 146993602 FUN_146993602 body=29 status=ok
// SIG undefined FUN_146993602(void)

void FUN_146993602(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146993620 FUN_146993620 body=52 status=ok
// SIG undefined FUN_146993620(void)

undefined8 * FUN_146993620(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6f20;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146993654 FUN_146993654 body=125 status=ok
// SIG undefined FUN_146993654(void)

undefined8 FUN_146993654(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_1469936d2(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469936d2 FUN_1469936d2 body=287 status=ok
// SIG undefined FUN_1469936d2(void)

void FUN_1469936d2(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469937f2;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469938a6 FUN_1469938a6 body=29 status=ok
// SIG undefined FUN_1469938a6(void)

void FUN_1469938a6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469938c4 FUN_1469938c4 body=52 status=ok
// SIG undefined FUN_1469938c4(void)

undefined8 * FUN_1469938c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6f40;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469938f8 FUN_1469938f8 body=125 status=ok
// SIG undefined FUN_1469938f8(void)

undefined8 FUN_1469938f8(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146993976(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146993976 FUN_146993976 body=261 status=ok
// SIG undefined FUN_146993976(void)

void FUN_146993976(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146993a7c;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146993ae8 FUN_146993ae8 body=29 status=ok
// SIG undefined FUN_146993ae8(void)

void FUN_146993ae8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146993b06 FUN_146993b06 body=52 status=ok
// SIG undefined FUN_146993b06(void)

undefined8 * FUN_146993b06(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6f60;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146993b3a FUN_146993b3a body=127 status=ok
// SIG undefined FUN_146993b3a(void)

undefined8 FUN_146993b3a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146993976(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146993be6 FUN_146993be6 body=29 status=ok
// SIG undefined FUN_146993be6(void)

void FUN_146993be6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146993c04 FUN_146993c04 body=52 status=ok
// SIG undefined FUN_146993c04(void)

undefined8 * FUN_146993c04(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6f80;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146993c38 FUN_146993c38 body=125 status=ok
// SIG undefined FUN_146993c38(void)

undefined8 FUN_146993c38(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146993cb6(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146993cb6 FUN_146993cb6 body=287 status=ok
// SIG undefined FUN_146993cb6(void)

void FUN_146993cb6(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146993dd6;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146993dde FUN_146993dde body=180 status=ok
// SIG undefined FUN_146993dde(void)

void FUN_146993dde(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 uVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      uVar8 = *(undefined2 *)
               (*(longlong *)param_1[3] +
                (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1) * 2 + lVar7 * 2);
      lVar6 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar6 + uVar5 * 2) = uVar8;
        uVar8 = *(undefined2 *)(*plVar3 + uVar5 * 2);
        *(undefined2 *)(*plVar3 + 2 + uVar5 * 2) = uVar8;
        lVar6 = *plVar3;
      }
      *(undefined2 *)(lVar6 + 4 + uVar5 * 2) = uVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146993ea2 FUN_146993ea2 body=29 status=ok
// SIG undefined FUN_146993ea2(void)

void FUN_146993ea2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146993ec0 FUN_146993ec0 body=52 status=ok
// SIG undefined FUN_146993ec0(void)

undefined8 * FUN_146993ec0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6fa0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146993ef4 FUN_146993ef4 body=125 status=ok
// SIG undefined FUN_146993ef4(void)

undefined8 FUN_146993ef4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146993f72(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146993f72 FUN_146993f72 body=261 status=ok
// SIG undefined FUN_146993f72(void)

void FUN_146993f72(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 1;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146994078;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146994080 FUN_146994080 body=140 status=ok
// SIG undefined FUN_146994080(void)

void FUN_146994080(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      uVar6 = *(undefined2 *)
               (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar1 * (longlong)param_2 * 2 +
               lVar5 * 2);
      lVar4 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar4 + uVar3 * 2) = uVar6;
        uVar6 = *(undefined2 *)(*plVar2 + uVar3 * 2);
        *(undefined2 *)(*plVar2 + 2 + uVar3 * 2) = uVar6;
        lVar4 = *plVar2;
      }
      *(undefined2 *)(lVar4 + 4 + uVar3 * 2) = uVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699411c FUN_14699411c body=29 status=ok
// SIG undefined FUN_14699411c(void)

void FUN_14699411c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699413a FUN_14699413a body=52 status=ok
// SIG undefined FUN_14699413a(void)

undefined8 * FUN_14699413a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6fc0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699416e FUN_14699416e body=127 status=ok
// SIG undefined FUN_14699416e(void)

undefined8 FUN_14699416e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146993f72(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469941ee FUN_1469941ee body=116 status=ok
// SIG undefined FUN_1469941ee(void)

void FUN_1469941ee(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 in_RAX;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428a968e(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428a88a6(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428ab880();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428aadbe;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428aadbe;
  }
  uStack_74 = 1;
LAB_1428aadbe:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 2)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428aaeb8:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428ab101;
LAB_1428ab097:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428ab101:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7040;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428ab28d;
                }
                else {
                  puVar18[0x16] = &LAB_1469948b6;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428ab28d:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428ab2c0;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428ab2c0:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428aaeb8;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428ab097;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428ab4e1;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428ab4e1:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 146994272 FUN_146994272 body=29 status=ok
// SIG undefined FUN_146994272(void)

void FUN_146994272(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146994290 FUN_146994290 body=52 status=ok
// SIG undefined FUN_146994290(void)

undefined8 * FUN_146994290(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef6fe0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469942c4 FUN_1469942c4 body=125 status=ok
// SIG undefined FUN_1469942c4(void)

undefined8 FUN_1469942c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146994342(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146994342 FUN_146994342 body=288 status=ok
// SIG undefined FUN_146994342(void)

void FUN_146994342(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146994462;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699454a FUN_14699454a body=29 status=ok
// SIG undefined FUN_14699454a(void)

void FUN_14699454a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146994568 FUN_146994568 body=52 status=ok
// SIG undefined FUN_146994568(void)

undefined8 * FUN_146994568(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7000;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699459c FUN_14699459c body=125 status=ok
// SIG undefined FUN_14699459c(void)

undefined8 FUN_14699459c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699461a(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699461a FUN_14699461a body=262 status=ok
// SIG undefined FUN_14699461a(void)

void FUN_14699461a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146994720;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469947c8 FUN_1469947c8 body=29 status=ok
// SIG undefined FUN_1469947c8(void)

void FUN_1469947c8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469947e6 FUN_1469947e6 body=52 status=ok
// SIG undefined FUN_1469947e6(void)

undefined8 * FUN_1469947e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7020;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699481a FUN_14699481a body=127 status=ok
// SIG undefined FUN_14699481a(void)

undefined8 FUN_14699481a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699461a(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1469948c6 FUN_1469948c6 body=29 status=ok
// SIG undefined FUN_1469948c6(void)

void FUN_1469948c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469948e4 FUN_1469948e4 body=52 status=ok
// SIG undefined FUN_1469948e4(void)

undefined8 * FUN_1469948e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7040;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146994918 FUN_146994918 body=125 status=ok
// SIG undefined FUN_146994918(void)

undefined8 FUN_146994918(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146994996(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146994996 FUN_146994996 body=288 status=ok
// SIG undefined FUN_146994996(void)

void FUN_146994996(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146994ab6;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146994abe FUN_146994abe body=229 status=ok
// SIG undefined FUN_146994abe(void)

void FUN_146994abe(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 uVar8;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar1 != 0) {
    iVar4 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34);
    uVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar4 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar7 = 0;
    do {
      plVar3 = (longlong *)param_1[2];
      uVar8 = (undefined2)
              (int)((double)*(uint *)(*(longlong *)param_1[3] +
                                      (longlong)(int)((iVar4 * iVar2 + param_2) * (uint)bVar1) * 4 +
                                     lVar7 * 4) * 2.3283064370807974e-10 * 65535.0 + 0.5);
      lVar6 = *plVar3;
      if ((uVar5 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar6 + uVar5 * 2) = uVar8;
        uVar8 = *(undefined2 *)(*plVar3 + uVar5 * 2);
        *(undefined2 *)(*plVar3 + 2 + uVar5 * 2) = uVar8;
        lVar6 = *plVar3;
      }
      *(undefined2 *)(lVar6 + 4 + uVar5 * 2) = uVar8;
      uVar5 = uVar5 + *(byte *)((longlong)param_1 + 0x21);
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 146994bb4 FUN_146994bb4 body=29 status=ok
// SIG undefined FUN_146994bb4(void)

void FUN_146994bb4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146994bd2 FUN_146994bd2 body=52 status=ok
// SIG undefined FUN_146994bd2(void)

undefined8 * FUN_146994bd2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7060;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146994c06 FUN_146994c06 body=125 status=ok
// SIG undefined FUN_146994c06(void)

undefined8 FUN_146994c06(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146994c84(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146994c84 FUN_146994c84 body=262 status=ok
// SIG undefined FUN_146994c84(void)

void FUN_146994c84(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 2;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146994d8a;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146994d92 FUN_146994d92 body=193 status=ok
// SIG undefined FUN_146994d92(void)

void FUN_146994d92(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar1 != 0) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1 + 0x10);
      uVar6 = (undefined2)
              (int)((double)*(uint *)(**(longlong **)(param_1 + 0x18) +
                                      (ulonglong)bVar1 * (longlong)param_2 * 4 + lVar5 * 4) *
                    2.3283064370807974e-10 * 65535.0 + 0.5);
      lVar4 = *plVar2;
      if ((uVar3 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar4 + uVar3 * 2) = uVar6;
        uVar6 = *(undefined2 *)(*plVar2 + uVar3 * 2);
        *(undefined2 *)(*plVar2 + 2 + uVar3 * 2) = uVar6;
        lVar4 = *plVar2;
      }
      *(undefined2 *)(lVar4 + 4 + uVar3 * 2) = uVar6;
      uVar3 = uVar3 + *(byte *)(param_1 + 0x21);
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146994e64 FUN_146994e64 body=29 status=ok
// SIG undefined FUN_146994e64(void)

void FUN_146994e64(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146994e82 FUN_146994e82 body=52 status=ok
// SIG undefined FUN_146994e82(void)

undefined8 * FUN_146994e82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7080;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146994eb6 FUN_146994eb6 body=127 status=ok
// SIG undefined FUN_146994eb6(void)

undefined8 FUN_146994eb6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146994c84(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146994f36 FUN_146994f36 body=116 status=ok
// SIG undefined FUN_146994f36(void)

void FUN_146994f36(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 in_RAX;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  byte bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  byte bVar27;
  int iVar28;
  bool bVar29;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  longlong lStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 uStack_1a8;
  char cStack_1a7;
  byte bStack_1a6;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_198;
  int *piStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **ppuStack_100;
  longlong *plStack_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 **ppuStack_e8;
  longlong *plStack_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined8 uStack_c8;
  short sStack_ba;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  int iStack_8c;
  undefined8 **ppuStack_88;
  longlong *plStack_80;
  undefined1 uStack_75;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  cVar8 = (char)param_2;
  uVar4 = *(ushort *)(param_1 + 0x7e);
  uVar25 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4 == 3 && cVar8 == '\x04');
  if (uVar4 == ((ushort)param_2 & 0xff) || uVar4 == 3 && cVar8 == '\x04') {
    if (param_3 == '\0') {
      FUN_1428ada08(param_1,param_2,uVar25 & 0xffffffff);
      return;
    }
    FUN_1428acc20(param_1,param_2,uVar25 & 0xffffffff);
    return;
  }
  if (uVar4 != 2 || cVar8 != '\x04') {
    FUN_14020fad6(param_1 + 0x58,L"Tiff, Unsupported conversion of sample data format.");
    return;
  }
  if (param_3 == '\0') {
    FUN_1428afbfa();
    return;
  }
  uStack_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  sStack_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&sStack_ba);
  sVar6 = sStack_ba;
  bVar21 = 1;
  bVar29 = sStack_ba == 2;
  if (!bVar29) {
    bVar21 = *(byte *)(param_1 + 0x7e);
  }
  iStack_70 = *(int *)(param_1 + 0x88);
  iStack_6c = *(int *)(param_1 + 0x90);
  iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar9 == 0) ||
     (iVar9 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&iStack_6c), iVar9 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  puStack_1b0 = &uStack_1c8;
  cStack_1a7 = bVar29 * '\x03' + '\x01';
  uStack_1a8 = 4;
  iStack_1a4 = iStack_70;
  iStack_1a0 = iStack_6c;
  puStack_198 = &uStack_75;
  bVar27 = 1;
  if (sVar6 == 2) {
    bVar27 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  lStack_1b8 = param_1;
  bStack_1a6 = bVar21;
  puStack_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puStack_a8 = 0;
  puStack_a8[1] = 0;
  puStack_a8[2] = 0;
  puStack_158 = (undefined1 *)0x0;
  uStack_150 = 0x400000000;
  puStack_a0 = puStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    uStack_74 = 0xff;
    if (iVar9 != 1) goto LAB_1428af138;
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    if (DVar11 != DVar12) goto LAB_1428af138;
  }
  uStack_74 = 1;
LAB_1428af138:
  uStack_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (uStack_180 < (ulonglong)((longlong)(int)((uint)bVar21 * iStack_6c * iStack_70) << 3)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar9 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if ((int)uStack_150._4_4_ < iVar9) {
      FUN_14473dbc4(auStack_178,iVar9);
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    puStack_b0 = (undefined8 *)(lVar14 + 0x310);
    piStack_190 = (int *)(lVar14 + 0xc60);
    uStack_b4 = (uint)bVar27;
    for (uStack_c8 = 0; uStack_b8 = (uint)uStack_c8 & 0xff, uStack_b8 < uStack_b4;
        uStack_c8 = CONCAT71((int7)((ulonglong)uStack_c8 >> 8),(char)uStack_c8 + '\x01')) {
      iStack_8c = 0;
      for (iVar9 = 0; lVar14 = *(longlong *)(param_1 + 0x90), iVar9 < lVar14;
          iVar9 = iVar9 + iStack_6c) {
        iVar5 = (int)lVar14 - iVar9;
        if (iStack_6c + iVar9 <= lVar14) {
          iVar5 = iStack_6c;
        }
        iVar26 = 0;
        iVar28 = 0;
LAB_1428af232:
        if ((longlong)iVar26 < *(longlong *)(param_1 + 0x88)) {
          ppuStack_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar8 = FUN_14698d83a(&puStack_a8,&ppuStack_88);
          if (cVar8 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar20 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            ppuStack_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar13 = plStack_f8;
            }
            lStack_148 = 0;
            plStack_140 = plStack_f8;
            ppuStack_88 = ppuStack_100;
            plVar7 = plStack_80;
            if ((plVar13 != plStack_80) &&
               (plStack_140 = (longlong *)0x0, plVar7 = plVar13, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar18 = (undefined8 *)*plStack_80;
                plStack_80 = plVar13;
                (*(code *)*puVar18)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar7 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                  plVar7 = plStack_80;
                }
              }
            }
            plStack_80 = plVar7;
            FUN_14698d952(&lStack_148);
            FUN_14698d9aa(&ppuStack_100);
            puVar18 = ppuStack_88[1];
            ppuStack_88[1] = (undefined8 *)((longlong)puVar18 + uStack_180);
            if ((ulonglong)((longlong)ppuStack_88[2] - (longlong)puVar18) < uStack_180) {
              FUN_14112c458();
            }
          }
          lVar14 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*ppuStack_88,iVar26,iVar9,0,
                                 (short)uStack_b8);
          if (-1 < lVar14) {
            iStack_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar26;
            if ((longlong)(iStack_70 + iVar26) <= *(longlong *)(param_1 + 0x88)) {
              iStack_f0 = iStack_70;
            }
            ppuStack_100 = &puStack_a8;
            plStack_f8 = &lStack_1b8;
            ppuStack_e8 = ppuStack_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,(char)uStack_c8);
            iStack_d0 = iStack_8c;
            puVar16 = (uint *)*puVar3;
            iStack_ec = iVar5;
            iStack_d4 = iVar28;
            if (puVar16 != (uint *)0x0) goto LAB_1428af47b;
LAB_1428af411:
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar15 = (undefined4 *)*puStack_b0;
            *puStack_b0 = 0;
            if (puVar15 == (undefined4 *)0x0) {
              puVar15 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar15 = 0xffffffff;
            *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            FUN_140217a48(puVar3);
            puVar16 = (uint *)*puVar3;
LAB_1428af47b:
            uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
            uVar23 = puVar16[0x12];
            do {
              puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
              if (puVar18 + 0x20 <= puVar16 + 0x4000) {
                *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
                puVar16[0x12] = uVar23 + 1;
                uStack_188 = uVar25;
                puStack_68 = puVar18;
                FUN_1447247dc(puVar18,0);
                puVar18 = puStack_68;
                *puStack_68 = &PTR_FUN_149ef6718;
                lStack_148 = 0;
                plStack_138 = (longlong *)0x0;
                puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar17 = &PTR_LAB_149ef7100;
                puVar17[1] = ppuStack_100;
                puVar17[2] = plStack_f8;
                puVar17[3] = CONCAT44(iStack_ec,iStack_f0);
                puVar17[4] = ppuStack_e8;
                puVar17[5] = plStack_e0;
                ppuStack_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar17 + 7) = iStack_d0;
                puVar17[6] = CONCAT44(iStack_d4,uStack_d8);
                if (puVar17 + 1 == (longlong *)0x0) {
                  puVar18[0x16] = lStack_148;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
                  if (lStack_148 != 0) goto LAB_1428af607;
                }
                else {
                  puVar18[0x16] = &LAB_14699562a;
                  puVar18[0x18] = puVar17;
                  *(undefined4 *)(puVar18 + 0x1c) = uStack_118;
                  *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar18 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar18 + 0x1a) = uStack_128;
                  *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar18 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_11c;
LAB_1428af607:
                  lStack_148 = 0;
                }
                plStack_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*piStack_190 != 2)) {
                  uVar25 = 0x8ff;
                  if (*piStack_190 != 1) goto LAB_1428af63a;
                  DVar11 = FUN_140ad26c0();
                  DVar12 = GetCurrentThreadId();
                  uVar23 = (uint)(DVar11 != DVar12) * 0x200 + 0x6ff;
                  uVar25 = (ulonglong)uVar23;
                  *(uint *)(puStack_68 + 0x1e) = uVar23;
                  puVar18 = puStack_68;
                  if (lStack_148 != 0) {
                    plVar20 = plStack_138;
                    if (plStack_138 == (longlong *)0x0) {
                      plVar20 = (longlong *)&uStack_128;
                    }
                    (**(code **)(*plVar20 + 0x10))();
                    uVar25 = (ulonglong)*(uint *)(puStack_68 + 0x1e);
                    puVar18 = puStack_68;
                  }
                }
                else {
                  uVar25 = 0x6ff;
LAB_1428af63a:
                  *(int *)(puVar18 + 0x1e) = (int)uVar25;
                }
                uVar23 = (uint)uVar25;
                if ((uVar23 & 0xff) == 0xff) {
                  uVar10 = (uint)(uVar25 >> 10) & 3;
                  iVar24 = 0;
                  if ((uVar23 >> 9 & 1) == 0 || uVar10 < 2) {
                    uVar22 = (&DAT_149e38edc)[uVar10];
                  }
                  else {
                    uVar22 = 2;
                  }
                }
                else {
                  iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                  uVar22 = 5;
                }
                FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
                if (puVar18 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                }
                lStack_148 = CONCAT71(lStack_148._1_7_,1);
                FUN_1447439e4(puVar18,&lStack_148);
                uVar25 = uStack_150;
                iVar24 = (int)uStack_150;
                uVar23 = (int)uStack_150 + 1;
                uStack_150 = CONCAT44(uStack_150._4_4_,uVar23);
                if (uStack_150._4_4_ < uVar23) {
                  FUN_14476a5c8(auStack_178,uVar25 & 0xffffffff);
                }
                puVar19 = puStack_158;
                if (puStack_158 == (undefined1 *)0x0) {
                  puVar19 = auStack_178;
                }
                *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = puStack_68;
                FUN_14698d952(&ppuStack_e8);
                FUN_14698d952(&ppuStack_88);
                iVar26 = iVar26 + iStack_70;
                iVar28 = iVar28 + 1;
                goto LAB_1428af232;
              }
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar10 = *puVar16;
              *puVar16 = *puVar16 + uVar23 + 1;
              UNLOCK();
              if ((uVar10 ^ uVar23) != 0xffffffff) goto LAB_1428af411;
              puVar16 = (uint *)*puVar3;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar3 = puVar16;
              uVar25 = (longlong)puVar16 + 0x67;
              uVar23 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&ppuStack_88);
          goto LAB_1428af85b;
        }
        iStack_8c = iStack_8c + 1;
      }
    }
  }
LAB_1428af85b:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,auStack_178,uStack_74);
  FUN_14588b8d6(auStack_178);
  while (puVar3 = puStack_a0, puStack_a0 != (undefined8 *)0x0) {
    puVar18 = puStack_a0 + 1;
    puStack_a0 = (undefined8 *)*puStack_a0;
    FUN_14698d952(puVar18);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 146994fba FUN_146994fba body=29 status=ok
// SIG undefined FUN_146994fba(void)

void FUN_146994fba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146994fd8 FUN_146994fd8 body=52 status=ok
// SIG undefined FUN_146994fd8(void)

undefined8 * FUN_146994fd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef70a0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699500c FUN_14699500c body=125 status=ok
// SIG undefined FUN_14699500c(void)

undefined8 FUN_14699500c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699508a(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699508a FUN_14699508a body=288 status=ok
// SIG undefined FUN_14699508a(void)

void FUN_14699508a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_1469951aa;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 1469952a8 FUN_1469952a8 body=29 status=ok
// SIG undefined FUN_1469952a8(void)

void FUN_1469952a8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1469952c6 FUN_1469952c6 body=52 status=ok
// SIG undefined FUN_1469952c6(void)

undefined8 * FUN_1469952c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef70c0;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469952fa FUN_1469952fa body=125 status=ok
// SIG undefined FUN_1469952fa(void)

undefined8 FUN_1469952fa(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146995378(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146995378 FUN_146995378 body=262 status=ok
// SIG undefined FUN_146995378(void)

void FUN_146995378(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699547e;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 14699553c FUN_14699553c body=29 status=ok
// SIG undefined FUN_14699553c(void)

void FUN_14699553c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699555a FUN_14699555a body=52 status=ok
// SIG undefined FUN_14699555a(void)

undefined8 * FUN_14699555a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef70e0;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699558e FUN_14699558e body=127 status=ok
// SIG undefined FUN_14699558e(void)

undefined8 FUN_14699558e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146995378(param_1[2],*(undefined4 *)(*param_1 + 0x88),*(undefined4 *)(*param_1 + 0x90),
                param_1[3],(char)param_1[5],0);
  puVar2 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699563a FUN_14699563a body=29 status=ok
// SIG undefined FUN_14699563a(void)

void FUN_14699563a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146995658 FUN_146995658 body=52 status=ok
// SIG undefined FUN_146995658(void)

undefined8 * FUN_146995658(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7100;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699568c FUN_14699568c body=125 status=ok
// SIG undefined FUN_14699568c(void)

undefined8 FUN_14699568c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_14699570a(param_1[1],*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14),
                param_1[3],*(undefined1 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6));
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[3];
  lVar3 = param_1[4];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14699570a FUN_14699570a body=288 status=ok
// SIG undefined FUN_14699570a(void)

void FUN_14699570a(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar3 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  bVar1 = *(byte *)(param_1 + 2);
  lVar5 = param_1[3];
  lVar4 = *(longlong *)(lVar3 + 0x88);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_7;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_14699582a;
  local_80 = lVar3;
  local_68 = &local_b0;
  local_58 = ((longlong)iVar2 * (longlong)param_6 + param_7 * lVar4 * (longlong)(int)lVar5) *
             (ulonglong)bVar1;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146995832 FUN_146995832 body=250 status=ok
// SIG undefined FUN_146995832(void)

void FUN_146995832(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 uVar9;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x22);
  if (bVar2 != 0) {
    iVar5 = param_2 / (int)param_1[6];
    param_2 = param_2 % (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34);
    uVar6 = (ulonglong)*(byte *)((longlong)param_1 + 0x23) +
            (longlong)param_2 * (ulonglong)*(byte *)(param_1 + 4) + param_1[5] +
            (longlong)iVar5 * (ulonglong)*(byte *)(param_1 + 4) * *(longlong *)(*param_1 + 0x88);
    lVar8 = 0;
    do {
      plVar4 = (longlong *)param_1[2];
      uVar1 = *(undefined8 *)
               (*(longlong *)param_1[3] +
                (longlong)(int)((iVar5 * iVar3 + param_2) * (uint)bVar2) * 8 + lVar8 * 8);
      uVar9 = (undefined2)
              (int)((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                    ((double)CONCAT44(0x45300000,(int)((ulonglong)uVar1 >> 0x20)) -
                    1.9342813113834067e+25)) * 5.421010862427522e-20 * 65535.0 + 0.5);
      lVar7 = *plVar4;
      if ((uVar6 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar7 + uVar6 * 2) = uVar9;
        uVar9 = *(undefined2 *)(*plVar4 + uVar6 * 2);
        *(undefined2 *)(*plVar4 + 2 + uVar6 * 2) = uVar9;
        lVar7 = *plVar4;
      }
      *(undefined2 *)(lVar7 + 4 + uVar6 * 2) = uVar9;
      uVar6 = uVar6 + *(byte *)((longlong)param_1 + 0x21);
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < (uint)*(byte *)((longlong)param_1 + 0x22));
  }
  return;
}



// FUNCTION 14699593c FUN_14699593c body=29 status=ok
// SIG undefined FUN_14699593c(void)

void FUN_14699593c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14699595a FUN_14699595a body=52 status=ok
// SIG undefined FUN_14699595a(void)

undefined8 * FUN_14699595a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7120;
  FUN_14698d952(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14699598e FUN_14699598e body=125 status=ok
// SIG undefined FUN_14699598e(void)

undefined8 FUN_14699598e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_146995a0c(param_1[1],*(undefined4 *)(*param_1 + 0x88),(int)param_1[3],param_1[4],
                *(undefined1 *)((longlong)param_1 + 0x34),(int)param_1[6]);
  puVar2 = (undefined8 *)param_1[2];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = param_1[4];
  lVar3 = param_1[5];
  puVar4[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 146995a0c FUN_146995a0c body=262 status=ok
// SIG undefined FUN_146995a0c(void)

void FUN_146995a0c(longlong *param_1,int param_2,int param_3,undefined8 *param_4,undefined1 param_5,
                  int param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  
  lVar2 = *param_1;
  local_b0 = *param_4;
  local_a8 = (ulonglong)param_4[1] >> 3;
  lVar3 = *(longlong *)(lVar2 + 0x88);
  bVar1 = *(byte *)(param_1 + 2);
  FUN_144a61b4f();
  local_98 = &local_80;
  local_78 = param_6;
  local_70 = param_1[1];
  local_60 = (undefined1)param_1[2];
  local_5f = *(undefined1 *)((longlong)param_1 + 0x11);
  local_5e = *(undefined1 *)((longlong)param_1 + 0x12);
  local_5d = param_5;
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = param_1[4];
  local_90 = 0;
  local_88 = 0;
  local_a0 = &LAB_146995b12;
  local_80 = lVar2;
  local_68 = &local_b0;
  local_58 = (ulonglong)bVar1 * param_6 * lVar3;
  local_50 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",param_3 * param_2,1);
  return;
}



// FUNCTION 146995b1a FUN_146995b1a body=214 status=ok
// SIG undefined FUN_146995b1a(void)

void FUN_146995b1a(longlong param_1,int param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 uVar7;
  
  bVar2 = *(byte *)(param_1 + 0x22);
  if ((ulonglong)bVar2 != 0) {
    uVar4 = (ulonglong)*(byte *)(param_1 + 0x23) +
            (ulonglong)*(byte *)(param_1 + 0x20) * (longlong)param_2 + *(longlong *)(param_1 + 0x28)
    ;
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(param_1 + 0x10);
      uVar1 = *(undefined8 *)
               (**(longlong **)(param_1 + 0x18) + (ulonglong)bVar2 * (longlong)param_2 * 8 +
               lVar6 * 8);
      uVar7 = (undefined2)
              (int)((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                    ((double)CONCAT44(0x45300000,(int)((ulonglong)uVar1 >> 0x20)) -
                    1.9342813113834067e+25)) * 5.421010862427522e-20 * 65535.0 + 0.5);
      lVar5 = *plVar3;
      if ((uVar4 & 0x8000000000000001) != 1) {
        *(undefined2 *)(lVar5 + uVar4 * 2) = uVar7;
        uVar7 = *(undefined2 *)(*plVar3 + uVar4 * 2);
        *(undefined2 *)(*plVar3 + 2 + uVar4 * 2) = uVar7;
        lVar5 = *plVar3;
      }
      *(undefined2 *)(lVar5 + 4 + uVar4 * 2) = uVar7;
      uVar4 = uVar4 + *(byte *)(param_1 + 0x21);
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < (uint)*(byte *)(param_1 + 0x22));
  }
  return;
}



// FUNCTION 146995c00 FUN_146995c00 body=29 status=ok
// SIG undefined FUN_146995c00(void)

void FUN_146995c00(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146995c1e FUN_146995c1e body=52 status=ok
// SIG undefined FUN_146995c1e(void)

undefined8 * FUN_146995c1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149ef7140;
  FUN_14698d952(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


