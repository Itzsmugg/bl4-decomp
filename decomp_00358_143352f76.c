// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143352f76 FUN_143352f76 body=29 status=ok
// SIG undefined FUN_143352f76(void)

undefined8 FUN_143352f76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143352fe6 FUN_143352fe6 body=12 status=ok
// SIG undefined FUN_143352fe6(void)

void FUN_143352fe6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143352fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143352ff2 FUN_143352ff2 body=83 status=ok
// SIG undefined FUN_143352ff2(void)

undefined8 * FUN_143352ff2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a570820;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143353078 FUN_143353078 body=29 status=ok
// SIG undefined FUN_143353078(void)

undefined8 FUN_143353078(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433530e2 FUN_1433530e2 body=12 status=ok
// SIG undefined FUN_1433530e2(void)

void FUN_1433530e2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433530eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433530ee FUN_1433530ee body=83 status=ok
// SIG undefined FUN_1433530ee(void)

undefined8 * FUN_1433530ee(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a570860;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143353142 FUN_143353142 body=165 status=ok
// SIG undefined FUN_143353142(void)

void FUN_143353142(undefined4 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_1[2] != 0) && (uVar1 = param_1[1], -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
  {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == param_1[2])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = 0;
      if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
        lVar3 = DAT_14cace0c0;
      }
      plVar4 = (longlong *)FUN_147973140(lVar3,*param_1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x170))(plVar4,lVar2,param_1 + 4,param_1 + 0x18,param_1 + 0x2c);
      }
    }
  }
  return;
}



// FUNCTION 1433531f2 FUN_1433531f2 body=29 status=ok
// SIG undefined FUN_1433531f2(void)

void FUN_1433531f2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143353210 FUN_143353210 body=156 status=ok
// SIG undefined FUN_143353210(void)

undefined8 * FUN_143353210(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570880;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433532ac FUN_1433532ac body=106 status=ok
// SIG undefined FUN_1433532ac(void)

void FUN_1433532ac(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
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
    if (*param_1 != 0) {
      FUN_1477d913e(*param_1,param_1 + 2,param_1 + 0xc,param_1 + 0x16);
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
                    /* WARNING: Could not recover jumptable at 0x0001433532f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143353316 FUN_143353316 body=289 status=ok
// SIG undefined FUN_143353316(void)

undefined8 * FUN_143353316(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x108,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a5708a0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  FUN_1477ce3e2(puVar2 + 3,param_1 + 0x18);
  puVar2[0x11] = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x9c) = 0;
  puVar2[0x15] = 0;
  *(undefined4 *)(puVar2 + 0x16) = 0;
  FUN_1477ce3e2(puVar2 + 0xd,param_1 + 0x68);
  puVar2[0x1b] = 0;
  *(undefined4 *)(puVar2 + 0x1c) = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0xec) = 0;
  puVar2[0x1f] = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  FUN_1477ce3e2(puVar2 + 0x17,param_1 + 0xb8);
  return puVar2 + 1;
}



// FUNCTION 14335343e FUN_14335343e body=29 status=ok
// SIG undefined FUN_14335343e(void)

void FUN_14335343e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14335345c FUN_14335345c body=180 status=ok
// SIG undefined FUN_14335345c(void)

undefined8 * FUN_14335345c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5708a0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353510 FUN_143353510 body=163 status=ok
// SIG undefined FUN_143353510(void)

void FUN_143353510(undefined4 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_1[2] != 0) && (uVar1 = param_1[1], -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
  {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == param_1[2])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = 0;
      if ((DAT_14cace0c0 != 0) && (*(int *)(DAT_14cace0c0 + 400) == 2)) {
        lVar3 = DAT_14cace0c0;
      }
      plVar4 = (longlong *)FUN_147973140(lVar3,*param_1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x180))(plVar4,lVar2,param_1[3],param_1[4],param_1[5]);
      }
    }
  }
  return;
}



// FUNCTION 1433535ca FUN_1433535ca body=29 status=ok
// SIG undefined FUN_1433535ca(void)

undefined8 FUN_1433535ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353614 FUN_143353614 body=93 status=ok
// SIG undefined FUN_143353614(void)

undefined8 * FUN_143353614(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a5708e0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar2 + 1;
}



// FUNCTION 143353678 FUN_143353678 body=29 status=ok
// SIG undefined FUN_143353678(void)

void FUN_143353678(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143353696 FUN_143353696 body=83 status=ok
// SIG undefined FUN_143353696(void)

undefined8 * FUN_143353696(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5708e0;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143353718 FUN_143353718 body=29 status=ok
// SIG undefined FUN_143353718(void)

undefined8 FUN_143353718(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433537b6 FUN_1433537b6 body=29 status=ok
// SIG undefined FUN_1433537b6(void)

undefined8 FUN_1433537b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353806 FUN_143353806 body=29 status=ok
// SIG undefined FUN_143353806(void)

undefined8 FUN_143353806(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353852 FUN_143353852 body=29 status=ok
// SIG undefined FUN_143353852(void)

undefined8 FUN_143353852(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335389e FUN_14335389e body=29 status=ok
// SIG undefined FUN_14335389e(void)

undefined8 FUN_14335389e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433538ea FUN_1433538ea body=29 status=ok
// SIG undefined FUN_1433538ea(void)

undefined8 FUN_1433538ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353936 FUN_143353936 body=29 status=ok
// SIG undefined FUN_143353936(void)

undefined8 FUN_143353936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335397a FUN_14335397a body=29 status=ok
// SIG undefined FUN_14335397a(void)

void FUN_14335397a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143353998 FUN_143353998 body=29 status=ok
// SIG undefined FUN_143353998(void)

undefined8 FUN_143353998(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433539dc FUN_1433539dc body=29 status=ok
// SIG undefined FUN_1433539dc(void)

void FUN_1433539dc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433539fa FUN_1433539fa body=29 status=ok
// SIG undefined FUN_1433539fa(void)

undefined8 FUN_1433539fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353a4a FUN_143353a4a body=29 status=ok
// SIG undefined FUN_143353a4a(void)

undefined8 FUN_143353a4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353a96 FUN_143353a96 body=29 status=ok
// SIG undefined FUN_143353a96(void)

undefined8 FUN_143353a96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353ade FUN_143353ade body=29 status=ok
// SIG undefined FUN_143353ade(void)

void FUN_143353ade(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143353afc FUN_143353afc body=57 status=ok
// SIG undefined FUN_143353afc(void)

undefined8 * FUN_143353afc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570a60;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353b5c FUN_143353b5c body=29 status=ok
// SIG undefined FUN_143353b5c(void)

void FUN_143353b5c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143353b7a FUN_143353b7a body=29 status=ok
// SIG undefined FUN_143353b7a(void)

undefined8 FUN_143353b7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353b98 FUN_143353b98 body=872 status=ok
// SIG undefined FUN_143353b98(void)

void FUN_143353b98(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = (longlong *)*param_1;
  lVar4 = param_1[2];
  if ((char)lVar4 == '\x01') {
    lVar12 = *(longlong *)plVar10[0x169];
    plVar11 = (longlong *)((longlong *)plVar10[0x169])[1];
    if (plVar11 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      iVar6 = (int)plVar11[1];
      do {
        plVar9 = (longlong *)0x0;
        if (iVar6 == 0) break;
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar13 = iVar6 == iVar5;
        if (bVar13) {
          *(int *)(plVar11 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
        plVar9 = plVar11;
      } while (!bVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    if (plVar9 == (longlong *)0x0) {
      lVar12 = 0;
    }
LAB_143353cd0:
    if (((char)lVar4 == '\0') && (local_38 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  else {
    if ((int)param_1[3] == 0) {
LAB_143353efe:
      uVar8 = 0;
    }
    else {
      uVar3 = *(uint *)((longlong)param_1 + 0x14);
      uVar8 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != (int)param_1[3] || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))
           )) goto LAB_143353efe;
        uVar8 = *puVar7;
      }
    }
    FUN_1433438ce(plVar10,&local_40,uVar8);
    if (local_38 != (longlong *)0x0) {
      iVar6 = (int)local_38[1];
      do {
        if (iVar6 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)local_38[1];
        bVar13 = iVar6 == iVar5;
        if (bVar13) {
          *(int *)(local_38 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
        plVar9 = local_38;
      } while (!bVar13);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      lVar12 = local_40;
      local_38 = (longlong *)0x0;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        lVar12 = 0;
      }
      else {
        local_40 = 0;
      }
      goto LAB_143353cd0;
    }
    plVar9 = (longlong *)0x0;
    lVar12 = 0;
  }
  if (((char)param_1[2] == '\0') && (lVar12 == 0)) {
    if (((int)param_1[3] == 0) ||
       ((((uVar3 = *(uint *)((longlong)param_1 + 0x14), (int)uVar3 < 0 ||
          (DAT_14c9647dc <= (int)uVar3)) ||
         (puVar7 = (undefined8 *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         puVar7 == (undefined8 *)0x0)) ||
        ((*(int *)(puVar7 + 2) != (int)param_1[3] || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))))
       ) goto LAB_143353d46;
    if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
      uVar8 = *puVar7;
    }
    else {
      uVar8 = 0;
    }
    (**(code **)(*plVar10 + 0x78))(plVar10,uVar8,1);
    if ((int)param_1[3] == 0) {
LAB_143353f06:
      uVar8 = 0;
    }
    else {
      uVar3 = *(uint *)((longlong)param_1 + 0x14);
      uVar8 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != (int)param_1[3] || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))
           )) goto LAB_143353f06;
        uVar8 = *puVar7;
      }
    }
    FUN_1433438ce(plVar10,&local_50,uVar8);
    if (local_48 == (longlong *)0x0) {
LAB_143353e74:
      plVar10 = (longlong *)0x0;
      lVar12 = 0;
    }
    else {
      iVar6 = (int)local_48[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)local_48[1];
        bVar13 = iVar6 == iVar5;
        if (bVar13) {
          *(int *)(local_48 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
        plVar10 = local_48;
      } while (!bVar13);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      lVar12 = local_50;
      local_48 = (longlong *)0x0;
      if (plVar10 == (longlong *)0x0) goto LAB_143353e74;
      local_50 = 0;
    }
    if (plVar10 == plVar9) {
      if (plVar9 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        plVar11 = plVar9;
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar2 = plVar10;
          plVar10 = plVar9;
          goto joined_r0x000143353eb9;
        }
      }
    }
    else {
      plVar11 = plVar10;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar2 = plVar9;
joined_r0x000143353eb9:
          plVar11 = plVar10;
          if (iVar6 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
      }
    }
    plVar9 = plVar11;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  if (lVar12 != 0) {
    FUN_1477d854e(lVar12,param_1[1]);
  }
LAB_143353d46:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143353f20 FUN_143353f20 body=29 status=ok
// SIG undefined FUN_143353f20(void)

void FUN_143353f20(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143353f3e FUN_143353f3e body=29 status=ok
// SIG undefined FUN_143353f3e(void)

undefined8 FUN_143353f3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143353f5c FUN_143353f5c body=745 status=ok
// SIG undefined FUN_143353f5c(void)

void FUN_143353f5c(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar10 = (longlong *)*param_1;
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
LAB_143354215:
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 5);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0x2c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143354215;
      uVar6 = *puVar5;
    }
  }
  FUN_1433438ce(plVar10,&local_48,uVar6);
  if (local_40 == (longlong *)0x0) {
LAB_143354028:
    bVar11 = true;
    plVar8 = (longlong *)0x0;
LAB_14335402d:
    if (((((*(int *)((longlong)param_1 + 0x2c) == 0) ||
          (uVar2 = *(uint *)(param_1 + 5), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
        ((puVar5 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         puVar5 == (undefined8 *)0x0 || (*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0x2c))
         ))) || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_1433541b2;
    if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
      uVar6 = *puVar5;
    }
    else {
      uVar6 = 0;
    }
    (**(code **)(*plVar10 + 0x78))(plVar10,uVar6,1);
    if (*(int *)((longlong)param_1 + 0x2c) == 0) {
LAB_14335424d:
      uVar6 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 5);
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0x2c) ||
            ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_14335424d;
        uVar6 = *puVar5;
      }
    }
    FUN_1433438ce(plVar10,&local_48,uVar6);
    if (local_40 == (longlong *)0x0) {
LAB_143354143:
      plVar7 = (longlong *)0x0;
      lVar9 = 0;
    }
    else {
      iVar4 = (int)local_40[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_40[1];
        bVar12 = iVar4 == iVar3;
        if (bVar12) {
          *(int *)(local_40 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_40;
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
      lVar9 = local_48;
      local_40 = (longlong *)0x0;
      if (plVar7 == (longlong *)0x0) goto LAB_143354143;
      local_48 = 0;
    }
    plVar10 = (longlong *)0x0;
    if (plVar7 == plVar8) {
      plVar10 = plVar7;
    }
    if (!bVar11 && plVar7 != plVar8) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x00014335418c:
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    else if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar8 = plVar7;
        goto joined_r0x00014335418c;
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    plVar8 = plVar7;
    if (lVar9 == 0) goto LAB_1433541b2;
  }
  else {
    iVar4 = (int)local_40[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_40[1];
      bVar11 = iVar4 == iVar3;
      if (bVar11) {
        *(int *)(local_40 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_40;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_143354028;
    lVar9 = local_48;
    if (local_48 == 0) {
      bVar11 = false;
      plVar8 = plVar7;
      goto LAB_14335402d;
    }
  }
  local_48 = param_1[1];
  local_40 = (longlong *)param_1[2];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_1477d8636(lVar9,&local_48);
  plVar8 = plVar7;
LAB_1433541b2:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143354266 FUN_143354266 body=29 status=ok
// SIG undefined FUN_143354266(void)

void FUN_143354266(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143354284 FUN_143354284 body=97 status=ok
// SIG undefined FUN_143354284(void)

undefined8 * FUN_143354284(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a570ac0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433542e6 FUN_1433542e6 body=435 status=ok
// SIG undefined FUN_1433542e6(void)

void FUN_1433542e6(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = param_1[2];
  if ((char)lVar4 == '\x01') {
    plVar8 = *(longlong **)(*param_1 + 0xb48);
    lVar7 = *plVar8;
    plVar3 = (longlong *)plVar8[1];
    if (plVar3 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar6 = (int)plVar3[1];
      do {
        plVar8 = (longlong *)0x0;
        if (iVar6 == 0) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar11 = iVar6 == iVar5;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
        plVar8 = plVar3;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (plVar8 == (longlong *)0x0) {
      lVar7 = 0;
    }
  }
  else {
    if ((int)param_1[3] == 0) {
LAB_1433544a4:
      uVar9 = 0;
    }
    else {
      uVar2 = *(uint *)((longlong)param_1 + 0x14);
      uVar9 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(int *)(puVar10 + 2) != (int)param_1[3] ||
            ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1433544a4;
        uVar9 = *puVar10;
      }
    }
    FUN_1433438ce(*param_1,&local_38,uVar9);
    if (local_30 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      lVar7 = 0;
      goto LAB_143354436;
    }
    iVar6 = (int)local_30[1];
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_30[1];
      bVar11 = iVar6 == iVar5;
      if (bVar11) {
        *(int *)(local_30 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar8 = local_30;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    lVar7 = local_38;
    local_30 = (longlong *)0x0;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      lVar7 = 0;
    }
    else {
      local_38 = 0;
    }
  }
  if (((char)lVar4 == '\0') && (local_30 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
LAB_143354436:
  if (lVar7 != 0) {
    FUN_1477d86fa(lVar7,param_1[1]);
  }
  if (plVar8 != (longlong *)0x0) {
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433544b6 FUN_1433544b6 body=29 status=ok
// SIG undefined FUN_1433544b6(void)

void FUN_1433544b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433544d4 FUN_1433544d4 body=29 status=ok
// SIG undefined FUN_1433544d4(void)

undefined8 FUN_1433544d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433544f2 FUN_1433544f2 body=273 status=ok
// SIG undefined FUN_1433544f2(void)

void FUN_1433544f2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    uVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143354566;
    puVar8 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar8 != (undefined8 *)0x0) &&
       ((*(int *)(puVar8 + 2) == *(int *)((longlong)param_1 + 0xc) &&
        ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
      uVar7 = *puVar8;
      goto LAB_143354566;
    }
  }
  uVar7 = 0;
LAB_143354566:
  FUN_1433438ce(*param_1,&local_28,uVar7);
  if (local_20 != (longlong *)0x0) {
    iVar5 = (int)local_20[1];
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_20[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(local_20 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_1477d7a12(local_28,param_1[2]);
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14335461e FUN_14335461e body=29 status=ok
// SIG undefined FUN_14335461e(void)

void FUN_14335461e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14335463c FUN_14335463c body=57 status=ok
// SIG undefined FUN_14335463c(void)

undefined8 * FUN_14335463c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570b00;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433546b2 FUN_1433546b2 body=29 status=ok
// SIG undefined FUN_1433546b2(void)

undefined8 FUN_1433546b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433546e4 FUN_1433546e4 body=93 status=ok
// SIG undefined FUN_1433546e4(void)

void FUN_1433546e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a570c50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143354742 FUN_143354742 body=93 status=ok
// SIG undefined FUN_143354742(void)

void FUN_143354742(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a570c50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1433547a0 FUN_1433547a0 body=126 status=ok
// SIG undefined FUN_1433547a0(void)

void FUN_1433547a0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a570c50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014335480f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143354828 FUN_143354828 body=20 status=ok
// SIG undefined FUN_143354828(void)

undefined1 FUN_143354828(longlong param_1)

{
  FUN_14335483c(param_1 + 0x18);
  return 1;
}



// FUNCTION 14335483c FUN_14335483c body=203 status=ok
// SIG undefined FUN_14335483c(void)

void FUN_14335483c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  undefined *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_1;
  iVar3 = 0x10000;
  do {
    local_88[0] = (undefined *)0x0;
    local_78 = (longlong *)0x0;
    local_78 = (longlong *)FUN_14001cc68(0x408,8);
    *local_78 = (longlong)&PTR_FUN_14a570ce0;
    if (local_78 != (longlong *)&DAT_fffffffffffffff8) {
      local_88[0] = &DAT_143354908;
    }
    FUN_14334e164(uVar1,local_88,"SpamNopsCmd() -- Console command",0);
    if (local_88[0] != (undefined *)0x0) {
      plVar2 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar2 = local_68;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335490a FUN_14335490a body=68 status=ok
// SIG undefined FUN_14335490a(void)

void FUN_14335490a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x408,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a570ce0;
  memcpy(puVar1 + 1,(void *)(param_1 + 8),0x400);
  return;
}



// FUNCTION 143354954 FUN_143354954 body=29 status=ok
// SIG undefined FUN_143354954(void)

void FUN_143354954(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143354972 FUN_143354972 body=29 status=ok
// SIG undefined FUN_143354972(void)

undefined8 FUN_143354972(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143354990 FUN_143354990 body=29 status=ok
// SIG undefined FUN_143354990(void)

undefined8 FUN_143354990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433549c2 FUN_1433549c2 body=93 status=ok
// SIG undefined FUN_1433549c2(void)

void FUN_1433549c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a570d00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143354a20 FUN_143354a20 body=93 status=ok
// SIG undefined FUN_143354a20(void)

void FUN_143354a20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a570d00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143354a7e FUN_143354a7e body=126 status=ok
// SIG undefined FUN_143354a7e(void)

void FUN_143354a7e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a570d00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143354aed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143354b06 FUN_143354b06 body=20 status=ok
// SIG undefined FUN_143354b06(void)

undefined1 FUN_143354b06(longlong param_1)

{
  FUN_143354b1a(param_1 + 0x18);
  return 1;
}



// FUNCTION 143354b1a FUN_143354b1a body=142 status=ok
// SIG undefined FUN_143354b1a(void)

void FUN_143354b1a(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149e01e20;
  local_30 = &DAT_143354baa;
  local_58[0] = FUN_140d11fbe;
  FUN_14334e164(*param_1,local_58,"ChokeCommandQueue() -- Console command",0);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143354bac FUN_143354bac body=29 status=ok
// SIG undefined FUN_143354bac(void)

undefined8 FUN_143354bac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143354bde FUN_143354bde body=93 status=ok
// SIG undefined FUN_143354bde(void)

void FUN_143354bde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a570d90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143354c3c FUN_143354c3c body=93 status=ok
// SIG undefined FUN_143354c3c(void)

void FUN_143354c3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a570d90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143354c9a FUN_143354c9a body=126 status=ok
// SIG undefined FUN_143354c9a(void)

void FUN_143354c9a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a570d90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143354d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143354d22 FUN_143354d22 body=20 status=ok
// SIG undefined FUN_143354d22(void)

undefined1 FUN_143354d22(longlong param_1)

{
  FUN_143354d36(param_1 + 0x18);
  return 1;
}



// FUNCTION 143354d36 FUN_143354d36 body=132 status=ok
// SIG undefined FUN_143354d36(void)

void FUN_143354d36(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149e01e20;
  local_30 = &DAT_143354dbc;
  local_58[0] = FUN_140d11fbe;
  FUN_1477c64aa(*param_1,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143354dbe FUN_143354dbe body=29 status=ok
// SIG undefined FUN_143354dbe(void)

undefined8 FUN_143354dbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143354df0 FUN_143354df0 body=93 status=ok
// SIG undefined FUN_143354df0(void)

void FUN_143354df0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a570e30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143354e4e FUN_143354e4e body=93 status=ok
// SIG undefined FUN_143354e4e(void)

void FUN_143354e4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a570e30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143354eac FUN_143354eac body=126 status=ok
// SIG undefined FUN_143354eac(void)

void FUN_143354eac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a570e30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143354f1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143354f34 FUN_143354f34 body=20 status=ok
// SIG undefined FUN_143354f34(void)

undefined1 FUN_143354f34(longlong param_1)

{
  FUN_143350046(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143354f48 FUN_143354f48 body=107 status=ok
// SIG undefined FUN_143354f48(void)

void FUN_143354f48(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *(undefined4 *)param_1;
  uStack_1c = *(undefined4 *)((longlong)param_1 + 4);
  uStack_18 = *(undefined4 *)(param_1 + 1);
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  local_38 = 0;
  local_28 = &PTR_LAB_14a570ee0;
  local_48 = FUN_143355010;
  FUN_1415826cc();
  FUN_1477cb5a3(0,0);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143354fca FUN_143354fca body=69 status=ok
// SIG undefined FUN_143354fca(void)

undefined8 * FUN_143354fca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570ec0;
  FUN_1477cb5a3(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143355010 FUN_143355010 body=119 status=ok
// SIG undefined FUN_143355010(void)

void FUN_143355010(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)(int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    puVar2 = puVar1 + (longlong)(int)param_1[1] * 2;
    do {
      local_30 = *puVar1;
      local_28 = puVar1[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      FUN_147d34a50(&local_30);
      puVar1 = puVar1 + 2;
    } while (puVar1 != puVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335509e FUN_14335509e body=69 status=ok
// SIG undefined FUN_14335509e(void)

undefined8 * FUN_14335509e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a570ee0;
  FUN_1477cb5a3(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433550e4 FUN_1433550e4 body=3654 status=ok
// SIG undefined FUN_1433550e4(void)

void FUN_1433550e4(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong *plVar20;
  uint *puVar21;
  size_t _Size;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong local_130;
  uint local_128 [3];
  uint local_11c;
  longlong *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_150 = *param_1;
  lVar19 = param_1[2];
  plVar24 = (longlong *)((longlong)(int)param_1[1] * 0x540 + *(longlong *)(local_150 + 0x118));
  lVar25 = param_1[3];
  if (lVar25 != 0) {
    LOCK();
    *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
    UNLOCK();
  }
  plVar20 = (longlong *)plVar24[1];
  *plVar24 = lVar19;
  plVar24[1] = lVar25;
  local_158 = param_1;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  FUN_1477c3fa2(*plVar24);
  FUN_1477c47e0(*plVar24);
  plVar17 = local_158;
  bVar14 = *(byte *)((longlong)plVar24 + 0x521);
  *(byte *)(plVar24 + 0xa4) = *(byte *)(plVar24 + 0xa4) & 2 | *(byte *)(local_158 + 0x56) | 4;
  *(byte *)((longlong)plVar24 + 0x521) = bVar14 & 0x3d | 2;
  bVar14 = bVar14 & 0x39 | 2 | *(char *)((longlong)local_158 + 0x2b2) << 2;
  *(byte *)((longlong)plVar24 + 0x521) = bVar14;
  *(byte *)((longlong)plVar24 + 0x521) = bVar14 & 0x37 | *(char *)((longlong)local_158 + 0x2b3) << 3
  ;
  bVar14 = *(byte *)((longlong)plVar24 + 0x522) & 0xf7 | (char)local_158[0x57] << 3;
  *(byte *)((longlong)plVar24 + 0x522) = bVar14;
  *(undefined4 *)(plVar24 + 0xa6) = *(undefined4 *)((longlong)local_158 + 700);
  plVar24[0xa7] = local_158[0x55];
  *(byte *)((longlong)plVar24 + 0x522) = bVar14 & 0xef | *(char *)((longlong)local_158 + 0x2b9) << 4
  ;
  plVar20 = (longlong *)local_158[4];
  plVar24[2] = (longlong)plVar20;
  (**(code **)(*plVar20 + 8))();
  *(int *)((longlong)plVar24 + 0x524) = (int)plVar17[0x11];
  *(undefined4 *)((longlong)plVar24 + 0x52c) = *(undefined4 *)((longlong)plVar17 + 0x8c);
  lVar19 = (longlong)(int)plVar17[0x11] * (longlong)*(int *)(local_150 + 0x220);
  iVar10 = *(int *)((longlong)plVar24 + 0x4c);
  iVar15 = 0;
  if (iVar10 < 0) {
    *(undefined4 *)(plVar24 + 9) = 0;
    FUN_1470345fa(plVar24 + 8);
    iVar15 = (int)plVar24[9];
    iVar10 = *(int *)((longlong)plVar24 + 0x4c);
  }
  uVar11 = (uint)lVar19;
  *(uint *)(plVar24 + 9) = iVar15 + uVar11;
  if ((uint)(iVar10 - iVar15) < uVar11) {
    FUN_145ca0cd4(plVar24 + 8);
  }
  _Size = lVar19 * 4;
  iVar16 = 0;
  memset((void *)((longlong)iVar15 * 4 + plVar24[8]),0,_Size);
  iVar10 = *(int *)((longlong)plVar24 + 0x5c);
  if (iVar10 < 0) {
    *(undefined4 *)(plVar24 + 0xb) = 0;
    FUN_1470345fa(plVar24 + 10);
    iVar16 = (int)plVar24[0xb];
    iVar10 = *(int *)((longlong)plVar24 + 0x5c);
  }
  *(uint *)(plVar24 + 0xb) = iVar16 + uVar11;
  if ((uint)(iVar10 - iVar16) < uVar11) {
    FUN_145ca0cd4(plVar24 + 10);
  }
  memset((void *)((longlong)iVar16 * 4 + plVar24[10]),0,_Size);
  lVar19 = local_150;
  plVar20 = local_158;
  FUN_1470354dc(plVar24 + 0x2a,(float)*(int *)(*(longlong *)(local_150 + 0x30) + 0x74),
                (int)local_158[0x11]);
  FUN_147035874(plVar24 + 0x32,(float)*(int *)(*(longlong *)(lVar19 + 0x30) + 0x74),
                (int)plVar20[0x11]);
  local_6c = 1;
  local_68 = 0x40a00000;
  local_7c = (float)(*(int *)(*(longlong *)(lVar19 + 0x30) + 0x74) / *(int *)(lVar19 + 0x220));
  local_78 = (undefined4)plVar20[0x12];
  local_74 = *(undefined4 *)((longlong)plVar20 + 0x94);
  local_70 = 2;
  FUN_147034930(&local_f8,&local_7c);
  *(undefined4 *)(plVar24 + 0x68) = (undefined4)local_f8;
  *(undefined4 *)((longlong)plVar24 + 0x344) = local_f8._4_4_;
  *(undefined4 *)(plVar24 + 0x69) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)plVar24 + 0x34c) = uStack_f0._4_4_;
  *(undefined4 *)(plVar24 + 0x6a) = (undefined4)local_e8;
  *(undefined4 *)((longlong)plVar24 + 0x354) = local_e8._4_4_;
  *(uint *)(plVar24 + 0x6b) = uStack_e0;
  *(undefined4 *)((longlong)plVar24 + 0x35c) = uStack_dc;
  *(undefined4 *)(plVar24 + 0x6c) = local_d8;
  *(undefined4 *)((longlong)plVar24 + 0x364) = uStack_d4;
  *(undefined4 *)(plVar24 + 0x6d) = uStack_d0;
  *(undefined4 *)((longlong)plVar24 + 0x36c) = uStack_cc;
  FUN_147d34fbe(plVar24[0x6f],plVar20[0x58]);
  FUN_147d34fbe(plVar24[0x71],plVar20[0x5e]);
  FUN_147d34fbe(plVar24[0x73],plVar20[0x5c]);
  FUN_147d34fbe(plVar24[0x75],plVar20[0x5a]);
  lVar19 = local_150;
  if (plVar20[0x47] != 0) {
    cVar8 = FUN_1477e4054(*(longlong *)(local_150 + 0x30) + 0xa80,plVar20 + 0x45);
    if (cVar8 == '\0') {
      FUN_1433b4108(plVar20[0x47]);
    }
    else {
      FUN_1478b1884(&local_f8,plVar20 + 0x45,(float)*(int *)(*(longlong *)(lVar19 + 0x30) + 0x74),
                    (int)plVar20[1]);
      FUN_1477e430e(*(longlong *)(lVar19 + 0x30) + 0xa80,&local_118,&local_f8);
      FUN_1477d1a06(plVar24 + 0x9c,&local_118);
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_108 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_108 + 0x10))(local_108);
          }
        }
      }
      FUN_1477d1a7c(&local_f8);
      plVar20 = local_158;
    }
  }
  lVar19 = local_150;
  if (*(char *)((longlong)plVar20 + 0x2b2) == '\x01') {
    *(byte *)(local_150 + 0x230) = *(byte *)(local_150 + 0x230) & 0xfd;
    FUN_14795f152(*(undefined8 *)(local_150 + 0x30),&local_f8);
    FUN_1477c552e(lVar19 + 0x38,&local_f8);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar20 = local_e8 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
        }
      }
    }
    lVar19 = local_150;
    plVar20 = local_158;
    plVar17 = *(longlong **)(local_150 + 0x40);
    if (plVar17 != (longlong *)0x0) {
      *(byte *)(local_150 + 0x230) = *(byte *)(local_150 + 0x230) | 2;
    }
    local_168 = local_158[0x15];
    (**(code **)(*plVar17 + 0x40))(plVar17,(int)local_158[1],local_158 + 0x54,(int)local_158[0x11]);
  }
  if (plVar20[0x16] != 0) {
    plVar17 = *(longlong **)(*(longlong *)(lVar19 + 0x30) + 0x100);
    local_168 = plVar20[0x16];
    (**(code **)(*plVar17 + 0x18))(plVar17,(int)plVar20[1],plVar20 + 0x54,(int)plVar20[0x11]);
    *(byte *)((longlong)plVar24 + 0x521) = *(byte *)((longlong)plVar24 + 0x521) | 0x10;
  }
  if (plVar20[0x17] != 0) {
    plVar17 = *(longlong **)(*(longlong *)(lVar19 + 0x30) + 0xf0);
    local_168 = plVar20[0x17];
    (**(code **)(*plVar17 + 0x20))(plVar17,(int)plVar20[1],plVar20 + 0x54,(int)plVar20[0x11]);
    *(byte *)((longlong)plVar24 + 0x521) = *(byte *)((longlong)plVar24 + 0x521) | 0x20;
  }
  lVar19 = plVar20[0x52];
  if (lVar19 != 0) {
    lVar25 = local_158[0x53];
    if (lVar25 != 0) {
      LOCK();
      *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
      UNLOCK();
    }
    plVar20 = (longlong *)plVar24[0xa3];
    plVar24[0xa2] = lVar19;
    plVar24[0xa3] = lVar25;
    if (plVar20 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar20 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
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
  lVar19 = local_158[0x50];
  lVar25 = local_158[0x51];
  if (lVar25 != 0) {
    LOCK();
    *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
    UNLOCK();
  }
  plVar20 = (longlong *)plVar24[0xa1];
  plVar24[0xa0] = lVar19;
  plVar24[0xa1] = lVar25;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar20 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  bVar14 = *(byte *)((longlong)plVar24 + 0x522);
  bVar9 = *(char *)((longlong)local_158 + 699) << 7;
  *(byte *)((longlong)plVar24 + 0x522) = bVar14 & 0x7f | bVar9;
  *(undefined1 *)(plVar24 + 0x3f) = 1;
  bVar14 = bVar14 & 0x7e | bVar9 | *(byte *)((longlong)local_158 + 0x2b5);
  *(byte *)((longlong)plVar24 + 0x522) = bVar14;
  bVar14 = bVar14 & 0xfd | *(char *)((longlong)local_158 + 0x2b6) * '\x02';
  *(byte *)((longlong)plVar24 + 0x522) = bVar14;
  *(byte *)((longlong)plVar24 + 0x522) = bVar14 & 0xfb | *(char *)((longlong)local_158 + 0x2b7) << 2
  ;
  plVar20 = local_158;
  if ((int)local_158[0xf] < (int)local_158[0x11]) goto LAB_1433559ea;
  *(byte *)(plVar24 + 0x3f) = *(byte *)((longlong)local_158 + 0x2b1) ^ 1;
  *(undefined4 *)(plVar24 + 0x3a) = *(undefined4 *)((longlong)local_158 + 100);
  FUN_1477d1b14(plVar24 + 0x3b,local_158 + 0x60);
  iVar10 = (int)plVar24[0x3e];
  *(uint *)(plVar24 + 0x3e) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar24 + 500) < iVar10 + 1U) {
    FUN_1477d1bc4(plVar24 + 0x3d,iVar10);
  }
  *(undefined8 *)(plVar24[0x3d] + (longlong)iVar10 * 8) = 0;
  uVar11 = *(uint *)(local_158 + 0xb);
  plVar20 = local_158;
  if (uVar11 == 0xffffffff) goto LAB_1433559ea;
  *(uint *)(plVar24 + 0x1c) = uVar11;
  fVar3 = *(float *)(local_158 + 0xc);
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    plVar24[0x1d] = (longlong)(fVar3 * (float)*(int *)(*(longlong *)(local_150 + 0x30) + 0x74));
  }
  plVar20 = (longlong *)(local_150 + 0x138);
  if (*(int *)(local_150 + 0x140) == *(int *)(local_150 + 0x16c)) {
LAB_143355899:
    plVar17 = (longlong *)0x0;
  }
  else {
    lVar19 = local_150 + 0x170;
    if (*(longlong *)(local_150 + 0x178) != 0) {
      lVar19 = *(longlong *)(local_150 + 0x178);
    }
    iVar10 = *(int *)(lVar19 + (ulonglong)
                               (*(int *)(local_150 + 0x180) - 1U &
                               (uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b8 ^ uVar11)) * 4);
    if (iVar10 == -1) goto LAB_143355899;
    lVar19 = *plVar20;
    plVar17 = (longlong *)0x0;
    do {
      lVar22 = (longlong)iVar10 * 0x20;
      lVar25 = lVar19 + lVar22;
      if ((*(uint *)(lVar19 + lVar22) == uVar11) && (*(int *)(lVar19 + 4 + lVar22) == -1)) {
        if (lVar25 == 0) goto LAB_143355899;
        plVar13 = *(longlong **)(lVar25 + 8);
        plVar17 = *(longlong **)(lVar25 + 0x10);
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        if (plVar13 != (longlong *)0x0) {
          lVar19 = local_158[1];
          iVar10 = (int)plVar13[1];
          *(uint *)(plVar13 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)plVar13 + 0xc) < iVar10 + 1U) {
            FUN_1446f48e2(plVar13,iVar10);
          }
          *(int *)(*plVar13 + (longlong)iVar10 * 4) = (int)lVar19;
          goto LAB_1433559c3;
        }
        break;
      }
      iVar10 = *(int *)(lVar25 + 0x18);
    } while (iVar10 != -1);
  }
  plVar12 = (longlong *)FUN_14001cc68(0x188,0x10);
  plVar13 = local_158;
  FUN_1477b966a(plVar12,local_150,1,*(undefined4 *)((longlong)local_158 + 0x5c));
  local_118 = plVar12;
  uStack_110 = (longlong *)FUN_14001cc68(0x18,0x10);
  uStack_110[1] = (longlong)&DAT_100000001;
  *uStack_110 = (longlong)&PTR_FUN_14a570f00;
  uStack_110[2] = (longlong)plVar12;
  lVar19 = plVar13[1];
  iVar10 = (int)plVar12[1];
  *(uint *)(plVar12 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar12 + 0xc) < iVar10 + 1U) {
    FUN_1446f48e2(plVar12,iVar10);
  }
  *(int *)(*plVar12 + (longlong)iVar10 * 4) = (int)lVar19;
  local_128[2] = (uint)local_158[0xb];
  local_f8 = local_128 + 2;
  local_11c = 0xffffffff;
  uStack_f0 = &local_118;
  FUN_1477d1c4a(plVar20,local_128);
  plVar20 = uStack_110;
  if (uStack_110 != (longlong *)0x0) {
    LOCK();
    plVar13 = uStack_110 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*uStack_110)(uStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
LAB_1433559c3:
  plVar20 = local_158;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar17 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
LAB_1433559ea:
  local_140 = plVar20 + 7;
  plVar17 = (longlong *)(local_150 + 0x138);
  local_130 = local_150 + 0x170;
  local_138 = plVar24 + 0x1e;
  lVar25 = 0;
  lVar19 = local_150;
  bVar27 = true;
  local_148 = plVar24;
  do {
    bVar26 = bVar27;
    if ((longlong)(int)local_140[lVar25 * 2 + 1] != 0) {
      puVar21 = (uint *)local_140[lVar25 * 2];
      puVar2 = puVar21 + (longlong)(int)local_140[lVar25 * 2 + 1] * 3;
      plVar24 = local_138 + lVar25 * 2;
      do {
        local_128[2] = (uint)plVar20[1];
        local_11c = puVar21[1];
        if (*(int *)(lVar19 + 0x140) != *(int *)(lVar19 + 0x16c)) {
          uVar11 = *puVar21;
          lVar22 = *(longlong *)(lVar19 + 0x178);
          if (*(longlong *)(lVar19 + 0x178) == 0) {
            lVar22 = local_130;
          }
          iVar10 = *(int *)(lVar22 + (ulonglong)
                                     (*(int *)(lVar19 + 0x180) - 1U &
                                     (uVar11 * 0x40 + (uVar11 >> 2) + 0x9e3779b8 ^ uVar11)) * 4);
          if (iVar10 != -1) {
            lVar19 = *plVar17;
            do {
              lVar23 = (longlong)iVar10 * 0x20;
              lVar22 = lVar19 + lVar23;
              if ((*(uint *)(lVar19 + lVar23) == uVar11) && (*(int *)(lVar19 + 4 + lVar23) == -1)) {
                if (lVar22 != 0) {
                  lVar19 = *(longlong *)(lVar22 + 8);
                  plVar20 = *(longlong **)(lVar22 + 0x10);
                  if (plVar20 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                    UNLOCK();
                  }
                  if (lVar19 == 0) goto LAB_143355ae7;
                  FUN_1477b97e4(lVar19,lVar25,local_128 + 2);
                  goto LAB_143355bbf;
                }
                break;
              }
              iVar10 = *(int *)(lVar22 + 0x18);
            } while (iVar10 != -1);
          }
        }
        plVar20 = (longlong *)0x0;
LAB_143355ae7:
        plVar13 = (longlong *)FUN_14001cc68(0x188,0x10);
        FUN_1477b966a(plVar13,local_150,1,puVar21[2]);
        local_118 = plVar13;
        uStack_110 = (longlong *)FUN_14001cc68(0x18,0x10);
        uStack_110[1] = (longlong)&DAT_100000001;
        *uStack_110 = (longlong)&PTR_FUN_14a570f00;
        uStack_110[2] = (longlong)plVar13;
        FUN_1477b97e4(plVar13,lVar25,local_128 + 2);
        local_128[0] = *puVar21;
        local_128[1] = 0xffffffff;
        local_f8 = local_128;
        uStack_f0 = &local_118;
        FUN_1477d1c4a(plVar17,local_64,&local_f8);
        plVar13 = uStack_110;
        if (uStack_110 != (longlong *)0x0) {
          LOCK();
          plVar12 = uStack_110 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*uStack_110)(uStack_110);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
LAB_143355bbf:
        iVar10 = (int)plVar24[1];
        *(uint *)(plVar24 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)plVar24 + 0xc) < iVar10 + 1U) {
          FUN_1447808da(plVar24,iVar10);
        }
        *(uint *)(*plVar24 + (longlong)iVar10 * 4) = *puVar21;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar20 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
        puVar21 = puVar21 + 3;
        lVar19 = local_150;
        plVar20 = local_158;
      } while (puVar21 != puVar2);
    }
    plVar24 = local_148;
    lVar25 = 1;
    bVar27 = false;
  } while (bVar26);
  local_f8 = (uint *)((ulonglong)local_f8 & 0xffffffff00000000);
  FUN_1448158c6(local_148 + 0x13,&local_f8,(int)plVar20[0x11]);
  local_f8 = (uint *)((ulonglong)local_f8 & 0xffffffff00000000);
  FUN_1448158c6(plVar24 + 0x15,&local_f8,(int)plVar20[0x11]);
  *(longlong *)(*(longlong *)(local_150 + 0x70) + (longlong)(int)plVar20[1] * 8) = plVar20[0x10];
  uVar18 = 2;
  if ((*(byte *)((longlong)plVar24 + 0x521) & 0xc) != 4) {
    uVar18 = *(undefined4 *)((longlong)plVar24 + 0x524);
  }
  local_118 = (longlong *)0x0;
  uStack_110 = (longlong *)0x0;
  if (0 < (int)plVar20[6]) {
    plVar24 = local_148 + 0x1a;
    lVar19 = 0;
    do {
      plVar17 = *(longlong **)(plVar20[5] + 8 + lVar19 * 0x28);
      if (plVar17 != (longlong *)0x0) {
        plVar13 = (longlong *)(plVar20[5] + lVar19 * 0x28);
        iVar10 = (int)plVar17[1];
        do {
          if (iVar10 == 0) goto LAB_143355d55;
          LOCK();
          iVar15 = (int)plVar17[1];
          bVar27 = iVar10 == iVar15;
          if (bVar27) {
            *(int *)(plVar17 + 1) = iVar10 + 1;
            iVar15 = iVar10;
          }
          iVar10 = iVar15;
          UNLOCK();
        } while (!bVar27);
        lVar25 = *plVar13;
        if (lVar25 != 0) {
          iVar10 = (int)local_148[0x1b];
          lVar22 = (longlong)iVar10;
          *(uint *)(local_148 + 0x1b) = iVar10 + 1U;
          if (*(uint *)((longlong)local_148 + 0xdc) < iVar10 + 1U) {
            FUN_1477cf8c2(plVar24,iVar10);
          }
          plVar20 = local_158;
          lVar23 = *plVar24;
          *(longlong *)(lVar23 + lVar22 * 0x28) = *plVar13;
          lVar4 = plVar13[1];
          *(longlong *)(lVar23 + 8 + lVar22 * 0x28) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
            UNLOCK();
          }
          lVar23 = lVar23 + lVar22 * 0x28;
          *(longlong *)(lVar23 + 0x20) = plVar13[4];
          uVar5 = *(undefined4 *)((longlong)plVar13 + 0x14);
          lVar22 = plVar13[3];
          uVar6 = *(undefined4 *)((longlong)plVar13 + 0x1c);
          *(int *)(lVar23 + 0x10) = (int)plVar13[2];
          *(undefined4 *)(lVar23 + 0x14) = uVar5;
          *(int *)(lVar23 + 0x18) = (int)lVar22;
          *(undefined4 *)(lVar23 + 0x1c) = uVar6;
          iVar10 = (int)plVar13[3];
          if (iVar10 == 1) {
            *(byte *)((longlong)local_148 + 0x522) = *(byte *)((longlong)local_148 + 0x522) | 0x20;
            iVar10 = (int)plVar13[3];
          }
          FUN_1477d6052(lVar25,local_158[0x10],(int)plVar13[2],iVar10);
          uVar7 = (ulonglong)uStack_110;
          if (*(longlong *)(lVar25 + 0x160) != 0) {
            lVar22 = (longlong)(int)uStack_110;
            uVar11 = (int)uStack_110 + 1;
            uStack_110 = (longlong *)CONCAT44(uStack_110._4_4_,uVar11);
            if (uStack_110._4_4_ < uVar11) {
              FUN_1477cdd92(&local_118,uVar7 & 0xffffffff);
            }
            local_118[lVar22 * 2] = lVar25;
            local_118[lVar22 * 2 + 1] = (longlong)plVar17;
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
            plVar20 = local_158;
          }
        }
        LOCK();
        plVar13 = plVar17 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
LAB_143355d55:
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)plVar20[6]);
  }
  lVar25 = plVar20[1];
  lVar19 = *(longlong *)(local_150 + 0x128);
  uStack_f0 = (longlong **)0x0;
  local_e8 = (longlong *)0x0;
  local_f8 = (uint *)CONCAT44(*(undefined4 *)(*(longlong *)(local_150 + 0x30) + 0xcb8),uVar18);
  FUN_1477d1b64(&uStack_f0,&local_118);
  uStack_e0 = CONCAT31(uStack_e0._1_3_,(char)local_148[0xa4]) & 0xffffff01;
  uStack_e0 = CONCAT13(uStack_e0._3_1_,
                       CONCAT12(*(byte *)((longlong)local_148 + 0x522) >> 4,(undefined2)uStack_e0))
              & 0xff01ffff;
  FUN_1477d298c((longlong)(int)lVar25 * 0x330 + lVar19,&local_f8);
  FUN_1477cdc92(uStack_f0,(ulonglong)local_e8 & 0xffffffff);
  if (uStack_f0 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  FUN_1477cdc92(local_118,(ulonglong)uStack_110 & 0xffffffff);
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143355f2c FUN_143355f2c body=236 status=ok
// SIG undefined FUN_143355f2c(void)

undefined8 * FUN_143355f2c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x318,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a570f20;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  FUN_1477c5f7c(puVar3 + 3,param_1 + 0x18);
  FUN_147d34d7a(puVar3 + 0x59,param_1 + 0x2c8);
  FUN_147d34d7a(puVar3 + 0x5b,param_1 + 0x2d8);
  FUN_147d34d7a(puVar3 + 0x5d,param_1 + 0x2e8);
  FUN_147d34d7a(puVar3 + 0x5f,param_1 + 0x2f8);
  puVar3[0x61] = 0;
  iVar1 = *(int *)(param_1 + 0x310);
  uVar2 = *(undefined8 *)(param_1 + 0x308);
  *(int *)(puVar3 + 0x62) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x314) = 0;
  }
  else {
    FUN_1477d1976(puVar3 + 0x61,iVar1,0);
    FUN_1477d19d8(puVar3[0x61],uVar2,iVar1);
  }
  return puVar3 + 1;
}



// FUNCTION 14335601e FUN_14335601e body=29 status=ok
// SIG undefined FUN_14335601e(void)

void FUN_14335601e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14335603c FUN_14335603c body=52 status=ok
// SIG undefined FUN_14335603c(void)

undefined8 * FUN_14335603c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a570f20;
  FUN_14334e334(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143356070 FUN_143356070 body=2678 status=ok
// SIG undefined FUN_143356070(void)

void FUN_143356070(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined4 uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong *plVar25;
  int *piVar26;
  uint *puVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong *local_80;
  uint local_74;
  longlong *local_70;
  int *local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *param_1;
  lVar21 = param_1[1];
  uVar20 = (ulonglong)(int)lVar21;
  if (*(longlong *)(*(longlong *)(lVar6 + 0x70) + uVar20 * 8) != 0) {
    plVar25 = (longlong *)(*(longlong *)(lVar6 + 0x118) + uVar20 * 0x540);
    uVar5 = *(uint *)(*(longlong *)(lVar6 + 0x118) + 0xe0 + uVar20 * 0x540);
    local_70 = plVar25;
    local_60 = uVar20;
    if ((uVar5 != 0xffffffff) && (*(int *)(lVar6 + 0x140) != *(int *)(lVar6 + 0x16c))) {
      lVar28 = lVar6 + 0x170;
      if (*(longlong *)(lVar6 + 0x178) != 0) {
        lVar28 = *(longlong *)(lVar6 + 0x178);
      }
      iVar15 = *(int *)(lVar28 + (ulonglong)
                                 (*(int *)(lVar6 + 0x180) - 1U &
                                 (uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b8 ^ uVar5)) * 4);
      if (iVar15 != -1) {
        lVar28 = *(longlong *)(lVar6 + 0x138);
LAB_143356154:
        lVar19 = (longlong)iVar15 * 0x20;
        lVar16 = lVar28 + lVar19;
        if ((*(uint *)(lVar28 + lVar19) != uVar5) || (*(int *)(lVar28 + 4 + lVar19) != -1))
        goto LAB_14335616d;
        if (lVar16 != 0) {
          puVar14 = *(undefined8 **)(lVar16 + 8);
          plVar18 = *(longlong **)(lVar16 + 0x10);
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
          }
          if (puVar14 == (undefined8 *)0x0) goto LAB_1433561d6;
          iVar15 = *(int *)(puVar14 + 1);
          lVar28 = (longlong)iVar15;
          if (lVar28 != 0) {
            local_68 = (int *)*puVar14;
            local_74 = CONCAT31(local_74._1_3_,*local_68 == (int)lVar21);
            local_80 = (longlong *)((ulonglong)local_80 & 0xffffffff00000000);
            iVar22 = 0;
            do {
              uVar5 = local_74;
              bVar11 = (byte)local_74;
              local_74 = local_74 ^ 1;
              iVar9 = iVar22 + 1;
              if (iVar22 + 1 < iVar15) {
                iVar9 = iVar15;
              }
              iVar23 = iVar22;
              lVar21 = (longlong)iVar22;
              do {
                lVar21 = lVar21 + 1;
                iVar24 = iVar9;
                if (lVar28 <= lVar21) break;
                iVar23 = iVar23 + 1;
                iVar24 = iVar23;
              } while ((bool)(bVar11 & 1) == (local_68[lVar21] == (int)local_60));
              if ((uVar5 & 1) == 0) {
                if ((int)local_80 != iVar22) {
                  memmove(local_68 + (int)local_80,local_68 + iVar22,
                          (longlong)(iVar24 - iVar22) << 2);
                }
                local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)local_80 + (iVar24 - iVar22));
              }
              iVar22 = iVar24;
            } while (lVar21 < lVar28);
            *(int *)(puVar14 + 1) = (int)local_80;
            plVar25 = local_70;
            if ((*(char *)(puVar14 + 0x30) == '\x01') && ((int)local_80 == 0)) {
LAB_1433561ac:
              plVar25 = local_70;
              if ((*(int *)(puVar14 + 3) == 0) && (*(int *)(puVar14 + 5) == 0)) {
                local_58 = (char *)CONCAT44(0xffffffff,(int)local_70[0x1c]);
                FUN_1477d150c((longlong *)(lVar6 + 0x138));
              }
            }
LAB_1433561d6:
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar18 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar26 = (int *)((longlong)plVar18 + 0xc);
                *piVar26 = *piVar26 + -1;
                UNLOCK();
                if (*piVar26 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            goto LAB_1433561fa;
          }
          if (*(char *)(puVar14 + 0x30) != '\x01') goto LAB_1433561d6;
          goto LAB_1433561ac;
        }
      }
    }
LAB_1433561fa:
    local_80 = plVar25 + 0x1e;
    uVar13 = CONCAT71((int7)((ulonglong)local_80 >> 8),1);
    piVar26 = (int *)0x0;
    do {
      local_74 = (uint)uVar13;
      local_68 = piVar26;
      if ((longlong)(int)local_80[(longlong)piVar26 * 2 + 1] != 0) {
        puVar27 = (uint *)local_80[(longlong)piVar26 * 2];
        puVar4 = puVar27 + (int)local_80[(longlong)piVar26 * 2 + 1];
        do {
          if (*(int *)(lVar6 + 0x140) != *(int *)(lVar6 + 0x16c)) {
            uVar5 = *puVar27;
            lVar21 = *(longlong *)(lVar6 + 0x178);
            if (*(longlong *)(lVar6 + 0x178) == 0) {
              lVar21 = lVar6 + 0x170;
            }
            iVar15 = *(int *)(lVar21 + (ulonglong)
                                       (*(int *)(lVar6 + 0x180) - 1U &
                                       (uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b8 ^ uVar5)) * 4);
            if (iVar15 != -1) {
              lVar21 = *(longlong *)(lVar6 + 0x138);
              do {
                lVar16 = (longlong)iVar15 * 0x20;
                lVar28 = lVar21 + lVar16;
                if ((*(uint *)(lVar21 + lVar16) == uVar5) && (*(int *)(lVar21 + 4 + lVar16) == -1))
                {
                  if (lVar28 != 0) {
                    lVar21 = *(longlong *)(lVar28 + 8);
                    plVar25 = *(longlong **)(lVar28 + 0x10);
                    if (plVar25 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
                      UNLOCK();
                    }
                    if ((lVar21 != 0) &&
                       (cVar10 = FUN_1477b9860(lVar21,local_68,local_60), cVar10 != '\0')) {
                      local_58 = (char *)CONCAT44(0xffffffff,uVar5);
                      FUN_1477d150c((longlong *)(lVar6 + 0x138),&local_58);
                    }
                    if (plVar25 != (longlong *)0x0) {
                      LOCK();
                      plVar18 = plVar25 + 1;
                      *(int *)plVar18 = (int)*plVar18 + -1;
                      UNLOCK();
                      if ((int)*plVar18 == 0) {
                        (**(code **)*plVar25)(plVar25);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar25 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar25 + 0x10))(plVar25);
                        }
                      }
                    }
                  }
                  break;
                }
                iVar15 = *(int *)(lVar28 + 0x18);
              } while (iVar15 != -1);
            }
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 != puVar4);
      }
      plVar25 = local_80 + (longlong)piVar26 * 2;
      *(undefined4 *)(plVar25 + 1) = 0;
      if (*(int *)((longlong)plVar25 + 0xc) < 0) {
        FUN_14480809c(plVar25,0);
      }
      uVar20 = local_60;
      plVar25 = local_70;
      piVar26 = (int *)&DAT_00000001;
      uVar13 = 0;
    } while ((local_74 & 1) != 0);
    *(undefined4 *)(local_70 + 0x1c) = 0xffffffff;
    local_70[0x1d] = -1;
    if (*local_70 != 0) {
      iVar15 = *(int *)(lVar6 + 0x1b0);
      *(uint *)(lVar6 + 0x1b0) = iVar15 + 1U;
      if (*(uint *)(lVar6 + 0x1b4) < iVar15 + 1U) {
        FUN_1477d169c((longlong *)(lVar6 + 0x1a8),iVar15);
      }
      lVar21 = *(longlong *)(lVar6 + 0x1a8);
      *(longlong *)(lVar21 + (longlong)iVar15 * 0x10) = *plVar25;
      lVar28 = plVar25[1];
      *(longlong *)(lVar21 + 8 + (longlong)iVar15 * 0x10) = lVar28;
      if (lVar28 == 0) {
        *plVar25 = 0;
      }
      else {
        LOCK();
        *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
        UNLOCK();
        plVar18 = (longlong *)plVar25[1];
        *plVar25 = 0;
        if (plVar18 != (longlong *)0x0) {
          plVar25[1] = 0;
          LOCK();
          plVar1 = plVar18 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar26 = (int *)((longlong)plVar18 + 0xc);
            *piVar26 = *piVar26 + -1;
            UNLOCK();
            if (*piVar26 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
      }
    }
    plVar25[2] = 0;
    plVar18 = (longlong *)plVar25[0x1a];
    uVar17 = 0;
    if ((longlong)(int)plVar25[0x1b] != 0) {
      plVar1 = plVar18 + (longlong)(int)plVar25[0x1b] * 5;
      do {
        plVar7 = (longlong *)plVar18[1];
        if (plVar7 != (longlong *)0x0) {
          iVar15 = (int)plVar7[1];
          do {
            if (iVar15 == 0) goto LAB_143356492;
            LOCK();
            iVar22 = (int)plVar7[1];
            bVar29 = iVar15 == iVar22;
            if (bVar29) {
              *(int *)(plVar7 + 1) = iVar15 + 1;
              iVar22 = iVar15;
            }
            iVar15 = iVar22;
            UNLOCK();
          } while (!bVar29);
          if (*plVar18 != 0) {
            FUN_1477d60b6(*plVar18,*(undefined8 *)(*(longlong *)(lVar6 + 0x70) + uVar20 * 8));
          }
          LOCK();
          plVar3 = plVar7 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar26 = (int *)((longlong)plVar7 + 0xc);
            *piVar26 = *piVar26 + -1;
            UNLOCK();
            if (*piVar26 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
LAB_143356492:
        plVar18 = plVar18 + 5;
      } while (plVar18 != plVar1);
      uVar17 = (undefined4)plVar25[0x1b];
      plVar18 = (longlong *)plVar25[0x1a];
    }
    iVar15 = *(int *)((longlong)plVar25 + 0xdc);
    FUN_1477c99d7(plVar18,uVar17);
    *(undefined4 *)(plVar25 + 0x1b) = 0;
    if ((iVar15 < 0) && (*(int *)((longlong)plVar25 + 0xdc) != 0)) {
      FUN_1477d13d4(plVar25 + 0x1a);
    }
    bVar11 = *(byte *)((longlong)plVar25 + 0x521);
    if ((bVar11 & 4) != 0) {
      (**(code **)(**(longlong **)(lVar6 + 0x40) + 0x50))
                (*(longlong **)(lVar6 + 0x40),uVar20 & 0xffffffff);
      bVar11 = *(byte *)((longlong)plVar25 + 0x521);
    }
    if ((bVar11 & 0x10) != 0) {
      plVar18 = *(longlong **)(*(longlong *)(lVar6 + 0x30) + 0x100);
      (**(code **)(*plVar18 + 0x20))(plVar18,uVar20 & 0xffffffff);
      bVar11 = *(byte *)((longlong)plVar25 + 0x521);
    }
    if ((bVar11 & 0x20) != 0) {
      plVar18 = *(longlong **)(*(longlong *)(lVar6 + 0x30) + 0xf0);
      (**(code **)(*plVar18 + 0x28))(plVar18,uVar20 & 0xffffffff);
    }
    plVar18 = (longlong *)plVar25[0xa2];
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x20))(plVar18,uVar20 & 0xffffffff);
      plVar25[0xa2] = 0;
      plVar18 = (longlong *)plVar25[0xa3];
      if (plVar18 != (longlong *)0x0) {
        plVar25[0xa3] = 0;
        LOCK();
        plVar1 = plVar18 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar26 = (int *)((longlong)plVar18 + 0xc);
          *piVar26 = *piVar26 + -1;
          UNLOCK();
          if (*piVar26 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
    }
    *(undefined4 *)(plVar25 + 0x3a) = 0xffffffff;
    FUN_1477c55a8(lVar6,uVar20 & 0xffffffff);
    *(undefined4 *)(plVar25 + 0x6b) = 0;
    *(undefined1 *)(plVar25 + 0x3f) = 1;
    lVar21 = *(longlong *)(lVar6 + 0x30);
    lVar28 = *(longlong *)(lVar6 + 0x70);
    uVar13 = *(undefined8 *)(lVar28 + uVar20 * 8);
    puVar14 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar14 = 0;
    puVar14[1] = uVar13;
    if (puVar14 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(lVar21 + 0xdb0);
      *(undefined8 **)(lVar21 + 0xdb0) = puVar14;
      *puVar8 = puVar14;
      lVar28 = *(longlong *)(lVar6 + 0x70);
    }
    *(undefined8 *)(lVar28 + uVar20 * 8) = 0;
    *(undefined1 *)(plVar25 + 0x24) = 1;
    *(undefined8 *)((longlong)plVar25 + 0x124) = 0xbf800000bf800000;
    *(undefined8 *)((longlong)plVar25 + 300) = 0;
    *(undefined8 *)((longlong)plVar25 + 0x134) = 0;
    *(undefined4 *)((longlong)plVar25 + 0x13c) = 0xbf800000;
    *(undefined4 *)(plVar25 + 0x28) = 0xbf800000;
    *(undefined4 *)((longlong)plVar25 + 0x144) = 0x469c4000;
    *(undefined4 *)(plVar25 + 0x29) = 0x41a00000;
    plVar18 = (longlong *)plVar25[0xa0];
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x10))(plVar18,uVar20 & 0xffffffff);
      plVar25[0xa0] = 0;
      plVar18 = (longlong *)plVar25[0xa1];
      if (plVar18 != (longlong *)0x0) {
        plVar25[0xa1] = 0;
        LOCK();
        plVar1 = plVar18 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar26 = (int *)((longlong)plVar18 + 0xc);
          *piVar26 = *piVar26 + -1;
          UNLOCK();
          if (*piVar26 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
    }
    uVar17 = *(undefined4 *)(*(longlong *)(lVar6 + 0x30) + 0x90);
    local_58 = "Volume";
    local_50 = 6;
    local_4c = 0;
    uVar12 = FUN_14001a6c0(&local_58,1);
    local_88 = 1;
    FUN_147d351ca(plVar25 + 0x6f,uVar17,uVar12,0);
    local_58 = "Pitch";
    local_50 = 5;
    local_4c = 0;
    uVar12 = FUN_14001a6c0(&local_58,1);
    local_88 = 0;
    FUN_147d351ca(plVar25 + 0x71,uVar17,uVar12,0);
    local_58 = "HPFCutoffFrequency";
    local_50 = 0x12;
    local_4c = 0;
    uVar12 = FUN_14001a6c0(&local_58,1);
    local_88 = 0;
    FUN_147d351ca(plVar25 + 0x75,uVar17,uVar12,0);
    plVar18 = local_70;
    plVar25 = local_70 + 0x73;
    local_58 = "LPFCutoffFrequency";
    local_50 = 0x12;
    local_4c = 0;
    uVar12 = FUN_14001a6c0(&local_58,1);
    local_88 = 0;
    FUN_147d351ca(plVar25,uVar17,uVar12,0);
    plVar18[0x77] = 0;
    plVar18[0x78] = 0x41a00000469c4000;
    *(undefined8 *)((longlong)plVar18 + 0x154) = 0;
    *(undefined4 *)((longlong)plVar18 + 0x15c) = 0;
    *(undefined4 *)(plVar18 + 0x2f) = 0;
    FUN_1470357b2(plVar18 + 0x2a);
    plVar18[0x2e] = plVar18[0x2c];
    *(undefined1 *)(plVar18 + 0x31) = 1;
    *(undefined8 *)((longlong)plVar18 + 0x194) = 0;
    *(undefined4 *)(plVar18 + 0x37) = 0;
    FUN_147035bc4(plVar18 + 0x32);
    plVar25 = (longlong *)plVar18[4];
    plVar18[0x36] = plVar18[0x34];
    *(undefined1 *)((longlong)plVar18 + 0x1cc) = 1;
    plVar18[3] = 0;
    if (plVar25 != (longlong *)0x0) {
      plVar18[4] = 0;
      LOCK();
      plVar1 = plVar25 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar25)(plVar25);
        LOCK();
        piVar26 = (int *)((longlong)plVar25 + 0xc);
        *piVar26 = *piVar26 + -1;
        UNLOCK();
        if (*piVar26 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
    }
    *(undefined4 *)(plVar18 + 5) = 0;
    if (*(int *)((longlong)plVar18 + 0x3c) < 0) {
      *(undefined4 *)(plVar18 + 7) = 0;
      FUN_1470345fa(plVar18 + 6,0);
    }
    else {
      *(undefined4 *)(plVar18 + 7) = 0;
    }
    if (*(int *)((longlong)plVar18 + 0x5c) < 0) {
      *(undefined4 *)(plVar18 + 0xb) = 0;
      FUN_1470345fa(plVar18 + 10,0);
    }
    else {
      *(undefined4 *)(plVar18 + 0xb) = 0;
    }
    if (*(int *)((longlong)plVar18 + 0x6c) < 0) {
      *(undefined4 *)(plVar18 + 0xd) = 0;
      FUN_1470345fa(plVar18 + 0xc,0);
    }
    else {
      *(undefined4 *)(plVar18 + 0xd) = 0;
    }
    if (*(int *)((longlong)plVar18 + 0x33c) < 0) {
      *(undefined4 *)(plVar18 + 0x67) = 0;
      FUN_1470345fa(plVar18 + 0x66,0);
    }
    else {
      *(undefined4 *)(plVar18 + 0x67) = 0;
    }
    if (*(int *)((longlong)plVar18 + 0xa4) < 0) {
      *(undefined4 *)(plVar18 + 0x14) = 0;
      FUN_14482f6fa(plVar18 + 0x13,0);
    }
    else {
      *(undefined4 *)(plVar18 + 0x14) = 0;
    }
    if (*(int *)((longlong)plVar18 + 0xb4) < 0) {
      *(undefined4 *)(plVar18 + 0x16) = 0;
      FUN_14482f6fa(plVar18 + 0x15,0);
    }
    else {
      *(undefined4 *)(plVar18 + 0x16) = 0;
    }
    plVar18[0x17] = 0;
    plVar18[0x18] = 0;
    plVar18[0x19] = 0;
    *(undefined2 *)(plVar18 + 0xa4) = 0x4000;
    *(byte *)((longlong)plVar18 + 0x522) = *(byte *)((longlong)plVar18 + 0x522) & 0x98;
    plVar18[0xa7] = 0;
    *(undefined4 *)(plVar18 + 0xa6) = 0xffffffff;
    FUN_1478b1b7e(plVar18 + 0x9c);
    *(undefined8 *)((longlong)plVar18 + 0x524) = 0;
    *(undefined1 *)(*(longlong *)(lVar6 + 0x1d8) + uVar20) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14335616d:
  iVar15 = *(int *)(lVar16 + 0x18);
  if (iVar15 == -1) goto LAB_1433561fa;
  goto LAB_143356154;
}



// FUNCTION 143356b06 FUN_143356b06 body=12 status=ok
// SIG undefined FUN_143356b06(void)

void FUN_143356b06(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143356b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143356b12 FUN_143356b12 body=29 status=ok
// SIG undefined FUN_143356b12(void)

undefined8 FUN_143356b12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143356b30 FUN_143356b30 body=465 status=ok
// SIG undefined FUN_143356b30(void)

void FUN_143356b30(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x140) != *(int *)(lVar6 + 0x16c)) {
    uVar5 = *(uint *)(param_1 + 1);
    lVar7 = lVar6 + 0x170;
    if (*(longlong *)(lVar6 + 0x178) != 0) {
      lVar7 = *(longlong *)(lVar6 + 0x178);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar6 + 0x180) - 1U &
                             (uVar5 * 0x40 + *(int *)((longlong)param_1 + 0xc) + (uVar5 >> 2) +
                              0x9e3779b9 ^ uVar5)) * 4);
    if (iVar9 != -1) {
      lVar7 = *(longlong *)(lVar6 + 0x138);
      plVar8 = (longlong *)0x0;
      do {
        lVar10 = (longlong)iVar9 * 0x20;
        lVar4 = lVar7 + lVar10;
        if ((*(uint *)(lVar7 + lVar10) == uVar5) &&
           (*(int *)(lVar7 + 4 + lVar10) == *(int *)((longlong)param_1 + 0xc))) {
          if (lVar4 == 0) goto LAB_143356c50;
          lVar7 = *(longlong *)(lVar4 + 8);
          plVar8 = *(longlong **)(lVar4 + 0x10);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          if (lVar7 != 0) {
            *(undefined1 *)(lVar7 + 0x180) = *(undefined1 *)((longlong)param_1 + 0x14);
            goto LAB_143356c09;
          }
          break;
        }
        iVar9 = *(int *)(lVar4 + 0x18);
      } while (iVar9 != -1);
      goto LAB_143356c52;
    }
  }
LAB_143356c50:
  plVar8 = (longlong *)0x0;
LAB_143356c52:
  lVar7 = FUN_14001cc68(0x188,0x10);
  FUN_1477b966a(lVar7,lVar6,*(undefined1 *)((longlong)param_1 + 0x14),(int)param_1[2]);
  local_60 = lVar7;
  local_58 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_58[1] = (longlong)&DAT_100000001;
  *local_58 = (longlong)&PTR_FUN_14a570f00;
  local_58[2] = lVar7;
  local_50 = param_1 + 1;
  local_48 = &local_60;
  FUN_1477d2232((longlong *)(lVar6 + 0x138),local_3c);
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_143356c09:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143356d28 FUN_143356d28 body=12 status=ok
// SIG undefined FUN_143356d28(void)

void FUN_143356d28(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143356d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143356d34 FUN_143356d34 body=29 status=ok
// SIG undefined FUN_143356d34(void)

undefined8 FUN_143356d34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143356d52 FUN_143356d52 body=259 status=ok
// SIG undefined FUN_143356d52(void)

void FUN_143356d52(longlong *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x140) != *(int *)(lVar4 + 0x16c)) {
    uVar3 = *(uint *)(param_1 + 1);
    lVar6 = lVar4 + 0x170;
    if (*(longlong *)(lVar4 + 0x178) != 0) {
      lVar6 = *(longlong *)(lVar4 + 0x178);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar4 + 0x180) - 1U &
                             (uVar3 * 0x40 + *(int *)((longlong)param_1 + 0xc) + (uVar3 >> 2) +
                              0x9e3779b9 ^ uVar3)) * 4);
    if (iVar7 != -1) {
      lVar6 = *(longlong *)(lVar4 + 0x138);
      do {
        lVar5 = (longlong)iVar7 * 0x20;
        lVar1 = lVar6 + lVar5;
        if ((*(uint *)(lVar6 + lVar5) == uVar3) &&
           (*(int *)(lVar6 + 4 + lVar5) == *(int *)((longlong)param_1 + 0xc))) {
          if ((longlong *)(lVar1 + 8) == (longlong *)0x0 || lVar1 == 0) {
            return;
          }
          if (*(char *)(*(longlong *)(lVar1 + 8) + 0x180) != '\0') {
            return;
          }
          iVar7 = *(int *)(lVar4 + 0x120);
          if ((longlong)iVar7 != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x118);
            lVar6 = 0;
            do {
              if (*(int *)(lVar4 + 0xe0 + lVar6) == (int)param_1[1]) {
                pbVar2 = (byte *)(lVar4 + 0x520 + lVar6);
                *pbVar2 = *pbVar2 & 99;
              }
              lVar6 = lVar6 + 0x540;
            } while ((longlong)iVar7 * 0x540 - lVar6 != 0);
          }
          FUN_1477d150c();
          return;
        }
        iVar7 = *(int *)(lVar1 + 0x18);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 143356e74 FUN_143356e74 body=12 status=ok
// SIG undefined FUN_143356e74(void)

void FUN_143356e74(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143356e7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143356e80 FUN_143356e80 body=29 status=ok
// SIG undefined FUN_143356e80(void)

undefined8 FUN_143356e80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143356f00 FUN_143356f00 body=12 status=ok
// SIG undefined FUN_143356f00(void)

void FUN_143356f00(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143356f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143356f0c FUN_143356f0c body=29 status=ok
// SIG undefined FUN_143356f0c(void)

undefined8 FUN_143356f0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143356f2a FUN_143356f2a body=78 status=ok
// SIG undefined FUN_143356f2a(void)

void FUN_143356f2a(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(*param_1 + 0x118);
  lVar4 = (longlong)(int)param_1[1] * 0x540;
  bVar2 = *(byte *)(lVar3 + 0x520 + lVar4);
  *(byte *)(lVar3 + 0x520 + lVar4) = bVar2 & 99;
  if ((bVar2 & 0x20) != 0) {
    FUN_1433b41b0(lVar3 + lVar4 + 0x4e0);
    pbVar1 = (byte *)(lVar3 + lVar4 + 0x520);
    *pbVar1 = *pbVar1 & 0xdf;
  }
  return;
}



// FUNCTION 143356f96 FUN_143356f96 body=12 status=ok
// SIG undefined FUN_143356f96(void)

void FUN_143356f96(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143356f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143356fa2 FUN_143356fa2 body=29 status=ok
// SIG undefined FUN_143356fa2(void)

undefined8 FUN_143356fa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143356fc0 FUN_143356fc0 body=210 status=ok
// SIG undefined FUN_143356fc0(void)

void FUN_143356fc0(longlong *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 0x118);
  lVar6 = (longlong)(int)param_1[1] * 0x540;
  bVar2 = *(byte *)(lVar4 + 0x520 + lVar6);
  *(byte *)(lVar4 + 0x520 + lVar6) = bVar2 & 0x6f | 0x80;
  if ((bVar2 & 0x20) == 0) {
    lVar4 = lVar4 + lVar6;
    uVar5 = *(int *)((longlong)param_1 + 0xc) + 3U & 0xfffffffc;
    if ((int)uVar5 < 1) {
      *(byte *)(lVar4 + 0x520) = bVar2 & 0x43;
    }
    else {
      *(float *)(lVar4 + 0x130) = *(float *)(lVar4 + 0x124);
      *(uint *)(lVar4 + 0x138) = uVar5;
      *(float *)(lVar4 + 300) = -*(float *)(lVar4 + 0x124) / (float)(int)uVar5;
      *(undefined4 *)(lVar4 + 0x134) = 0;
    }
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x118);
    lVar4 = (longlong)(int)param_1[1] * 0x540;
    bVar2 = *(byte *)(lVar3 + 0x520 + lVar4);
    *(byte *)(lVar3 + 0x520 + lVar4) = bVar2 & 99;
    if ((bVar2 & 0x20) != 0) {
      FUN_1433b41b0(lVar3 + lVar4 + 0x4e0);
      pbVar1 = (byte *)(lVar3 + lVar4 + 0x520);
      *pbVar1 = *pbVar1 & 0xdf;
    }
  }
  return;
}



// FUNCTION 1433570b0 FUN_1433570b0 body=12 status=ok
// SIG undefined FUN_1433570b0(void)

void FUN_1433570b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433570b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433570bc FUN_1433570bc body=29 status=ok
// SIG undefined FUN_1433570bc(void)

undefined8 FUN_1433570bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357122 FUN_143357122 body=12 status=ok
// SIG undefined FUN_143357122(void)

void FUN_143357122(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014335712b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14335712e FUN_14335712e body=29 status=ok
// SIG undefined FUN_14335712e(void)

undefined8 FUN_14335712e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433571d6 FUN_1433571d6 body=12 status=ok
// SIG undefined FUN_1433571d6(void)

void FUN_1433571d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433571df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433571e2 FUN_1433571e2 body=29 status=ok
// SIG undefined FUN_1433571e2(void)

undefined8 FUN_1433571e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357278 FUN_143357278 body=12 status=ok
// SIG undefined FUN_143357278(void)

void FUN_143357278(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143357281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143357284 FUN_143357284 body=29 status=ok
// SIG undefined FUN_143357284(void)

undefined8 FUN_143357284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357310 FUN_143357310 body=12 status=ok
// SIG undefined FUN_143357310(void)

void FUN_143357310(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143357319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14335731c FUN_14335731c body=29 status=ok
// SIG undefined FUN_14335731c(void)

undefined8 FUN_14335731c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357368 FUN_143357368 body=68 status=ok
// SIG undefined FUN_143357368(void)

void FUN_143357368(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x120,0x10);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a571080;
  memcpy(puVar1 + 2,(void *)(param_1 + 0x10),0x110);
  return;
}



// FUNCTION 1433573b2 FUN_1433573b2 body=29 status=ok
// SIG undefined FUN_1433573b2(void)

void FUN_1433573b2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433573d0 FUN_1433573d0 body=29 status=ok
// SIG undefined FUN_1433573d0(void)

undefined8 FUN_1433573d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433573ee FUN_1433573ee body=143 status=ok
// SIG undefined FUN_1433573ee(void)

void FUN_1433573ee(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0x540 + *(longlong *)(lVar2 + 0x118);
  lVar3 = *(longlong *)(lVar2 + 0x128);
  lVar7 = (longlong)(int)param_1[1] * 0x330;
  iVar1 = *(int *)(lVar3 + 0x250 + lVar7);
  if ((iVar1 == *(int *)((longlong)param_1 + 0xc)) || ((*(byte *)(lVar5 + 0x521) & 4) != 0)) {
    bVar6 = *(byte *)(lVar5 + 0x520) & 0xfe | *(byte *)(param_1 + 4);
    *(byte *)(lVar5 + 0x520) = bVar6;
    *(byte *)(lVar5 + 0x520) = bVar6 & 0xfd | *(char *)((longlong)param_1 + 0x21) * '\x02';
    uVar4 = FUN_1477d3006(lVar3 + lVar7,param_1 + 2,
                          CONCAT31((int3)((uint)iVar1 >> 8),
                                   *(undefined1 *)((longlong)param_1 + 0x21)));
    *(undefined1 *)(*(longlong *)(lVar2 + 0x1d8) + (longlong)(int)param_1[1]) = uVar4;
  }
  return;
}



// FUNCTION 14335747e FUN_14335747e body=161 status=ok
// SIG undefined FUN_14335747e(void)

undefined8 * FUN_14335747e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14a5710a0;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar2;
  *(undefined4 *)(puVar5 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar5 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
  }
  else {
    FUN_1470345a0(puVar5 + 3,iVar1,0);
    memcpy((void *)puVar5[3],_Src,(longlong)iVar1 << 2);
  }
  *(undefined2 *)(puVar5 + 5) = *(undefined2 *)(param_1 + 0x28);
  return puVar5 + 1;
}



// FUNCTION 143357526 FUN_143357526 body=29 status=ok
// SIG undefined FUN_143357526(void)

void FUN_143357526(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143357544 FUN_143357544 body=57 status=ok
// SIG undefined FUN_143357544(void)

undefined8 * FUN_143357544(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5710a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433575d2 FUN_1433575d2 body=12 status=ok
// SIG undefined FUN_1433575d2(void)

void FUN_1433575d2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433575db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433575de FUN_1433575de body=29 status=ok
// SIG undefined FUN_1433575de(void)

undefined8 FUN_1433575de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357650 FUN_143357650 body=12 status=ok
// SIG undefined FUN_143357650(void)

void FUN_143357650(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143357659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14335765c FUN_14335765c body=29 status=ok
// SIG undefined FUN_14335765c(void)

undefined8 FUN_14335765c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433576c4 FUN_1433576c4 body=12 status=ok
// SIG undefined FUN_1433576c4(void)

void FUN_1433576c4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433576cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433576d0 FUN_1433576d0 body=29 status=ok
// SIG undefined FUN_1433576d0(void)

undefined8 FUN_1433576d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357738 FUN_143357738 body=12 status=ok
// SIG undefined FUN_143357738(void)

void FUN_143357738(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143357741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143357744 FUN_143357744 body=29 status=ok
// SIG undefined FUN_143357744(void)

undefined8 FUN_143357744(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357762 FUN_143357762 body=106 status=ok
// SIG undefined FUN_143357762(void)

void FUN_143357762(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*param_1 + 0x118);
  lVar2 = (longlong)(int)param_1[1] * 0x540;
  FUN_147d34fbe(*(undefined8 *)(lVar1 + 0x378 + lVar2),param_1[2]);
  FUN_147d34fbe(*(undefined8 *)(lVar1 + 0x388 + lVar2),param_1[8]);
  FUN_147d34fbe(*(undefined8 *)(lVar1 + 0x398 + lVar2),param_1[6]);
  FUN_147d34fbe(*(undefined8 *)(lVar1 + 0x3a8 + lVar2),param_1[4]);
  return;
}



// FUNCTION 1433577cc FUN_1433577cc body=131 status=ok
// SIG undefined FUN_1433577cc(void)

undefined8 * FUN_1433577cc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a571140;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_147d34d7a(puVar1 + 3,param_1 + 0x18);
  FUN_147d34d7a(puVar1 + 5,param_1 + 0x28);
  FUN_147d34d7a(puVar1 + 7,param_1 + 0x38);
  FUN_147d34d7a(puVar1 + 9,param_1 + 0x48);
  return puVar1 + 1;
}



// FUNCTION 143357856 FUN_143357856 body=29 status=ok
// SIG undefined FUN_143357856(void)

void FUN_143357856(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143357874 FUN_143357874 body=197 status=ok
// SIG undefined FUN_143357874(void)

undefined8 * FUN_143357874(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a571140;
  plVar3 = (longlong *)param_1[10];
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
  plVar3 = (longlong *)param_1[6];
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



// FUNCTION 14335793a FUN_14335793a body=134 status=ok
// SIG undefined FUN_14335793a(void)

void FUN_14335793a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_1[1] * 0x540 + *(longlong *)(*param_1 + 0x118);
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar6 + 0x508);
  *(longlong *)(lVar6 + 0x500) = lVar3;
  *(longlong *)(lVar6 + 0x508) = lVar4;
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
  *(byte *)(lVar6 + 0x522) = *(byte *)(lVar6 + 0x522) & 0x7f | (char)param_1[4] << 7;
  return;
}



// FUNCTION 1433579c0 FUN_1433579c0 body=99 status=ok
// SIG undefined FUN_1433579c0(void)

undefined8 * FUN_1433579c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a571160;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 0x28);
  return puVar2 + 1;
}



// FUNCTION 143357a2a FUN_143357a2a body=29 status=ok
// SIG undefined FUN_143357a2a(void)

void FUN_143357a2a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143357a48 FUN_143357a48 body=83 status=ok
// SIG undefined FUN_143357a48(void)

undefined8 * FUN_143357a48(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a571160;
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



// FUNCTION 143357ade FUN_143357ade body=12 status=ok
// SIG undefined FUN_143357ade(void)

void FUN_143357ade(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143357ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143357aea FUN_143357aea body=29 status=ok
// SIG undefined FUN_143357aea(void)

undefined8 FUN_143357aea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357b4a FUN_143357b4a body=12 status=ok
// SIG undefined FUN_143357b4a(void)

void FUN_143357b4a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143357b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143357b56 FUN_143357b56 body=29 status=ok
// SIG undefined FUN_143357b56(void)

undefined8 FUN_143357b56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357b74 FUN_143357b74 body=587 status=ok
// SIG undefined FUN_143357b74(void)

void FUN_143357b74(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  
  plVar4 = (longlong *)param_1[3];
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  lVar5 = *param_1;
  lVar13 = (longlong)(int)param_1[1] * 0x540 + *(longlong *)(lVar5 + 0x118);
  iVar12 = (int)plVar4[1];
  do {
    if (iVar12 == 0) {
      return;
    }
    LOCK();
    iVar11 = (int)plVar4[1];
    bVar15 = iVar12 == iVar11;
    if (bVar15) {
      *(int *)(plVar4 + 1) = iVar12 + 1;
      iVar11 = iVar12;
    }
    iVar12 = iVar11;
    UNLOCK();
  } while (!bVar15);
  lVar6 = param_1[2];
  if (lVar6 == 0) goto LAB_143357d5a;
  *(byte *)(lVar13 + 0x522) = *(byte *)(lVar13 + 0x522) & 0xdf | ((int)param_1[5] == 1) << 5;
  if ((longlong)*(int *)(lVar13 + 0xd8) == 0) {
    iVar12 = 0;
LAB_143357ccd:
    *(uint *)(lVar13 + 0xd8) = iVar12 + 1U;
    if (*(uint *)(lVar13 + 0xdc) < iVar12 + 1U) {
      FUN_1477cf8c2((longlong *)(lVar13 + 0xd0),iVar12);
    }
    plVar3 = (longlong *)(*(longlong *)(lVar13 + 0xd0) + (longlong)iVar12 * 0x28);
    *plVar3 = param_1[2];
    lVar8 = param_1[3];
    plVar3[1] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
      UNLOCK();
    }
    plVar3[4] = param_1[6];
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x24);
    lVar8 = param_1[5];
    uVar10 = *(undefined4 *)((longlong)param_1 + 0x2c);
    *(int *)(plVar3 + 2) = (int)param_1[4];
    *(undefined4 *)((longlong)plVar3 + 0x14) = uVar9;
    *(int *)(plVar3 + 3) = (int)lVar8;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uVar10;
  }
  else {
    plVar14 = *(longlong **)(lVar13 + 0xd0);
    plVar3 = plVar14 + (longlong)*(int *)(lVar13 + 0xd8) * 5;
    bVar15 = true;
    do {
      plVar7 = (longlong *)plVar14[1];
      if (plVar7 != (longlong *)0x0) {
        iVar12 = (int)plVar7[1];
        do {
          if (iVar12 == 0) goto LAB_143357cad;
          LOCK();
          iVar11 = (int)plVar7[1];
          bVar16 = iVar12 == iVar11;
          if (bVar16) {
            *(int *)(plVar7 + 1) = iVar12 + 1;
            iVar11 = iVar12;
          }
          iVar12 = iVar11;
          UNLOCK();
        } while (!bVar16);
        if (*plVar14 == 0) {
LAB_143357c88:
          bVar16 = true;
        }
        else {
          if (*(int *)(*plVar14 + 0x20) != *(int *)(lVar6 + 0x20)) {
            iVar12 = (int)plVar14[3];
LAB_143357c7b:
            if (iVar12 == 1) {
              *(byte *)(lVar13 + 0x522) = *(byte *)(lVar13 + 0x522) | 0x20;
            }
            goto LAB_143357c88;
          }
          *(int *)(plVar14 + 2) = (int)param_1[4];
          iVar12 = (int)param_1[5];
          *(int *)(plVar14 + 3) = iVar12;
          bVar15 = false;
          bVar16 = false;
          if ((*(byte *)(lVar13 + 0x522) & 0x20) == 0) goto LAB_143357c7b;
        }
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        if (!bVar16) break;
      }
LAB_143357cad:
      plVar14 = plVar14 + 5;
    } while (plVar14 != plVar3);
    if (bVar15) {
      iVar12 = *(int *)(lVar13 + 0xd8);
      goto LAB_143357ccd;
    }
  }
  if ((*(byte *)(lVar13 + 0x522) & 0x20) == 0) {
    *(undefined8 *)(*(longlong *)(lVar5 + 0x128) + 0x10 + (longlong)(int)param_1[1] * 0x330) = 0;
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x70) + (longlong)(int)param_1[1] * 8);
  if (lVar5 != 0) {
    FUN_1477d6052(lVar6,lVar5,(int)param_1[4],(int)param_1[5]);
  }
LAB_143357d5a:
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143357d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 143357dc0 FUN_143357dc0 body=109 status=ok
// SIG undefined FUN_143357dc0(void)

undefined8 * FUN_143357dc0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a5711c0;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar3[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar3[7] = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  puVar3[6] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 143357e34 FUN_143357e34 body=29 status=ok
// SIG undefined FUN_143357e34(void)

void FUN_143357e34(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143357e52 FUN_143357e52 body=64 status=ok
// SIG undefined FUN_143357e52(void)

undefined8 * FUN_143357e52(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5711c0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143357e92 FUN_143357e92 body=641 status=ok
// SIG undefined FUN_143357e92(void)

void FUN_143357e92(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  
  plVar4 = (longlong *)param_1[3];
  if (plVar4 != (longlong *)0x0) {
    lVar5 = *param_1;
    lVar13 = (longlong)(int)param_1[1] * 0x540 + *(longlong *)(lVar5 + 0x118);
    iVar9 = (int)plVar4[1];
    do {
      if (iVar9 == 0) {
        return;
      }
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar16 = iVar9 == iVar8;
      if (bVar16) {
        *(int *)(plVar4 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar16);
    lVar6 = param_1[2];
    if (lVar6 != 0) {
      iVar9 = *(int *)(lVar13 + 0xd8);
      if (0 < (longlong)iVar9) {
        uVar15 = (longlong)iVar9;
        do {
          uVar2 = uVar15 - 1;
          lVar10 = *(longlong *)(lVar13 + 0xd0);
          plVar12 = *(longlong **)(lVar10 + 8 + uVar2 * 0x28);
          if (plVar12 == (longlong *)0x0) {
LAB_143357f7d:
            plVar12 = (longlong *)0x0;
          }
          else {
            iVar9 = (int)plVar12[1];
            do {
              if (iVar9 == 0) goto LAB_143357f7d;
              LOCK();
              iVar8 = (int)plVar12[1];
              bVar16 = iVar9 == iVar8;
              if (bVar16) {
                *(int *)(plVar12 + 1) = iVar9 + 1;
                iVar8 = iVar9;
              }
              iVar9 = iVar8;
              UNLOCK();
            } while (!bVar16);
          }
          lVar10 = *(longlong *)(lVar10 + uVar2 * 0x28);
          plVar11 = (longlong *)param_1[3];
          if (plVar11 == (longlong *)0x0) {
LAB_143357fcf:
            lVar14 = 0;
          }
          else {
            iVar9 = (int)plVar11[1];
            do {
              if (iVar9 == 0) goto LAB_143357fcf;
              LOCK();
              iVar8 = (int)plVar11[1];
              bVar16 = iVar9 == iVar8;
              if (bVar16) {
                *(int *)(plVar11 + 1) = iVar9 + 1;
                iVar8 = iVar9;
              }
              iVar9 = iVar8;
              UNLOCK();
            } while (!bVar16);
            lVar14 = param_1[2];
            LOCK();
            plVar7 = plVar11 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
          if (plVar12 == (longlong *)0x0) {
            lVar10 = 0;
          }
          else {
            LOCK();
            plVar11 = plVar12 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
          if (lVar10 == lVar14) {
            FUN_1477d246a((longlong *)(lVar13 + 0xd0),uVar2 & 0xffffffff);
          }
          bVar16 = 1 < (longlong)uVar15;
          uVar15 = uVar2;
        } while (bVar16);
        iVar9 = *(int *)(lVar13 + 0xd8);
      }
      *(byte *)(lVar13 + 0x522) = *(byte *)(lVar13 + 0x522) & 0xdf;
      if (iVar9 != 0) {
        plVar11 = *(longlong **)(lVar13 + 0xd0);
        plVar12 = plVar11 + (longlong)iVar9 * 5;
        do {
          plVar7 = (longlong *)plVar11[1];
          if (plVar7 != (longlong *)0x0) {
            iVar9 = (int)plVar7[1];
            do {
              if (iVar9 == 0) goto LAB_1433580a1;
              LOCK();
              iVar8 = (int)plVar7[1];
              bVar16 = iVar9 == iVar8;
              if (bVar16) {
                *(int *)(plVar7 + 1) = iVar9 + 1;
                iVar8 = iVar9;
              }
              iVar9 = iVar8;
              UNLOCK();
            } while (!bVar16);
            if ((*plVar11 != 0) && ((int)plVar11[3] == 1)) {
              *(byte *)(lVar13 + 0x522) = *(byte *)(lVar13 + 0x522) | 0x20;
              LOCK();
              plVar12 = plVar7 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
              break;
            }
            LOCK();
            plVar3 = plVar7 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
LAB_1433580a1:
          plVar11 = plVar11 + 5;
        } while (plVar11 != plVar12);
      }
      if ((*(byte *)(lVar13 + 0x522) & 0x20) == 0) {
        *(undefined8 *)(*(longlong *)(lVar5 + 0x128) + 0x10 + (longlong)(int)param_1[1] * 0x330) = 0
        ;
      }
      FUN_1477d60b6(lVar6,*(undefined8 *)
                           (*(longlong *)(lVar5 + 0x70) + (longlong)(int)param_1[1] * 8));
    }
    LOCK();
    plVar12 = plVar4 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143357f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143358114 FUN_143358114 body=109 status=ok
// SIG undefined FUN_143358114(void)

undefined8 * FUN_143358114(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a5711e0;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar3[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar3[7] = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar3[5] = *(undefined8 *)(param_1 + 0x28);
  puVar3[6] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 143358188 FUN_143358188 body=29 status=ok
// SIG undefined FUN_143358188(void)

void FUN_143358188(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433581a6 FUN_1433581a6 body=64 status=ok
// SIG undefined FUN_1433581a6(void)

undefined8 * FUN_1433581a6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5711e0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433581e6 FUN_1433581e6 body=551 status=ok
// SIG undefined FUN_1433581e6(void)

void FUN_1433581e6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_1;
  local_50 = (int)param_1[1];
  local_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  lVar11 = (longlong)local_50 * 0x540 + *(longlong *)(lVar6 + 0x118);
  if (*(int *)(lVar6 + 0x140) != *(int *)(lVar6 + 0x16c)) {
    uVar3 = *(uint *)(param_1 + 2);
    lVar5 = lVar6 + 0x170;
    if (*(longlong *)(lVar6 + 0x178) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x178);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar6 + 0x180) - 1U &
                             (uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b8 ^ uVar3)) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(lVar6 + 0x138);
      do {
        lVar10 = (longlong)iVar7 * 0x20;
        lVar9 = lVar5 + lVar10;
        if ((*(uint *)(lVar5 + lVar10) == uVar3) && (*(int *)(lVar5 + 4 + lVar10) == -1)) {
          puVar8 = (undefined8 *)(lVar9 + 8);
          if (puVar8 != (undefined8 *)0x0 && lVar9 != 0) {
            FUN_1477b97e4(*puVar8,CONCAT71((int7)((ulonglong)puVar8 >> 8),
                                           *(undefined1 *)((longlong)param_1 + 0xc)),&local_50);
            goto LAB_143358389;
          }
          break;
        }
        iVar7 = *(int *)(lVar9 + 0x18);
      } while (iVar7 != -1);
    }
  }
  lVar5 = FUN_14001cc68(0x188,0x10);
  FUN_1477b966a(lVar5,lVar6,1);
  local_60 = lVar5;
  local_58 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_58[1] = (longlong)&DAT_100000001;
  *local_58 = (longlong)&PTR_FUN_14a570f00;
  local_58[2] = lVar5;
  FUN_1477b97e4(lVar5,*(undefined1 *)((longlong)param_1 + 0xc),&local_50);
  local_68 = (undefined4)param_1[2];
  local_48 = &local_68;
  local_64 = 0xffffffff;
  local_40 = &local_60;
  FUN_1477d1c4a((longlong *)(lVar6 + 0x138),local_34);
  plVar4 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_143358389:
  lVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0xc) * 0x10;
  lVar6 = *(longlong *)(lVar11 + 0xf0 + lVar5);
  iVar7 = *(int *)(lVar11 + 0xf8 + lVar5);
  lVar9 = (longlong)iVar7;
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      if (*(int *)(lVar6 + lVar10) == (int)param_1[2]) goto LAB_1433583eb;
      lVar10 = lVar10 + 4;
    } while (lVar9 * 4 - lVar10 != 0);
  }
  lVar11 = lVar11 + lVar5;
  *(uint *)(lVar11 + 0xf8) = iVar7 + 1U;
  if (*(uint *)(lVar11 + 0xfc) < iVar7 + 1U) {
    FUN_1447808da((longlong *)(lVar11 + 0xf0),iVar7);
    lVar6 = *(longlong *)(lVar11 + 0xf0);
  }
  *(int *)(lVar6 + lVar9 * 4) = (int)param_1[2];
LAB_1433583eb:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143358434 FUN_143358434 body=12 status=ok
// SIG undefined FUN_143358434(void)

void FUN_143358434(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014335843d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143358440 FUN_143358440 body=29 status=ok
// SIG undefined FUN_143358440(void)

undefined8 FUN_143358440(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335845e FUN_14335845e body=112 status=ok
// SIG undefined FUN_14335845e(void)

void FUN_14335845e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  lVar3 = *param_1;
  plVar1 = (longlong *)(lVar3 + 0x108);
  if (plVar1 != param_1 + 1) {
    iVar2 = (int)param_1[2];
    _Src = (void *)param_1[1];
    *(int *)(lVar3 + 0x110) = iVar2;
    if (iVar2 == 0 && *(int *)(lVar3 + 0x114) == 0) {
      *(undefined4 *)(lVar3 + 0x114) = 0;
    }
    else {
      FUN_144756262(plVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*plVar1,_Src,(longlong)iVar2 * 0x60);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1433584ce FUN_1433584ce body=119 status=ok
// SIG undefined FUN_1433584ce(void)

longlong FUN_1433584ce(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a571220;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_144756262((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 * 0x60);
  }
  return param_2 + 0x18;
}



// FUNCTION 14335854c FUN_14335854c body=12 status=ok
// SIG undefined FUN_14335854c(void)

void FUN_14335854c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143358555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143358558 FUN_143358558 body=57 status=ok
// SIG undefined FUN_143358558(void)

undefined8 * FUN_143358558(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a571220;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143358592 FUN_143358592 body=452 status=ok
// SIG undefined FUN_143358592(void)

void FUN_143358592(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  
  lVar2 = *param_1;
  *(int *)(lVar2 + 0x224) = *(int *)(*(longlong *)(lVar2 + 0x30) + 0xcb8) * *(int *)(lVar2 + 0x220);
  iVar5 = *(int *)(lVar2 + 0x21c);
  if (0 < iVar5) {
    lVar11 = 0x4d0;
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x118);
      if ((*(byte *)(lVar3 + 0x50 + lVar11) & 0x14) != 0) {
        plVar14 = (longlong *)(*(longlong *)(lVar2 + 0x128) + lVar9);
        plVar6 = plVar14;
        FUN_1477d2ef4(plVar14);
        plVar1 = (longlong *)(lVar3 + lVar11);
        *(undefined4 *)(lVar3 + 8 + lVar11) = 0;
        if (*(int *)(lVar3 + 0xc + lVar11) < 0) {
          plVar6 = plVar1;
          FUN_1470345fa(plVar1);
        }
        iVar5 = 2;
        if ((*(byte *)(lVar3 + 0x51 + lVar11) & 4) == 0) {
          iVar5 = *(int *)(lVar3 + 0x54 + lVar11);
        }
        bVar10 = *(byte *)(lVar3 + 0x50 + lVar11);
        if ((bVar10 & 1) == 0) {
          *(undefined4 *)(lVar3 + 8 + lVar11) = 0;
          if (*(int *)(lVar3 + 0xc + lVar11) < 0) {
            plVar6 = plVar1;
            FUN_1470345fa(plVar1,0);
            bVar10 = *(byte *)(lVar3 + 0x50 + lVar11);
          }
          uVar13 = (ulonglong)*(uint *)(param_1 + 1);
          uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),*(undefined1 *)(lVar3 + 0x52 + lVar11)) &
                  0xffffffffffffff08;
          FUN_143343e04(CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 3),iVar5,uVar13,(bVar10 & 2) >> 1
                        ,plVar1);
        }
        else {
          *(undefined1 *)(*(longlong *)(lVar2 + 0x1d8) + lVar8) = 1;
          lVar12 = (longlong)iVar5 * (longlong)(int)param_1[1];
          iVar5 = *(int *)(lVar3 + 8 + lVar11);
          uVar4 = (uint)lVar12;
          *(uint *)(lVar3 + 8 + lVar11) = iVar5 + uVar4;
          if ((uint)(*(int *)(lVar3 + 0xc + lVar11) - iVar5) < uVar4) {
            FUN_145ca0cd4(plVar1);
          }
          uVar13 = lVar12 * 4;
          memset((void *)((longlong)iVar5 * 4 + *plVar1),0,uVar13);
        }
        uVar13 = CONCAT71((int7)(uVar13 >> 8),*(undefined1 *)(lVar3 + 0x50 + lVar11)) &
                 0xffffffffffffff02;
        FUN_1477d3006(plVar14,plVar1,CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 1));
        iVar5 = *(int *)(lVar2 + 0x21c);
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x330;
      lVar11 = lVar11 + 0x540;
    } while (lVar8 < iVar5);
  }
  return;
}



// FUNCTION 143358774 FUN_143358774 body=12 status=ok
// SIG undefined FUN_143358774(void)

void FUN_143358774(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014335877d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143358780 FUN_143358780 body=29 status=ok
// SIG undefined FUN_143358780(void)

undefined8 FUN_143358780(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335879e FUN_14335879e body=683 status=ok
// SIG undefined FUN_14335879e(void)

void FUN_14335879e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  longlong lVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  LPCRITICAL_SECTION local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = *param_1;
  local_68 = 0xffffffff;
  lVar11 = *(longlong *)(lVar8 + 0x30);
  local_70 = *(undefined8 *)(lVar11 + 0x5a0);
  local_78 = (ulonglong)(uint)(float)*(int *)(lVar11 + 0x74);
  local_64 = *(undefined4 *)(lVar11 + 0x90);
  if (0 < *(int *)(lVar8 + 0x21c)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar8 + 8);
    local_b8 = param_1 + 2;
    uVar12 = 0;
    local_a8 = lpCriticalSection;
    local_a0 = lVar8;
    local_98 = param_1;
    do {
      if (*(int *)(*(longlong *)(lVar8 + 0x118) + 0x1d0 + uVar12 * 0x540) == (int)param_1[1]) {
        lVar11 = *(longlong *)(lVar8 + 0x118) + uVar12 * 0x540;
        *(byte *)(lVar11 + 0x1f8) = *(byte *)(param_1 + 4) ^ 1;
        EnterCriticalSection(lpCriticalSection);
        local_b0 = (longlong *)(lVar11 + 0x1d8);
        if ((int)param_1[3] == *(int *)(lVar11 + 0x1e0)) {
          if (0 < (int)param_1[3]) {
            lVar8 = 8;
            lVar10 = 0;
            local_90 = lVar11;
            bVar9 = false;
            do {
              lVar11 = *local_b8;
              lVar4 = *(longlong *)(*local_b0 + -8 + lVar8);
              plVar5 = *(longlong **)(*local_b0 + lVar8);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              cVar6 = FUN_147d341c8(lVar4 + 0x4c,*(undefined8 *)(lVar11 + -8 + lVar8));
              bVar7 = true;
              if (cVar6 != '\0') {
                LOCK();
                *(uint *)(lVar4 + 0x5c) = ~*(uint *)(lVar11 + lVar8) & 1;
                UNLOCK();
                bVar7 = bVar9;
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
              if (cVar6 == '\0') break;
              lVar10 = lVar10 + 1;
              lVar8 = lVar8 + 0x10;
              bVar9 = bVar7;
            } while (lVar10 < *(int *)(local_90 + 0x1e0));
            lpCriticalSection = local_a8;
            param_1 = local_98;
            lVar8 = local_a0;
            lVar11 = local_90;
            if (bVar7) goto LAB_143358975;
          }
        }
        else {
LAB_143358975:
          local_78 = CONCAT44(*(undefined4 *)(lVar11 + 0x524),(undefined4)local_78);
          FUN_1477c55a8(lVar8,uVar12 & 0xffffffff);
          local_88 = 0;
          uStack_80 = 0;
          FUN_1477c56f8(lVar8,&local_78,local_b8,&local_88);
          FUN_1477d24e0(local_b0,&local_88);
          iVar3 = *(int *)(lVar11 + 0x1f0);
          *(uint *)(lVar11 + 0x1f0) = iVar3 + 1U;
          if (*(uint *)(lVar11 + 500) < iVar3 + 1U) {
            FUN_1477d1bc4((longlong *)(lVar11 + 0x1e8),iVar3);
          }
          *(undefined8 *)(*(longlong *)(lVar11 + 0x1e8) + (longlong)iVar3 * 8) = 0;
          FUN_1477cb5a3(local_88,uStack_80 & 0xffffffff);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < (longlong)*(int *)(lVar8 + 0x21c));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143358a4a FUN_143358a4a body=154 status=ok
// SIG undefined FUN_143358a4a(void)

undefined8 * FUN_143358a4a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a571260;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(int *)(puVar3 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  }
  else {
    FUN_1477cca26(puVar3 + 3,iVar1,0);
    FUN_1477cca88(puVar3[3],uVar2,iVar1);
  }
  *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(param_1 + 0x28);
  return puVar3 + 1;
}



// FUNCTION 143358aea FUN_143358aea body=29 status=ok
// SIG undefined FUN_143358aea(void)

void FUN_143358aea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143358b08 FUN_143358b08 body=57 status=ok
// SIG undefined FUN_143358b08(void)

undefined8 * FUN_143358b08(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a571260;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143358b41 FUN_143358b41 body=2505 status=ok
// SIG undefined FUN_143358b41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143358b41(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined8 *local_58;
  int local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AudioMixer",&PTR_FUN_14a567090,1,0);
  FUN_14098d3d2(FUN_14333f548,L"/Script/AudioMixer",L"ERequiredSubmixes",&DAT_14cabad00);
  FUN_14098d3d2(FUN_14333f57f,L"/Script/AudioMixer",L"ESourceManagerRenderThreadPhase",
                &DAT_14cabad18);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14a567d80;
  local_78 = 0;
  FUN_14282b410(L"/Script/AudioMixer",&PTR_FUN_14a567dc0,1,0);
  ppuStack_70 = &PTR_FUN_14a56cae0;
  local_78 = 2;
  local_68 = 4;
  FUN_14282b410(L"/Script/AudioMixer",&PTR_FUN_14a56cbb0,1,&PTR_FUN_14a56cb60);
  DAT_14cabaf98 = 0;
  atexit((_func_5014 *)&LAB_1433436cc);
  DAT_14cabafa0 = 0;
  _DAT_14cabafa8 = 0;
  atexit(FUN_143343da1);
  DAT_14cabafb0 = 0;
  _DAT_14cabafb8 = 0;
  atexit(FUN_143343dd2);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabafc0,L"au.DisableSubmixEffectEQ",&DAT_14c7610e0,
                L"Disables the eq submix (true by default as of 5.0).\n0: Not Disabled, 1: Disabled"
               );
  atexit(FUN_143344670);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabafd0,L"au.DisableSubmixMutationLock",&DAT_14cabafe0,
                L"Disables the submix mutation lock.\n0: Not Disabled (Default), 1: Disabled");
  atexit(FUN_1433446b5);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabafe8,L"au.submix.audibledefaultendpoints",&DAT_14cabaff8,
                L"Allows audio sent to defaulted (typically silent) endpoint submixes to be audible via master. (useful for debugging)\n0: Disabled (Default), 1: Enabled"
               );
  atexit(FUN_1433446fa);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb000,L"au.Debug.Generator",&DAT_14cabb010,
                L"Enables/disables debug sound generation.\n0: Disabled, 1: SinTone, 2: WhiteNoise")
  ;
  atexit(FUN_14334473f);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cabb018,L"au.Debug.Generator.Amp",&DAT_14c7610e4,L"Sets.\nDefault: 0.2f");
  atexit(FUN_143344784);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb028,L"au.Debug.Generator.Channel",&DAT_14cabb038,
                L"Sets channel output index of debug audio.  If number provided is above supported number, uses left.\n0: Left, 1: Right, etc."
               );
  atexit(FUN_1433447c9);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cabb040,L"au.Debug.Generator.Freq",&DAT_14c7610e8,
                L"Sets debug sound generation frequency.\n0: Not Disabled, 1: SinTone, 2: WhiteNoise"
               );
  atexit(FUN_14334480e);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb050,L"au.PatchBufferBlocks",&DAT_14c7610ec,
                L"Determines the number of blocks that fit in a patch buffer.");
  atexit(FUN_143344853);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb060,L"au.sh.UpdateModulatorsOnAudioThread",&DAT_14c7610f0,
                L"Allows submix modulators to be update on the audio thread instead of the audio render thread. (Default 1).\n0: Disabled, 1: Enabled"
               );
  atexit(FUN_143344898);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_149e30fe0;
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
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_14a5704b0;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14170a7d0(&DAT_14cabb070,L"au.submix.drawgraph",
                L"Draws the submix heirarchy for this world to the debug output",&local_58);
  if (local_50 == 0) {
LAB_143358ee3:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143358ee3;
  }
  atexit(FUN_1433448dd);
  local_58 = (undefined8 *)0x800000014a5712e8;
  local_44 = 10;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_146360eee(&local_58);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb180,L"au.UseListenerOverrideForSpread",&DAT_14cabb190,
                L"Zero attenuation override distance stereo panning\n0: Use actual distance, 1: use listener override"
               );
  atexit(FUN_14334b1cb);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_149e001f0;
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
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_149e00260;
  local_58[3] = FUN_143350280;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cabb198,L"au.SourceFadeMin",
                L"Sets the length (in samples) of minimum fade when a sound source is stopped. Must be divisible by 4 (vectorization requirement). Ignored for some procedural source types. (Default: 512, Min: 4). \n"
                ,&local_58);
  if (local_50 == 0) {
LAB_143359034:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_143359034;
  }
  atexit(FUN_14334b210);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb3b8,L"au.ForceSyncAudioDecodes",&DAT_14cabb3c8,
                L"Disables using async tasks for processing sources.\n0: Not Disabled, 1: Disabled")
  ;
  atexit(FUN_14334db61);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb3d0,L"au.ForceSynchronizedAudioTaskKick",&DAT_14cabb3e0,
                L"Force all Audio Tasks created in one \"audio render frame\" to be queued until they can all be \"kicked\" at once at the end of the frame.\n0: Don\'t Force, 1: Force"
               );
  atexit(FUN_14334dba6);
  DAT_14cabb408 = 0;
  DAT_14cabb410 = 0;
  DAT_14cabb3e8 = 0;
  _DAT_14cabb3f0 = 0;
  _DAT_14cabb414 = 0xffffffff00000080;
  DAT_14cabb41c = 0;
  DAT_14cabb428 = 0;
  DAT_14cabb430 = 0;
  atexit(FUN_14334dbeb);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cabb438);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cabb438,4000);
  atexit((_func_5014 *)&LAB_14334dc14);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb460,L"au.DisableParallelSourceProcessing",&DAT_14c7610f8,
                L"Disables using async tasks for processing sources.\n0: Not Disabled, 1: Disabled")
  ;
  atexit(FUN_14334dc22);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb470,L"au.DisableFiltering",&DAT_14cabb480,
                L"Disables using the per-source lowpass and highpass filter.\n0: Not Disabled, 1: Disabled"
               );
  atexit(FUN_14334dc67);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb488,L"au.DisableHPFiltering",&DAT_14cabb498,
                L"Disables using the per-source highpass filter.\n0: Not Disabled, 1: Disabled");
  atexit(FUN_14334dcac);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb4a0,L"au.DisableEnvelopeFollowing",&DAT_14cabb4b0,
                L"Disables using the envlope follower for source envelope tracking.\n0: Not Disabled, 1: Disabled"
               );
  atexit(FUN_14334dcf1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb4b8,L"au.DisableSourceEffects",&DAT_14cabb4c8,
                L"Disables using any source effects.\n0: Not Disabled, 1: Disabled");
  atexit(FUN_14334dd36);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb4d0,L"au.DisableDistanceAttenuation",&DAT_14cabb4e0,
                L"Disables using any Distance Attenuation.\n0: Not Disabled, 1: Disabled");
  atexit(FUN_14334dd7b);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb4e8,L"au.BypassAudioPlugins",&DAT_14cabb4f8,
                L"Bypasses any audio plugin processing.\n0: Not Disabled, 1: Disabled");
  atexit(FUN_14334ddc0);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb500,L"au.FlushCommandBufferOnTimeout",&DAT_14cabb510,
                L"When set to 1, flushes audio render thread synchronously when our fence has timed out.\n0: Not Disabled, 1: Disabled"
               );
  atexit(FUN_14334de05);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb518,L"au.CommandBufferFlushWaitTimeMs",&DAT_14c7610fc,
                L"How long to wait for the command buffer flush to complete.\n");
  atexit(FUN_14334de4a);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb528,L"au.CommandBufferMaxSizeInMb",&DAT_14c761100,
                L"How big to allow the command buffer to grow before ignoring more commands");
  atexit(FUN_14334de8f);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb538,L"au.CommandBufferInitialCapacity",&DAT_14c761104,
                L"How many elements to initialize the command buffer capacity with");
  atexit(FUN_14334ded4);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cabb548,L"au.AudioThreadCommand.ExecutionTimeWarningThresholdInMs",
                &DAT_14c761108,
                L"If a command took longer to execute than this number (in milliseconds) then we log a warning"
               );
  atexit(FUN_14334df19);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cabb558,L"au.AudioThreadCommand.LogEveryExecution",&DAT_14cabb568,
                L"Extremely verbose logging of each Audio Thread command caller and it\'s execution time"
               );
  atexit(FUN_14334df5e);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_149e001f0;
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
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_149e00260;
  local_58[3] = FUN_143350744;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cabb570,L"au.Modulation.SetPitchRange",
                L"Sets max final modulation range of pitch (in semitones). Default: 96 semitones (+/- 4 octaves)"
                ,&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_14335947d;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14335947d:
  atexit(FUN_14334dfa3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335950c FUN_14335950c body=591 status=ok
// SIG undefined FUN_14335950c(void)

void FUN_14335950c(double *param_1,uint *param_2,uint *param_3,float *param_4)

{
  double dVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  fVar3 = (float)param_1[2];
  fVar4 = (float)*param_1;
  dVar1 = param_1[1];
  fVar5 = ABS(fVar3);
  fVar6 = ABS(fVar4);
  fVar8 = fVar6;
  if (fVar6 <= fVar5) {
    fVar8 = fVar5;
  }
  uVar2 = 0;
  uVar7 = 0;
  if ((fVar8 != 0.0) || (NAN(fVar8))) {
    fVar9 = fVar5;
    if (fVar6 <= fVar5) {
      fVar9 = fVar6;
    }
    fVar9 = fVar9 / fVar8;
    fVar8 = fVar9 * fVar9;
    fVar9 = ((((((fVar8 * 0.007212885 + -0.03505968) * fVar8 + 0.08167588) * fVar8 + -0.13374658) *
               fVar8 + 0.19856563) * fVar8 + -0.33325) * fVar8 + 1.0) * fVar9;
    fVar8 = (float)(-(uint)(fVar5 < fVar6) & (uint)(1.5707964 - fVar9) |
                   ~-(uint)(fVar5 < fVar6) & (uint)fVar9);
    uVar7 = -(uint)(0.0 < fVar3) & (uint)(3.1415927 - fVar8) | ~-(uint)(0.0 < fVar3) & (uint)fVar8;
    uVar7 = (uVar7 ^ 0x80000000) & -(uint)(fVar4 < 0.0) | ~-(uint)(fVar4 < 0.0) & uVar7;
  }
  *param_3 = uVar7;
  fVar5 = ABS((float)dVar1);
  fVar3 = ABS(SQRT(fVar3 * fVar3 + fVar4 * fVar4));
  fVar8 = fVar3;
  if (fVar3 <= fVar5) {
    fVar8 = fVar5;
  }
  if ((fVar8 != 0.0) || (NAN(fVar8))) {
    fVar4 = fVar5;
    if (fVar3 <= fVar5) {
      fVar4 = fVar3;
    }
    fVar4 = fVar4 / fVar8;
    fVar8 = fVar4 * fVar4;
    fVar4 = ((((((fVar8 * 0.007212885 + -0.03505968) * fVar8 + 0.08167588) * fVar8 + -0.13374658) *
               fVar8 + 0.19856563) * fVar8 + -0.33325) * fVar8 + 1.0) * fVar4;
    fVar8 = (float)(-(uint)(fVar5 < fVar3) & (uint)(1.5707964 - fVar4) |
                   ~-(uint)(fVar5 < fVar3) & (uint)fVar4);
    uVar2 = -(uint)(0.0 < (float)dVar1);
    uVar2 = uVar2 & (uint)(3.1415927 - fVar8) | ~uVar2 & (uint)fVar8;
  }
  *param_2 = uVar2;
  *param_4 = (float)SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
  return;
}



// FUNCTION 14335975b FUN_14335975b body=69 status=ok
// SIG undefined FUN_14335975b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14335975b(void)

{
  _DAT_14cabb5e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014335979d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb5e8,1);
  return;
}



// FUNCTION 1433597a0 FUN_1433597a0 body=69 status=ok
// SIG undefined FUN_1433597a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433597a0(void)

{
  _DAT_14cabb5f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433597e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb600,1);
  return;
}



// FUNCTION 1433597e5 FUN_1433597e5 body=69 status=ok
// SIG undefined FUN_1433597e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433597e5(void)

{
  _DAT_14cabb610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143359827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb618,1);
  return;
}



// FUNCTION 14335982a FUN_14335982a body=1122 status=ok
// SIG undefined FUN_14335982a(void)

void FUN_14335982a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a571958;
  FUN_1477d4e2a();
  if ((((DAT_14cabb5f0 != 0) && (*(int *)((longlong)param_1 + 0x4f4) != 0)) &&
      (uVar3 = *(uint *)(param_1 + 0x9e), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
    lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x4f4))) &&
       (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 &&
        ((*(byte *)((longlong)param_1 + 0x45c) & 1) != 0)))) {
      FUN_140056680(local_30,L"InterruptedRecording.wav");
      if (((*(int *)((longlong)param_1 + 0x4f4) != 0) &&
          (uVar3 = *(uint *)(param_1 + 0x9e), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)((longlong)param_1 + 0x4f4))
             ) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (lVar6 = *plVar7, lVar6 != 0)) {
          lVar5 = FUN_14105a990();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            local_58 = &local_48;
            local_48 = 0;
            uStack_40 = 0;
            local_50 = 0;
            FUN_147d3e484(lVar6,param_1[0x15],1,local_30);
          }
        }
      }
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb7) = 0;
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  FUN_1477e7b26(param_1 + 0xae);
  puVar4 = (undefined8 *)param_1[0xad];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_1477d18f6(param_1 + 0x9f);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x99));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x94));
  FUN_1477ea0c9(param_1[0x91],*(undefined4 *)(param_1 + 0x92));
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x84));
  FUN_1477ea093(param_1[0x82],*(undefined4 *)(param_1 + 0x83));
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_14585d2b6(param_1 + 0x80);
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)param_1[0x7b];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x74));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6f));
  FUN_1477d503c(param_1 + 0x61);
  plVar7 = (longlong *)param_1[0x59];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)param_1[0x57];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)param_1[0x55];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1477d507a(param_1 + 0x40);
  FUN_1477d510c(param_1 + 0x2c);
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1477e7cda(param_1 + 0x16);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1477ea05d(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1477e7d68(param_1 + 7);
  plVar7 = (longlong *)param_1[6];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143359c8e FUN_143359c8e body=3610 status=ok
// SIG undefined FUN_143359c8e(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe78 : 0x00014335a4e2 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_143359c8e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  byte bVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined2 local_27c;
  longlong local_260;
  undefined4 local_258;
  undefined1 local_250 [64];
  longlong local_210;
  undefined4 local_208;
  undefined1 local_200 [64];
  longlong local_1c0;
  undefined4 local_1b8;
  code *local_1a8;
  undefined8 *local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_1477d4e2a();
  iVar7 = *(int *)((longlong)param_1 + 0x4f4);
  if (((iVar7 == 0) || (uVar9 = *(uint *)(param_1 + 0x9e), (int)uVar9 < 0)) ||
     (DAT_14c9647dc <= (int)uVar9)) {
    bVar15 = *(byte *)((longlong)param_1 + 0x45c) & 0xfb | DAT_00000028 << 2;
    *(byte *)((longlong)param_1 + 0x45c) = bVar15;
LAB_14335a1e8:
    lVar14 = 0;
  }
  else {
    plVar16 = (longlong *)
              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
    if (((plVar16 == (longlong *)0x0) || ((int)plVar16[2] != iVar7)) ||
       ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) {
      lVar14 = 0;
    }
    else {
      lVar14 = *plVar16;
    }
    bVar15 = *(byte *)((longlong)param_1 + 0x45c) & 0xfb | *(char *)(lVar14 + 0x28) << 2;
    *(byte *)((longlong)param_1 + 0x45c) = bVar15;
    plVar16 = (longlong *)
              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
    if (((plVar16 == (longlong *)0x0) || ((int)plVar16[2] != iVar7)) ||
       ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) goto LAB_14335a1e8;
    lVar14 = *plVar16;
  }
  param_1[0x8c] = (longlong)(double)*(float *)(lVar14 + 0x2c);
  *(byte *)((longlong)param_1 + 0x45c) = bVar15 & 0xe7;
  param_1[0x8d] = -0x4010000000000000;
  if (((*(byte *)(param_1[0x15] + 0x598) & 0x20) != 0) &&
     (*(longlong *)(param_1[0x15] + 0x110) != 0)) {
    local_2a8 = "Volume";
    uStack_2a0._0_5_ = 6;
    uVar8 = FUN_14001a6c0(&local_2a8,1);
    local_2b8 = 1;
    FUN_147d351ca(param_1 + 0x54,*(undefined4 *)(param_1[0x15] + 0x90),uVar8,0);
    local_2a8 = "Volume";
    uStack_2a0._0_5_ = 6;
    uVar8 = FUN_14001a6c0(&local_2a8,1);
    local_2b8 = 1;
    FUN_147d351ca(param_1 + 0x58,*(undefined4 *)(param_1[0x15] + 0x90),uVar8,0);
    local_2a8 = "Volume";
    uStack_2a0 = CONCAT35(uStack_2a0._5_3_,6);
    uVar8 = FUN_14001a6c0(&local_2a8,1);
    local_2b8 = 1;
    FUN_147d351ca(param_1 + 0x56,*(undefined4 *)(param_1[0x15] + 0x90),uVar8,0);
    iVar7 = *(int *)((longlong)param_1 + 0x4f4);
  }
  if (iVar7 == 0) goto LAB_143359f39;
  uVar9 = *(uint *)(param_1 + 0x9e);
  if (((((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) &&
       (plVar16 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       plVar16 != (longlong *)0x0)) &&
      (((int)plVar16[2] == iVar7 && ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))) &&
     (lVar14 = *plVar16, lVar14 != 0)) {
    lVar10 = FUN_14105a990();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
         ) == lVar10 + 0x30)) {
      fVar21 = *(float *)(lVar14 + 0x118);
      if (0.0 <= fVar21) {
        fVar21 = 0.0;
      }
      if (fVar21 <= -160.0) {
        fVar21 = -160.0;
      }
      *(float *)(param_1 + 0x5a) = fVar21;
      fVar22 = *(float *)(lVar14 + 0x170);
      if (0.0 <= fVar22) {
        fVar22 = 0.0;
      }
      if (fVar22 <= -160.0) {
        fVar22 = -160.0;
      }
      *(float *)(param_1 + 0x5b) = fVar22;
      fVar22 = *(float *)(lVar14 + 0x1c8);
      if (0.0 <= fVar22) {
        fVar22 = 0.0;
      }
      if (fVar22 <= -160.0) {
        fVar22 = -160.0;
      }
      *(float *)((longlong)param_1 + 0x2d4) = fVar22;
      fVar21 = powf(10.0,fVar21 / 20.0);
      *(float *)((longlong)param_1 + 0x28c) = fVar21;
      fVar21 = powf(10.0,*(float *)(param_1 + 0x5b) / 20.0);
      *(float *)((longlong)param_1 + 0x294) = fVar21;
      fVar21 = powf(10.0,*(float *)((longlong)param_1 + 0x2d4) / 20.0);
      *(float *)((longlong)param_1 + 0x29c) = fVar21;
      *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)((longlong)param_1 + 0x28c);
      *(float *)(param_1 + 0x53) = fVar21;
      *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)((longlong)param_1 + 0x294);
      if (((*(byte *)(param_1[0x15] + 0x598) & 0x20) != 0) &&
         (*(longlong *)(param_1[0x15] + 0x110) != 0)) {
        local_a8 = 0;
        local_a0 = 0;
        local_c8 = (undefined8 *)0x0;
        uStack_c0 = 0;
        local_9c = 0xffffffff00000080;
        local_94 = 0;
        local_88 = 0;
        local_80 = 0;
        FUN_1477ce3e2(&local_c8,lVar14 + 0x120);
        local_f8 = 0;
        local_f0 = 0;
        local_118 = 0;
        plStack_110 = (longlong *)0x0;
        local_ec = 0xffffffff00000080;
        local_e4 = 0;
        local_d8 = 0;
        local_d0 = 0;
        FUN_1477ce3e2(&local_118,lVar14 + 0x178);
        local_148 = 0;
        local_140 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_13c = 0xffffffff00000080;
        local_134 = 0;
        local_128 = 0;
        local_120 = 0;
        FUN_1477ce3e2(&local_168,lVar14 + 0x1d0);
        local_2a8 = (char *)param_1;
        FUN_1477ce544(&uStack_2a0,&local_c8);
        FUN_1477ce544(local_250,&local_118);
        FUN_1477ce544(local_200,&local_168);
        local_1a8 = (code *)0x0;
        local_198 = (undefined8 *)0x0;
        puVar13 = (undefined8 *)FUN_14001cc68(0x100,8);
        *puVar13 = &PTR_FUN_14a57c520;
        puVar13[1] = local_2a8;
        local_198 = puVar13;
        FUN_1477ce544(puVar13 + 2,&uStack_2a0);
        FUN_1477ce544(puVar13 + 0xc,local_250);
        FUN_1477ce544(puVar13 + 0x16,local_200);
        if (puVar13 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_1a8 = FUN_14335fe6e;
        }
        pcVar6 = local_1a8;
        puVar13 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar13 = 0;
        puVar13[2] = pcVar6;
        puVar13[4] = local_198;
        local_198 = (undefined8 *)0x0;
        *(undefined4 *)(puVar13 + 8) = local_178;
        *(undefined4 *)((longlong)puVar13 + 0x44) = uStack_174;
        *(undefined4 *)(puVar13 + 9) = uStack_170;
        *(undefined4 *)((longlong)puVar13 + 0x4c) = uStack_16c;
        *(undefined4 *)(puVar13 + 6) = local_188;
        *(undefined4 *)((longlong)puVar13 + 0x34) = uStack_184;
        *(undefined4 *)(puVar13 + 7) = uStack_180;
        *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_17c;
        if (pcVar6 != (code *)0x0) {
          local_1a8 = (code *)0x0;
        }
        if (puVar13 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)param_1[0x80];
          param_1[0x80] = (longlong)puVar13;
          *puVar4 = puVar13;
          if (local_1a8 != (code *)0x0) {
            (**(code **)(CONCAT44(uStack_184,local_188) + 0x10))();
          }
        }
        local_1b8 = 0;
        if (local_1c0 != 0) {
          FUN_1400020a8();
        }
        FUN_14117d2fe(local_200);
        local_208 = 0;
        if (local_210 != 0) {
          FUN_1400020a8();
        }
        FUN_14117d2fe(local_250);
        local_258 = 0;
        if (local_260 != 0) {
          FUN_1400020a8();
        }
        FUN_14117d2fe(&uStack_2a0);
        local_120 = 0;
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        FUN_14117d2fe(&local_168);
        local_d0 = 0;
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        FUN_14117d2fe(&local_118);
        local_80 = 0;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        FUN_14117d2fe(&local_c8);
      }
      if (((*(byte *)(lVar14 + 0x220) & 1) != 0) &&
         (plVar16 = *(longlong **)(param_1[0x15] + 0xe40), plVar16 != (longlong *)0x0)) {
        lVar10 = *(longlong *)(lVar14 + 0x228);
        if (lVar10 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16,&local_2a8);
          plVar1 = (longlong *)local_2a8;
          if (((((longlong *)local_2a8 == (longlong *)0x0) ||
               (lVar10 = FUN_14594a054(), lVar10 == 0)) ||
              ((int)plVar1[7] < *(int *)(lVar10 + 0x38))) ||
             (plVar18 = (longlong *)local_2a8,
             *(longlong *)(plVar1[6] + (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) {
            plVar18 = (longlong *)0x0;
          }
          lVar10 = plVar18[0x22];
          if (lVar10 == 0) {
            (**(code **)(*plVar18 + 1000))(plVar18);
            lVar10 = plVar18[0x22];
          }
        }
        uVar9 = *(uint *)(lVar14 + 0xc);
        local_2a8 = (char *)(ulonglong)uVar9;
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar19 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar19 = 0;
        }
        iVar7 = *(int *)(lVar19 + 0x10);
        if (*(int *)(lVar19 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar17 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar17);
          }
          LOCK();
          iVar7 = *(int *)(lVar19 + 0x10);
          bVar20 = iVar7 == 0;
          if (bVar20) {
            *(int *)(lVar19 + 0x10) = iVar17;
            iVar7 = 0;
          }
          UNLOCK();
          uVar9 = (uint)local_2a8;
          if (bVar20) {
            iVar7 = iVar17;
          }
        }
        local_2a8._0_4_ = uVar9;
        local_2a8 = (char *)CONCAT44(iVar7,(uint)local_2a8);
        uStack_2a0 = param_1[0x15];
        if (lVar10 == 0) {
          local_298._0_4_ = 0;
          iVar7 = 0;
          uVar9 = (uint)local_298;
        }
        else {
          uVar9 = *(uint *)(lVar10 + 0xc);
          local_298 = (undefined1 *)(ulonglong)uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar7 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar17 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar17);
            }
            LOCK();
            iVar7 = *(int *)(lVar10 + 0x10);
            bVar20 = iVar7 == 0;
            if (bVar20) {
              *(int *)(lVar10 + 0x10) = iVar17;
              iVar7 = 0;
            }
            UNLOCK();
            uVar9 = (uint)local_298;
            if (bVar20) {
              iVar7 = iVar17;
            }
          }
        }
        local_298._0_4_ = uVar9;
        local_298 = (undefined1 *)CONCAT44(iVar7,(uint)local_298);
        (**(code **)(*plVar16 + 0x30))(plVar16,&local_c8);
        ppuVar3 = (undefined8 **)(param_1 + 0xad);
        if (ppuVar3 != &local_c8) {
          puVar13 = *ppuVar3;
          *ppuVar3 = local_c8;
          local_c8 = (undefined8 *)0x0;
          if (puVar13 == (undefined8 *)0x0) goto LAB_14335a76c;
          (**(code **)*puVar13)(puVar13,1);
        }
        if (local_c8 != (undefined8 *)0x0) {
          (**(code **)*local_c8)(local_c8,1);
        }
      }
LAB_14335a76c:
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x99));
      *(undefined4 *)(param_1 + 0x8b) = 0;
      iVar7 = *(int *)((longlong)param_1 + 0x94);
      FUN_1477ea05d(param_1[0x11],(int)param_1[0x12]);
      *(undefined4 *)(param_1 + 0x12) = 0;
      if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0x94) != 0)) {
        FUN_1477ea0f0(param_1 + 0x11);
      }
      iVar7 = *(int *)(lVar14 + 0x100);
      if (0 < (longlong)iVar7) {
        local_2a8 = (char *)0x0;
        uStack_2a0 = 0;
        local_290 = 0;
        uStack_288 = 0;
        local_298 = &DAT_3f8000003f800000;
        local_280 = 0x3f800000;
        local_27c = 0x101;
        lVar14 = *(longlong *)(lVar14 + 0xf8);
        lVar10 = 0;
        local_2b0 = param_1 + 0x11;
        do {
          lVar19 = *(longlong *)(lVar14 + lVar10);
          if (lVar19 != 0) {
            *(int *)(param_1 + 0x8b) = (int)param_1[0x8b] + 1;
            local_c8 = (undefined8 *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1[0x15] + 0x90));
            local_b8 = (float)*(int *)(param_1[0x15] + 0x74);
            uStack_c0 = 0;
            local_b4 = *(undefined4 *)(lVar19 + 0xc);
            FUN_1477b89fa(&local_118,&local_c8);
            uVar5 = uStack_2a0;
            LOCK();
            *(undefined4 *)(local_118 + 0x5c) = 1;
            UNLOCK();
            lVar19 = (longlong)(int)uStack_2a0;
            uVar9 = (int)uStack_2a0 + 1;
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar9);
            if (uStack_2a0._4_4_ < uVar9) {
              FUN_1477cc91a(&local_2a8,uVar5 & 0xffffffff);
            }
            plVar16 = plStack_110;
            *(longlong *)((longlong)local_2a8 + lVar19 * 2 * 8) = local_118;
            *(longlong **)((longlong)local_2a8 + (lVar19 * 2 + 1) * 8) = plStack_110;
            if (plStack_110 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
              UNLOCK();
              if (plStack_110 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_110 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_110)(plStack_110);
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
          plVar16 = local_2b0;
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar7 * 8 != lVar10);
        iVar7 = (int)param_1[0x12];
        *(uint *)(param_1 + 0x12) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0x94) < iVar7 + 1U) {
          FUN_1477ea184(local_2b0,iVar7);
        }
        FUN_1477ea120((longlong)iVar7 * 0x30 + *plVar16,&local_2a8);
        FUN_1477cc8d1(local_2a8,uStack_2a0 & 0xffffffff);
        if ((longlong *)local_2a8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      iVar7 = *(int *)(param_1[0x15] + 0xcb8);
      *(int *)(param_1 + 0x2a) = iVar7;
      *(int *)((longlong)param_1 + 0x154) = iVar7 * *(int *)(param_1[0x15] + 0x7c);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x99));
      goto LAB_143359f39;
    }
  }
  if (*(int *)((longlong)param_1 + 0x4f4) == 0) goto LAB_143359f39;
  uVar9 = *(uint *)(param_1 + 0x9e);
  if ((((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) ||
     ((plVar16 = (longlong *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
      plVar16 == (longlong *)0x0 ||
      ((((int)plVar16[2] != *(int *)((longlong)param_1 + 0x4f4) ||
        ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) || (lVar14 = *plVar16, lVar14 == 0)))))) {
LAB_143359e93:
    if (*(int *)((longlong)param_1 + 0x4f4) == 0) goto LAB_143359f39;
    uVar9 = *(uint *)(param_1 + 0x9e);
    if (((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) &&
       ((plVar16 = (longlong *)
                   ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
        plVar16 != (longlong *)0x0 &&
        ((((int)plVar16[2] == *(int *)((longlong)param_1 + 0x4f4) &&
          ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)) && (lVar14 = *plVar16, lVar14 != 0)))))) {
      lVar10 = FUN_145b5adf2();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        iVar7 = *(int *)(param_1[0x15] + 0xcb8);
        *(int *)(param_1 + 0x2a) = iVar7;
        *(int *)((longlong)param_1 + 0x154) = iVar7 * *(int *)(param_1[0x15] + 0x7c);
        uVar12 = FUN_142af81b2(lVar14 + 0x90);
        FUN_1477d5594(param_1,uVar12,*(undefined8 *)(lVar14 + 0xa0));
        goto LAB_143359f39;
      }
    }
    if (((*(int *)((longlong)param_1 + 0x4f4) == 0) ||
        (uVar9 = *(uint *)(param_1 + 0x9e), (int)uVar9 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar9 ||
        ((((plVar16 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
           plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)((longlong)param_1 + 0x4f4)))
          || ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) || (lVar14 = *plVar16, lVar14 == 0))))))
    goto LAB_143359f39;
    lVar10 = FUN_145b5aedc();
    if (((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) ||
       ((plVar16 = (longlong *)FUN_14704569a(lVar14 + 0x90), plVar16 == (longlong *)0x0 ||
        ((lVar10 = *(longlong *)(lVar14 + 0xb0), lVar10 == 0 &&
         (lVar10 = (**(code **)(*plVar16 + 0x60))(plVar16), lVar10 == 0)))))) goto LAB_143359f39;
    FUN_147d3f488(lVar14,&local_2a8);
    FUN_1477d53a8(param_1,lVar10,&local_2a8,plVar16);
    if (param_1[0x2c] == 0) {
      FUN_1477d5842(param_1 + 0x2c);
    }
    else {
      lVar14 = *(longlong *)(lVar14 + 0xa0);
      if (lVar14 == 0) {
        lVar14 = (**(code **)(*plVar16 + 0x88))(plVar16);
      }
      FUN_1477d56ee(param_1,plVar16,lVar14);
    }
  }
  else {
    lVar10 = FUN_145b5ad08();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
         ) != lVar10 + 0x30)) goto LAB_143359e93;
    uVar12 = FUN_147d3f032(lVar14);
    uVar11 = FUN_147d3f138(lVar14);
    FUN_147d3f212(lVar14,&local_2a8);
    FUN_1477d53a8(param_1,uVar11,&local_2a8,uVar12);
  }
  if ((longlong *)local_2a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143359f39:
  if ((local_70 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335aaaa FUN_14335aaaa body=60 status=ok
// SIG undefined FUN_14335aaaa(void)

undefined8 * FUN_14335aaaa(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x160) == 0) {
    FUN_147038a7c(param_1 + 0x4f8,param_2,*(undefined4 *)(param_1 + 0x154),param_3);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 14335aae6 FUN_14335aae6 body=4849 status=ok
// SIG undefined FUN_14335aae6(void)

void FUN_14335aae6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  BOOL BVar16;
  uint *puVar17;
  void *pvVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong *plVar24;
  uint *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  LPCRITICAL_SECTION lpCriticalSection;
  float *pfVar29;
  uint *puVar30;
  longlong lVar31;
  longlong lVar32;
  longlong *plVar33;
  ulonglong uVar34;
  uint uVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  uint *local_1a0;
  uint *local_198;
  uint local_18c;
  longlong *local_188;
  longlong *local_180;
  ulonglong local_178;
  void *local_170;
  longlong *local_168;
  longlong *local_160;
  LPCRITICAL_SECTION local_158;
  ulonglong local_150;
  longlong *local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  int local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  float local_d4;
  longlong local_d0;
  uint *puStack_c8;
  undefined8 local_c0;
  longlong *local_b0;
  int local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar13 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0xcb8);
  iVar21 = *(int *)(param_1 + 0x150);
  if ((*(int *)(param_1 + 0x150) != iVar13) &&
     (*(int *)(param_1 + 0x150) = iVar13, iVar21 = iVar13, *(longlong *)(param_1 + 0x160) != 0)) {
    FUN_1477d7142(param_1);
    iVar21 = *(int *)(param_1 + 0x150);
  }
  if (8 < iVar21 || iVar21 == 0) goto LAB_14335ac90;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    FUN_1477d74f2(param_1);
    iVar13 = (int)param_2[1] / *(int *)(param_1 + 0x150);
    local_188 = (longlong *)CONCAT44(local_188._4_4_,iVar13);
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x150) * iVar13;
    local_1a8 = (longlong *)(param_1 + 0x120);
    local_160 = param_2;
    FUN_14702dc6a();
    uVar15 = *(uint *)(param_1 + 0x154);
    iVar13 = *(int *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x128) = iVar13 + uVar15;
    if ((uint)(*(int *)(param_1 + 300) - iVar13) < uVar15) {
      FUN_145ca0cd4(local_1a8);
    }
    memset((void *)((longlong)iVar13 * 4 + *(longlong *)(param_1 + 0x120)),0,
           (longlong)(int)uVar15 << 2);
    local_170 = *(void **)(param_1 + 0x120);
    bVar4 = *(byte *)(param_1 + 0x45c);
    if ((bVar4 & 4) != 0) {
      cVar12 = FUN_1477d75b2(param_1);
      bVar4 = *(byte *)(param_1 + 0x45c);
      if (cVar12 == '\0') {
        if ((bVar4 & 0x10) == 0) {
          *(byte *)(param_1 + 0x45c) = bVar4 | 0x10;
        }
        FUN_14335c3e4(param_1,local_1a8);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_1d8);
      }
    }
    if ((bVar4 & 0x10) != 0) {
      *(byte *)(param_1 + 0x45c) = bVar4 & 0xef;
    }
    puVar30 = (uint *)(param_1 + 0x48);
    local_e8 = (undefined8 *)0x0;
    uStack_e0 = 0;
    uVar15 = *(uint *)(param_1 + 0x60);
    if (uVar15 == 0) {
      uVar34 = 1;
      uVar27 = 0;
      iVar13 = 0;
      uVar14 = 0;
    }
    else {
      puVar17 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar17 = puVar30;
      }
      uVar14 = *puVar17;
      if (uVar14 == 0) {
        iVar13 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar13 = uVar15 - 1;
        }
        uVar27 = 0;
        uVar34 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar34 = uVar27;
        }
        iVar13 = 0;
        do {
          if (uVar34 == uVar27) goto LAB_14335b08f;
          iVar13 = iVar13 + 0x20;
          uVar14 = puVar17[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar27 = 0;
        iVar13 = 0;
      }
      uVar34 = (ulonglong)(-uVar14 & uVar14);
      uVar28 = uVar34 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      uVar14 = (iVar13 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      if ((int)uVar15 <= (int)uVar14) {
        uVar14 = uVar15;
      }
    }
    if (uVar14 != uVar15) {
      local_180 = (longlong *)(param_1 + 0x38);
      uVar35 = 0xffffffff;
      local_1a0 = puVar30;
      local_178 = (ulonglong)uVar15;
      do {
        uVar28 = uStack_e0;
        local_198 = (uint *)CONCAT44(local_198._4_4_,iVar13);
        puVar3 = (undefined4 *)(*local_180 + (longlong)(int)uVar14 * 0x38);
        plVar33 = *(longlong **)(*local_180 + 0x10 + (longlong)(int)uVar14 * 0x38);
        bVar11 = true;
        if (plVar33 == (longlong *)0x0) {
LAB_14335aee7:
          plVar33 = (longlong *)0x0;
LAB_14335aeea:
          lVar32 = (longlong)(int)uStack_e0;
          uVar15 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar15);
          if (uStack_e0._4_4_ < uVar15) {
            FUN_1447808da(&local_e8,uVar28 & 0xffffffff);
            puVar30 = local_1a0;
          }
          *(undefined4 *)((longlong)local_e8 + lVar32 * 4) = *puVar3;
          iVar13 = (int)local_198;
          if (!bVar11) goto LAB_14335af32;
        }
        else {
          iVar13 = (int)plVar33[1];
          do {
            if (iVar13 == 0) goto LAB_14335aee7;
            LOCK();
            iVar21 = (int)plVar33[1];
            bVar36 = iVar13 == iVar21;
            if (bVar36) {
              *(int *)(plVar33 + 1) = iVar13 + 1;
              iVar21 = iVar13;
            }
            iVar13 = iVar21;
            UNLOCK();
          } while (!bVar36);
          lVar32 = *(longlong *)(puVar3 + 2);
          if ((lVar32 == 0) || (*(int *)(lVar32 + 0x4f4) == 0)) {
LAB_14335aee2:
            bVar11 = false;
            goto LAB_14335aeea;
          }
          uVar15 = *(uint *)(lVar32 + 0x4f0);
          bVar11 = false;
          if (((int)uVar15 < 0) || (bVar11 = false, DAT_14c9647dc <= (int)uVar15))
          goto LAB_14335aeea;
          lVar26 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
          if (((lVar26 == 0) || (*(int *)(lVar26 + 0x10) != *(int *)(lVar32 + 0x4f4))) ||
             ((*(uint *)(lVar26 + 8) & 0x10200000) != 0)) goto LAB_14335aee2;
          cVar12 = FUN_1477d75b2(lVar32);
          if (cVar12 != '\0') {
            FUN_14335aae6(lVar32,local_1a8);
          }
          puVar30 = local_1a0;
          iVar13 = (int)local_198;
LAB_14335af32:
          LOCK();
          plVar24 = plVar33 + 1;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)*plVar24 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            puVar30 = local_1a0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
              puVar30 = local_1a0;
            }
          }
        }
        puVar5 = local_e8;
        plVar33 = local_180;
        uVar35 = uVar35 & ~(uint)uVar34;
        puVar17 = *(uint **)(param_1 + 0x58);
        if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
          puVar17 = puVar30;
        }
        uVar15 = *(uint *)(param_1 + 0x60);
        iVar21 = (int)uVar27;
        lVar32 = (longlong)iVar21;
        uVar14 = puVar17[lVar32] & uVar35;
        if (uVar14 == 0) {
          iVar19 = uVar15 + 0x1e;
          if (-1 < (int)(uVar15 - 1)) {
            iVar19 = uVar15 - 1;
          }
          iVar19 = iVar19 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar20 = iVar19;
          if (iVar19 < iVar21) {
            iVar20 = iVar21;
          }
          if (iVar21 < iVar19) {
            lVar26 = 0;
            do {
              uVar14 = puVar17[lVar32 + lVar26 + 1];
              if (uVar14 != 0) {
                uVar27 = (ulonglong)(iVar21 + (int)lVar26 + 1);
                uVar35 = 0xffffffff;
                goto LAB_14335afd8;
              }
              iVar13 = iVar13 + 0x20;
              lVar26 = lVar26 + 1;
            } while (iVar20 - lVar32 != lVar26);
            uVar35 = 0xffffffff;
            iVar21 = iVar20;
          }
          uVar27 = (ulonglong)(iVar21 + 1);
          puVar30 = local_1a0;
          uVar14 = uVar15;
        }
        else {
LAB_14335afd8:
          uVar34 = (ulonglong)(-uVar14 & uVar14);
          uVar28 = uVar34 * 2 + 1;
          lVar32 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          uVar14 = (iVar13 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          if ((int)uVar15 <= (int)uVar14) {
            uVar14 = uVar15;
          }
        }
      } while (uVar14 != (uint)local_178);
      lVar32 = (longlong)(int)uStack_e0;
      if (lVar32 != 0) {
        lVar26 = 0;
        do {
          FUN_1477ea218(plVar33,*(undefined4 *)((longlong)puVar5 + lVar26));
          lVar26 = lVar26 + 4;
        } while (lVar32 * 4 != lVar26);
      }
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_14335b08f:
    iVar13 = *(int *)(param_1 + 0xd8);
    if (iVar13 == 0) {
      uVar27 = 1;
      uVar34 = 0;
      iVar19 = 0;
      iVar21 = 0;
    }
    else {
      puVar17 = *(uint **)(param_1 + 0xd0);
      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
        puVar17 = (uint *)(param_1 + 0xc0);
      }
      uVar15 = *puVar17;
      if (uVar15 == 0) {
        iVar21 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar21 = iVar13 + -1;
        }
        uVar34 = 0;
        uVar27 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar27 = uVar34;
        }
        iVar19 = 0;
        do {
          if (uVar27 == uVar34) goto LAB_14335b120;
          iVar19 = iVar19 + 0x20;
          uVar15 = puVar17[uVar34 + 1];
          uVar34 = uVar34 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar34 = 0;
        iVar19 = 0;
      }
      uVar27 = (ulonglong)(-uVar15 & uVar15);
      uVar28 = uVar27 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar21 = (iVar19 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar21) {
        iVar21 = iVar13;
      }
    }
    if (iVar21 != iVar13) {
      uVar15 = 0xffffffff;
      iVar20 = iVar13;
      do {
        puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar21 * 0x18);
        if ((*(byte *)(puVar5 + 0x14) & 0x60) != 0) {
          lVar32 = *(longlong *)(param_1 + 0xb0) + (longlong)iVar21 * 0x18;
          local_1b8 = *(undefined4 *)(lVar32 + 0xc);
          local_1b0 = local_1a8;
          FUN_1477c8258(*puVar5,*(undefined4 *)((longlong)puVar5 + 0x9c),
                        *(undefined4 *)(param_1 + 0x150),*(undefined4 *)(lVar32 + 8));
          iVar20 = *(int *)(param_1 + 0xd8);
        }
        uVar15 = uVar15 & ~(uint)uVar27;
        puVar17 = *(uint **)(param_1 + 0xd0);
        if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
          puVar17 = (uint *)(param_1 + 0xc0);
        }
        iVar21 = (int)uVar34;
        lVar32 = (longlong)iVar21;
        uVar14 = puVar17[lVar32] & uVar15;
        if (uVar14 == 0) {
          iVar22 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar22 = iVar20 + -1;
          }
          iVar22 = iVar22 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar23 = iVar22;
          if (iVar22 < iVar21) {
            iVar23 = iVar21;
          }
          if (iVar21 < iVar22) {
            lVar26 = 0;
            do {
              uVar14 = puVar17[lVar32 + lVar26 + 1];
              if (uVar14 != 0) {
                uVar34 = (ulonglong)(iVar21 + (int)lVar26 + 1);
                uVar15 = 0xffffffff;
                goto LAB_14335b363;
              }
              iVar19 = iVar19 + 0x20;
              lVar26 = lVar26 + 1;
            } while (iVar23 - lVar32 != lVar26);
            uVar15 = 0xffffffff;
            lVar32 = (longlong)iVar23;
          }
          uVar34 = lVar32 + 1U & 0xffffffff;
          iVar21 = iVar20;
        }
        else {
LAB_14335b363:
          uVar27 = (ulonglong)(-uVar14 & uVar14);
          uVar28 = uVar27 * 2 + 1;
          lVar32 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          iVar21 = (iVar19 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          if (iVar20 <= iVar21) {
            iVar21 = iVar20;
          }
        }
      } while (iVar21 != iVar13);
    }
LAB_14335b120:
    plVar33 = (longlong *)(param_1 + 0x3f0);
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    if (*(int *)(param_1 + 0x3fc) < 0) {
      FUN_1470345fa(plVar33,0);
    }
    if (((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x598) & 0x20) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x110) == 0)) {
      fVar37 = powf(10.0,*(float *)(param_1 + 0x2d4) / 20.0);
    }
    else {
      FUN_147d3536e(param_1 + 0x2b0,*(undefined4 *)(param_1 + 0x2d4),0);
      fVar37 = *(float *)(*(longlong *)(param_1 + 0x2b0) + 4);
    }
    fVar37 = fVar37 * *(float *)(param_1 + 0x2e0);
    *(float *)(param_1 + 0x29c) = fVar37;
    if ((1e-08 < ABS(fVar37 - *(float *)(param_1 + 0x298))) ||
       (1e-08 < ABS(*(float *)(param_1 + 0x298)))) {
      uVar15 = *(uint *)(param_1 + 0x128);
      if ((longlong)(int)uVar15 != 0) {
        iVar13 = *(int *)(param_1 + 0x3f8);
        *(uint *)(param_1 + 0x3f8) = iVar13 + uVar15;
        if ((uint)(*(int *)(param_1 + 0x3fc) - iVar13) < uVar15) {
          FUN_145ca0cd4(plVar33,iVar13);
        }
        memcpy((void *)((longlong)iVar13 * 4 + *plVar33),(void *)*local_1a8,
               (longlong)(int)uVar15 << 2);
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x4c8);
    EnterCriticalSection(lpCriticalSection);
    if ((DAT_14cabb608 == 0) && (0 < *(int *)(param_1 + 0x90))) {
      iVar13 = *(int *)((longlong)*(longlong **)(param_1 + 0xa8) + 0x74);
      local_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      puStack_c8 = (uint *)0x0;
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x100))();
      uStack_e0 = CONCAT44(*(int *)(param_1 + 0x150),
                           *(int *)(param_1 + 0x154) / *(int *)(param_1 + 0x150));
      lVar32 = *(longlong *)(param_1 + 0xa8);
      local_d8 = *(undefined4 *)(lVar32 + 0xcb8);
      local_d0 = *(longlong *)(lVar32 + 0xe10) + 0x108;
      local_c0 = *(undefined8 *)(lVar32 + 0x5a0);
      FUN_14702dc6a(param_1 + 0x110,*(int *)(param_1 + 0x154));
      FUN_14702fd0c(param_1 + 0x110,*(undefined4 *)(param_1 + 0x154),1);
      if (0 < (longlong)*(int *)(param_1 + 0x90)) {
        fVar37 = (float)(int)local_188;
        plVar33 = (longlong *)(param_1 + 0x88);
        local_188 = (longlong *)(param_1 + 0x98);
        local_198 = (uint *)(param_1 + 0x100);
        local_1a0 = (uint *)(param_1 + 0x130);
        local_18c = 0;
        uVar34 = (longlong)*(int *)(param_1 + 0x90);
        local_158 = lpCriticalSection;
        local_148 = plVar33;
        do {
          uVar27 = uVar34 - 1;
          uVar28 = uVar34;
          if (*(int *)(*plVar33 + 8 + uVar27 * 0x30) != 0) {
            plVar24 = (longlong *)(*plVar33 + uVar27 * 0x30);
            if ((*(char *)((longlong)plVar24 + 0x2c) != '\0') ||
               (*(float *)((longlong)plVar24 + 0x1c) < *(float *)(plVar24 + 4))) {
              iVar21 = *(int *)(param_1 + 0xa4);
              iVar19 = 0;
              local_168 = plVar24;
              if (iVar21 < 0) {
                *(undefined4 *)(param_1 + 0xa0) = 0;
                FUN_1470345fa(local_188);
                iVar19 = *(int *)(param_1 + 0xa0);
                iVar21 = *(int *)(param_1 + 0xa4);
              }
              uVar15 = *(uint *)(param_1 + 0x154);
              *(uint *)(param_1 + 0xa0) = uVar15 + iVar19;
              local_140 = uVar34;
              if ((uint)(iVar21 - iVar19) < uVar15) {
                FUN_145ca0cd4(local_188);
              }
              memset((void *)((longlong)iVar19 * 4 + *(longlong *)(param_1 + 0x98)),0,
                     (longlong)(int)uVar15 << 2);
              plVar33 = local_1a8;
              FUN_14702fcb4(local_198,local_1a8);
              local_b0 = local_188;
              local_a8 = *(int *)(param_1 + 0x150);
              local_178 = CONCAT44(local_178._4_4_,*(int *)(param_1 + 0xa0) / local_a8);
              lVar32 = local_168[1];
              if ((longlong)(int)lVar32 != 0) {
                lVar26 = *local_168;
                lVar31 = 0;
                local_180 = (longlong *)0x0;
                local_150 = uVar27;
                do {
                  if (*(longlong **)(lVar26 + lVar31) != (longlong *)0x0) {
                    iVar19 = (**(code **)(**(longlong **)(lVar26 + lVar31) + 0x30))();
                    puVar17 = local_1a0;
                    puVar25 = local_198;
                    iVar21 = *(int *)(param_1 + 0x150);
                    if (iVar19 != *(int *)(param_1 + 0x150) && iVar19 != -1) {
                      FUN_14702fd8a(local_1a0,iVar19 * (int)local_178,1);
                      FUN_1477d58b2(*(undefined4 *)(param_1 + 0x150),local_198,iVar19,puVar17);
                      puVar25 = puVar17;
                      iVar21 = iVar19;
                    }
                    uStack_e0 = CONCAT44(iVar21,(int)uStack_e0);
                    puStack_c8 = puVar25;
                    cVar12 = FUN_147d34ae2(*(undefined8 *)(lVar26 + lVar31),&local_e8,&local_b0);
                    if (cVar12 != '\0') {
                      fVar38 = (float)(**(code **)(**(longlong **)(lVar26 + lVar31) + 0x40))();
                      if (0.0 < fVar38) {
                        FUN_1421c4d00(*(undefined8 *)(param_1 + 0x100),*local_b0,
                                      *(undefined4 *)(param_1 + 0x108),fVar38);
                      }
                      pvVar18 = memcpy(*(void **)(param_1 + 0x100),(void *)*local_b0,
                                       (longlong)*(int *)(param_1 + 0x154) << 2);
                      local_180 = (longlong *)CONCAT71((int7)((ulonglong)pvVar18 >> 8),1);
                    }
                  }
                  lVar31 = lVar31 + 0x10;
                } while ((longlong)(int)lVar32 * 0x10 != lVar31);
                local_18c = CONCAT31((int3)(local_18c >> 8),(byte)local_18c | (byte)local_180);
                uVar27 = local_150;
                plVar33 = local_1a8;
                if (((ulonglong)local_180 & 1) != 0) {
                  plVar33 = local_188;
                }
              }
              plVar24 = local_168;
              lVar32 = local_168[2];
              FUN_147973c6e(local_168 + 2,fVar37 / (float)iVar13);
              local_f8 = *(undefined8 *)(param_1 + 0x110);
              local_f0 = *(undefined4 *)(param_1 + 0x118);
              local_108 = *plVar33;
              local_100 = (undefined4)plVar33[1];
              FUN_142af41c4(&local_108,&local_f8,(int)lVar32,(int)plVar24[2]);
              uVar28 = local_140;
              plVar33 = local_148;
            }
            else if (*(char *)((longlong)plVar24 + 0x2d) == '\0') {
              FUN_1477eb452(plVar33);
              FUN_1477eb4d4(plVar33);
            }
          }
          lpCriticalSection = local_158;
          uVar34 = uVar27;
        } while (1 < uVar28);
        if ((local_18c & 1) != 0) {
          memcpy(local_170,*(void **)(param_1 + 0x110),(longlong)*(int *)(param_1 + 0x154) << 2);
        }
      }
      if (((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x598) & 0x20) == 0) ||
         (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x110) == 0)) {
        fVar37 = powf(10.0,*(float *)(param_1 + 0x2d8) / 20.0);
      }
      else {
        FUN_147d3536e(param_1 + 0x2c0,*(undefined4 *)(param_1 + 0x2d8),0);
        fVar37 = *(float *)(*(longlong *)(param_1 + 0x2c0) + 4);
      }
      fVar37 = fVar37 * *(float *)(param_1 + 0x2e4);
      *(float *)(param_1 + 0x294) = fVar37;
      if (ABS(fVar37 - *(float *)(param_1 + 0x290)) <= 1e-08) {
        if (1e-08 < ABS(*(float *)(param_1 + 0x290) + -1.0)) {
          FUN_1421c4f70(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
        }
      }
      else {
        local_118 = *(undefined8 *)(param_1 + 0x120);
        local_110 = *(undefined4 *)(param_1 + 0x128);
        FUN_142af1d12();
        *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0x294);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if (0 < *(int *)(param_1 + 0x3f8)) {
      if (ABS(*(float *)(param_1 + 0x29c) - *(float *)(param_1 + 0x298)) <= 1e-08) {
        FUN_1421c4f70();
      }
      else {
        local_128 = *(undefined8 *)(param_1 + 0x3f0);
        local_120 = *(int *)(param_1 + 0x3f8);
        FUN_142af1d12(&local_128);
        *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_1 + 0x29c);
      }
      FUN_1421c4bc0(*(undefined8 *)(param_1 + 0x3f0),*(undefined8 *)(param_1 + 0x120),
                    *(undefined4 *)(param_1 + 0x3f8));
    }
    if ((*(byte *)(param_1 + 0x45c) & 2) != 0) {
      memset(local_170,0,(longlong)*(int *)(param_1 + 0x154) << 2);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
    if ((*(byte *)(param_1 + 0x45c) & 1) != 0) {
      uVar15 = *(uint *)(param_1 + 0x154);
      iVar13 = *(int *)(param_1 + 0x450);
      *(uint *)(param_1 + 0x450) = iVar13 + uVar15;
      if ((uint)(*(int *)(param_1 + 0x454) - iVar13) < uVar15) {
        FUN_145ca0cd4((longlong *)(param_1 + 0x448),iVar13);
      }
      else if (uVar15 == 0) goto LAB_14335b487;
      memcpy((void *)((longlong)iVar13 * 4 + *(longlong *)(param_1 + 0x448)),local_170,
             (longlong)(int)uVar15 << 2);
    }
LAB_14335b487:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a0));
    BVar16 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
    plVar33 = local_160;
    if (BVar16 != 0) {
      if (*(longlong *)(param_1 + 0x3d0) != 0) {
        FUN_1477d68ae(local_1a8,*(undefined4 *)(param_1 + 0x150),param_1 + 0x3e0);
        FUN_14703a74c(*(undefined8 *)(param_1 + 0x3d0),*(undefined8 *)(param_1 + 0x3e0),
                      *(undefined4 *)(param_1 + 1000));
        FUN_142af4962(*(undefined8 *)(param_1 + 0x3d0),1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
    }
    if (*(int *)(param_1 + 0x470) != 0) {
      iVar13 = *(int *)(param_1 + 0x128);
      uVar6 = *(undefined8 *)(param_1 + 0x120);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
      builtin_strncpy((char *)(param_1 + 0x2f8),"    ",4);
      builtin_strncpy((char *)(param_1 + 0x2fc),"    ",4);
      builtin_strncpy((char *)(param_1 + 0x300),"    ",4);
      builtin_strncpy((char *)(param_1 + 0x304),"    ",4);
      builtin_strncpy((char *)(param_1 + 0x2e8),"    ",4);
      builtin_strncpy((char *)(param_1 + 0x2ec),"    ",4);
      builtin_strncpy((char *)(param_1 + 0x2f0),"    ",4);
      builtin_strncpy((char *)(param_1 + 0x2f4),"    ",4);
      iVar21 = *(int *)(param_1 + 0x150);
      if (0 < iVar21) {
        if (*(int *)(param_1 + 0x368) != iVar21) {
          FUN_147033512(param_1 + 0x308,iVar21);
        }
        FUN_147033614(param_1 + 0x308,uVar6,(longlong)iVar13 / (longlong)iVar21 & 0xffffffff);
        iVar13 = *(int *)(param_1 + 0x150);
        memcpy((void *)(param_1 + 0x2e8),*(void **)(param_1 + 0x358),(longlong)iVar13 << 2);
        FUN_1421c3d20((void *)(param_1 + 0x2e8),0,0x3f800000,iVar13);
        iVar21 = *(int *)(param_1 + 0x150);
        plVar33 = local_160;
      }
      *(int *)(param_1 + 0x370) = iVar21;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x378));
    }
    if (((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x598) & 0x20) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x110) == 0)) {
      fVar37 = powf(10.0,*(float *)(param_1 + 0x2d0) / 20.0);
    }
    else {
      FUN_147d3536e(param_1 + 0x2a0,*(undefined4 *)(param_1 + 0x2d0),0);
      fVar37 = *(float *)(*(longlong *)(param_1 + 0x2a0) + 4);
    }
    fVar37 = fVar37 * *(float *)(param_1 + 0x2dc);
    *(float *)(param_1 + 0x28c) = fVar37;
    if (ABS(fVar37 - *(float *)(param_1 + 0x288)) <= 1e-08) {
      if (1e-08 < ABS(*(float *)(param_1 + 0x288) + -1.0)) {
        FUN_1421c4f70(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
      }
    }
    else {
      local_138 = *(undefined8 *)(param_1 + 0x120);
      local_130 = *(undefined4 *)(param_1 + 0x128);
      FUN_142af1d12();
      *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x28c);
    }
    plVar24 = local_1a8;
    FUN_14335c3e4(param_1,local_1a8);
    FUN_14335c584(param_1,plVar24);
    FUN_1421c4bc0(*(undefined8 *)(param_1 + 0x120),*plVar33,*(undefined4 *)(param_1 + 0x128));
    bVar4 = *(byte *)(param_1 + 0x45c);
    if ((bVar4 & 4) != 0) {
      uVar15 = *(uint *)(plVar33 + 1);
      uVar14 = uVar15 & 0xfffffff0;
      if ((int)uVar14 < 1) {
        uVar14 = 0;
      }
      else {
        lVar32 = *plVar33;
        uVar34 = 0;
        do {
          pfVar29 = (float *)(lVar32 + uVar34 * 4);
          auVar7._4_4_ = -(uint)(1e-08 < ABS(pfVar29[1]));
          auVar7._0_4_ = -(uint)(1e-08 < ABS(*pfVar29));
          auVar7._8_4_ = -(uint)(1e-08 < ABS(pfVar29[2]));
          auVar7._12_4_ = -(uint)(1e-08 < ABS(pfVar29[3]));
          iVar13 = movmskps((int)puVar30,auVar7);
          if (iVar13 != 0) goto LAB_14335b735;
          pfVar29 = (float *)(lVar32 + 0x10 + uVar34 * 4);
          auVar8._4_4_ = -(uint)(1e-08 < ABS(pfVar29[1]));
          auVar8._0_4_ = -(uint)(1e-08 < ABS(*pfVar29));
          auVar8._8_4_ = -(uint)(1e-08 < ABS(pfVar29[2]));
          auVar8._12_4_ = -(uint)(1e-08 < ABS(pfVar29[3]));
          iVar13 = movmskps(0,auVar8);
          if (iVar13 != 0) goto LAB_14335b735;
          pfVar29 = (float *)(lVar32 + 0x20 + uVar34 * 4);
          auVar9._4_4_ = -(uint)(1e-08 < ABS(pfVar29[1]));
          auVar9._0_4_ = -(uint)(1e-08 < ABS(*pfVar29));
          auVar9._8_4_ = -(uint)(1e-08 < ABS(pfVar29[2]));
          auVar9._12_4_ = -(uint)(1e-08 < ABS(pfVar29[3]));
          iVar13 = movmskps(0,auVar9);
          if (iVar13 != 0) goto LAB_14335b735;
          pfVar29 = (float *)(lVar32 + 0x30 + uVar34 * 4);
          auVar10._4_4_ = -(uint)(1e-08 < ABS(pfVar29[1]));
          auVar10._0_4_ = -(uint)(1e-08 < ABS(*pfVar29));
          auVar10._8_4_ = -(uint)(1e-08 < ABS(pfVar29[2]));
          auVar10._12_4_ = -(uint)(1e-08 < ABS(pfVar29[3]));
          iVar13 = movmskps(0,auVar10);
          if (iVar13 != 0) goto LAB_14335b735;
          uVar34 = uVar34 + 0x10;
          puVar30 = (uint *)0x0;
        } while (uVar34 < uVar14);
      }
      if ((int)uVar14 < (int)uVar15) {
        pfVar29 = (float *)((ulonglong)uVar14 * 4 + *plVar33);
        do {
          if (1e-08 < ABS(*pfVar29)) goto LAB_14335b735;
          pfVar29 = pfVar29 + 1;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar15);
      }
      if ((bVar4 & 8) == 0) {
        *(byte *)(param_1 + 0x45c) = bVar4 | 8;
        *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x5a0);
      }
      else {
LAB_14335b735:
        *(byte *)(param_1 + 0x45c) = bVar4 & 0xf7;
        *(undefined8 *)(param_1 + 0x468) = 0xbff0000000000000;
      }
    }
    goto LAB_14335ac90;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  if (*(longlong **)(param_1 + 0x1b8) == (longlong *)0x0) {
    ppuVar2 = (undefined8 **)(param_1 + 0x1b8);
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x30))
              (*(longlong **)(param_1 + 0x160),&local_e8);
    if (ppuVar2 != &local_e8) {
      puVar5 = *ppuVar2;
      *ppuVar2 = local_e8;
      local_e8 = (undefined8 *)0x0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_14335ac12;
      (**(code **)*puVar5)(puVar5,1);
    }
    if (local_e8 != (undefined8 *)0x0) {
      (**(code **)*local_e8)(local_e8,1);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x18))();
  }
LAB_14335ac12:
  FUN_14335be22(param_1,*(undefined8 *)(param_1 + 0x1b8));
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    local_e8 = *(undefined8 **)(param_1 + 0x1b8);
    uStack_e0 = param_1 + 0x180;
    lVar32 = *(longlong *)(param_1 + 0xa8);
    if (lVar32 == 0) {
      local_d4 = 0.0;
      local_d8 = 0;
    }
    else {
      local_d8 = *(undefined4 *)(lVar32 + 0x7c);
      local_d4 = (float)*(int *)(lVar32 + 0x74);
    }
    local_b0 = param_2;
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x10))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
LAB_14335ac90:
  if ((local_a0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14335be22 FUN_14335be22 body=1472 status=ok
// SIG undefined FUN_14335be22(void)

void FUN_14335be22(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  ulonglong local_c8;
  undefined4 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1477d74f2();
  if (*(longlong *)(param_1 + 0x168) != 0) {
    plVar1 = (longlong *)(param_1 + 0x100);
    iVar23 = *(int *)(param_1 + 0x10c);
    iVar14 = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (iVar23 < 0) {
      FUN_1470345fa(plVar1,0);
      iVar14 = *(int *)(param_1 + 0x108);
      iVar23 = *(int *)(param_1 + 0x10c);
    }
    lVar27 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa8) + 0xcb8) *
             (longlong)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x7c);
    uVar18 = (uint)lVar27;
    *(uint *)(param_1 + 0x108) = uVar18 + iVar14;
    if ((uint)(iVar23 - iVar14) < uVar18) {
      FUN_145ca0cd4(plVar1);
    }
    memset((void *)((longlong)iVar14 * 4 + *plVar1),0,lVar27 * 4);
  }
  iVar23 = *(int *)(param_1 + 0x60);
  local_d0 = param_2;
  if (iVar23 == 0) {
    uVar25 = 1;
    uVar28 = 0;
    iVar24 = 0;
    iVar14 = 0;
  }
  else {
    puVar17 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar17 = (uint *)(param_1 + 0x48);
    }
    uVar18 = *puVar17;
    if (uVar18 == 0) {
      iVar14 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar14 = iVar23 + -1;
      }
      uVar28 = 0;
      uVar25 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar25 = uVar28;
      }
      iVar24 = 0;
      do {
        if (uVar25 == uVar28) goto LAB_14335bf5e;
        iVar24 = iVar24 + 0x20;
        uVar18 = puVar17[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar28 = 0;
      iVar24 = 0;
    }
    uVar25 = (ulonglong)(-uVar18 & uVar18);
    uVar2 = uVar25 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    iVar14 = (iVar24 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar14) {
      iVar14 = iVar23;
    }
  }
  if (iVar14 != iVar23) {
    uVar18 = 0xffffffff;
    do {
      FUN_1477d72ba(param_1,*(longlong *)(param_1 + 0x38) + (longlong)iVar14 * 0x38 + 8,param_2);
      uVar18 = ~(uint)uVar25 & uVar18;
      puVar17 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar17 = (uint *)(param_1 + 0x48);
      }
      iVar19 = *(int *)(param_1 + 0x60);
      iVar14 = (int)uVar28;
      lVar27 = (longlong)iVar14;
      uVar15 = puVar17[lVar27] & uVar18;
      if (uVar15 == 0) {
        iVar20 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar20 = iVar19 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar24 = iVar24 + 0x20;
        iVar21 = iVar20;
        if (iVar20 < iVar14) {
          iVar21 = iVar14;
        }
        if (iVar14 < iVar20) {
          lVar26 = 0;
          do {
            uVar15 = puVar17[lVar27 + lVar26 + 1];
            if (uVar15 != 0) {
              uVar28 = (ulonglong)(iVar14 + (int)lVar26 + 1);
              uVar18 = 0xffffffff;
              goto LAB_14335c106;
            }
            iVar24 = iVar24 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar21 - lVar27 != lVar26);
          uVar18 = 0xffffffff;
          iVar14 = iVar21;
        }
        uVar28 = (ulonglong)(iVar14 + 1);
        param_2 = local_d0;
        iVar14 = iVar19;
      }
      else {
LAB_14335c106:
        uVar25 = (ulonglong)(-uVar15 & uVar15);
        uVar2 = uVar25 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar14 = (iVar24 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
        if (iVar19 <= iVar14) {
          iVar14 = iVar19;
        }
      }
    } while (iVar14 != iVar23);
  }
LAB_14335bf5e:
  if ((*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) &&
     (*(longlong *)(param_1 + 0x168) != 0)) {
    local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xcb8));
    local_90 = FUN_1477bb002();
    local_88 = DAT_14c8463d0;
    uStack_80 = DAT_14c8463d8;
    local_78 = (undefined4)DAT_14c8463e0;
    uStack_74 = DAT_14c8463e0._4_4_;
    uStack_70 = (undefined4)DAT_14c8463e8;
    uStack_6c = DAT_14c8463e8._4_4_;
    local_b8 = param_1 + 0x100;
    local_b0 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xcb8);
    local_a8 = *(undefined8 *)(param_1 + 0x1c0);
    local_a0 = &local_98;
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x10))
              (*(longlong **)(param_1 + 0x168),&local_b8,param_2);
  }
  uVar18 = *(uint *)(param_1 + 0xd8);
  if (uVar18 == 0) {
    uVar25 = 1;
    uVar28 = 0;
    iVar23 = 0;
    uVar15 = 0;
  }
  else {
    puVar17 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar17 = (uint *)(param_1 + 0xc0);
    }
    uVar15 = *puVar17;
    if (uVar15 == 0) {
      iVar23 = uVar18 + 0x1e;
      if (-1 < (int)(uVar18 - 1)) {
        iVar23 = uVar18 - 1;
      }
      uVar28 = 0;
      uVar25 = (ulonglong)(uint)(iVar23 >> 5);
      if (iVar23 >> 5 < 1) {
        uVar25 = uVar28;
      }
      iVar23 = 0;
      do {
        if (uVar25 == uVar28) goto LAB_14335c165;
        iVar23 = iVar23 + 0x20;
        uVar15 = puVar17[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar28 = 0;
      iVar23 = 0;
    }
    uVar25 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = uVar25 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar15 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    if ((int)uVar18 <= (int)uVar15) {
      uVar15 = uVar18;
    }
  }
  if (uVar15 != uVar18) {
    local_c0 = (undefined4 *)(param_1 + 400);
    uVar22 = 0xffffffff;
    local_c8 = (ulonglong)uVar18;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar15 * 0x18);
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 8 + (longlong)(int)uVar15 * 0x18);
      plVar5 = *(longlong **)(param_1 + 0x160);
      plVar6 = *(longlong **)(param_1 + 0x1c0);
      if (plVar5 == (longlong *)0x0) {
        FUN_1470459da(&local_98);
      }
      else {
        (**(code **)(*plVar5 + 8))(plVar5,&local_98);
      }
      uVar16 = (**(code **)(*plVar6 + 8))(plVar6);
      local_90 = CONCAT44(local_90._4_4_,uVar16);
      if ((*(byte *)(plVar1 + 0x14) & 0x60) == 0) {
        lVar27 = 0;
      }
      else {
        lVar27 = FUN_1477c82b8(*plVar1,*(undefined4 *)((longlong)plVar1 + 0x9c),&local_98);
      }
      lVar26 = (longlong)*(int *)((longlong)plVar1 + 0x9c) * 0x330;
      puVar3 = (undefined4 *)(*(longlong *)(*plVar1 + 0x128) + 0x280 + lVar26);
      uVar16 = *puVar3;
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar3 = (undefined4 *)(*(longlong *)(*plVar1 + 0x128) + 0x290 + lVar26);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      local_c0[4] = *puVar3;
      local_c0[5] = uVar10;
      local_c0[6] = uVar11;
      local_c0[7] = uVar12;
      *local_c0 = uVar16;
      local_c0[1] = uVar7;
      local_c0[2] = uVar8;
      local_c0[3] = uVar9;
      if (lVar27 != 0) {
        local_90 = *(undefined8 *)(param_1 + 0x1c0);
        local_88 = CONCAT44(local_88._4_4_,uVar4);
        local_98 = lVar27;
        (**(code **)(**(longlong **)(param_1 + 0x1b0) + 8))
                  (*(longlong **)(param_1 + 0x1b0),&local_98,local_d0);
      }
      uVar22 = uVar22 & ~(uint)uVar25;
      puVar17 = *(uint **)(param_1 + 0xd0);
      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
        puVar17 = (uint *)(param_1 + 0xc0);
      }
      uVar18 = *(uint *)(param_1 + 0xd8);
      iVar14 = (int)uVar28;
      lVar27 = (longlong)iVar14;
      uVar15 = puVar17[lVar27] & uVar22;
      if (uVar15 == 0) {
        iVar24 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar24 = uVar18 - 1;
        }
        iVar24 = iVar24 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar19 = iVar24;
        if (iVar24 < iVar14) {
          iVar19 = iVar14;
        }
        if (iVar14 < iVar24) {
          lVar26 = 0;
          do {
            uVar15 = puVar17[lVar27 + lVar26 + 1];
            if (uVar15 != 0) {
              uVar28 = (ulonglong)(iVar14 + (int)lVar26 + 1);
              uVar22 = 0xffffffff;
              goto LAB_14335c335;
            }
            iVar23 = iVar23 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar19 - lVar27 != lVar26);
          uVar22 = 0xffffffff;
          iVar14 = iVar19;
        }
        uVar28 = (ulonglong)(iVar14 + 1);
        uVar15 = uVar18;
      }
      else {
LAB_14335c335:
        uVar25 = (ulonglong)(-uVar15 & uVar15);
        uVar2 = uVar25 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        uVar15 = (iVar23 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
        if ((int)uVar18 <= (int)uVar15) {
          uVar15 = uVar18;
        }
      }
    } while (uVar15 != (uint)local_c8);
  }
LAB_14335c165:
  uVar13 = local_d0;
  iVar23 = *(int *)(param_1 + 0x1d0);
  if ((longlong)iVar23 != 0) {
    lVar27 = *(longlong *)(param_1 + 0x1c8);
    lVar26 = 0;
    do {
      plVar1 = *(longlong **)(lVar27 + 8 + lVar26);
      (**(code **)(*plVar1 + 8))
                (plVar1,uVar13,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(lVar27 + lVar26));
      lVar26 = lVar26 + 0x10;
    } while ((longlong)iVar23 * 0x10 != lVar26);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14335c3e4 FUN_14335c3e4 body=416 status=ok
// SIG undefined FUN_14335c3e4(void)

void FUN_14335c3e4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  
  if (((((*(int *)(param_1 + 0x4f4) != 0) && (uVar2 = *(uint *)(param_1 + 0x4f0), -1 < (int)uVar2))
       && ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar11 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(param_1 + 0x4f4))))) &&
     (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar4 = *plVar11, lVar4 != 0)))) {
    lVar10 = FUN_14105a990();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        == lVar10 + 0x30)) {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x100))();
      iVar3 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x74);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
      if ((longlong)*(int *)(param_1 + 0x418) != 0) {
        plVar11 = *(longlong **)(param_1 + 0x410);
        plVar12 = plVar11 + (longlong)*(int *)(param_1 + 0x418) * 2;
        do {
          plVar5 = (longlong *)plVar11[1];
          if (plVar5 != (longlong *)0x0) {
            iVar9 = (int)plVar5[1];
            do {
              if (iVar9 == 0) goto LAB_14335c541;
              LOCK();
              iVar8 = (int)plVar5[1];
              bVar13 = iVar9 == iVar8;
              if (bVar13) {
                *(int *)(plVar5 + 1) = iVar9 + 1;
                iVar8 = iVar9;
              }
              iVar9 = iVar8;
              UNLOCK();
            } while (!bVar13);
            plVar6 = (longlong *)*plVar11;
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 8))
                        (plVar6,lVar4,*param_2,*(undefined4 *)(param_2 + 1),
                         *(undefined4 *)(param_1 + 0x150),(int)(float)iVar3,uVar7);
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
LAB_14335c541:
          plVar11 = plVar11 + 2;
        } while (plVar11 != plVar12);
      }
      FUN_147038dd4(param_1 + 0x4f8,*param_2,*(undefined4 *)(param_2 + 1));
      FUN_1477d78ac(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014335c57d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
      return;
    }
  }
  return;
}



// FUNCTION 14335c584 FUN_14335c584 body=439 status=ok
// SIG undefined FUN_14335c584(void)

void FUN_14335c584(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = *(int *)(param_1 + 0x598);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x590);
    if (*(uint **)(param_1 + 0x590) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x580);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      FUN_14703849e(*(longlong *)(param_1 + 0x570) + (longlong)iVar4 * 0x28 + 8,*param_2,
                    *(undefined4 *)(param_2 + 1));
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = *(uint **)(param_1 + 0x590);
      if (*(uint **)(param_1 + 0x590) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x580);
      }
      iVar3 = *(int *)(param_1 + 0x598);
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar10 = puVar5[lVar11] & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_14335c6e6;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_14335c6e6:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 14335c73c FUN_14335c73c body=278 status=ok
// SIG undefined FUN_14335c73c(void)

void FUN_14335c73c(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    bVar4 = 1;
    if (*(byte *)(param_1 + 0x3cb) < 3) {
      bVar4 = *(byte *)(param_1 + 0x3cb);
    }
    iVar2 = *(int *)((longlong)param_3 + 0xc);
    iVar3 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    if (iVar2 < 0) {
      FUN_14482f6fa(param_3,0);
      iVar3 = (int)param_3[1];
      iVar2 = *(int *)((longlong)param_3 + 0xc);
    }
    uVar1 = *(uint *)(param_2 + 1);
    *(uint *)(param_3 + 1) = uVar1 + iVar3;
    if ((uint)(iVar2 - iVar3) < uVar1) {
      FUN_14475e4ac(param_3);
    }
    FUN_14703a6a4(*(undefined8 *)(param_1 + 0x3d0));
    if (0 < (int)param_2[1]) {
      lVar5 = 0;
      do {
        uVar6 = FUN_147039f76(*(undefined8 *)(*(longlong *)(param_1 + 0x3d0) + 8),
                              *(undefined4 *)(*param_2 + lVar5 * 4),bVar4);
        *(undefined4 *)(*param_3 + lVar5 * 4) = uVar6;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)param_2[1]);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
    if (((*(byte *)(lVar5 + 0x11) & 1) != 0) && (*(longlong *)(lVar5 + 0xd8) != 0)) {
      FUN_14703a484(lVar5 + 0x80);
      *(undefined8 *)(lVar5 + 0xd0) = 0;
      *(undefined8 *)(lVar5 + 0xd8) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014335c77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  return;
}



// FUNCTION 14335c852 FUN_14335c852 body=278 status=ok
// SIG undefined FUN_14335c852(void)

void FUN_14335c852(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    bVar4 = 1;
    if (*(byte *)(param_1 + 0x3cb) < 3) {
      bVar4 = *(byte *)(param_1 + 0x3cb);
    }
    iVar2 = *(int *)((longlong)param_3 + 0xc);
    iVar3 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    if (iVar2 < 0) {
      FUN_14482f6fa(param_3,0);
      iVar3 = (int)param_3[1];
      iVar2 = *(int *)((longlong)param_3 + 0xc);
    }
    uVar1 = *(uint *)(param_2 + 1);
    *(uint *)(param_3 + 1) = uVar1 + iVar3;
    if ((uint)(iVar2 - iVar3) < uVar1) {
      FUN_14475e4ac(param_3);
    }
    FUN_14703a6a4(*(undefined8 *)(param_1 + 0x3d0));
    if (0 < (int)param_2[1]) {
      lVar5 = 0;
      do {
        uVar6 = FUN_14703a046(*(undefined8 *)(*(longlong *)(param_1 + 0x3d0) + 8),
                              *(undefined4 *)(*param_2 + lVar5 * 4),bVar4);
        *(undefined4 *)(*param_3 + lVar5 * 4) = uVar6;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)param_2[1]);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 8);
    if (((*(byte *)(lVar5 + 0x11) & 1) != 0) && (*(longlong *)(lVar5 + 0xd8) != 0)) {
      FUN_14703a484(lVar5 + 0x80);
      *(undefined8 *)(lVar5 + 0xd0) = 0;
      *(undefined8 *)(lVar5 + 0xd8) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014335c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a0));
  return;
}



// FUNCTION 14335c968 FUN_14335c968 body=255 status=ok
// SIG undefined FUN_14335c968(void)

ulonglong FUN_14335c968(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  iVar6 = 0;
  if (iVar3 < 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_144893a1c(param_2);
    iVar6 = (int)param_2[1];
    iVar3 = *(int *)((longlong)param_2 + 0xc);
  }
  *(uint *)(param_2 + 1) = iVar6 + param_3 * 4;
  if ((uint)(iVar3 - iVar6) < param_3 * 4) {
    FUN_1447403be(param_2);
  }
  uVar7 = 0;
  memset((void *)((longlong)iVar6 + *param_2),0,(longlong)(int)(param_3 * 4));
  uVar8 = 0;
  if ((((*(int *)(param_1 + 0x444) != 0) && (uVar1 = *(uint *)(param_1 + 0x440), -1 < (int)uVar1))
      && (uVar8 = uVar7, (int)uVar1 < DAT_14c9647dc)) &&
     (((puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar5 != (undefined8 *)0x0 && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x444))) &&
      ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
      plVar9 = (longlong *)*puVar5;
    }
    else {
      plVar9 = (longlong *)0x0;
    }
    lVar2 = *param_2;
    FUN_1477db324(plVar9);
    uVar8 = param_3;
    if ((char)plVar9[0x11c] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014335ca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar9 + 0x610))(plVar9,lVar2,param_3);
      return uVar4;
    }
  }
  return (ulonglong)uVar8;
}



// FUNCTION 14335ca68 FUN_14335ca68 body=247 status=ok
// SIG undefined FUN_14335ca68(void)

longlong * FUN_14335ca68(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x618))(param_1,&local_30);
  plVar1 = local_28;
  if (param_1 + 0x120 != &local_30) {
    param_1[0x120] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[0x121];
    if (local_28 != plVar3) {
      local_28 = (longlong *)0x0;
      param_1[0x121] = (longlong)plVar1;
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
  }
  plVar1 = local_28;
  *param_2 = param_1[0x120];
  lVar4 = param_1[0x121];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335cb60 FUN_14335cb60 body=723 status=ok
// SIG undefined FUN_14335cb60(void)

void FUN_14335cb60(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477dabc8();
  local_44 = param_2;
  if ((param_2 != -1) ||
     ((lVar5 = FUN_1477dadc6(param_1), lVar5 != 0 &&
      (local_44 = *(int *)(lVar5 + 0x74), local_44 != -1)))) {
    (**(code **)(*param_1 + 0x5e8))(param_1,&local_44);
    iVar6 = 8;
    if ((int)param_1[0x119] < 8) {
      iVar6 = (int)param_1[0x119];
    }
    iVar4 = 1;
    if (1 < iVar6) {
      iVar4 = iVar6;
    }
    *(int *)(param_1 + 0x119) = iVar4;
    lVar5 = param_1[0x11a];
    if (lVar5 == 0) {
      lVar5 = FUN_1477dae29(DAT_14c951640);
      if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar5);
      }
      param_1[0x11a] = lVar5;
    }
    lVar7 = param_1[0x10a];
    if (DAT_14c950c29 == 1) {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = param_1[0x10a];
      }
    }
    bVar3 = DAT_14c950c29;
    *(longlong *)(lVar5 + 0x130) = lVar7;
    lVar5 = param_1[0x10b];
    lVar7 = param_1[0x11a];
    if ((bVar3 & 1) != 0) {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar5 = param_1[0x10b];
      }
    }
    *(longlong *)(lVar7 + 0x118) = lVar5;
    FUN_1477daebe(param_1[0x11a] + 0x120,param_1 + 0x10c);
    FUN_1477daf1e(param_1[0x11a] + 0x138,param_1 + 0x10e);
    FUN_1477daf1e(param_1[0x11a] + 0x148,param_1 + 0x110);
    iVar6 = local_44;
    *(byte *)(param_1[0x11a] + 0x38) =
         *(byte *)(param_1[0x11a] + 0x38) & 0xfb | (*(byte *)((longlong)param_1 + 0x2ac) & 1) << 2;
    *(byte *)(param_1[0x11a] + 0x38) =
         *(byte *)(param_1[0x11a] + 0x38) & 0xf7 | (*(byte *)((longlong)param_1 + 0x2ac) & 2) << 2;
    *(byte *)(param_1[0x11a] + 0x38) =
         *(byte *)(param_1[0x11a] + 0x38) & 0xef | (*(byte *)((longlong)param_1 + 0x2ac) & 4) << 2;
    lVar5 = param_1[0x11a];
    lVar7 = param_1[0x119];
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x8cc);
    if (param_1 == (longlong *)0x0) {
      *(undefined4 *)(lVar5 + 0x440) = 0;
      iVar4 = 0;
    }
    else {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(lVar5 + 0x440) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar4 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar4 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar4 = iVar8;
        }
      }
    }
    *(int *)(lVar5 + 0x444) = iVar4;
    *(undefined1 *)(lVar5 + 0x39) = 1;
    *(int *)(lVar5 + 0x36c) = (int)lVar7;
    *(undefined4 *)(lVar5 + 0x420) = uVar1;
    *(byte *)(lVar5 + 0x34c) = *(byte *)(lVar5 + 0x34c) | 8;
    *(undefined4 *)(lVar5 + 0x100) = 0x461c4000;
    *(byte *)(lVar5 + 0x183) = *(byte *)(lVar5 + 0x183) | 1;
    *(int *)(lVar5 + 0x370) = iVar6;
    FUN_1477dadc6(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14335ce34 FUN_14335ce34 body=55 status=ok
// SIG undefined FUN_14335ce34(void)

void FUN_14335ce34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabb6f0 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabb6f0 = FUN_14171c317(FUN_146361440,uVar1,L"ESubmixEffectDynamicsProcessorType");
  }
  return;
}



// FUNCTION 14335ce6b FUN_14335ce6b body=55 status=ok
// SIG undefined FUN_14335ce6b(void)

void FUN_14335ce6b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabb708 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabb708 = FUN_14171c317(FUN_14636146f,uVar1,L"ESubmixEffectDynamicsPeakMode");
  }
  return;
}



// FUNCTION 14335cea2 FUN_14335cea2 body=55 status=ok
// SIG undefined FUN_14335cea2(void)

void FUN_14335cea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabb720 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabb720 = FUN_14171c317(FUN_14636149e,uVar1,L"ESubmixEffectDynamicsChannelLinkMode");
  }
  return;
}



// FUNCTION 14335ced9 FUN_14335ced9 body=55 status=ok
// SIG undefined FUN_14335ced9(void)

void FUN_14335ced9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabb738 == 0) {
    uVar1 = FUN_14125eb7f();
    DAT_14cabb738 = FUN_14171c317(FUN_1463614cd,uVar1,L"ESubmixEffectDynamicsKeySource");
  }
  return;
}



// FUNCTION 14335cf10 FUN_14335cf10 body=69 status=ok
// SIG undefined FUN_14335cf10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14335cf10(void)

{
  _DAT_14cabb7b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014335cf52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb7b8,1);
  return;
}



// FUNCTION 14335cf56 FUN_14335cf56 body=487 status=ok
// SIG undefined FUN_14335cf56(void)

void FUN_14335cf56(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  param_3 = (undefined8 *)*param_3;
  if ((DAT_14cabb7c0 == 0) && (*(char *)(param_1 + 0x9c) != '\x01')) {
    iVar6 = *(int *)(param_1 + 0x170);
    uVar8 = (longlong)*(int *)(param_2 + 8) * (longlong)iVar6;
    plVar1 = (longlong *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (*(int *)(param_1 + 0x94) < 0) {
      FUN_1470345fa(plVar1);
    }
    lVar2 = param_1 + 0xe8;
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xb0);
    EnterCriticalSection(lpCriticalSection);
    cVar4 = *(char *)(param_1 + 0xa0);
    LeaveCriticalSection(lpCriticalSection);
    if (cVar4 == '\0') {
      if (*(int *)(param_2 + 0xc) != iVar6) {
        uVar8 = (ulonglong)(uint)(*(int *)(param_2 + 8) * *(int *)(param_2 + 0xc));
        FUN_1470313fa(lVar2);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x90);
      *(uint *)(param_1 + 0x90) = (uint)uVar8 + iVar6;
      if ((uint)(*(int *)(param_1 + 0x94) - iVar6) < (uint)uVar8) {
        FUN_145ca0cd4(plVar1);
      }
      memset((void *)((longlong)iVar6 * 4 + *plVar1),0,uVar8 * 4);
    }
    cVar4 = FUN_1477dc2fc(param_1);
    if (cVar4 != '\0') {
      FUN_14703803e(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x88),
                    uVar8 & 0xffffffff,1);
    }
    if (*(int *)(param_2 + 0xc) != *(int *)(param_1 + 400)) {
      FUN_147031280(lVar2);
    }
    EnterCriticalSection(lpCriticalSection);
    cVar4 = *(char *)(param_1 + 0xa0);
    LeaveCriticalSection(lpCriticalSection);
    if (cVar4 == '\0') {
      uVar7 = *param_3;
      iVar6 = *(int *)(param_2 + 8) * *(int *)(param_2 + 0xc);
      uVar5 = *puVar3;
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar1;
      uVar7 = *param_3;
      iVar6 = *(int *)(param_2 + 8) * *(int *)(param_2 + 0xc);
      uVar5 = *puVar3;
    }
    FUN_142af2856(lVar2,uVar5,iVar6,uVar7,lVar9,0);
    return;
  }
  memcpy((void *)*param_3,(void *)*puVar3,(longlong)*(int *)(puVar3 + 1) << 2);
  return;
}



// FUNCTION 14335d13e FUN_14335d13e body=348 status=ok
// SIG undefined FUN_14335d13e(void)

void FUN_14335d13e(longlong param_1)

{
  void **ppvVar1;
  uint uVar2;
  void *_Src;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x50) != 0) && (uVar2 = *(uint *)(param_1 + 0x4c), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0x50))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar7 = *plVar6, lVar7 != 0)))) {
      lVar5 = FUN_145a6a3f4();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        FUN_1477dcb36(lVar7,&local_38);
        goto LAB_14335d1ac;
      }
    }
  }
  local_38 = (void *)0x0;
  uStack_30 = 0;
LAB_14335d1ac:
  ppvVar1 = (void **)(param_1 + 0xf8);
  cVar4 = FUN_14335d29b(ppvVar1,&local_38);
  _Src = local_38;
  if (cVar4 == '\0') {
    if (ppvVar1 != &local_38) {
      iVar3 = (int)uStack_30;
      lVar7 = (longlong)(int)uStack_30;
      *(int *)(param_1 + 0x100) = (int)uStack_30;
      if ((int)uStack_30 == 0 && *(int *)(param_1 + 0x104) == 0) {
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
      else {
        FUN_1477e8c40(ppvVar1,uStack_30 & 0xffffffff);
        if (iVar3 != 0) {
          memcpy(*ppvVar1,_Src,lVar7 << 4);
        }
      }
    }
    FUN_1477dcbae(param_1 + 0xb8,ppvVar1);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335d29b FUN_14335d29b body=138 status=ok
// SIG undefined FUN_14335d29b(void)

undefined8 FUN_14335d29b(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != *(uint *)(param_2 + 1)) {
    return 0;
  }
  if (0 < (int)uVar1) {
    lVar2 = *param_2;
    lVar3 = *param_1;
    lVar4 = 0;
    do {
      if (((*(uint *)(lVar3 + 0xc + lVar4) ^ *(uint *)(lVar2 + 0xc + lVar4)) & 1) != 0) {
        return 0;
      }
      if (1e-08 < ABS(*(float *)(lVar2 + 4 + lVar4) - *(float *)(lVar3 + 4 + lVar4))) {
        return 0;
      }
      if (1e-08 < ABS(*(float *)(lVar2 + lVar4) - *(float *)(lVar3 + lVar4))) {
        return 0;
      }
      if (1e-08 < ABS(*(float *)(lVar2 + 8 + lVar4) - *(float *)(lVar3 + 8 + lVar4))) {
        return 0;
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar1 << 4 != lVar4);
  }
  return 1;
}



// FUNCTION 14335d326 FUN_14335d326 body=421 status=ok
// SIG undefined FUN_14335d326(void)

void FUN_14335d326(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong local_68;
  
  FUN_1477dcbec();
  plVar3 = *(longlong **)(param_2 + 0x20);
  plVar4 = (longlong *)*param_3;
  if ((*(char *)(param_1 + 0xb0) == '\x01') && (0 < *(int *)(param_1 + 0x110))) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if (1 < (int)uVar2) {
      puVar1 = (ulonglong *)(param_1 + 0xa0);
      iVar5 = *(int *)(param_2 + 8);
      local_68 = 0;
      do {
        if (0 < iVar5) {
          lVar8 = *(longlong *)(param_1 + 0x88) + local_68 * 0x18;
          iVar9 = 0;
          do {
            lVar10 = (longlong)(*(int *)(param_2 + 0xc) * iVar9 + (int)local_68 * 2);
            *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*plVar3 + lVar10 * 4);
            *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(*plVar3 + 4 + lVar10 * 4);
            lVar6 = (longlong)*(int *)(lVar8 + 0x10);
            if (lVar6 < 1) {
              uVar7 = (ulonglong)*(uint *)puVar1;
            }
            else {
              lVar11 = 0;
              do {
                FUN_14703078e(*(longlong *)(lVar8 + 8) + lVar11,(ulonglong *)(param_1 + 0x98),puVar1
                             );
                uVar7 = *puVar1;
                *(ulonglong *)(param_1 + 0x98) = uVar7;
                lVar11 = lVar11 + 0x30;
              } while (lVar6 * 0x30 != lVar11);
            }
            *(int *)(*plVar4 + lVar10 * 4) = (int)uVar7;
            *(undefined4 *)(*plVar4 + (lVar10 + 1) * 4) = *(undefined4 *)(param_1 + 0xa4);
            iVar9 = iVar9 + 1;
            iVar5 = *(int *)(param_2 + 8);
          } while (iVar9 < iVar5);
        }
        local_68 = local_68 + 1;
      } while (local_68 != uVar2 >> 1);
    }
  }
  else if (0 < (int)plVar3[1]) {
    lVar8 = 0;
    do {
      *(undefined4 *)(*plVar4 + lVar8 * 4) = *(undefined4 *)(*plVar3 + lVar8 * 4);
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)plVar3[1]);
  }
  return;
}



// FUNCTION 14335d4cb FUN_14335d4cb body=69 status=ok
// SIG undefined FUN_14335d4cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14335d4cb(void)

{
  _DAT_14cabb858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014335d50d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb860,1);
  return;
}



// FUNCTION 14335d510 FUN_14335d510 body=69 status=ok
// SIG undefined FUN_14335d510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14335d510(void)

{
  _DAT_14cabb870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014335d552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb878,1);
  return;
}



// FUNCTION 14335d555 FUN_14335d555 body=69 status=ok
// SIG undefined FUN_14335d555(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14335d555(void)

{
  _DAT_14cabb888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014335d597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb890,1);
  return;
}



// FUNCTION 14335d59a FUN_14335d59a body=674 status=ok
// SIG undefined FUN_14335d59a(void)

void FUN_14335d59a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  int local_70;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147038fa0(&local_5c);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x10);
  local_4c = 0x3f333333;
  local_5c = 0x3f800000;
  uStack_54 = 0x3f6666663f4ccccd;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x3f0a3d71;
  uStack_3c = 0x3f19999a;
  uStack_38 = 0x3e19999a3eb33333;
  uStack_30 = 0x3f59999a;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x94) = (undefined4)local_5c;
  *(undefined4 *)(param_1 + 0x98) = local_5c._4_4_;
  *(undefined4 *)(param_1 + 0x9c) = (undefined4)uStack_54;
  *(undefined4 *)(param_1 + 0xa0) = uStack_54._4_4_;
  *(undefined4 *)(param_1 + 0xa4) = local_4c;
  *(undefined4 *)(param_1 + 0xa8) = uStack_48;
  *(undefined4 *)(param_1 + 0xac) = uStack_44;
  *(undefined4 *)(param_1 + 0xb0) = uStack_40;
  *(undefined4 *)(param_1 + 0xb4) = uStack_3c;
  *(undefined4 *)(param_1 + 0xb8) = (undefined4)uStack_38;
  *(undefined4 *)(param_1 + 0xbc) = uStack_38._4_4_;
  *(undefined4 *)(param_1 + 0xc0) = uStack_30;
  *(undefined4 *)(param_1 + 0xc4) = local_2c;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  lVar1 = param_1 + 0x140;
  LOCK();
  UNLOCK();
  local_70 = DAT_14c761474 + 1;
  local_78 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(lVar1,local_60,0,0x3f7d70a4);
  LOCK();
  UNLOCK();
  local_70 = DAT_14c761474 + 1;
  local_78 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(lVar1,local_60,0x40000000,0x3ee66666);
  LOCK();
  UNLOCK();
  local_70 = DAT_14c761474 + 1;
  local_78 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(lVar1,local_60,0x40a00000,0x3e19999a);
  LOCK();
  UNLOCK();
  local_70 = DAT_14c761474 + 1;
  local_78 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(lVar1,local_60,0x41200000,0x3dcccccd);
  LOCK();
  UNLOCK();
  local_70 = DAT_14c761474 + 1;
  local_78 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(lVar1,local_60,0x41900000,0x3c23d70a);
  LOCK();
  UNLOCK();
  local_70 = DAT_14c761474 + 1;
  local_78 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(lVar1,local_60,0x41980000,0x3b03126f);
  LOCK();
  UNLOCK();
  local_70 = DAT_14c761474 + 1;
  local_78 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(lVar1,local_60,0x41a00000,0x38d1b717);
  if (DAT_14cabb868 == 0) {
    uVar2 = FUN_14001cc68(0x5d8,0x10);
    FUN_147038fce(uVar2,*(undefined4 *)(param_1 + 0x1c0),0x200,&local_5c);
    lVar1 = *(longlong *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    if (lVar1 != 0) {
      FUN_147039104(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335d83e FUN_14335d83e body=1037 status=ok
// SIG undefined FUN_14335d83e(void)

void FUN_14335d83e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_168 [36];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined **local_138;
  undefined8 local_130;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar15 = 0x3f63d70a;
  uVar17 = 0x3fbeb852;
  uVar14 = 0x3f59999a;
  uVar16 = 0x3f7e76c9;
  uVar19 = 0x3f547ae1;
  uVar18 = 0x3fa147ae;
  fVar10 = 0.0;
  fVar11 = 0.3;
  if (((((int)param_1[10] == 0) || (uVar1 = *(uint *)((longlong)param_1 + 0x4c), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 == (longlong *)0x0 || ((int)plVar4[2] != (int)param_1[10])) ||
      (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (lVar2 = *plVar4, lVar2 == 0)))))) {
    bVar6 = 0;
    uVar8 = 0;
    uVar13 = 0;
    uVar9 = 0;
    uVar7 = 0;
    local_108 = 0x3be56042;
    local_100 = 0x3dcccccd;
    local_10c = 0x3d4ccccd;
    uVar12 = 0x3f59999a;
  }
  else {
    lVar3 = FUN_145a6a4e0();
    bVar6 = 0;
    if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) {
      uVar8 = 0;
      uVar13 = 0;
      uVar9 = 0;
      uVar7 = 0;
      local_108 = 0x3be56042;
      local_100 = 0x3dcccccd;
      local_10c = 0x3d4ccccd;
      uVar12 = uVar14;
    }
    else {
      bVar6 = 0;
      uVar8 = 0;
      uVar13 = 0;
      uVar12 = 0x3f59999a;
      uVar9 = 0;
      uVar7 = 0;
      local_108 = 0x3be56042;
      local_100 = 0x3dcccccd;
      local_10c = 0x3d4ccccd;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
        uVar7 = *(undefined1 *)(lVar2 + 0x90);
        local_13c = *(undefined4 *)(lVar2 + 0x94);
        uVar15 = *(undefined4 *)(lVar2 + 0x98);
        local_140 = *(undefined4 *)(lVar2 + 0x9c);
        uVar9 = *(undefined1 *)(lVar2 + 0xa0);
        local_144 = *(undefined4 *)(lVar2 + 0xa4);
        uVar17 = *(undefined4 *)(lVar2 + 0xa8);
        uVar12 = *(undefined4 *)(lVar2 + 0xac);
        uVar14 = *(undefined4 *)(lVar2 + 0xb0);
        uVar16 = *(undefined4 *)(lVar2 + 0xb4);
        uVar19 = *(undefined4 *)(lVar2 + 0xb8);
        uVar18 = *(undefined4 *)(lVar2 + 0xbc);
        uVar13 = *(undefined4 *)(lVar2 + 0xc0);
        fVar11 = *(float *)(lVar2 + 0xc4);
        uVar8 = *(undefined4 *)(lVar2 + 200);
        bVar6 = *(byte *)(lVar2 + 0xcc);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
        local_108 = local_13c;
        local_100 = local_144;
        local_10c = local_140;
      }
    }
  }
  local_138 = &PTR_FUN_14a7ed790;
  local_130 = 0;
  local_f8 = 0;
  uVar5 = 0x3f800000;
  if ((bVar6 & 1) == 0) {
    fVar10 = fVar11;
    if (10.0 <= fVar11) {
      fVar10 = 10.0;
    }
    uVar5 = uVar8;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
  }
  local_128 = fVar10;
  local_124 = uVar12;
  local_120 = uVar14;
  local_11c = uVar13;
  local_118 = uVar15;
  local_114 = uVar17;
  local_110 = uVar19;
  local_104 = uVar18;
  local_fc = uVar16;
  local_f4 = uVar7;
  local_f3 = uVar9;
  (**(code **)(*param_1 + 0x10))(param_1);
  fVar10 = 0.0;
  if ((bVar6 & 1) == 0) {
    fVar10 = fVar11;
    if (10.0 <= fVar11) {
      fVar10 = 10.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(float *)((longlong)param_1 + 0xf4) = fVar10;
  *(undefined4 *)(param_1 + 0x1f) = uVar5;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14335dc4c FUN_14335dc4c body=611 status=ok
// SIG undefined FUN_14335dc4c(void)

void FUN_14335dc4c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((1 < *(int *)(param_3 + 1)) && (DAT_14cabb868 != 1)) {
    if (*(longlong *)(param_1 + 0x88) == 0) {
      FUN_147038fa0(&local_88);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
      local_58 = *(undefined4 *)(param_1 + 0xc4);
      local_88 = *(undefined4 *)(param_1 + 0x94);
      uStack_84 = *(undefined4 *)(param_1 + 0x98);
      uStack_80 = *(undefined4 *)(param_1 + 0x9c);
      uStack_7c = *(undefined4 *)(param_1 + 0xa0);
      local_78 = *(undefined4 *)(param_1 + 0xa4);
      uStack_74 = *(undefined4 *)(param_1 + 0xa8);
      uStack_70 = *(undefined4 *)(param_1 + 0xac);
      uStack_6c = *(undefined4 *)(param_1 + 0xb0);
      local_68 = *(undefined4 *)(param_1 + 0xb4);
      uStack_64 = *(undefined4 *)(param_1 + 0xb8);
      uStack_60 = *(undefined4 *)(param_1 + 0xbc);
      uStack_5c = *(undefined4 *)(param_1 + 0xc0);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
      uVar4 = FUN_14001cc68(0x5d8);
      FUN_147038fce(uVar4,*(undefined4 *)(param_1 + 0x1c0),0x200,&local_88);
      lVar3 = *(longlong *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = uVar4;
      if (lVar3 != 0) {
        FUN_147039104(lVar3);
        FUN_1400020a8(lVar3);
      }
    }
    FUN_1477dd7fc(param_1);
    fVar5 = *(float *)(param_1 + 0x128);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    if (*(char *)(param_1 + 0xf0) == '\x01') {
      *(undefined1 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0xf4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    if (fVar5 < 0.0) {
      fVar5 = *(float *)(param_1 + 0x128);
    }
    lVar3 = param_1 + 0x130;
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(int *)(param_1 + 0x13c) < 0) {
      FUN_1470345fa(lVar3);
    }
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x20) + 8);
    if (0 < (longlong)(int)uVar1) {
      iVar2 = *(int *)(param_1 + 0x138);
      *(uint *)(param_1 + 0x138) = iVar2 + uVar1;
      if ((uint)(*(int *)(param_1 + 0x13c) - iVar2) < uVar1) {
        FUN_145ca0cd4(lVar3);
      }
      memset((void *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x130)),0,
             (longlong)(int)uVar1 << 2);
      local_98 = *(undefined8 *)(param_1 + 0x130);
      local_90 = *(undefined4 *)(param_1 + 0x138);
      local_a8 = **(undefined8 **)(param_2 + 0x20);
      local_a0 = *(undefined4 *)(*(undefined8 **)(param_2 + 0x20) + 1);
      FUN_142af41c4(&local_a8,&local_98,fVar5,*(undefined4 *)(param_1 + 0x128));
    }
    local_b8 = *(undefined4 *)(param_3 + 1);
    FUN_1470391c8(*(undefined8 *)(param_1 + 0x88),lVar3,*(undefined4 *)(param_2 + 0xc),*param_3);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335deb0 FUN_14335deb0 body=606 status=ok
// SIG undefined FUN_14335deb0(void)

undefined8 FUN_14335deb0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auStack_98 [44];
  float local_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147038fa0(&local_6c);
  local_3c = CONCAT22(local_3c._2_2_,*(undefined2 *)(param_2 + 0x44)) ^ 0x101;
  local_6c = *(float *)(param_2 + 0x2c) / 3.16;
  if (1.0 <= local_6c) {
    local_6c = 1.0;
  }
  if (local_6c <= 0.0) {
    local_6c = 0.0;
  }
  fVar2 = *(float *)(param_2 + 0x30) / 0.3;
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fStack_68 = fVar2 * 300.0 + 0.0;
  fStack_64 = 1.0 - *(float *)(param_2 + 0x20);
  if (1.0 <= fStack_64) {
    fStack_64 = 1.0;
  }
  if (fStack_64 <= 0.0) {
    fStack_64 = 0.0;
  }
  fVar2 = *(float *)(param_2 + 0x38) / 0.1;
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fStack_58 = fVar2 * 100.0 + 0.0;
  fStack_54 = *(float *)(param_2 + 0x1c);
  if (1.0 <= fStack_54) {
    fStack_54 = 1.0;
  }
  if (fStack_54 <= 0.0) {
    fStack_54 = 0.0;
  }
  fVar2 = *(float *)(param_2 + 0x3c);
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fStack_50 = fVar2 * 0.5 + 0.1;
  fVar2 = (*(float *)(param_2 + 0x18) + -0.05) / 0.95;
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_4c = fVar2 * 0.95 + 0.0;
  fVar2 = (*(float *)(param_2 + 0x28) + -0.05) / 1.9000001;
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fStack_48 = fVar2 * 0.999 + 0.0;
  fVar2 = *(float *)(param_2 + 0x14) / 0.95;
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fStack_40 = fVar2 * 0.94 + 0.06;
  uStack_44 = FUN_1448c9f94(param_1 + 0x140,*(undefined4 *)(param_2 + 0x24),0);
  fVar2 = fStack_54;
  if (fStack_54 <= 1e-08) {
    fVar2 = 1e-08;
  }
  fVar2 = logf(fVar2);
  fStack_54 = (fVar2 / 2.3025851) * 20.0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(float *)(param_1 + 0x94) = local_6c;
  *(float *)(param_1 + 0x98) = fStack_68;
  *(float *)(param_1 + 0x9c) = fStack_64;
  *(undefined4 *)(param_1 + 0xa0) = uStack_60;
  *(undefined4 *)(param_1 + 0xa4) = local_5c;
  *(float *)(param_1 + 0xa8) = fStack_58;
  *(float *)(param_1 + 0xac) = fStack_54;
  *(float *)(param_1 + 0xb0) = fStack_50;
  *(float *)(param_1 + 0xb4) = local_4c;
  *(float *)(param_1 + 0xb8) = fStack_48;
  *(undefined4 *)(param_1 + 0xbc) = uStack_44;
  *(float *)(param_1 + 0xc0) = fStack_40;
  *(uint *)(param_1 + 0xc4) = local_3c;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  *(undefined1 *)(param_1 + 0xf0) = 1;
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335e10f FUN_14335e10f body=69 status=ok
// SIG undefined FUN_14335e10f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14335e10f(void)

{
  _DAT_14cabb8b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014335e151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabb8c0,1);
  return;
}



// FUNCTION 14335e154 FUN_14335e154 body=244 status=ok
// SIG undefined FUN_14335e154(void)

void FUN_14335e154(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  FUN_1477ececc(*(undefined8 *)(param_1 + 0x528));
  if (*(int *)(param_1 + 0x558) != 0) {
    iVar1 = *(int *)(param_1 + 0x560);
    if (iVar1 < param_2) {
      dVar3 = (double)(*(float *)(param_1 + 0x520) / 1000.0) * *(double *)(param_1 + 0x180);
      iVar2 = (int)dVar3;
      local_48 = iVar1;
      uVar4 = FUN_14335e24a(dVar3,param_2 - iVar1,param_1 + 0x538,iVar2);
      local_48 = iVar1;
      FUN_14335e24a(uVar4,param_2 - iVar1,param_1 + 0x548,iVar2);
      FUN_1477dedde(param_1 + 0x120,param_2 - *(int *)(param_1 + 0x560));
      *(undefined4 *)(param_1 + 0x560) = 0;
      FUN_1477de56e(param_1);
    }
    else {
      *(int *)(param_1 + 0x560) = iVar1 - param_2;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335e24a FUN_14335e24a body=284 status=ok
// SIG undefined FUN_14335e24a(void)

void FUN_14335e24a(undefined8 param_1,int param_2,longlong *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar6 = param_3[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_3;
    lVar9 = 0;
    bVar7 = false;
    do {
      iVar5 = *(int *)(lVar3 + 0x10 + lVar9);
      if (iVar5 < param_4) {
        FUN_1433b3f90(*(undefined8 *)(lVar3 + lVar9));
        iVar5 = *(int *)(lVar3 + 0x10 + lVar9);
      }
      if (iVar5 < param_2) {
        FUN_1433b4042(*(undefined8 *)(lVar3 + lVar9),iVar5 + param_5);
        *(undefined8 *)(lVar3 + lVar9) = 0;
        plVar4 = *(longlong **)(lVar3 + 8 + lVar9);
        bVar7 = true;
        if (plVar4 != (longlong *)0x0) {
          *(undefined8 *)(lVar3 + 8 + lVar9) = 0;
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
      }
      else {
        *(int *)(lVar3 + 0x10 + lVar9) = iVar5 - param_2;
        FUN_1433b3e1c(*(undefined8 *)(lVar3 + lVar9),iVar5 - param_2);
      }
      lVar9 = lVar9 + 0x18;
    } while ((longlong)(int)lVar6 * 0x18 != lVar9);
    if ((bVar7) && (uVar8 = (ulonglong)(int)param_3[1], 0 < (longlong)uVar8)) {
      lVar6 = uVar8 * 0x18;
      do {
        lVar6 = lVar6 + -0x18;
        if (*(longlong *)(*param_3 + lVar6) == 0) {
          FUN_1477ecfb4(param_3,(int)uVar8 + -1);
          FUN_1477ed040(param_3);
        }
        bVar7 = 1 < uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar7);
    }
  }
  return;
}



// FUNCTION 14335e366 FUN_14335e366 body=1229 status=ok
// SIG undefined FUN_14335e366(void)

void FUN_14335e366(longlong *param_1,char *param_2,longlong *param_3)

{
  int *piVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auStack_e8 [40];
  byte local_c0 [4];
  float local_bc;
  char local_b8;
  char local_b7;
  longlong local_b0;
  undefined4 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_3 == 0) goto LAB_14335e7a7;
  if (((int)param_1[0xaa] == 0) && (param_2[10] == '\x01')) {
    FUN_1433b4108(*param_3);
    goto LAB_14335e7a7;
  }
  if (param_2[0xb] == '\x01') {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    (**(code **)(*param_1 + 0x18))(param_1,(int)param_1[0xaa] == 0);
  }
  if (((int)param_1[0xaa] == 0) && (param_2[0xc] == '\x01')) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if (*param_2 == '\x13') {
    FUN_1433b3f90(*param_3);
    FUN_1433b4042(*param_3,0);
    goto LAB_14335e7a7;
  }
  FUN_1477cb53e(local_c0,param_2);
  uVar12 = (ulonglong)local_c0[0];
  dVar2 = 0.0;
  if (uVar12 != 0x13) {
    if (local_bc < 1.0) {
      local_bc = 1.0;
    }
    fVar19 = local_bc;
    iVar13 = (int)local_bc;
    dVar2 = (double)param_1[uVar12 + 0x8a];
    iVar11 = iVar13 + -1;
    if (((*(int *)((longlong)param_1 + 0x124) != 0) || ((int)param_1[0x25] != 0)) ||
       (1e-08 < ABS(*(float *)((longlong)param_1 + 300)))) {
      if (local_b8 == '\0' || 1e-08 < ABS(local_bc + -1.0)) goto LAB_14335e4e9;
    }
    else if ((local_b7 == '\0') && (dVar2 = (double)param_1[uVar12 + 0x78], iVar11 != 0)) {
LAB_14335e4e9:
      if (local_b8 == '\0') {
        if ((local_c0[0] == 1) && ((int)param_1[0x9d] != 0)) {
          fVar15 = (float)(int)param_1[0x9d];
        }
        else {
          fVar15 = (float)((double)param_1[0x78] / (double)param_1[uVar12 + 0x78]);
        }
        fVar16 = (float)FUN_1477e557a(param_1 + 0x23,uVar12);
        if ((1.0 <= fVar15) || (ABS(fVar15) <= 1e-08)) {
          iVar13 = iVar11 % (int)fVar15 - (int)fVar16;
        }
        else {
          fVar19 = 1.0 / fVar15 - (fVar16 + -1.0);
          local_c0[0] = 0;
          iVar13 = (int)fVar19 + -1;
          uVar12 = 0;
          local_bc = fVar19;
        }
        iVar11 = (int)(fVar15 + (float)iVar13);
        if (-1 < iVar13) {
          iVar11 = iVar13;
        }
      }
      else if (local_b8 == '\x01') {
        fVar15 = (float)FUN_1477e551c();
        iVar7 = (int)fVar15;
        if (fVar19 <= (float)(int)fVar15) {
          iVar7 = iVar7 % iVar13;
        }
        iVar11 = iVar11 - iVar7;
      }
      auVar18 = roundss(ZEXT816(0),ZEXT416((uint)fVar19),0xb);
      dVar17 = (double)(fVar19 - auVar18._0_4_);
      if (((char)uVar12 == '\x01') && (uVar8 = *(uint *)(param_1 + 0x9d), uVar8 != 0)) {
        uVar10 = 0;
        uVar12 = (ulonglong)*(uint *)(param_1 + 0x9e);
        if ((int)*(uint *)(param_1 + 0x9e) < 1) {
          uVar12 = uVar10;
        }
        if (0 < iVar11) {
          do {
            uVar9 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar9;
            if (uVar9 == uVar8) {
              uVar12 = uVar10;
            }
            dVar2 = dVar2 + *(double *)(param_1[0x9c] + uVar12 * 8);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        uVar9 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar9;
        if (uVar9 == uVar8) {
          uVar12 = uVar10;
        }
        dVar17 = dVar17 * *(double *)(param_1[0x9c] + uVar12 * 8);
      }
      else {
        dVar17 = (double)((float)(double)param_1[uVar12 + 0x78] * (float)((double)iVar11 + dVar17));
      }
      dVar2 = dVar2 + dVar17;
    }
  }
  FUN_1477c9821(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  iVar13 = (**(code **)(*(longlong *)*param_3 + 0x10))
                     ((longlong *)*param_3,(ulonglong)(longlong)ROUND(dVar2 + dVar2 + 0.5) >> 1);
  iVar11 = 0;
  if (0 < iVar13) {
    iVar11 = iVar13;
  }
  FUN_1478b1b3e(*param_3,param_1 + 0x2a);
  FUN_1433b3e1c(*param_3,iVar11);
  if (iVar13 < 1) {
    FUN_1433b3f90(*param_3);
  }
  cVar6 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  lVar3 = *param_3;
  plVar5 = (longlong *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  if (cVar6 == '\0') {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar14 = plVar5 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    plVar14 = param_1 + 0xa8;
    uVar12 = (ulonglong)(int)param_1[0xa9];
    uVar8 = (int)param_1[0xa9] + 1;
    *(uint *)(param_1 + 0xa9) = uVar8;
    if (*(uint *)((longlong)param_1 + 0x54c) < uVar8) goto LAB_14335e788;
  }
  else {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar14 = plVar5 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    plVar14 = param_1 + 0xa6;
    uVar12 = (ulonglong)(int)param_1[0xa7];
    uVar8 = (int)param_1[0xa7] + 1;
    *(uint *)(param_1 + 0xa7) = uVar8;
    if (*(uint *)((longlong)param_1 + 0x53c) < uVar8) {
LAB_14335e788:
      FUN_1477ed0ee(plVar14,uVar12 & 0xffffffff);
    }
  }
  lVar4 = *plVar14;
  *(longlong *)(lVar4 + uVar12 * 0x18) = lVar3;
  *(longlong **)(lVar4 + 8 + uVar12 * 0x18) = plVar5;
  *(int *)(lVar4 + 0x10 + uVar12 * 0x18) = iVar11;
LAB_14335e7a7:
  FUN_1477c9821(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar5 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14335e834 FUN_14335e834 body=211 status=ok
// SIG undefined FUN_14335e834(void)

void FUN_14335e834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_4 = param_1;
  if ((0.0 <= param_5) && (1e-08 < ABS(param_5))) {
    local_10 = 0x40e5888000000000;
    local_38 = 1.0;
    if (1.0 <= 330750.0 / (double)param_5) {
      local_38 = 330750.0 / (double)param_5;
    }
    local_20 = 2646000.0 / local_38;
    local_28 = local_38 / 44100.0;
    local_30 = local_28 * 1000.0;
    local_18 = local_20 * 0.125;
    FUN_1477e39fa();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335e908 FUN_14335e908 body=215 status=ok
// SIG undefined FUN_14335e908(void)

void FUN_14335e908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5)

{
  double dVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_4 = param_1;
  if ((0.0 <= param_5) && (1e-08 < ABS(param_5))) {
    local_10 = 0x40e5888000000000;
    dVar1 = ((double)param_5 * 44100.0) / 1000.0;
    local_38 = 1.0;
    if (1.0 <= dVar1) {
      local_38 = dVar1;
    }
    local_20 = 2646000.0 / local_38;
    local_28 = local_38 / 44100.0;
    local_30 = local_28 * 1000.0;
    local_18 = local_20 * 0.125;
    FUN_1477e39fa();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335e9e0 FUN_14335e9e0 body=219 status=ok
// SIG undefined FUN_14335e9e0(void)

void FUN_14335e9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5)

{
  double dVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_4 = param_1;
  if ((0.0 <= param_5) && (1e-08 < ABS(param_5))) {
    local_10 = 0x40e5888000000000;
    dVar1 = ((double)param_5 * 1000.0 * 44100.0) / 1000.0;
    local_38 = 1.0;
    if (1.0 <= dVar1) {
      local_38 = dVar1;
    }
    local_20 = 2646000.0 / local_38;
    local_28 = local_38 / 44100.0;
    local_30 = local_28 * 1000.0;
    local_18 = local_20 * 0.125;
    FUN_1477e39fa();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335eabc FUN_14335eabc body=207 status=ok
// SIG undefined FUN_14335eabc(void)

void FUN_14335eabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_4 = param_1;
  if ((0.0 <= param_5) && (1e-08 < ABS(param_5))) {
    local_10 = 0x40e5888000000000;
    local_38 = 1.0;
    if (1.0 <= 2646000.0 / (double)param_5) {
      local_38 = 2646000.0 / (double)param_5;
    }
    local_20 = 2646000.0 / local_38;
    local_28 = local_38 / 44100.0;
    local_30 = local_28 * 1000.0;
    local_18 = local_20 * 0.125;
    FUN_1477e39fa();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335eb8c FUN_14335eb8c body=234 status=ok
// SIG undefined FUN_14335eb8c(void)

void FUN_14335eb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5)

{
  double dVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_4 = param_1;
  if ((0.0 <= param_5) && (1e-08 < ABS(param_5))) {
    local_10 = 0x40e5888000000000;
    dVar1 = ((double)(1.0 / param_5) * 1000.0 * 44100.0) / 1000.0;
    local_38 = 1.0;
    if (1.0 <= dVar1) {
      local_38 = dVar1;
    }
    local_20 = 2646000.0 / local_38;
    local_28 = local_38 / 44100.0;
    local_30 = local_28 * 1000.0;
    local_18 = local_20 * 0.125;
    FUN_1477e39fa();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335ec78 FUN_14335ec78 body=380 status=ok
// SIG undefined FUN_14335ec78(void)

void FUN_14335ec78(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined5 local_f8;
  undefined3 uStack_f3;
  undefined5 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [88];
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_1 + 0x200) != param_2) {
    local_128 = param_4;
    FUN_1477e36e4(local_c0,param_1,param_2,param_3);
    FUN_1477cb398(&local_118,local_c0);
    local_68[0] = (undefined1 *)0x0;
    local_58 = (undefined8 *)FUN_14001cc68(0x60,8);
    *local_58 = &PTR_FUN_14a57ca60;
    local_58[1] = local_118;
    local_58[2] = uStack_110;
    local_58[3] = local_108;
    local_58[4] = uStack_100;
    local_108 = 0;
    uStack_100 = 0;
    local_58[5] = CONCAT35(uStack_f3,local_f8);
    *(ulonglong *)((longlong)local_58 + 0x2d) = CONCAT53(uStack_f0,uStack_f3);
    local_58[7] = local_e8;
    local_e8 = 0;
    *(undefined4 *)(local_58 + 8) = (undefined4)local_e0;
    *(undefined4 *)((longlong)local_58 + 0x44) = local_e0._4_4_;
    local_e0 = 0;
    local_58[9] = local_d8;
    local_d8 = 0;
    *(undefined4 *)(local_58 + 10) = (undefined4)local_d0;
    *(undefined4 *)((longlong)local_58 + 0x54) = local_d0._4_4_;
    local_d0 = 0;
    *(undefined4 *)(local_58 + 0xb) = local_c8;
    if (local_58 + 1 != (undefined8 *)0x0) {
      local_68[0] = &LAB_143360f0a;
    }
    FUN_1461d2a44(param_1 + 0x1d8,local_68);
    FUN_1477c9968(&local_118);
    FUN_1477c9968(local_c0);
  }
  FUN_1477c9821(*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x18));
  if (*(longlong *)(param_3 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335edf6 FUN_14335edf6 body=395 status=ok
// SIG undefined FUN_14335edf6(void)

void FUN_14335edf6(longlong param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_118 [48];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8 [2];
  undefined8 *local_c8;
  undefined8 local_90;
  char local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_4 = param_1;
  if (param_2 != '\x13') {
    FUN_1478b2468(param_1 + 0x28);
    FUN_1461d2b9a(param_1 + 0x28,&local_90);
    plVar1 = local_60;
    if (local_70 == '\x01') {
      local_e8 = local_80;
      uStack_e4 = uStack_7c;
      uStack_e0 = uStack_78;
      uStack_dc = uStack_74;
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_d8[0] = (code *)0x0;
    local_c8 = (undefined8 *)FUN_14001cc68(0x50,8);
    *local_c8 = &PTR_FUN_14a57ca80;
    *(char *)(local_c8 + 2) = local_88;
    if (local_88 != '\0') {
      local_c8[1] = local_90;
    }
    *(char *)(local_c8 + 5) = local_70;
    if (local_70 != '\0') {
      *(undefined4 *)(local_c8 + 3) = local_e8;
      *(undefined4 *)((longlong)local_c8 + 0x1c) = uStack_e4;
      *(undefined4 *)(local_c8 + 4) = uStack_e0;
      *(undefined4 *)((longlong)local_c8 + 0x24) = uStack_dc;
    }
    local_c8[6] = local_68;
    local_c8[7] = plVar1;
    local_c8[8] = local_58;
    *(char *)(local_c8 + 9) = param_2;
    if (local_c8 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_d8[0] = FUN_143360fb8;
    }
    FUN_1461d2a44(param_1 + 0x1d8,local_d8);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335ef82 FUN_14335ef82 body=103 status=ok
// SIG undefined FUN_14335ef82(void)

void FUN_14335ef82(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  iVar1 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar3 = 0;
    do {
      FUN_14335e154(*(undefined8 *)(lVar2 + lVar3),param_2);
      LOCK();
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      UNLOCK();
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x68) = 0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014335efe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 14335efea FUN_14335efea body=217 status=ok
// SIG undefined FUN_14335efea(void)

undefined8 * FUN_14335efea(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  FUN_1477df74c(param_1,&local_40,param_3);
  if (local_40 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
  }
  else {
    local_50 = local_40;
    local_48 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_1477ddb18(param_2,&local_50);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335f0c4 FUN_14335f0c4 body=270 status=ok
// SIG undefined FUN_14335f0c4(void)

void FUN_14335f0c4(longlong param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  DWORD DVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_3 == '\0') && (lVar5 = *(longlong *)(param_1 + 0x28), lVar5 != 0)) &&
     (DVar2 = GetCurrentThreadId(), DVar2 != *(DWORD *)(lVar5 + 0xe1c))) {
    local_48 = *param_2;
    local_68 = 0;
    local_58 = &PTR_LAB_14a57cb40;
    local_78 = &LAB_14336161a;
    local_50 = param_1;
    FUN_1477bca52(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  uVar4 = (ulonglong)*(int *)(param_1 + 0x60);
  if (0 < (longlong)uVar4) {
    plVar3 = (longlong *)(param_1 + 0x58);
    lVar5 = uVar4 << 4;
    do {
      lVar5 = lVar5 + -0x10;
      if (*(longlong *)(*(longlong *)(*plVar3 + lVar5) + 0x518) == *param_2) {
        FUN_1477ed3ac(plVar3,(int)uVar4 + -1);
        FUN_1477ed434(plVar3);
      }
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014335f183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 14335f1e0 FUN_14335f1e0 body=601 status=ok
// SIG undefined FUN_14335f1e0(void)

void FUN_14335f1e0(longlong param_1)

{
  double *pdVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  plVar2 = (longlong *)(param_1 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  if (*(int *)(param_1 + 0x3d4) < 0) {
    FUN_140cb0586(plVar2,0);
  }
  pdVar1 = (double *)(param_1 + 0x38);
  lVar8 = 0;
  do {
    uVar10 = FUN_1478b17c8(pdVar1);
    *(undefined8 *)(param_1 + 0x2a8 + lVar8 * 8) = uVar10;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x12);
  switch(*(undefined1 *)(param_1 + 0x24)) {
  case 0:
    dVar12 = *pdVar1 * 16.0;
    break;
  case 1:
    dVar12 = *pdVar1 * 8.0;
    break;
  case 2:
    dVar12 = *pdVar1 * 4.0;
    break;
  case 3:
    dVar12 = *pdVar1 + *pdVar1;
    break;
  case 4:
    dVar12 = *pdVar1;
    break;
  default:
    dVar5 = -(double)*(int *)(param_1 + 0x20);
    dVar12 = -1.0;
    goto LAB_14335f2ae;
  }
  dVar5 = (double)*(int *)(param_1 + 0x20) * dVar12;
LAB_14335f2ae:
  *(double *)(param_1 + 0x2a8) = dVar5;
  *(double *)(param_1 + 0x2b0) = dVar12;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    piVar9 = *(int **)(param_1 + 0x28);
    piVar3 = piVar9 + (longlong)*(int *)(param_1 + 0x30) * 2;
    dVar12 = 0.0;
    uVar13 = 0;
    uVar14 = 0;
    do {
      if (0 < *piVar9) {
        iVar7 = 0;
        do {
          dVar11 = (double)FUN_1478b17c8(pdVar1);
          uVar13 = SUB84(dVar11,0);
          uVar14 = (undefined4)((ulonglong)dVar11 >> 0x20);
          iVar4 = *(int *)(param_1 + 0x3d0);
          uVar6 = iVar4 + 1;
          *(uint *)(param_1 + 0x3d0) = uVar6;
          if (*(uint *)(param_1 + 0x3d4) < uVar6) {
            FUN_144941252(plVar2);
          }
          dVar12 = dVar12 + dVar11;
          *(double *)(*plVar2 + (longlong)iVar4 * 8) = dVar11;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *piVar9);
      }
      piVar9 = piVar9 + 2;
    } while (piVar9 != piVar3);
    if (dVar12 <= dVar5) {
      while (dVar12 = dVar12 + (double)CONCAT44(uVar14,uVar13), dVar12 <= dVar5) {
        iVar7 = *(int *)(param_1 + 0x3d0);
        uVar6 = iVar7 + 1;
        *(uint *)(param_1 + 0x3d0) = uVar6;
        if (*(uint *)(param_1 + 0x3d4) < uVar6) {
          FUN_144941252(plVar2);
        }
        *(ulonglong *)(*plVar2 + (longlong)iVar7 * 8) = CONCAT44(uVar14,uVar13);
      }
      dVar12 = **(double **)(param_1 + 0x3c8);
      if ((longlong)*(int *)(param_1 + 0x3d0) != 0) {
        lVar8 = 0;
        do {
          if (1e-08 < ABS(*(double *)((longlong)*(double **)(param_1 + 0x3c8) + lVar8) - dVar12)) {
            return;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)*(int *)(param_1 + 0x3d0) * 8 != lVar8);
      }
      *(double *)(param_1 + 0x2b0) = dVar12;
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      if (*(int *)(param_1 + 0x3d4) < 0) {
        FUN_140cb0586(plVar2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14335f43a FUN_14335f43a body=1328 status=ok
// SIG undefined FUN_14335f43a(void)

longlong FUN_14335f43a(longlong param_1,longlong *param_2,longlong param_3,int *param_4,char param_5
                      ,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  code *local_d0;
  longlong *local_c8;
  LPCRITICAL_SECTION local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_90 = param_3;
  if (param_2 == (longlong *)0x0 || param_3 == 0) {
    lVar7 = 0;
    goto LAB_14335f480;
  }
  lVar7 = FUN_1477e6f66(param_1,param_2,param_6);
  if (*param_4 < 1) {
    *param_4 = 1;
  }
  local_c0 = (LPCRITICAL_SECTION)(lVar7 + 0x30);
  EnterCriticalSection(local_c0);
  FUN_1478b1418(&local_68,param_4);
  local_50 = (undefined1)param_4[6];
  FUN_1477df74c(lVar7,&local_78,&local_90);
  if (local_78 == (longlong *)0x0) {
    plVar8 = (longlong *)FUN_14001cc68(0x578,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14a57cb20;
    local_c8 = plVar8 + 2;
    FUN_1477de2b4(local_c8,&local_90,&local_68,lVar7);
    iVar4 = *(int *)(lVar7 + 0x60);
    *(uint *)(lVar7 + 0x60) = iVar4 + 1U;
    if (*(uint *)(lVar7 + 100) < iVar4 + 1U) {
      FUN_1477ed326((longlong *)(lVar7 + 0x58),iVar4);
    }
    lVar7 = *(longlong *)(lVar7 + 0x58);
    lVar10 = (longlong)iVar4 * 0x10;
    *(longlong **)(lVar7 + lVar10) = local_c8;
    *(longlong **)(lVar7 + 8 + lVar10) = plVar8;
    if (plVar8 == (longlong *)0x0) {
      local_88 = local_c8;
      local_80 = (longlong *)0x0;
      FUN_1477ddb18(&local_b8);
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      local_88 = *(longlong **)(lVar7 + lVar10);
      local_80 = (longlong *)((longlong *)(lVar7 + lVar10))[1];
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      FUN_1477ddb18(&local_b8,&local_88);
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
  }
  else {
    if (param_5 != '\0') {
      cVar6 = FUN_1478b14d8(local_78 + 0x28,&local_68);
      if (cVar6 == '\0') {
        *(undefined4 *)(local_78 + 0x28) = (undefined4)local_68;
        *(undefined1 *)((longlong)local_78 + 0x144) = local_68._4_1_;
        FUN_1478b1480(local_78 + 0x29);
        FUN_14335f1e0(local_78 + 0x24);
        FUN_1477de56e(local_78);
      }
    }
    local_88 = local_78;
    local_80 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    FUN_1477ddb18(&local_b8,&local_88);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(local_c0);
  lVar10 = FUN_1477e7016(DAT_14c951640);
  uVar9 = (**(code **)(*param_2 + 0x180))(param_2);
  lVar7 = 0;
  if (lVar10 + 0x28 != 0) {
    lVar7 = lVar10;
  }
  FUN_1478b1ec2(lVar10 + 0x28,uVar9);
  *(longlong *)(lVar7 + 0x200) = param_3;
  FUN_1477e3ee4(lVar7 + 0x1d8,&local_b8);
  lVar10 = *(longlong *)(param_1 + 0x20);
  if (lVar10 == 0) {
LAB_14335f964:
    lVar10 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_68 = FUN_140754f84;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_14081d0ea;
      local_e8 = &LAB_147da9a76;
      local_f0 = FUN_1409f3105;
      local_f8 = L"Engine";
      local_100 = 0;
      local_108 = 0x10000000;
      local_110 = 8;
      local_118 = 0x990;
      local_e0 = &local_68;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_14335f964;
  }
  FUN_141527869(&local_68,lVar10);
  lVar10 = *(longlong *)(param_1 + 0x50);
  iVar4 = *(int *)(lVar10 + 0x88);
  *(uint *)(lVar10 + 0x88) = iVar4 + 1U;
  if (*(uint *)(lVar10 + 0x8c) < iVar4 + 1U) {
    FUN_1477edf42((longlong *)(lVar10 + 0x80),iVar4);
  }
  pcVar5 = local_68;
  puVar3 = (undefined8 *)(*(longlong *)(lVar10 + 0x80) + (longlong)iVar4 * 0x28);
  *puVar3 = local_b8;
  puVar3[1] = local_b0;
  puVar3[2] = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
    UNLOCK();
  }
  puVar3[3] = local_a0;
  puVar3[4] = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_98 + 0xc) = *(int *)((longlong)local_98 + 0xc) + 1;
    UNLOCK();
  }
  if (local_68 != (code *)0x0) {
    if (*(LPCRITICAL_SECTION *)local_68 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)local_68);
    }
    FUN_1400020a8(pcVar5);
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
LAB_14335f480:
  if (*(longlong *)(param_4 + 2) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335f96b FUN_14335f96b body=69 status=ok
// SIG undefined FUN_14335f96b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14335f96b(void)

{
  _DAT_14cabbaa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014335f9ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabbaa8,1);
  return;
}



// FUNCTION 14335f9b0 FUN_14335f9b0 body=69 status=ok
// SIG undefined FUN_14335f9b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14335f9b0(void)

{
  _DAT_14cabbab0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014335f9f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabbab8,1);
  return;
}



// FUNCTION 14335f9f6 FUN_14335f9f6 body=542 status=ok
// SIG undefined FUN_14335f9f6(void)

void FUN_14335f9f6(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  undefined8 *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = *(longlong *)(param_1 + -0x10);
  if (lVar4 != 0) {
    if (DAT_14cb10130 == 0) {
      local_90 = &local_68;
      local_68 = FUN_140754f84;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_147da9a76;
      local_a0 = FUN_1409f3105;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000000;
      local_c0 = 8;
      local_c8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_14335fa74;
  }
  lVar4 = 0;
LAB_14335fa74:
  FUN_141527869(&local_70,lVar4);
  FUN_1477e6dfa(param_1 + -0x30);
  lVar4 = *(longlong *)(param_1 + 0x20);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x30));
  iVar1 = *(int *)(lVar4 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar4 + 0x58);
    lVar5 = 0;
    do {
      pcVar3 = *(code **)(lVar2 + lVar5);
      local_68 = pcVar3;
      FUN_1477ececc(*(undefined8 *)(pcVar3 + 0x528),&local_68);
      FUN_14335e154(pcVar3,(int)(*(double *)(pcVar3 + 0x180) * (double)param_2));
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x30));
  FUN_1477e6bd0(*(undefined8 *)(param_1 + 0x10),param_2);
  if (local_70 != (undefined8 *)0x0) {
    if ((LPCRITICAL_SECTION)*local_70 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*local_70);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335fc40 FUN_14335fc40 body=402 status=ok
// SIG undefined FUN_14335fc40(void)

byte FUN_14335fc40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
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
  lVar4 = *(longlong *)(param_1 + -0x10);
  if (lVar4 != 0) {
    if (DAT_14cb10130 == 0) {
      local_40 = &local_28;
      local_28 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_14335fc9c;
  }
  lVar4 = 0;
LAB_14335fc9c:
  FUN_141527869(&local_28,lVar4);
  pcVar3 = local_28;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x30);
  if (0 < lVar4) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28) + lVar6);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x188) != 0)) {
        bVar5 = 1;
        goto LAB_14335fce8;
      }
      lVar6 = lVar6 + 8;
    } while (lVar4 * 8 != lVar6);
  }
  bVar5 = 0;
LAB_14335fce8:
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x60);
  if (local_28 != (code *)0x0) {
    if (*(LPCRITICAL_SECTION *)local_28 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)local_28);
    }
    FUN_1400020a8(pcVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0 < iVar1 | bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14335fe44 FUN_14335fe44 body=12 status=ok
// SIG undefined FUN_14335fe44(void)

void FUN_14335fe44(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014335fe4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14335fe50 FUN_14335fe50 body=29 status=ok
// SIG undefined FUN_14335fe50(void)

undefined8 FUN_14335fe50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14335fe6e FUN_14335fe6e body=77 status=ok
// SIG undefined FUN_14335fe6e(void)

void FUN_14335fe6e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_147d35818(lVar1 + 0x2a0,param_1 + 1);
  FUN_147d35818(lVar1 + 0x2c0,param_1 + 0xb);
  FUN_147d35818(lVar1 + 0x2b0,param_1 + 0x15);
  return;
}



// FUNCTION 14335febc FUN_14335febc body=267 status=ok
// SIG undefined FUN_14335febc(void)

undefined8 * FUN_14335febc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x100,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a57c520;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  FUN_1477ce3e2(puVar1 + 2,param_1 + 0x10);
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  FUN_1477ce3e2(puVar1 + 0xc,param_1 + 0x60);
  puVar1[0x1a] = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
  puVar1[0x1e] = 0;
  *(undefined4 *)(puVar1 + 0x1f) = 0;
  FUN_1477ce3e2(puVar1 + 0x16,param_1 + 0xb0);
  return puVar1 + 1;
}



// FUNCTION 14335ffce FUN_14335ffce body=29 status=ok
// SIG undefined FUN_14335ffce(void)

void FUN_14335ffce(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14335ffec FUN_14335ffec body=156 status=ok
// SIG undefined FUN_14335ffec(void)

undefined8 * FUN_14335ffec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a57c520;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14336009a FUN_14336009a body=93 status=ok
// SIG undefined FUN_14336009a(void)

undefined8 * FUN_14336009a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a57c540;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}



// FUNCTION 1433600fe FUN_1433600fe body=29 status=ok
// SIG undefined FUN_1433600fe(void)

void FUN_1433600fe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14336011c FUN_14336011c body=64 status=ok
// SIG undefined FUN_14336011c(void)

undefined8 * FUN_14336011c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a57c540;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14336015c FUN_14336015c body=83 status=ok
// SIG undefined FUN_14336015c(void)

void FUN_14336015c(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(lVar2 + 0x30);
  *(longlong *)(lVar2 + 0x28) = lVar3;
  *(longlong *)(lVar2 + 0x30) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (*(longlong *)(lVar2 + 0x160) == 0) {
    return;
  }
  FUN_1477d7142(lVar2);
  return;
}



// FUNCTION 1433601e8 FUN_1433601e8 body=12 status=ok
// SIG undefined FUN_1433601e8(void)

void FUN_1433601e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433601f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433601f4 FUN_1433601f4 body=64 status=ok
// SIG undefined FUN_1433601f4(void)

undefined8 * FUN_1433601f4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a57c560;
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143360234 FUN_143360234 body=204 status=ok
// SIG undefined FUN_143360234(void)

void FUN_143360234(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 *local_30;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    lVar4 = *param_1;
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14336028f;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    lVar5 = param_1[1];
    if (lVar5 != 0) {
      local_34 = *(undefined4 *)(lVar5 + 0x20);
      local_30 = &local_34;
      local_28 = param_1 + 1;
      FUN_1477ea356(lVar4 + 0x38,&local_1c);
      if (*(longlong *)(lVar4 + 0x160) != 0) {
        FUN_1477d6ab2(lVar4,*(longlong *)(lVar4 + 0x38) + (longlong)local_1c * 0x38 + 8);
      }
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
LAB_14336028f:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14336033a FUN_14336033a body=12 status=ok
// SIG undefined FUN_14336033a(void)

void FUN_14336033a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143360343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143360346 FUN_143360346 body=64 status=ok
// SIG undefined FUN_143360346(void)

undefined8 * FUN_143360346(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a57c580;
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433603b6 FUN_1433603b6 body=12 status=ok
// SIG undefined FUN_1433603b6(void)

void FUN_1433603b6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433603bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433603c2 FUN_1433603c2 body=29 status=ok
// SIG undefined FUN_1433603c2(void)

undefined8 FUN_1433603c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433603e0 FUN_1433603e0 body=225 status=ok
// SIG undefined FUN_1433603e0(void)

void FUN_1433603e0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  longlong lVar4;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x578) != *(int *)(lVar2 + 0x5a4)) {
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = lVar2 + 0x5a8;
    if (*(longlong *)(lVar2 + 0x5b0) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x5b0);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x5b8) - 1U &
                             (uVar1 * 0x40 + *(int *)((longlong)param_1 + 0xc) + (uVar1 >> 2) +
                              0x9e3779b9 ^ uVar1)) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(lVar2 + 0x570);
      do {
        lVar4 = (longlong)iVar3;
        if ((*(uint *)(lVar5 + lVar4 * 0x28) == uVar1) &&
           (*(int *)(lVar5 + 4 + lVar4 * 0x28) == *(int *)((longlong)param_1 + 0xc)))
        goto LAB_1433604a5;
        iVar3 = *(int *)(lVar5 + lVar4 * 0x28 + 0x20);
      } while (iVar3 != -1);
    }
  }
  local_28 = param_1 + 1;
  local_20 = param_1 + 2;
  FUN_1477ea800((longlong *)(lVar2 + 0x570),local_14);
LAB_1433604a5:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433604c2 FUN_1433604c2 body=108 status=ok
// SIG undefined FUN_1433604c2(void)

undefined8 * FUN_1433604c2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a57c5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar2;
  lVar4 = *(longlong *)(param_1 + 0x18);
  puVar3[3] = lVar4;
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar3[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    lVar4 = puVar3[3];
  }
  *(undefined4 *)(puVar3 + 5) = 0;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x44) = *(int *)(lVar4 + 0x44) + 1;
    UNLOCK();
  }
  return puVar3 + 1;
}



// FUNCTION 143360534 FUN_143360534 body=29 status=ok
// SIG undefined FUN_143360534(void)

void FUN_143360534(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143360552 FUN_143360552 body=52 status=ok
// SIG undefined FUN_143360552(void)

undefined8 * FUN_143360552(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a57c5c0;
  FUN_145be9032(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143360644 FUN_143360644 body=12 status=ok
// SIG undefined FUN_143360644(void)

void FUN_143360644(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014336064d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143360650 FUN_143360650 body=29 status=ok
// SIG undefined FUN_143360650(void)

undefined8 FUN_143360650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14336066e FUN_14336066e body=107 status=ok
// SIG undefined FUN_14336066e(void)

void FUN_14336066e(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *(undefined4 *)param_1;
  uStack_1c = *(undefined4 *)((longlong)param_1 + 4);
  uStack_18 = *(undefined4 *)(param_1 + 1);
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  local_38 = 0;
  local_28 = &PTR_LAB_14a57c620;
  local_48 = FUN_143360736;
  FUN_1415826cc();
  FUN_1477cc8d1(0,0);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433606f0 FUN_1433606f0 body=69 status=ok
// SIG undefined FUN_1433606f0(void)

undefined8 * FUN_1433606f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a57c600;
  FUN_1477cc8d1(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143360736 FUN_143360736 body=119 status=ok
// SIG undefined FUN_143360736(void)

void FUN_143360736(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)(int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    puVar2 = puVar1 + (longlong)(int)param_1[1] * 2;
    do {
      local_30 = *puVar1;
      local_28 = puVar1[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      FUN_147d34a50(&local_30);
      puVar1 = puVar1 + 2;
    } while (puVar1 != puVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433607c4 FUN_1433607c4 body=69 status=ok
// SIG undefined FUN_1433607c4(void)

undefined8 * FUN_1433607c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a57c620;
  FUN_1477cc8d1(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143360842 FUN_143360842 body=12 status=ok
// SIG undefined FUN_143360842(void)

void FUN_143360842(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014336084b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14336084e FUN_14336084e body=29 status=ok
// SIG undefined FUN_14336084e(void)

undefined8 FUN_14336084e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433608c4 FUN_1433608c4 body=29 status=ok
// SIG undefined FUN_1433608c4(void)

undefined8 FUN_1433608c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14336091a FUN_14336091a body=29 status=ok
// SIG undefined FUN_14336091a(void)

undefined8 FUN_14336091a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143360938 FUN_143360938 body=101 status=ok
// SIG undefined FUN_143360938(void)

void FUN_143360938(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2 + -8;
  if (param_2 == 0) {
    local_20 = 0;
  }
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14336099e FUN_14336099e body=106 status=ok
// SIG undefined FUN_14336099e(void)

undefined8 * FUN_14336099e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a57c880;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 143360a0e FUN_143360a0e body=29 status=ok
// SIG undefined FUN_143360a0e(void)

void FUN_143360a0e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143360a2c FUN_143360a2c body=71 status=ok
// SIG undefined FUN_143360a2c(void)

undefined8 * FUN_143360a2c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a57c880;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143360a74 FUN_143360a74 body=146 status=ok
// SIG undefined FUN_143360a74(void)

void FUN_143360a74(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  char local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  local_40 = *(char *)(param_1 + 1);
  if (local_40 == '\x01') {
    local_48 = *param_1;
  }
  local_28 = *(char *)(param_1 + 4);
  if (local_28 == '\x01') {
    local_38 = *(undefined4 *)(param_1 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_30 = *(undefined4 *)(param_1 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
  }
  local_20 = param_1[5];
  local_18 = param_1[6];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_10 = param_1[7];
  (**(code **)(*(longlong *)(lVar1 + 8) + 0x40))(lVar1 + 8);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143360b08 FUN_143360b08 body=124 status=ok
// SIG undefined FUN_143360b08(void)

undefined8 * FUN_143360b08(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a57c8e0;
  cVar1 = *(char *)(param_1 + 0x10);
  *(char *)(puVar4 + 2) = cVar1;
  if (cVar1 == '\x01') {
    puVar4[1] = *(undefined8 *)(param_1 + 8);
  }
  cVar1 = *(char *)(param_1 + 0x28);
  *(char *)(puVar4 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar4[3] = *(undefined8 *)(param_1 + 0x18);
    puVar4[4] = uVar3;
  }
  puVar4[6] = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  puVar4[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar4[8] = *(undefined8 *)(param_1 + 0x40);
  return puVar4 + 1;
}



// FUNCTION 143360b8a FUN_143360b8a body=29 status=ok
// SIG undefined FUN_143360b8a(void)

void FUN_143360b8a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143360ba8 FUN_143360ba8 body=52 status=ok
// SIG undefined FUN_143360ba8(void)

undefined8 * FUN_143360ba8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a57c8e0;
  FUN_1477c9848(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143360c1c FUN_143360c1c body=29 status=ok
// SIG undefined FUN_143360c1c(void)

undefined8 FUN_143360c1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143360c6a FUN_143360c6a body=62 status=ok
// SIG undefined FUN_143360c6a(void)

void FUN_143360c6a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a57c9e0;
  FUN_1477cb398(puVar1 + 1,param_1 + 8);
  return;
}



// FUNCTION 143360cae FUN_143360cae body=29 status=ok
// SIG undefined FUN_143360cae(void)

void FUN_143360cae(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}


