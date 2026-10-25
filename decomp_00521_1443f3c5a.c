// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1443f3c5a FUN_1443f3c5a body=2329 status=ok
// SIG undefined FUN_1443f3c5a(void)

void FUN_1443f3c5a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  
  *param_1 = (longlong)&PTR_FUN_14ba6b640;
  lVar6 = param_1[9];
  if (*(int *)(lVar6 + 0x178) != 0) {
    puVar3 = *(undefined8 **)(lVar6 + 0x170);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72((longlong *)(lVar6 + 0x170),0,0,0x10);
      *(undefined4 *)(lVar6 + 0x178) = 0;
      lVar6 = param_1[9];
    }
  }
  if (*(int *)(lVar6 + 0x168) != 0) {
    puVar3 = *(undefined8 **)(lVar6 + 0x160);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72((longlong *)(lVar6 + 0x160),0,0,0x10);
      *(undefined4 *)(lVar6 + 0x168) = 0;
      lVar6 = param_1[9];
    }
  }
  if (*(int *)(lVar6 + 0x188) != 0) {
    puVar3 = *(undefined8 **)(lVar6 + 0x180);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72((longlong *)(lVar6 + 0x180),0,0,0x10);
      *(undefined4 *)(lVar6 + 0x188) = 0;
      lVar6 = param_1[9];
    }
  }
  if (*(int *)(lVar6 + 0x198) != 0) {
    puVar3 = *(undefined8 **)(lVar6 + 400);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72((longlong *)(lVar6 + 400),0,0,0x10);
      *(undefined4 *)(lVar6 + 0x198) = 0;
      lVar6 = param_1[9];
    }
  }
  if (*(int *)(lVar6 + 0x1a8) != 0) {
    puVar3 = *(undefined8 **)(lVar6 + 0x1a0);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72((longlong *)(lVar6 + 0x1a0),0,0,0x10);
      *(undefined4 *)(lVar6 + 0x1a8) = 0;
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x118))(param_1,1,0);
  }
  FUN_149032c50(param_1);
  if (param_1[0x67] != 0) {
    param_1[0x67] = 0;
    FUN_14904868c();
  }
  puVar3 = (undefined8 *)param_1[0x70];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0x6f];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x6b];
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
  plVar4 = (longlong *)param_1[0x69];
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
  FUN_14904868c(param_1[0x67]);
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if ((char)param_1[0x5e] == '\x01') {
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  if ((char)param_1[0x58] == '\x01') {
    param_1[0x50] = (longlong)&PTR_FUN_149eda6d0;
    plVar4 = (longlong *)param_1[0x56];
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
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if ((char)param_1[0x4f] == '\x01') {
    param_1[0x47] = (longlong)&PTR_FUN_149eda6d0;
    plVar4 = (longlong *)param_1[0x4d];
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
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  plVar4 = param_1 + 0x43;
  if ((int)param_1[0x44] == 0) {
LAB_1443f3f82:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x44) = 0;
      goto LAB_1443f3f82;
    }
  }
  plVar4 = param_1 + 0x41;
  if ((int)param_1[0x42] == 0) {
LAB_1443f3fca:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x42) = 0;
      goto LAB_1443f3fca;
    }
  }
  plVar4 = param_1 + 0x3f;
  if ((int)param_1[0x40] == 0) {
LAB_1443f4012:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x40) = 0;
      goto LAB_1443f4012;
    }
  }
  plVar4 = param_1 + 0x3d;
  if ((int)param_1[0x3e] == 0) {
LAB_1443f405a:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x3e) = 0;
      goto LAB_1443f405a;
    }
  }
  plVar4 = param_1 + 0x3b;
  if ((int)param_1[0x3c] == 0) {
LAB_1443f40a2:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      goto LAB_1443f40a2;
    }
  }
  plVar4 = param_1 + 0x39;
  if ((int)param_1[0x3a] == 0) {
LAB_1443f40ea:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x3a) = 0;
      goto LAB_1443f40ea;
    }
  }
  plVar4 = param_1 + 0x37;
  if ((int)param_1[0x38] == 0) {
LAB_1443f4132:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x38) = 0;
      goto LAB_1443f4132;
    }
  }
  FUN_144760e21(param_1[0x34],(int)param_1[0x35]);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x31],(int)param_1[0x32]);
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  plVar4 = param_1 + 0x2f;
  if ((int)param_1[0x30] == 0) {
LAB_1443f41c0:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x30) = 0;
      goto LAB_1443f41c0;
    }
  }
  plVar4 = param_1 + 0x2d;
  if ((int)param_1[0x2e] == 0) {
LAB_1443f4208:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x2e) = 0;
      goto LAB_1443f4208;
    }
  }
  plVar4 = param_1 + 0x2b;
  if ((int)param_1[0x2c] == 0) {
LAB_1443f4250:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      goto LAB_1443f4250;
    }
  }
  plVar4 = param_1 + 0x29;
  if ((int)param_1[0x2a] == 0) {
LAB_1443f4298:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x2a) = 0;
      goto LAB_1443f4298;
    }
  }
  plVar4 = param_1 + 0x27;
  if ((int)param_1[0x28] == 0) {
LAB_1443f42e0:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x28) = 0;
      goto LAB_1443f42e0;
    }
  }
  plVar4 = param_1 + 0x25;
  if ((int)param_1[0x26] != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1443f4334;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 0x26) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1443f4334:
  FUN_144760e21(param_1[0x22],(int)param_1[0x23]);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1f],(int)param_1[0x20]);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1c],(int)param_1[0x1d]);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],(int)param_1[0x1a]);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x15],(int)param_1[0x16]);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_1 + 0xa4) != -1) {
    if (param_1[0x13] != 0) {
      FUN_1400020a8();
    }
    param_1[0x13] = 0;
    param_1[0x14] = -0x100000000;
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  lVar6 = param_1[9];
  if (lVar6 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar6 + 8) + 4) + lVar6 + 8) + 8))();
  }
  lVar6 = param_1[8];
  if (lVar6 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar6 + 8) + 4) + lVar6 + 8) + 8))();
  }
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  *param_1 = (longlong)&PTR__purecall_14ba6cb00;
  plVar4 = param_1 + 1;
  if ((int)param_1[2] != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*plVar4 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1443f4574 FUN_1443f4574 body=770 status=ok
// SIG undefined FUN_1443f4574(void)

void FUN_1443f4574(longlong *param_1,ushort param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  float local_dc [3];
  longlong local_d0;
  longlong local_c8;
  LARGE_INTEGER local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong local_90;
  ushort local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar4 = (**(code **)(*param_1 + 0x28))();
  if (cVar4 != '\0') {
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],&local_c8);
    lVar5 = FUN_14001cc68(0x80,0x10);
    lVar3 = local_c8;
    if (local_c8 == 0) {
      uVar7 = (ushort)((param_3 & 0xff) << 8) | param_2 & 0xff;
      local_a8 = 0;
      local_98 = &PTR_FUN_14ba6d8b0;
      local_90 = 0;
    }
    else {
      (*(code *)**(undefined8 **)(local_c8 + *(int *)(*(longlong *)(local_c8 + 8) + 4) + 8))();
      uVar7 = (ushort)((param_3 & 0xff) << 8) | param_2 & 0xff;
      local_a8 = 0;
      local_98 = &PTR_FUN_14ba6d8b0;
      local_90 = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + *(int *)(*(longlong *)(lVar3 + 8) + 4) + 8))();
    }
    local_b8 = &LAB_1443fc09e;
    local_dc[1] = 0.0;
    local_dc[2] = 0.0;
    local_88 = uVar7;
    FUN_1490232f6(lVar5);
    local_d0 = lVar5;
    if (lVar5 != 0) {
      lVar6 = (longlong)*(int *)(*(longlong *)(lVar5 + 8) + 4);
      (*(code *)**(undefined8 **)(lVar5 + 8 + lVar6))(lVar5 + lVar6 + 8);
    }
    FUN_144d731d0(0,&local_d0);
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)(lVar3 + *(int *)(*(longlong *)(lVar3 + 8) + 4) + 8) + 8))();
    }
    if ((char)param_3 != '\0') {
      FUN_1490335f2(param_1,1);
      local_dc[0] = 1.0;
      local_e8 = &DAT_14c872ce8;
      FUN_14153841e(DAT_14c872ce0,L"Browser",L"CloseWaitTimeout");
      if (DAT_14c872bd8 == '\x01') {
        local_e8 = &DAT_14c872ce8;
        FUN_14153841e(DAT_14c872ce0,L"Browser",L"CloseWaitTimeoutAppExit",local_dc);
      }
      QueryPerformanceCounter(&local_c0);
      if (param_1[8] != 0) {
        dVar1 = (double)local_c0.QuadPart * DAT_14c83f420;
        dVar2 = (double)local_dc[0];
        do {
          QueryPerformanceCounter(&local_c0);
          if (dVar2 < ((double)local_c0.QuadPart * DAT_14c83f420 + 16777216.0) -
                      (dVar1 + 16777216.0)) break;
          FUN_14000f986(0x3c23d70a);
          (**(code **)(*DAT_14c968088 + 0x20))
                    (DAT_14c968088,
                     (float)(*(double *)(DAT_14c98e618 + 0x3e0) - *(double *)(DAT_14c98e618 + 1000))
                    );
          cef_do_message_loop_work();
        } while (param_1[8] != 0);
      }
    }
    if (local_c8 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_c8 + 8) + 4) + local_c8 + 8) + 8))();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443f4906 FUN_1443f4906 body=162 status=ok
// SIG undefined FUN_1443f4906(void)

void FUN_1443f4906(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c872bf0 == '\0') {
    uVar2 = FUN_14047ac8c();
    FUN_1449b8608(local_28,uVar2,L"Logs/");
    FUN_1443f1e91(local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  cVar1 = FUN_14901f93c(1);
  *(char *)(param_1 + 8) = cVar1;
  if (cVar1 != '\0') {
    cef_version_info(0);
    cef_version_info(1);
    cef_version_info(2);
    cef_version_info(3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f49aa FUN_1443f49aa body=3799 status=ok
// SIG undefined FUN_1443f49aa(void)

longlong * FUN_1443f49aa(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  size_t sVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  wchar_t *pwVar13;
  undefined4 uVar14;
  int iVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  undefined1 auStack_358 [32];
  undefined4 local_338;
  undefined4 local_330;
  undefined4 local_328;
  undefined8 local_320;
  longlong local_318;
  wchar_t *local_310;
  int local_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  int iStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined2 *local_2d0;
  int local_2c8;
  undefined4 local_2c4;
  undefined2 *local_2c0;
  int local_2b8;
  ushort local_2aa;
  wchar_t *local_2a8;
  int local_2a0;
  wchar_t *local_298;
  int local_290;
  undefined4 local_28c;
  undefined **local_288;
  undefined8 local_280;
  undefined4 local_278 [2];
  longlong local_270 [10];
  undefined4 local_220;
  undefined4 local_218;
  undefined1 auStack_210 [104];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  int local_160;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [28];
  uint local_10c;
  undefined4 local_100;
  longlong local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_358;
  *param_1 = (longlong)&PTR_LAB_14ba6d0e0;
  uVar5 = FUN_1401cb356();
  FUN_145aa41ca(param_1 + 1,L"FWebBrowserSingleton",0,uVar5);
  *param_1 = (longlong)&PTR_FUN_14ba6c230;
  param_1[1] = (longlong)&PTR_FUN_14ba6c2c8;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x20),4000);
  puVar6 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar6 = &PTR_FUN_14ba6d180;
  param_1[0x25] = (longlong)puVar6;
  puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_14ba6e990;
  puVar7[2] = puVar6;
  param_1[0x26] = (longlong)puVar7;
  *(undefined4 *)(param_1 + 0x27) = 0x100;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 == '\x01') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar2 = FUN_14054d46e(&DAT_14c846b20,L"AllowCommandletCEF");
      if (cVar2 != '\0') goto LAB_1443f4b4b;
    }
  }
  else {
LAB_1443f4b4b:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar3 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_1443f4d2b;
      bVar3 = DAT_14c8442b8 & 1;
    }
    if (bVar3 == 0) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar3 = FUN_14054d46e(&DAT_14c846b20,L"nocef");
      *(byte *)(param_1 + 0x1d) = bVar3 ^ 1;
      if (bVar3 != 0) goto LAB_1443f4d32;
      local_90 = 0;
      local_a0 = &PTR_FUN_14ba6d198;
      local_98 = DAT_14c8c26f8;
      cef_enable_highdpi_support();
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar2 = FUN_14054d46e(&DAT_14c846b20,L"cefverbose");
      iVar15 = 1;
      if (cVar2 == '\0') {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        bVar3 = FUN_14054d46e(&DAT_14c846b20,L"debuglog");
        iVar15 = (uint)(bVar3 ^ 1) * 2 + 1;
      }
      lVar8 = FUN_14001cc68(0x68);
      FUN_14901fd86(lVar8);
      if (lVar8 != 0) {
        lVar9 = (longlong)*(int *)(*(longlong *)(lVar8 + 8) + 4);
        (*(code *)**(undefined8 **)(lVar8 + 8 + lVar9))(lVar8 + lVar9 + 8);
      }
      lVar9 = param_1[6];
      param_1[6] = lVar8;
      if (lVar9 != 0) {
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar9 + 8) + 4) + lVar9 + 8) + 8))();
      }
      local_288 = &PTR_FUN_14ba6e9a8;
      uVar14 = 0;
      memset(local_278,0,0x1d8);
      local_280 = 0x1d8;
      local_278[0] = 1;
      local_218 = 1;
      local_220 = 1;
      local_100 = 0xff000000;
      uVar5 = FUN_14047ac8c();
      FUN_1449b8608(&local_2a8,uVar5,L"Logs/");
      local_88 = (undefined **)local_2a8;
      if (local_2a0 == 0) {
        local_88 = (undefined **)L"";
      }
      if (local_88 != (undefined **)0x0) {
        sVar10 = wcslen((wchar_t *)local_88);
        uVar14 = (undefined4)sVar10;
      }
      uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar14);
      local_78 = L"cef3.log";
      local_70 = 8;
      FUN_140bee87a(&local_298,&local_88,2);
      if (local_2a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_1401aea18(&local_88,&local_298);
      if (local_298 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_298 = (wchar_t *)local_88;
      local_290 = (int)uStack_80;
      pwVar13 = (wchar_t *)local_88;
      if ((int)uStack_80 == 0) {
        pwVar13 = L"";
      }
      local_28c = uStack_80._4_4_;
      local_88 = &PTR_FUN_14ba6d600;
      uStack_80 = (longlong *)0x0;
      local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
      if (auStack_178 != (undefined1 *)0x0) {
        uStack_80 = (longlong *)auStack_178;
      }
      FUN_14903e1c6(&local_88,pwVar13);
      local_88 = &PTR_FUN_14ba6d600;
      if (((uStack_80 != (longlong *)0x0) && ((char)local_78 == '\x01')) &&
         (cef_string_utf16_clear(), uStack_80 != (longlong *)0x0)) {
        FUN_1400020a8();
      }
      local_160 = iVar15;
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar2 = FUN_14626beb2(&DAT_14c846b20,L"cefdebug=",&local_2aa);
      if (cVar2 != '\0') {
        local_10c = (uint)local_2aa;
      }
      FUN_14903e24e(&local_2a8);
      pwVar13 = L"";
      if (local_2a0 != 0) {
        pwVar13 = local_2a8;
      }
      local_88 = &PTR_FUN_14ba6d600;
      uStack_80 = (longlong *)0x0;
      local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
      if (auStack_190 != (undefined1 *)0x0) {
        uStack_80 = (longlong *)auStack_190;
      }
      FUN_14903e1c6(&local_88,pwVar13);
      local_88 = &PTR_FUN_14ba6d600;
      if (((uStack_80 != (longlong *)0x0) && ((char)local_78 == '\x01')) &&
         (cef_string_utf16_clear(), uStack_80 != (longlong *)0x0)) {
        FUN_1400020a8();
      }
      puVar18 = &DAT_149dfb77a;
      if (*(int *)(param_2 + 1) != 0) {
        puVar18 = (undefined2 *)*param_2;
      }
      local_328 = 0xd4;
      local_330 = 0x114e;
      local_338 = 0;
      FUN_140002266(&local_2c0,L"%s Chrome/%d.%d.%d.%d",puVar18,0x5a);
      puVar18 = &DAT_149dfb77a;
      if (local_2b8 != 0) {
        puVar18 = local_2c0;
      }
      local_88 = &PTR_FUN_14ba6d600;
      uStack_80 = (longlong *)0x0;
      local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
      if (auStack_1a8 != (undefined1 *)0x0) {
        uStack_80 = (longlong *)auStack_1a8;
      }
      FUN_14903e1c6(&local_88,puVar18);
      local_88 = &PTR_FUN_14ba6d600;
      if (((uStack_80 != (longlong *)0x0) && ((char)local_78 == '\x01')) &&
         (cef_string_utf16_clear(), uStack_80 != (longlong *)0x0)) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x40))(param_1,&local_2e0);
      local_88 = (undefined **)CONCAT44(uStack_2dc,local_2e0);
      iVar15 = iStack_2d8 + -1;
      if (iStack_2d8 == 0) {
        iVar15 = 0;
      }
      uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,iVar15);
      local_78 = L"webcache";
      local_70 = 8;
      FUN_140bee87a(&local_2d0,&local_88,2);
      if (CONCAT44(uStack_2dc,local_2e0) != 0) {
        FUN_1400020a8();
      }
      FUN_14903e40e(&local_2e0,&local_2d0);
      FUN_140aa5ef8(&local_88,&local_2e0);
      if (local_2d0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_2d0 = (undefined2 *)local_88;
      local_88 = (undefined **)0x0;
      local_2c8 = (int)uStack_80;
      local_2c4 = uStack_80._4_4_;
      uStack_80 = (longlong *)0x0;
      if (CONCAT44(uStack_2dc,local_2e0) != 0) {
        FUN_1400020a8();
      }
      pwVar13 = L"";
      puVar18 = local_2d0;
      if (local_2c8 == 0) {
        puVar18 = &DAT_149dfb77a;
      }
      local_88 = &PTR_FUN_14ba6d600;
      uStack_80 = (longlong *)0x0;
      local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
      if (auStack_210 != (undefined1 *)0x0) {
        uStack_80 = (longlong *)auStack_210;
      }
      FUN_14903e1c6(&local_88,puVar18);
      local_88 = &PTR_FUN_14ba6d600;
      if (((uStack_80 != (longlong *)0x0) && ((char)local_78 == '\x01')) &&
         (cef_string_utf16_clear(), uStack_80 != (longlong *)0x0)) {
        FUN_1400020a8();
      }
      uVar5 = FUN_140d6ac5a();
      FUN_140056680(&local_2f0,uVar5);
      if (iStack_2e8 != 0) {
        pwVar13 = (wchar_t *)CONCAT44(uStack_2ec,local_2f0);
      }
      uVar14 = 0;
      local_88 = (undefined **)pwVar13;
      if (pwVar13 != (wchar_t *)0x0) {
        sVar10 = wcslen(pwVar13);
        uVar14 = (undefined4)sVar10;
      }
      uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar14);
      local_78 = L"Binaries/ThirdParty/CEF3/Win64/Resources";
      local_70 = 0x28;
      FUN_140bee87a(&local_2e0,&local_88,2);
      if (CONCAT44(uStack_2ec,local_2f0) != 0) {
        FUN_1400020a8();
      }
      FUN_1401aea18(&local_88,&local_2e0);
      if (CONCAT44(uStack_2dc,local_2e0) != 0) {
        FUN_1400020a8();
      }
      local_2e0 = (undefined4)local_88;
      uStack_2dc = local_88._4_4_;
      iStack_2d8 = (int)uStack_80;
      uStack_2d4 = uStack_80._4_4_;
      plVar11 = (longlong *)FUN_14054d1d4();
      puVar16 = &DAT_149dfb77a;
      puVar18 = &DAT_149dfb77a;
      if (iStack_2d8 != 0) {
        puVar18 = (undefined2 *)CONCAT44(uStack_2dc,local_2e0);
      }
      (**(code **)(*plVar11 + 0x50))(plVar11,puVar18);
      if (iStack_2d8 != 0) {
        puVar16 = (undefined2 *)CONCAT44(uStack_2dc,local_2e0);
      }
      local_88 = &PTR_FUN_14ba6d600;
      uStack_80 = (longlong *)0x0;
      local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
      if (auStack_140 != (undefined1 *)0x0) {
        uStack_80 = (longlong *)auStack_140;
      }
      FUN_14903e1c6(&local_88,puVar16);
      local_88 = &PTR_FUN_14ba6d600;
      if (((uStack_80 != (longlong *)0x0) && ((char)local_78 == '\x01')) &&
         (cef_string_utf16_clear(), uStack_80 != (longlong *)0x0)) {
        FUN_1400020a8();
      }
      if (iStack_2d8 == 0) {
        local_88 = (undefined **)0x149dfb77a;
      }
      else {
        local_88 = (undefined **)CONCAT44(uStack_2dc,local_2e0);
      }
      uVar14 = 0;
      if (local_88 != (undefined **)0x0) {
        sVar10 = wcslen((wchar_t *)local_88);
        uVar14 = (undefined4)sVar10;
      }
      uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar14);
      local_78 = L"locales";
      local_70 = 7;
      FUN_140bee87a(&local_2f0,&local_88,2);
      FUN_1401aea18(&local_88,&local_2f0);
      if (CONCAT44(uStack_2ec,local_2f0) != 0) {
        FUN_1400020a8();
      }
      local_2f0 = (undefined4)local_88;
      uStack_2ec = local_88._4_4_;
      iStack_2e8 = (int)uStack_80;
      uStack_2e4 = uStack_80._4_4_;
      plVar11 = (longlong *)FUN_14054d1d4();
      puVar16 = &DAT_149dfb77a;
      puVar18 = &DAT_149dfb77a;
      if (iStack_2e8 != 0) {
        puVar18 = (undefined2 *)CONCAT44(uStack_2ec,local_2f0);
      }
      (**(code **)(*plVar11 + 0x50))(plVar11,puVar18);
      if (iStack_2e8 != 0) {
        puVar16 = (undefined2 *)CONCAT44(uStack_2ec,local_2f0);
      }
      local_88 = &PTR_FUN_14ba6d600;
      uStack_80 = (longlong *)0x0;
      local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
      if (auStack_128 != (undefined1 *)0x0) {
        uStack_80 = (longlong *)auStack_128;
      }
      FUN_14903e1c6(&local_88,puVar16);
      local_88 = &PTR_FUN_14ba6d600;
      if (((uStack_80 != (longlong *)0x0) && ((char)local_78 == '\x01')) &&
         (cef_string_utf16_clear(), uStack_80 != (longlong *)0x0)) {
        FUN_1400020a8();
      }
      uVar5 = FUN_140d6ac5a();
      FUN_140056680(&local_310,uVar5);
      local_88 = (undefined **)local_310;
      if (local_308 == 0) {
        local_88 = (undefined **)L"";
      }
      uVar14 = 0;
      if (local_88 != (undefined **)0x0) {
        sVar10 = wcslen((wchar_t *)local_88);
        uVar14 = (undefined4)sVar10;
      }
      uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar14);
      local_78 = L"Binaries/Win64/EpicWebHelper.exe";
      local_70 = 0x20;
      FUN_140bee87a(&local_300,&local_88,2);
      if (local_310 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      FUN_1401aea18(&local_88,&local_300);
      if (CONCAT44(uStack_2fc,local_300) != 0) {
        FUN_1400020a8();
      }
      local_300 = (undefined4)local_88;
      uStack_2fc = local_88._4_4_;
      iStack_2f8 = (int)uStack_80;
      uStack_2f4 = uStack_80._4_4_;
      plVar11 = (longlong *)FUN_140e92164();
      puVar16 = &DAT_149dfb77a;
      puVar18 = &DAT_149dfb77a;
      if (iStack_2f8 != 0) {
        puVar18 = (undefined2 *)CONCAT44(uStack_2fc,local_300);
      }
      (**(code **)(*plVar11 + 0x78))(plVar11,puVar18);
      if (iStack_2f8 != 0) {
        puVar16 = (undefined2 *)CONCAT44(uStack_2fc,local_300);
      }
      local_88 = &PTR_FUN_14ba6d600;
      uStack_80 = (longlong *)0x0;
      local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffffffffff00);
      if (local_270 != (longlong *)0x0) {
        uStack_80 = local_270;
      }
      FUN_14903e1c6(&local_88,puVar16);
      local_88 = &PTR_FUN_14ba6d600;
      if (((uStack_80 != (longlong *)0x0) && ((char)local_78 == '\x01')) &&
         (cef_string_utf16_clear(), uStack_80 != (longlong *)0x0)) {
        FUN_1400020a8();
      }
      local_318 = param_1[6];
      if (local_318 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_318 + 8) + 4) + local_318 + 8))();
      }
      uVar4 = FUN_144d73370(&local_a0,&local_288,&local_318,0);
      *(undefined1 *)((longlong)param_1 + 0x13b) = uVar4;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      local_310 = (wchar_t *)(ulonglong)DAT_14c892f14;
      FUN_14029eeae(&local_310,&local_88);
      ppuVar12 = local_88;
      if ((int)uStack_80 == 0) {
        ppuVar12 = (undefined **)&DAT_149dfb77a;
      }
      FUN_1415da298(ppuVar12);
      if (local_88 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_320 = 0;
      FUN_144d7c650(&local_310);
      FUN_149026c34(&local_88,&local_310);
      plVar11 = uStack_80;
      ppuVar12 = local_88;
      if (uStack_80 == (longlong *)0x0) {
        param_1[4] = (longlong)local_88;
        plVar17 = (longlong *)param_1[5];
        if (plVar17 != (longlong *)0x0) {
          param_1[5] = 0;
LAB_1443f5667:
          LOCK();
          plVar11 = plVar17 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar15 = *piVar1;
            UNLOCK();
joined_r0x0001443f5692:
            if (iVar15 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(uStack_80 + 1) = (int)uStack_80[1] + 1;
        UNLOCK();
        param_1[4] = (longlong)ppuVar12;
        plVar17 = (longlong *)param_1[5];
        if (plVar11 == plVar17) {
          LOCK();
          plVar17 = plVar11 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar15 = *piVar1;
            UNLOCK();
            plVar17 = plVar11;
            goto joined_r0x0001443f5692;
          }
        }
        else {
          param_1[5] = (longlong)plVar11;
          if (plVar17 != (longlong *)0x0) goto LAB_1443f5667;
        }
      }
      plVar11 = uStack_80;
      if (uStack_80 != (longlong *)0x0) {
        LOCK();
        plVar17 = uStack_80 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
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
      if (local_310 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)
                      ((longlong)local_310 +
                      (longlong)*(int *)(*(longlong *)(local_310 + 4) + 4) + 8) + 8))();
      }
      if (CONCAT44(uStack_2fc,local_300) != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_2ec,local_2f0) != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_2dc,local_2e0) != 0) {
        FUN_1400020a8();
      }
      if (local_2d0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_2c0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_2a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_298 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_288 = &PTR_FUN_14ba6e9a8;
      if (local_a8 == 0) {
        FUN_14904f2ac(&local_280);
      }
      goto LAB_1443f4d32;
    }
  }
LAB_1443f4d2b:
  *(undefined1 *)(param_1 + 0x1d) = 0;
LAB_1443f4d32:
  if ((local_60 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1443f5882 FUN_1443f5882 body=3589 status=ok
// SIG undefined FUN_1443f5882(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1443f5882(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined2 **ppuVar2;
  void *_Src;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined2 **ppuVar6;
  undefined1 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_3f8 [32];
  undefined ***local_3d8;
  longlong *local_3d0;
  undefined2 ***local_3c8;
  undefined1 local_3c0;
  undefined1 local_3b8;
  undefined1 local_3b0;
  undefined1 local_3a3;
  undefined1 local_3a2;
  undefined1 local_3a1;
  longlong *local_3a0;
  longlong local_398;
  longlong *local_390;
  longlong *local_388;
  undefined2 *local_380;
  longlong local_378;
  void *local_370;
  int local_368;
  undefined4 local_364;
  longlong local_360 [2];
  undefined2 **local_350;
  undefined8 *local_348;
  undefined8 *local_340;
  int local_338;
  undefined2 **local_330;
  undefined2 ***local_328;
  char local_320;
  undefined2 *local_318;
  int local_310;
  tagRECT local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined2 *local_288;
  int local_280;
  undefined2 *local_278;
  int local_270;
  undefined1 local_268 [16];
  byte local_258;
  byte local_257;
  undefined1 local_250 [16];
  undefined2 **local_240;
  longlong local_238;
  ulonglong uStack_230;
  undefined **local_220;
  undefined8 local_218;
  int local_210 [53];
  undefined4 local_13c;
  uint local_110;
  longlong local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  char local_75;
  undefined1 local_74 [4];
  undefined **local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_75 = '\x01';
  local_3d8 = (undefined ***)&DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"Browser",L"bEnabled",&local_75);
  if (local_75 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20);
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar4 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_1443f5945;
      bVar4 = DAT_14c8442b8 & 1;
    }
    if ((bVar4 == 0) && (*(char *)(param_1 + 0xe8) == '\x01')) {
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_80 = 0;
      local_e8 = &PTR_FUN_14ba6c748;
      local_220 = &PTR_FUN_14ba6d6f8;
      memset(local_210,0,0x128);
      local_218 = 0x128;
      uVar18 = (uint)*(byte *)((longlong)param_3 + 0x37) << 0x18;
      if (*(char *)(param_3 + 3) != '\0') {
        uVar18 = 0;
      }
      local_110 = (uint)*(byte *)((longlong)param_3 + 0x34) |
                  (uint)*(byte *)((longlong)param_3 + 0x35) << 8 |
                  (uint)*(byte *)((longlong)param_3 + 0x36) << 0x10 | uVar18;
      local_13c = 2;
      if ((HWND)*param_3 == (HWND)0x0) {
        uStack_98 = CONCAT44(uStack_98._4_4_,1);
        uVar7 = FUN_14903663a();
        uStack_98 = (ulonglong)CONCAT14(uVar7,(undefined4)uStack_98);
        iVar13 = *(int *)(param_3 + 7);
        cVar8 = FUN_14903663a();
        local_210[0] = 0x3c;
        if (iVar13 != 0x18) {
          local_210[0] = iVar13;
        }
        if (cVar8 == '\0') {
          local_210[0] = iVar13;
        }
        uStack_a8 = 0;
      }
      else {
        local_308._0_8_ = (undefined2 **)0x0;
        local_308.right = 0;
        local_308.bottom = 0;
        GetClientRect((HWND)*param_3,&local_308);
        uStack_a8 = *param_3;
        local_c0 = CONCAT44(local_308.left,0x56010000);
        uStack_b8 = CONCAT44(local_308.right - local_308.left,local_308.top);
        local_b0 = CONCAT44(local_b0._4_4_,local_308.bottom - local_308.top);
      }
      local_238 = 0;
      uStack_230 = 0;
      local_3d8 = (undefined ***)&DAT_14c872ce8;
      FUN_14105aa76(DAT_14c872ce0,L"Browser",L"AuthorizationHeaderAllowListURLS",&local_238);
      lVar9 = FUN_14001cc68(0x1f0,0x10);
      local_3d8 = (undefined ***)&local_238;
      FUN_149020324(lVar9,*(undefined1 *)(param_3 + 3),*(undefined1 *)((longlong)param_3 + 0x19),
                    param_3 + 0x12);
      if (lVar9 != 0) {
        lVar10 = (longlong)*(int *)(*(longlong *)(lVar9 + 8) + 4);
        (*(code *)**(undefined8 **)(lVar9 + 8 + lVar10))(lVar10 + lVar9 + 8);
      }
      local_240 = (undefined2 **)0x0;
      if (*(char *)(param_3 + 0x11) == '\x01') {
        FUN_14903f1c8(&local_288);
        plVar12 = (longlong *)(param_1 + 0x38);
        uVar16 = 0;
        iVar13 = local_280 + -1;
        if (local_280 == 0) {
          iVar13 = 0;
        }
        if (0 < iVar13) {
          puVar17 = local_288;
          if (local_280 == 0) {
            puVar17 = &DAT_149dfb77a;
          }
          lVar10 = 0;
          uVar16 = 0;
          do {
            uVar18 = ((uint)(0x19 < (ushort)puVar17[lVar10] - 0x61) * 0x20 +
                     (uint)(ushort)puVar17[lVar10]) - 0x20;
            uVar19 = (uint)(uVar16 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar16 ^ uVar18) & 0xff) * 4);
            uVar16 = (ulonglong)
                     (uVar19 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar18 >> 8 & 0xff) * 4)
                     );
            lVar10 = lVar10 + 1;
          } while (iVar13 != (int)lVar10);
        }
        iVar13 = FUN_14904f974(plVar12,uVar16,&local_288);
        if ((iVar13 == -1) ||
           (lVar10 = (longlong)iVar13 * 0x20 + *plVar12, plVar11 = (longlong *)(lVar10 + 0x10),
           plVar11 == (longlong *)0x0 || lVar10 == 0)) {
          local_308._0_8_ = &PTR_FUN_14ba6e9e8;
          local_2f8 = 0;
          uStack_2f0 = 0;
          local_2e8 = 0;
          uStack_2e0 = 0;
          local_2d8 = 0;
          uStack_2d0 = 0;
          local_2c8 = 0;
          uStack_2c0 = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_298 = 0;
          local_308.right = 0x68;
          local_308.bottom = 0;
          local_3a0 = plVar12;
          if ((local_270 < 2) && (FUN_14903e24e(&local_318), local_278 = local_318, local_310 == 0))
          {
            local_278 = &DAT_149dfb77a;
          }
          local_330 = (undefined2 **)&PTR_FUN_14ba6d600;
          local_328 = (undefined2 ***)0x0;
          local_320 = '\0';
          if (&uStack_2d0 != (undefined8 *)0x0) {
            local_328 = (undefined2 ***)&uStack_2d0;
          }
          FUN_14903e1c6(&local_330,local_278);
          local_330 = (undefined2 **)&PTR_FUN_14ba6d600;
          if (((local_328 != (undefined2 ***)0x0) && (local_320 == '\x01')) &&
             (cef_string_utf16_clear(), local_328 != (undefined2 ***)0x0)) {
            FUN_1400020a8();
          }
          if ((local_270 < 2) && (local_318 != (undefined2 *)0x0)) {
            FUN_1400020a8();
          }
          FUN_14903e40e(&local_340,local_268);
          puVar14 = local_340;
          if (local_338 == 0) {
            puVar14 = (undefined8 *)&DAT_149dfb77a;
          }
          local_330 = (undefined2 **)&PTR_FUN_14ba6d600;
          local_328 = (undefined2 ***)0x0;
          local_320 = '\0';
          if (&local_2f8 != (undefined8 *)0x0) {
            local_328 = (undefined2 ***)&local_2f8;
          }
          FUN_14903e1c6(&local_330,puVar14);
          local_330 = (undefined2 **)&PTR_FUN_14ba6d600;
          if (((local_328 != (undefined2 ***)0x0) && (local_320 == '\x01')) &&
             (cef_string_utf16_clear(), local_328 != (undefined2 ***)0x0)) {
            FUN_1400020a8();
          }
          if (local_340 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(uint)local_258);
          local_2d8 = CONCAT44(local_2d8._4_4_,(uint)local_257);
          local_340 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          plVar12 = local_3a0;
          local_340[1] = &DAT_14ba6b3c4;
          local_340[3] = &DAT_14ba6b3cc;
          *local_340 = &PTR_LAB_14ba6b3e0;
          local_340[9] = &PTR_FUN_14ba6b400;
          local_340[2] = &PTR_FUN_14ba6b430;
          *(undefined4 *)((longlong)local_340 + 0x44) = 0;
          local_340[4] = 0;
          *(undefined4 *)(local_340 + 5) = 0;
          local_340[6] = param_1;
          *(undefined4 *)(local_340 + 7) = 0;
          puVar14 = (undefined8 *)0x0;
          if (local_340 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_340 + 7) = *(int *)(local_340 + 7) + 1;
            UNLOCK();
            puVar14 = local_340;
          }
          FUN_149046146(puVar14 + 4,local_250);
          local_330 = &local_288;
          local_328 = (undefined2 ***)&local_340;
          FUN_14904fa66(param_1 + 0x88,local_74);
          local_348 = local_340;
          if (local_340 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)
                        ((longlong)local_340 + (longlong)*(int *)(local_340[1] + 4) + 8))();
          }
          FUN_144d7ad90(&local_330,&local_308,&local_348);
          ppuVar2 = local_330;
          if (local_330 != (undefined2 **)0x0) {
            (*(code *)**(undefined8 **)
                        ((longlong)local_330 + (longlong)*(int *)(local_330[1] + 2) + 8))();
          }
          ppuVar6 = local_240;
          local_240 = ppuVar2;
          if (ppuVar6 != (undefined2 **)0x0) {
            (**(code **)(*(longlong *)((longlong)ppuVar6 + (longlong)*(int *)(ppuVar6[1] + 2) + 8) +
                        8))();
          }
          if (local_330 != (undefined2 **)0x0) {
            (**(code **)(*(longlong *)
                          ((longlong)local_330 + (longlong)*(int *)(local_330[1] + 2) + 8) + 8))();
          }
          local_330 = &local_288;
          local_328 = &local_240;
          FUN_1490500b2(plVar12,local_74);
          if (local_340 != (undefined8 *)0x0) {
            (**(code **)(*(longlong *)
                          ((longlong)local_340 + (longlong)*(int *)(local_340[1] + 4) + 8) + 8))();
          }
          FUN_14903f2d8(&local_308);
          ppuVar2 = local_240;
        }
        else {
          ppuVar2 = (undefined2 **)*plVar11;
          if (ppuVar2 != (undefined2 **)0x0) {
            (*(code *)**(undefined8 **)((longlong)ppuVar2 + (longlong)*(int *)(ppuVar2[1] + 2) + 8))
                      ();
          }
          if (local_240 != (undefined2 **)0x0) {
            plVar12 = (longlong *)((longlong)local_240 + (longlong)*(int *)(local_240[1] + 2) + 8);
            local_240 = ppuVar2;
            (**(code **)(*plVar12 + 8))();
            ppuVar2 = local_240;
          }
        }
        local_240 = ppuVar2;
        FUN_1490314c0(param_1 + 0xd8,&local_240);
        FUN_14903f31a(&local_288);
        if (local_240 == (undefined2 **)0x0) goto LAB_1443f6094;
LAB_1443f612c:
        local_350 = local_240;
        (*(code *)**(undefined8 **)((longlong)local_240 + (longlong)*(int *)(local_240[1] + 2) + 8))
                  ();
      }
      else {
LAB_1443f6094:
        FUN_144d7ad60(&local_308);
        uVar5 = local_308._0_8_;
        if ((undefined2 **)local_308._0_8_ != (undefined2 **)0x0) {
          (*(code *)**(undefined8 **)
                      (local_308._0_8_ +
                      (longlong)*(int *)(*(undefined2 **)(local_308._0_8_ + 8) + 2) + 8))();
        }
        ppuVar2 = local_240;
        local_240 = (undefined2 **)uVar5;
        if (ppuVar2 != (undefined2 **)0x0) {
          (**(code **)(*(longlong *)((longlong)ppuVar2 + (longlong)*(int *)(ppuVar2[1] + 2) + 8) + 8
                      ))();
        }
        if ((undefined2 **)local_308._0_8_ != (undefined2 **)0x0) {
          (**(code **)(*(longlong *)
                        (local_308._0_8_ +
                        (longlong)*(int *)(*(undefined2 **)(local_308._0_8_ + 8) + 2) + 8) + 8))();
        }
        local_350 = local_240;
        if (local_240 != (undefined2 **)0x0) goto LAB_1443f612c;
      }
      local_360[1] = 0;
      if (*(int *)(param_3 + 2) == 0) {
        puVar17 = &DAT_149dfb77a;
      }
      else {
        puVar17 = (undefined2 *)param_3[1];
      }
      FUN_1490201ba(&local_308,puVar17);
      local_360[0] = lVar9;
      if (lVar9 != 0) {
        lVar10 = (longlong)*(int *)(*(longlong *)(lVar9 + 8) + 4);
        (*(code *)**(undefined8 **)(lVar9 + 8 + lVar10))(lVar10 + lVar9 + 8);
      }
      local_3c8 = &local_350;
      local_3d0 = local_360 + 1;
      local_3d8 = &local_220;
      FUN_144d781e0(&local_288,&local_e8,local_360,&local_308);
      local_308._0_8_ = &PTR_FUN_14ba6d600;
      if (((local_308._8_8_ != 0) && ((char)local_2f8 == '\x01')) &&
         (cef_string_utf16_clear(), local_308._8_8_ != 0)) {
        FUN_1400020a8();
      }
      puVar17 = local_288;
      if (local_288 != (undefined2 *)0x0) {
        plVar12 = (longlong *)FUN_14001cc68(0x390,0x10);
        iVar13 = uStack_98._4_4_;
        local_398 = CONCAT71(local_398._1_7_,*(undefined1 *)(param_1 + 0x139));
        local_3a1 = *(undefined1 *)(param_3 + 3);
        local_3a2 = *(undefined1 *)((longlong)param_3 + 0x1a);
        local_3a3 = *(undefined1 *)(param_3 + 6);
        FUN_141121e90(local_70,param_3 + 4);
        local_370 = (void *)0x0;
        local_368 = *(int *)(param_3 + 2);
        lVar10 = (longlong)local_368;
        _Src = (void *)param_3[1];
        local_3a0 = plVar12;
        if (lVar10 == 0) {
          local_364 = 0;
        }
        else {
          FUN_1446dd670(&local_370,local_368,0);
          plVar12 = local_3a0;
          memcpy(local_370,_Src,lVar10 * 2);
        }
        local_378 = lVar9;
        if (lVar9 != 0) {
          lVar10 = (longlong)*(int *)(*(longlong *)(lVar9 + 8) + 4);
          (*(code *)**(undefined8 **)(lVar9 + 8 + lVar10))(lVar10 + lVar9 + 8);
        }
        local_380 = local_288;
        if (local_288 != (undefined2 *)0x0) {
          (*(code *)**(undefined8 **)
                      ((longlong)local_288 +
                      (longlong)*(int *)(*(longlong *)(local_288 + 4) + 4) + 8))();
        }
        local_3b0 = iVar13 == 1;
        local_3b8 = (undefined1)local_398;
        local_3c0 = local_3a1;
        local_3c8 = (undefined2 ***)CONCAT71(local_3c8._1_7_,local_3a2);
        local_3d0 = (longlong *)CONCAT71(local_3d0._1_7_,local_3a3);
        local_3d8 = local_70;
        FUN_14903232e(plVar12,&local_380,&local_378,&local_370);
        plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14ba6e9d0;
        plVar11[2] = (longlong)plVar12;
        local_388 = plVar11;
        if ((plVar12 == (longlong *)0x0) ||
           (((plVar12[3] != 0 && (plVar12[4] != 0)) && (0 < *(int *)(plVar12[4] + 8))))) {
          bVar3 = true;
          if (plVar11 != (longlong *)0x0) goto LAB_1443f6532;
        }
        else if (plVar11 == (longlong *)0x0) {
          plVar12[3] = (longlong)plVar12;
          plVar15 = (longlong *)plVar12[4];
          if (plVar15 != (longlong *)0x0) {
LAB_1443f64e1:
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))();
            }
            plVar12[4] = (longlong)plVar11;
            if (plVar11 != (longlong *)0x0) goto LAB_1443f6509;
          }
          local_388 = (longlong *)0x0;
          bVar3 = true;
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          plVar12[3] = (longlong)plVar12;
          if ((longlong *)plVar12[4] != plVar11) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar15 = (longlong *)plVar12[4];
            if (plVar15 != (longlong *)0x0) goto LAB_1443f64e1;
            plVar12[4] = (longlong)plVar11;
          }
LAB_1443f6509:
          LOCK();
          plVar15 = plVar11 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
LAB_1443f6532:
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          bVar3 = false;
        }
        local_398 = lVar9;
        local_390 = plVar12;
        FUN_14902430c(lVar9,&local_390);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
        if (!bVar3) {
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
        }
        iVar13 = *(int *)(param_1 + 0xf8);
        *(uint *)(param_1 + 0xf8) = iVar13 + 1U;
        if (*(uint *)(param_1 + 0xfc) < iVar13 + 1U) {
          FUN_14904f8ee((longlong *)(param_1 + 0xf0),iVar13);
        }
        plVar12 = local_3a0;
        lVar9 = *(longlong *)(param_1 + 0xf0);
        *(longlong **)(lVar9 + (longlong)iVar13 * 0x10) = local_3a0;
        *(longlong **)(lVar9 + 8 + (longlong)iVar13 * 0x10) = plVar11;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
        *param_2 = (longlong)plVar12;
        param_2[1] = (longlong)plVar11;
        if (!bVar3) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          plVar12 = plVar11 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
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
        lVar9 = local_398;
        if (local_288 != (undefined2 *)0x0) {
          (**(code **)(*(longlong *)
                        ((longlong)local_288 +
                        (longlong)*(int *)(*(longlong *)(local_288 + 4) + 4) + 8) + 8))();
        }
      }
      if (local_240 != (undefined2 **)0x0) {
        (**(code **)(*(longlong *)((longlong)local_240 + (longlong)*(int *)(local_240[1] + 2) + 8) +
                    8))();
      }
      if (lVar9 != 0) {
        lVar10 = (longlong)*(int *)(*(longlong *)(lVar9 + 8) + 4);
        (**(code **)(*(longlong *)(lVar9 + 8 + lVar10) + 8))(lVar10 + lVar9 + 8);
      }
      FUN_1447a1747(local_238,uStack_230 & 0xffffffff);
      if (local_238 != 0) {
        FUN_1400020a8();
      }
      local_220 = &PTR_FUN_14ba6d6f8;
      if (local_f0 == 0) {
        FUN_149047796(&local_218);
      }
      local_e8 = &PTR_FUN_14ba6c750;
      if (local_80 == 0) {
        cef_string_utf16_clear(&uStack_d8);
      }
      if (puVar17 != (undefined2 *)0x0) goto LAB_1443f594b;
    }
  }
LAB_1443f5945:
  *param_2 = 0;
  param_2[1] = 0;
LAB_1443f594b:
  if ((local_60 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1443f6688 FUN_1443f6688 body=1482 status=ok
// SIG undefined FUN_1443f6688(void)

undefined8 FUN_1443f6688(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  byte bVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  uint local_c4;
  longlong local_c0;
  longlong *local_b8;
  int local_ac;
  int local_a8;
  char local_a1;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0xe0) != '\x01') goto LAB_1443f6846;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (DAT_14c98e618 == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(DAT_14c98e618 + 0x130) ^ 1;
  }
  plVar3 = (longlong *)(param_1 + 0xe8);
  uVar13 = (longlong)*(int *)(param_1 + 0xf0);
  if (0 < (longlong)*(int *)(param_1 + 0xf0)) {
    do {
      uVar14 = uVar13 - 1;
      if (*(longlong *)(*plVar3 + uVar14 * 0x10) == 0) {
LAB_1443f6798:
        FUN_149050632(plVar3,uVar14 & 0xffffffff);
        FUN_149050692(plVar3);
      }
      else {
        plVar9 = (longlong *)(*plVar3 + uVar14 * 0x10);
        plVar16 = (longlong *)plVar9[1];
        if ((plVar16 == (longlong *)0x0) || ((int)plVar16[1] < 1)) goto LAB_1443f6798;
        if (bVar11 != 0) {
          iVar8 = (int)plVar16[1];
          do {
            if (iVar8 == 0) goto LAB_1443f67ab;
            LOCK();
            iVar12 = (int)plVar16[1];
            bVar17 = iVar8 == iVar12;
            if (bVar17) {
              *(int *)(plVar16 + 1) = iVar8 + 1;
              iVar12 = iVar8;
            }
            iVar8 = iVar12;
            UNLOCK();
          } while (!bVar17);
          plVar9 = (longlong *)*plVar9;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x160))();
          }
          LOCK();
          plVar9 = plVar16 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
LAB_1443f67ab:
      bVar17 = 1 < (longlong)uVar13;
      uVar13 = uVar14;
    } while (bVar17);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_a1 = '\0';
    local_d8 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"Browser",L"bForceMessageLoop");
    local_a8 = 1;
    local_d8 = &DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"Browser",L"MinMessageLoopHertz",&local_a8);
    if (0x3b < local_a8) {
      local_a8 = 0x3c;
    }
    iVar8 = local_a8;
    if (local_a8 < 2) {
      iVar8 = 1;
    }
    local_ac = 0xf;
    local_d8 = &DAT_14c872ce8;
    local_a8 = iVar8;
    FUN_1414d73b6(DAT_14c872ce0,L"Browser",L"MaxForcedMessageLoopHertz",&local_ac);
    iVar12 = 0x3c;
    if (local_ac < 0x3c) {
      iVar12 = local_ac;
    }
    local_ac = iVar12;
    if (iVar12 < iVar8) {
      local_ac = iVar8;
    }
    fVar18 = 1.0 / (float)local_ac;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbf6520) && (FUN_144b3d300(&DAT_14cbf6520), DAT_14cbf6520 == -1)) {
      DAT_14cbf651c = fVar18;
      _Init_thread_footer(&DAT_14cbf6520);
    }
    fVar19 = 1.0 / (float)iVar8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbf6528) && (FUN_144b3d300(&DAT_14cbf6528), DAT_14cbf6528 == -1)) {
      DAT_14cbf6524 = fVar18;
      _Init_thread_footer(&DAT_14cbf6528);
    }
    cVar7 = local_a1;
    fVar20 = DAT_14cbf6518 + param_2;
    DAT_14cbf651c = DAT_14cbf651c + param_2;
    fVar21 = DAT_14cbf6524 - param_2;
    local_c4 = (uint)CONCAT71(0x14ba6b8,local_a1);
    DAT_14cbf6518 = fVar20;
    DAT_14cbf6524 = fVar21;
    if (DAT_14cbf651c <= fVar19) {
LAB_1443f6a28:
      if ((((0 < *(int *)(param_1 + 0xf0)) && (cVar7 == '\0')) && (fVar20 < fVar19)) &&
         (*(char *)(param_1 + 0x132) != '\0')) {
        lVar15 = 0;
        local_c4 = 0;
        do {
          if (*(longlong *)(*plVar3 + lVar15 * 0x10) != 0) {
            puVar10 = (undefined8 *)(*plVar3 + lVar15 * 0x10);
            plVar16 = (longlong *)puVar10[1];
            if ((plVar16 != (longlong *)0x0) && (0 < (int)plVar16[1])) {
              iVar8 = (int)plVar16[1];
              do {
                iVar12 = iVar8;
                if (iVar12 == 0) {
                  plVar16 = (longlong *)0x0;
                  plVar9 = (longlong *)0x0;
                  goto LAB_1443f6ab3;
                }
                LOCK();
                iVar8 = (int)plVar16[1];
                bVar17 = iVar12 == iVar8;
                if (bVar17) {
                  *(int *)(plVar16 + 1) = iVar12 + 1;
                  iVar8 = iVar12;
                }
                UNLOCK();
              } while (!bVar17);
              plVar9 = (longlong *)*puVar10;
LAB_1443f6ab3:
              (**(code **)(*plVar9 + 0x150))(plVar9,&local_c0);
              plVar4 = local_b8;
              lVar5 = local_c0;
              if (local_b8 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_b8 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_b8)(local_b8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
              if (lVar5 != 0) {
                (**(code **)(*plVar9 + 0x150))(plVar9,&local_c0);
                if (*(longlong **)(local_c0 + 0x510) == (longlong *)0x0) {
                  local_c4 = (uint)CONCAT71((int7)((ulonglong)local_c0 >> 8),1);
                }
                else {
                  cVar7 = (**(code **)(**(longlong **)(local_c0 + 0x510) + 0x78))();
                  local_c4 = local_c4 & 0xff;
                  if (cVar7 == '\0') {
                    local_c4 = 1;
                  }
                }
                plVar9 = local_b8;
                if (local_b8 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = local_b8 + 1;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)*plVar4 == 0) {
                    (**(code **)*local_b8)(local_b8);
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
              if (iVar12 != 0) {
                LOCK();
                plVar9 = plVar16 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
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
          lVar15 = lVar15 + 1;
        } while (lVar15 < *(int *)(param_1 + 0xf0));
      }
    }
    else if (0 < *(int *)(param_1 + 0xf0)) {
      DAT_14cbf651c = 0.0;
      uVar6 = FUN_142855b10();
      *(undefined1 *)(param_1 + 0x132) = uVar6;
      goto LAB_1443f6a28;
    }
    cVar7 = FUN_14901fee6(*(undefined8 *)(param_1 + 0x28),param_2,
                          fVar21 <= 0.0 & (byte)local_c4 | fVar19 <= fVar20);
    if (cVar7 != '\0') {
      DAT_14cbf6518 = 0.0;
      DAT_14cbf6524 = fVar18;
    }
  }
  if (0 < *(int *)(param_1 + 0xf0)) {
    lVar15 = 0;
    do {
      if (*(longlong *)(*plVar3 + lVar15 * 0x10) != 0) {
        plVar9 = (longlong *)(*plVar3 + lVar15 * 0x10);
        plVar16 = (longlong *)plVar9[1];
        if ((plVar16 != (longlong *)0x0) && (0 < (int)plVar16[1])) {
          iVar8 = (int)plVar16[1];
          do {
            if (iVar8 == 0) goto LAB_1443f682e;
            LOCK();
            iVar12 = (int)plVar16[1];
            bVar17 = iVar8 == iVar12;
            if (bVar17) {
              *(int *)(plVar16 + 1) = iVar8 + 1;
              iVar12 = iVar8;
            }
            iVar8 = iVar12;
            UNLOCK();
          } while (!bVar17);
          if (*plVar9 != 0) {
            FUN_1490358d0();
          }
          LOCK();
          plVar9 = plVar16 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
LAB_1443f682e:
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0xf0));
  }
LAB_1443f6846:
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1443f6c54 FUN_1443f6c54 body=485 status=ok
// SIG undefined FUN_1443f6c54(void)

undefined8 * FUN_1443f6c54(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)((longlong)param_3 + 0xc) != -1) && (*(char *)(param_1 + 0xe8) == '\x01')) {
    iVar3 = (int)param_3[1];
    uVar6 = 0;
    iVar5 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      if (iVar3 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*param_3;
      }
      lVar7 = 0;
      uVar6 = 0;
      do {
        uVar2 = ((uint)(ushort)puVar8[lVar7] + (uint)(0x19 < (ushort)puVar8[lVar7] - 0x61) * 0x20) -
                0x20;
        uVar9 = (uint)(uVar6 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar2) & 0xff) * 4);
        uVar6 = (ulonglong)
                (uVar9 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar2 >> 8 & 0xff) * 4));
        lVar7 = lVar7 + 1;
      } while (iVar5 != (int)lVar7);
    }
    iVar3 = FUN_14904f974((longlong *)(param_1 + 0x38),uVar6,param_3);
    if (((iVar3 != -1) &&
        (lVar7 = (longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x38),
        plVar4 = (longlong *)(lVar7 + 0x10), plVar4 != (longlong *)0x0 && lVar7 != 0)) &&
       (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)) {
      local_58 = 0;
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_50);
      FUN_149026c34(&local_48,&local_50);
      *param_2 = local_48;
      param_2[1] = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_40 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
      }
      if (local_50 != 0) {
        (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_50 + 8) + 4) + local_50 + 8) + 8))()
        ;
      }
      goto LAB_1443f6ca0;
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x28);
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
LAB_1443f6ca0:
  if (*(int *)((longlong)param_3 + 0xc) != -1) {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = 0;
    param_3[1] = -0x100000000;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f6e3a FUN_1443f6e3a body=1021 status=ok
// SIG undefined FUN_1443f6e3a(void)

undefined8 FUN_1443f6e3a(longlong param_1,undefined **param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_138 [40];
  undefined8 *local_110;
  longlong local_108;
  undefined8 *local_100;
  int local_f8;
  undefined **local_f0;
  undefined8 **local_e8;
  char local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  undefined8 local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar4 = 0;
  uVar8 = 0;
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x38);
    iVar2 = *(int *)(param_2 + 1);
    uVar6 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar6 = uVar8;
    }
    if (0 < (int)uVar6) {
      if (iVar2 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      lVar9 = 0;
      uVar3 = 0;
      do {
        uVar8 = ((uint)(0x19 < (ushort)puVar5[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar5[lVar9]) -
                0x20;
        uVar10 = (uint)(uVar3 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar3 ^ uVar8) & 0xff) * 4);
        uVar8 = uVar10 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar8 >> 8 & 0xff) * 4);
        uVar3 = (ulonglong)uVar8;
        lVar9 = lVar9 + 1;
      } while (uVar6 != (uint)lVar9);
    }
    iVar2 = FUN_14904f974(plVar1,uVar8,param_2);
    if (iVar2 != -1) {
      if ((*plVar1 + (longlong)iVar2 * 0x20 != 0) && ((longlong)iVar2 * 0x20 + *plVar1 != -0x10)) {
        uVar4 = 0;
        goto LAB_1443f6e6a;
      }
    }
    local_c8 = &PTR_FUN_14ba6e9e8;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_c0 = 0x68;
    iVar2 = *(int *)(param_2 + 3);
    if (iVar2 < 2) {
      FUN_14903e24e(&local_d8);
      puVar5 = local_d8;
      if (local_d0 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
    }
    else {
      puVar5 = (undefined2 *)param_2[2];
    }
    local_f0 = &PTR_FUN_14ba6d600;
    local_e8 = (undefined8 **)0x0;
    local_e0 = '\0';
    if (&uStack_90 != (undefined8 *)0x0) {
      local_e8 = (undefined8 **)&uStack_90;
    }
    FUN_14903e1c6(&local_f0,puVar5);
    local_f0 = &PTR_FUN_14ba6d600;
    if (((local_e8 != (undefined8 **)0x0) && (local_e0 == '\x01')) &&
       (cef_string_utf16_clear(), local_e8 != (undefined8 **)0x0)) {
      FUN_1400020a8();
    }
    if ((iVar2 < 2) && (local_d8 != (undefined2 *)0x0)) {
      FUN_1400020a8();
    }
    FUN_14903e40e(&local_100,param_2 + 4);
    puVar7 = local_100;
    if (local_f8 == 0) {
      puVar7 = (undefined8 *)&DAT_149dfb77a;
    }
    local_f0 = &PTR_FUN_14ba6d600;
    local_e8 = (undefined8 **)0x0;
    local_e0 = '\0';
    if (&local_b8 != (undefined8 *)0x0) {
      local_e8 = (undefined8 **)&local_b8;
    }
    FUN_14903e1c6(&local_f0,puVar7);
    local_f0 = &PTR_FUN_14ba6d600;
    if (((local_e8 != (undefined8 **)0x0) && (local_e0 == '\x01')) &&
       (cef_string_utf16_clear(), local_e8 != (undefined8 **)0x0)) {
      FUN_1400020a8();
    }
    if (local_100 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)*(byte *)(param_2 + 6));
    local_98 = CONCAT44(local_98._4_4_,(uint)*(byte *)((longlong)param_2 + 0x31));
    local_100 = (undefined8 *)FUN_14001cc68(0x50);
    local_100[1] = &DAT_14ba6b3c4;
    local_100[3] = &DAT_14ba6b3cc;
    *local_100 = &PTR_LAB_14ba6b3e0;
    local_100[9] = &PTR_FUN_14ba6b400;
    local_100[2] = &PTR_FUN_14ba6b430;
    *(undefined4 *)((longlong)local_100 + 0x44) = 0;
    local_100[4] = 0;
    *(undefined4 *)(local_100 + 5) = 0;
    local_100[6] = param_1;
    *(undefined4 *)(local_100 + 7) = 0;
    if (local_100 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_100 + 7) = *(int *)(local_100 + 7) + 1;
      UNLOCK();
    }
    FUN_149046146(local_100 + 4,param_2 + 7);
    local_f0 = param_2;
    local_e8 = &local_100;
    FUN_14904fa66(param_1 + 0x88,&local_108);
    local_110 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)((longlong)local_100 + (longlong)*(int *)(local_100[1] + 4) + 8))()
      ;
    }
    FUN_144d7ad90(&local_108,&local_c8,&local_110);
    local_f0 = param_2;
    local_e8 = (undefined8 **)&local_108;
    FUN_1490500b2(plVar1,local_4c);
    FUN_1490314c0(param_1 + 0xd8,&local_108);
    if (local_108 != 0) {
      (**(code **)(*(longlong *)(*(int *)(*(longlong *)(local_108 + 8) + 4) + local_108 + 8) + 8))()
      ;
    }
    if (local_100 != (undefined8 *)0x0) {
      (**(code **)(*(longlong *)((longlong)local_100 + (longlong)*(int *)(local_100[1] + 4) + 8) + 8
                  ))();
    }
    FUN_14903f2d8(&local_c8);
    uVar4 = 1;
  }
LAB_1443f6e6a:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1443f7238 FUN_1443f7238 body=622 status=ok
// SIG undefined FUN_1443f7238(void)

ulonglong FUN_1443f7238(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  
  uVar8 = 0;
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    FUN_14903e520();
    plVar9 = (longlong *)(param_1 + 0x38);
    iVar3 = *(int *)(param_2 + 1);
    iVar11 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar11 = 0;
    }
    if (0 < iVar11) {
      if (iVar3 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      lVar5 = 0;
      uVar8 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar4[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar5]) -
                0x20;
        uVar10 = (uint)(uVar8 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar6) & 0xff) * 4);
        uVar8 = (ulonglong)
                (uVar10 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar5 = lVar5 + 1;
      } while (iVar11 != (int)lVar5);
    }
    iVar2 = FUN_14904f974(plVar9,uVar8,param_2);
    uVar6 = 0;
    uVar8 = CONCAT71((int7)(uVar8 >> 8),iVar2 != -1);
    if (iVar2 == -1) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(*plVar9 + 0x10 + (longlong)iVar2 * 0x20);
      if (plVar7 != (longlong *)0x0) {
        (*(code *)**(undefined8 **)((longlong)plVar7 + (longlong)*(int *)(plVar7[1] + 4) + 8))();
      }
      FUN_14905072e(plVar9);
      (**(code **)(*plVar7 + 0x38))(plVar7);
      iVar3 = *(int *)(param_2 + 1);
      iVar11 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar11 = 0;
      }
    }
    plVar9 = (longlong *)(param_1 + 0x88);
    if (0 < iVar11) {
      if (iVar3 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      lVar5 = 0;
      uVar6 = 0;
      do {
        uVar10 = ((uint)(0x19 < (ushort)puVar4[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar5])
                 - 0x20;
        uVar6 = uVar6 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar6 ^ uVar10) & 0xff) * 4);
        uVar6 = uVar6 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar10 >> 8 & 0xff) * 4);
        lVar5 = lVar5 + 1;
      } while (iVar11 != (int)lVar5);
    }
    iVar3 = FUN_14904fd96(plVar9,uVar6,param_2);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(*plVar9 + 0x10 + (longlong)iVar3 * 0x20);
      if (lVar5 != 0) {
        (*(code *)**(undefined8 **)(lVar5 + *(int *)(*(longlong *)(lVar5 + 8) + 4) + 8))();
      }
      FUN_1490507e0(plVar9,iVar3);
      if (*(int *)(lVar5 + 0x28) != 0) {
        puVar1 = *(undefined8 **)(lVar5 + 0x20);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,0);
          FUN_1446efa72((longlong *)(lVar5 + 0x20),0,0,0x10);
          *(undefined4 *)(lVar5 + 0x28) = 0;
        }
      }
      if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + *(int *)(*(longlong *)(lVar5 + 8) + 4) + 8) + 8))();
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*(longlong *)((longlong)plVar7 + (longlong)*(int *)(plVar7[1] + 4) + 8) + 8))();
    }
  }
  return uVar8;
}



// FUNCTION 1443f74a6 FUN_1443f74a6 body=174 status=ok
// SIG undefined FUN_1443f74a6(void)

void FUN_1443f74a6(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined8 **local_40 [3];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149021a64(param_2,local_40);
  pppuVar4 = local_40;
  if (7 < local_28) {
    pppuVar4 = (undefined8 ***)local_40[0];
  }
  FUN_140056680(local_50,pppuVar4);
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  (*pcVar1)(uVar2,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (7 < local_28) {
    FUN_14600850e(local_40,local_40[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f7556 FUN_1443f7556 body=13 status=ok
// SIG undefined FUN_1443f7556(void)

void FUN_1443f7556(longlong param_1)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(param_1 + -0x18 + (longlong)-*(int *)(param_1 + -4));
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}



// FUNCTION 1443f7564 FUN_1443f7564 body=92 status=ok
// SIG undefined FUN_1443f7564(void)

bool FUN_1443f7564(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + -4);
  LOCK();
  piVar1 = (int *)(param_1 + -0x18 + (longlong)-iVar3);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  param_1 = -iVar3 + param_1;
  if (param_1 + -0x68 != 0 && iVar2 == 1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + -0x60) + 4);
    (**(code **)(*(longlong *)(param_1 + -0x60 + lVar4) + 0x20))(param_1 + -0x68 + lVar4 + 8,1);
  }
  return iVar2 == 1;
}



// FUNCTION 1443f75e4 FUN_1443f75e4 body=131 status=ok
// SIG undefined FUN_1443f75e4(void)

longlong FUN_1443f75e4(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = (longlong)-*(int *)(param_1 + -4);
  lVar2 = param_1 + lVar4;
  *(undefined ***)(param_1 + -0x68 + lVar4) = &PTR_FUN_14ba6cdc0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x60 + lVar4) + 4) + -0x60 + lVar2) =
       &PTR_FUN_14ba6cdd0;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x60 + lVar4) + 4);
  *(int *)((longlong)iVar1 + -100 + lVar2) = iVar1 + -0x60;
  if (*(longlong *)(param_1 + -0x58 + lVar4) != 0) {
    plVar3 = (longlong *)(lVar2 + -0x38);
    if (*(longlong **)(lVar2 + -0x48) != (longlong *)0x0) {
      plVar3 = *(longlong **)(lVar2 + -0x48);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  lVar2 = param_1 + lVar4 + -0x68;
  if (param_2 != 0) {
    FUN_1400020a8(lVar2);
  }
  return lVar2;
}



// FUNCTION 1443f7668 FUN_1443f7668 body=52 status=ok
// SIG undefined FUN_1443f7668(void)

void FUN_1443f7668(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1443f769c FUN_1443f769c body=71 status=ok
// SIG undefined FUN_1443f769c(void)

undefined8 * FUN_1443f769c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba6d1b0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f76e4 FUN_1443f76e4 body=515 status=ok
// SIG undefined FUN_1443f76e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1443f76e4(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *_Str;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  wchar_t *local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf6588) && (FUN_144b3d300(&DAT_14cbf6588), DAT_14cbf6588 == -1)) {
    FUN_1400b22c2(&local_38);
    iVar3 = local_2c;
    iVar2 = local_30;
    if (local_30 < 2) {
      DAT_14cbf6578 = (wchar_t *)0x0;
      DAT_14cbf6580 = *(int *)(param_1 + 0x18);
      lVar6 = (longlong)DAT_14cbf6580;
      _Src = *(void **)(param_1 + 0x10);
      if (lVar6 == 0) {
        _DAT_14cbf6584 = 0;
      }
      else {
        FUN_1446dd670(&DAT_14cbf6578,DAT_14cbf6580,0);
        memcpy(DAT_14cbf6578,_Src,lVar6 * 2);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x18) + -1;
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar5 = 0;
      }
      DAT_14cbf6578 = local_38;
      local_38 = (wchar_t *)0x0;
      DAT_14cbf6580 = local_30;
      _DAT_14cbf6584 = local_2c;
      local_30 = 0;
      local_2c = 0;
      iVar1 = iVar5 + iVar2;
      if (iVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar5);
      }
      if (iVar3 < iVar1) {
        FUN_1446f8c06(&DAT_14cbf6578);
      }
      FUN_1400020e8(&DAT_14cbf6578,*(undefined8 *)(param_1 + 0x10),iVar5);
    }
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1443f78e8);
    _Init_thread_footer(&DAT_14cbf6588);
  }
  if (param_3 != '\0') {
    FUN_140056680(&local_38,param_2);
    _Str = DAT_14cbf6578;
    if (DAT_14cbf6580 == 0) {
      _Str = L"";
    }
    if (_Str != (wchar_t *)0x0) {
      sVar4 = wcslen(_Str);
      local_40 = 0xffffffff;
      local_48 = 0;
      FUN_1447ee042(&local_38,_Str,sVar4 & 0xffffffff,1);
    }
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1443f7924 FUN_1443f7924 body=3060 status=ok
// SIG undefined FUN_1443f7924(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1443f7924(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  size_t sVar8;
  undefined8 *******pppppppuVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined *******pppppppuVar16;
  undefined2 *puVar17;
  int iVar18;
  undefined ********ppppppppuVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  wchar_t *_Str;
  ulonglong uVar24;
  undefined *******pppppppuVar25;
  bool bVar26;
  undefined1 auStack_218 [32];
  undefined ***local_1f8;
  longlong local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined **local_1a8;
  longlong local_1a0;
  char local_198;
  undefined **local_190;
  longlong local_188;
  char local_180;
  longlong local_178 [2];
  uint *local_168;
  int local_160;
  undefined2 *local_158;
  int local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [32];
  undefined8 *******local_118;
  undefined8 uStack_110;
  longlong local_108;
  ulonglong local_100;
  undefined ********local_f8;
  longlong lStack_f0;
  char local_e8 [8];
  undefined **local_e0;
  uint *local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined ********local_78;
  undefined ********local_70;
  int local_68;
  wchar_t *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar14 = *param_1;
  FUN_140056680(&local_158,L"Accept-Language");
  FUN_14903e24e(&local_168);
  local_178[1] = 0;
  local_178[0] = FUN_14001cc68(0x50,0x10);
  *(longlong *)local_178[0] = local_178[0];
  *(longlong *)(local_178[0] + 8) = local_178[0];
  *(longlong *)(local_178[0] + 0x10) = local_178[0];
  *(undefined2 *)(local_178[0] + 0x18) = 0x101;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_178);
  puVar17 = local_158;
  if (local_150 == 0) {
    puVar17 = &DAT_149dfb77a;
  }
  FUN_1490201ba(&local_f8,puVar17);
  lVar7 = FUN_149046e8a(local_178,&local_f8);
  local_f8 = (undefined ********)&PTR_FUN_14ba6d600;
  if (((lStack_f0 != 0) && (local_e8[0] == '\x01')) && (cef_string_utf16_clear(), lStack_f0 != 0)) {
    FUN_1400020a8();
  }
  if (lVar7 == local_178[0]) {
    puVar13 = (uint *)&DAT_149dfb77a;
    if (local_160 != 0) {
      puVar13 = local_168;
    }
    puVar17 = &DAT_149dfb77a;
    if (local_150 != 0) {
      puVar17 = local_158;
    }
    FUN_1490201ba(&local_f8,puVar17);
    FUN_1490201ba(&local_e0,puVar13);
    FUN_1490441e0(local_178,&local_1a8,&local_f8);
    local_e0 = &PTR_FUN_14ba6d600;
    if (local_d8 != (uint *)0x0) {
      if (((char)local_d0 == '\x01') && (cef_string_utf16_clear(), local_d8 != (uint *)0x0)) {
        FUN_1400020a8();
      }
      local_d8 = (uint *)0x0;
      local_d0 = local_d0 & 0xffffff00;
    }
    local_f8 = (undefined ********)&PTR_FUN_14ba6d600;
    if (((lStack_f0 != 0) && (local_e8[0] == '\x01')) && (cef_string_utf16_clear(), lStack_f0 != 0))
    {
      FUN_1400020a8();
    }
  }
  else {
    puVar13 = local_168;
    if (local_160 == 0) {
      puVar13 = (uint *)&DAT_149dfb77a;
    }
    FUN_14903e1c6(lVar7 + 0x38,puVar13);
  }
  if (((*(int *)(lVar14 + 0x188) != 0) && (*(longlong **)(lVar14 + 0x180) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(lVar14 + 0x180) + 0x30))(), cVar4 != '\0')) {
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_1a8);
    FUN_149021a64(&local_1a8,&local_f8);
    ppppppppuVar19 = (undefined ********)&local_f8;
    if ((undefined **)0x7 < local_e0) {
      ppppppppuVar19 = local_f8;
    }
    FUN_140056680(&local_118,ppppppppuVar19);
    uVar5 = FUN_149026b00(lVar14,&local_118);
    if (local_118 != (undefined8 *******)0x0) {
      FUN_1400020a8();
    }
    if ((undefined **)0x7 < local_e0) {
      FUN_14600850e(&local_f8,local_f8);
    }
    local_e8[0] = '\0';
    local_e8[1] = '\0';
    local_e8[2] = '\0';
    local_e8[3] = '\0';
    local_e8[4] = '\0';
    local_e8[5] = '\0';
    local_e8[6] = '\0';
    local_e8[7] = '\0';
    local_e0 = (undefined **)0x7;
    local_f8 = (undefined ********)((ulonglong)local_f8 & 0xffffffffffff0000);
    local_1a8 = &PTR_FUN_14ba6d600;
    local_1e8 = lVar14;
    if (((local_1a0 != 0) && (local_198 == '\x01')) && (cef_string_utf16_clear(), local_1a0 != 0)) {
      FUN_1400020a8();
    }
    plVar20 = (longlong *)0x0;
    local_d8 = (uint *)0x0;
    local_d0 = 0;
    local_f8 = (undefined ********)0x0;
    lStack_f0 = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x98))();
    local_1e0 = param_1;
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_1a8);
    if (*(int *)(local_1e8 + 0x188) != 0) {
      plVar20 = *(longlong **)(local_1e8 + 0x180);
    }
    local_1f8 = (undefined ***)CONCAT71(local_1f8._1_7_,uVar5);
    (**(code **)(*plVar20 + 0x58))(plVar20,&local_1a8,uVar6,&local_f8);
    local_1a8 = &PTR_FUN_14ba6d600;
    if (((local_1a0 != 0) && (local_198 == '\x01')) && (cef_string_utf16_clear(), local_1a0 != 0)) {
      FUN_1400020a8();
    }
    if (local_d0 == 0) {
      uVar24 = 1;
      uVar22 = 0;
      iVar18 = 0;
      uVar10 = 0;
    }
    else {
      puVar13 = local_d8;
      if (local_d8 == (uint *)0x0) {
        puVar13 = (uint *)local_e8;
      }
      uVar10 = *puVar13;
      if (uVar10 == 0) {
        iVar18 = local_d0 + 0x1e;
        if (-1 < (int)(local_d0 - 1)) {
          iVar18 = local_d0 - 1;
        }
        uVar22 = 0;
        uVar15 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar15 = uVar22;
        }
        iVar18 = 0;
        do {
          if (uVar15 == uVar22) goto LAB_1443f7f3c;
          iVar18 = iVar18 + 0x20;
          uVar10 = puVar13[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar22 = 0;
        iVar18 = 0;
      }
      uVar24 = (ulonglong)(-uVar10 & uVar10);
      uVar15 = uVar24 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar10 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if ((int)local_d0 <= (int)uVar10) {
        uVar10 = local_d0;
      }
    }
    if ((int)uVar10 < (int)local_d0) {
      uVar23 = 0xffffffff;
      do {
        lVar14 = (longlong)(int)uVar10;
        pppppppuVar25 = (undefined *******)&DAT_149dfb77a;
        if (*(int *)(local_f8 + lVar14 * 5 + 3) != 0) {
          pppppppuVar25 = local_f8[lVar14 * 5 + 2];
        }
        pppppppuVar16 = (undefined *******)&DAT_149dfb77a;
        if (*(int *)(local_f8 + lVar14 * 5 + 1) != 0) {
          pppppppuVar16 = local_f8[lVar14 * 5];
        }
        FUN_1490201ba(&local_1a8,pppppppuVar16);
        FUN_1490201ba(&local_190,pppppppuVar25);
        FUN_1490441e0(local_178,&local_118,&local_1a8);
        local_190 = &PTR_FUN_14ba6d600;
        if (local_188 != 0) {
          if ((local_180 == '\x01') && (cef_string_utf16_clear(), local_188 != 0)) {
            FUN_1400020a8();
          }
          local_188 = 0;
          local_180 = '\0';
        }
        local_1a8 = &PTR_FUN_14ba6d600;
        if (((local_1a0 != 0) && (local_198 == '\x01')) &&
           (cef_string_utf16_clear(), local_1a0 != 0)) {
          FUN_1400020a8();
        }
        uVar23 = uVar23 & ~(uint)uVar24;
        puVar13 = local_d8;
        if (local_d8 == (uint *)0x0) {
          puVar13 = (uint *)local_e8;
        }
        iVar21 = (int)uVar22;
        lVar14 = (longlong)iVar21;
        uVar10 = puVar13[lVar14] & uVar23;
        if (uVar10 == 0) {
          iVar11 = local_d0 + 0x1e;
          if (-1 < (int)(local_d0 - 1)) {
            iVar11 = local_d0 - 1;
          }
          iVar11 = iVar11 >> 5;
          iVar12 = iVar11;
          if (iVar11 < iVar21) {
            iVar12 = iVar21;
          }
          if (iVar11 <= iVar21) break;
          lVar7 = 0;
          while( true ) {
            iVar18 = iVar18 + 0x20;
            uVar10 = puVar13[lVar7 + lVar14 + 1];
            if (uVar10 != 0) break;
            lVar7 = lVar7 + 1;
            if (iVar12 - lVar14 == lVar7) goto LAB_1443f7f3c;
          }
          uVar22 = (ulonglong)(iVar21 + (int)lVar7 + 1);
          uVar23 = 0xffffffff;
        }
        uVar24 = (ulonglong)(-uVar10 & uVar10);
        uVar15 = uVar24 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar10 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while ((int)uVar10 < (int)local_d0);
    }
LAB_1443f7f3c:
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(&local_f8);
    lVar14 = local_1e8;
    param_1 = local_1e0;
  }
  plVar20 = *(longlong **)(lVar14 + 0x1b8);
  bVar3 = true;
  if (plVar20 == (longlong *)0x0) {
LAB_1443f7f7f:
    plVar20 = (longlong *)0x0;
  }
  else {
    iVar18 = (int)plVar20[1];
    do {
      if (iVar18 == 0) goto LAB_1443f7f7f;
      LOCK();
      iVar21 = (int)plVar20[1];
      bVar26 = iVar18 == iVar21;
      if (bVar26) {
        *(int *)(plVar20 + 1) = iVar18 + 1;
        iVar21 = iVar18;
      }
      iVar18 = iVar21;
      UNLOCK();
    } while (!bVar26);
    lVar14 = *(longlong *)(lVar14 + 0x1b0);
    if (lVar14 != 0) {
      local_1b0 = param_1[1];
      if (local_1b0 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_1b0 + 8) + 4) + local_1b0 + 8))();
      }
      local_1b8 = param_1[2];
      if (local_1b8 != 0) {
        (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_1b8 + 8) + 4) + local_1b8 + 8))();
      }
      FUN_149036192(lVar14,&local_58,&local_1b8,&local_1b0);
      if (local_4c != -1) {
        FUN_1448097c4(&local_58,&DAT_149e01f72,&DAT_149dfb77a,0);
        FUN_1448097c4(&local_58,&DAT_149e01ea8,&DAT_149dfb77a,0);
        FUN_144d76630(&local_1c0);
        FUN_144d774d0(&local_1c8);
        _Str = L"";
        if (local_50 != 0) {
          _Str = local_58;
        }
        local_78 = (undefined ********)0x0;
        if (_Str == (wchar_t *)0x0) {
          local_70 = (undefined ********)0x0;
          local_68 = 0;
        }
        else {
          sVar8 = wcslen(_Str);
          local_68 = FUN_14475aa65(0,_Str,sVar8 & 0xffffffff);
          uVar10 = local_68 + 1;
          local_70 = (undefined ********)0x0;
          if (0x80 < uVar10) {
            FUN_1446efa72(&local_78,0,uVar10,1);
            local_70 = local_78;
          }
          if (local_70 == (undefined ********)0x0) {
            local_70 = (undefined ********)&local_f8;
          }
          FUN_14475a98a(local_70,uVar10,_Str,(int)sVar8 + 1);
        }
        (**(code **)(*local_1c8 + 0x18))(local_1c8,(longlong)local_68,local_70);
        plVar2 = local_1c0;
        local_1d0 = local_1c8;
        if (local_1c8 != (longlong *)0x0) {
          (*(code *)**(undefined8 **)
                      ((longlong)local_1c8 + (longlong)*(int *)(local_1c8[1] + 4) + 8))();
        }
        (**(code **)(*plVar2 + 0x28))(plVar2,&local_1d0);
        plVar2 = (longlong *)param_1[1];
        local_1d8 = local_1c0;
        if (local_1c0 != (longlong *)0x0) {
          (*(code *)**(undefined8 **)
                      ((longlong)local_1c0 + (longlong)*(int *)(local_1c0[1] + 4) + 8))();
        }
        (**(code **)(*plVar2 + 0x48))(plVar2,&local_1d8);
        (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_1a8);
        if ((local_1a0 == 0) || (*(longlong *)(local_1a0 + 8) == 0)) {
          local_118 = (undefined8 *******)0x0;
          uStack_110 = 0;
          local_108 = 0;
          local_100 = 0xf;
        }
        else {
          FUN_149046eee(&local_118);
        }
        local_1a8 = &PTR_FUN_14ba6d600;
        if (((local_1a0 != 0) && (local_198 == '\x01')) &&
           (cef_string_utf16_clear(local_1a0), local_1a0 != 0)) {
          FUN_1400020a8();
        }
        lVar14 = local_108;
        pppppppuVar9 = local_118;
        if (local_100 < 0x10) {
          pppppppuVar9 = &local_118;
        }
        for (; lVar14 != 0; lVar14 = lVar14 + -1) {
          if (*(char *)((longlong)pppppppuVar9 + lVar14 + -1) == '#') {
            if (lVar14 != 0) {
              local_1f8 = &local_1a8;
              FUN_1408f7a26(local_138,&local_118,lVar14,0xffffffffffffffff);
              FUN_1490201ba(&local_1a8,L"Content-Type");
              local_190 = &PTR_FUN_14ba6d600;
              local_188 = 0;
              local_180 = '\0';
              FUN_1490466b6(&local_190,local_138);
              FUN_1490441e0(local_178,local_148,&local_1a8);
              local_190 = &PTR_FUN_14ba6d600;
              if (local_188 != 0) {
                if ((local_180 == '\x01') && (cef_string_utf16_clear(), local_188 != 0)) {
                  FUN_1400020a8();
                }
                local_188 = 0;
                local_180 = '\0';
              }
              local_1a8 = &PTR_FUN_14ba6d600;
              if (((local_1a0 != 0) && (local_198 == '\x01')) &&
                 (cef_string_utf16_clear(), local_1a0 != 0)) {
                FUN_1400020a8();
              }
              FUN_1401d9a90(local_138);
            }
            break;
          }
        }
        plVar2 = (longlong *)param_1[1];
        puVar17 = DAT_14cbf6268;
        if (DAT_14cbf6270 == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        FUN_1490201ba(&local_1a8,puVar17);
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_1a8);
        local_1a8 = &PTR_FUN_14ba6d600;
        if (((local_1a0 != 0) && (local_198 == '\x01')) &&
           (cef_string_utf16_clear(), local_1a0 != 0)) {
          FUN_1400020a8();
        }
        FUN_1401d9a90(&local_118);
        if (local_78 != (undefined ********)0x0) {
          FUN_1400020a8();
        }
        if (local_1c8 != (longlong *)0x0) {
          (**(code **)(*(longlong *)((longlong)local_1c8 + (longlong)*(int *)(local_1c8[1] + 4) + 8)
                      + 8))();
        }
        if (local_1c0 != (longlong *)0x0) {
          (**(code **)(*(longlong *)((longlong)local_1c0 + (longlong)*(int *)(local_1c0[1] + 4) + 8)
                      + 8))();
        }
        if ((local_4c != -1) && (local_58 != (wchar_t *)0x0)) {
          FUN_1400020a8();
        }
      }
    }
    bVar3 = false;
  }
  cVar4 = (*(code *)**(undefined8 **)param_1[1])();
  if (cVar4 == '\0') {
    (**(code **)(*(longlong *)param_1[1] + 0x58))((longlong *)param_1[1],local_178);
  }
  (*(code *)**(undefined8 **)param_1[3])((undefined8 *)param_1[3],1);
  if (!bVar3) {
    LOCK();
    plVar2 = plVar20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_149041800(*(undefined8 *)(local_178[0] + 8));
  FUN_1400020a8(local_178[0]);
  if (local_168 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f851a FUN_1443f851a body=173 status=ok
// SIG undefined FUN_1443f851a(void)

undefined8 * FUN_1443f851a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14ba6d650;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  return puVar2 + 1;
}



// FUNCTION 1443f85ce FUN_1443f85ce body=29 status=ok
// SIG undefined FUN_1443f85ce(void)

void FUN_1443f85ce(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443f85ec FUN_1443f85ec body=133 status=ok
// SIG undefined FUN_1443f85ec(void)

undefined8 * FUN_1443f85ec(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6d650;
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f8672 FUN_1443f8672 body=545 status=ok
// SIG undefined FUN_1443f8672(void)

void FUN_1443f8672(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined *****pppppuVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined **local_90;
  longlong local_88;
  char local_80;
  undefined2 *local_78;
  int local_70;
  undefined ****local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x98))();
  (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_90);
  FUN_149021a64(&local_90,&local_68);
  pppppuVar10 = &local_68;
  if (7 < local_50) {
    pppppuVar10 = (undefined *****)local_68;
  }
  FUN_140056680(&local_78,pppppuVar10);
  if (7 < local_50) {
    FUN_14600850e(&local_68,local_68);
  }
  local_58 = 0;
  local_50 = 7;
  local_68 = (undefined ****)((ulonglong)local_68 & 0xffffffffffff0000);
  local_90 = &PTR_FUN_14ba6d600;
  if (((local_88 != 0) && (local_80 == '\x01')) && (cef_string_utf16_clear(), local_88 != 0)) {
    FUN_1400020a8();
  }
  iVar7 = local_70 + -1;
  if (local_70 == 0) {
    iVar7 = 0;
  }
  uVar8 = 0;
  if (0 < iVar7) {
    puVar6 = local_78;
    if (local_70 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    lVar11 = 0;
    uVar8 = 0;
    do {
      uVar9 = ((uint)(0x19 < (ushort)puVar6[lVar11] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar11]) -
              0x20;
      uVar12 = (uint)(uVar8 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar9) & 0xff) * 4);
      uVar8 = (ulonglong)
              (uVar12 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar9 >> 8 & 0xff) * 4));
      lVar11 = lVar11 + 1;
    } while (iVar7 != (int)lVar11);
  }
  iVar5 = FUN_149046fd4(lVar1 + 0x110,uVar8,&local_78);
  iVar7 = 0;
  if (iVar5 == -1) {
    iVar7 = iVar4;
  }
  lVar11 = param_1[3];
  lVar3 = param_1[2];
  (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_68);
  if ((*(int *)(lVar1 + 0x198) != 0) &&
     (plVar2 = *(longlong **)(lVar1 + 400), plVar2 != (longlong *)0x0)) {
    local_98 = lVar11;
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_68,iVar7,(int)lVar3);
  }
  local_68 = (undefined ****)&PTR_FUN_14ba6d600;
  if (((local_60 != 0) && ((char)local_58 == '\x01')) && (cef_string_utf16_clear(), local_60 != 0))
  {
    FUN_1400020a8();
  }
  FUN_1490470a0(lVar1 + 0x110,&local_78);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443f8894 FUN_1443f8894 body=108 status=ok
// SIG undefined FUN_1443f8894(void)

undefined8 * FUN_1443f8894(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14ba6d690;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar3[2] = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar3[3] = *(undefined8 *)(param_1 + 0x18);
  puVar3[4] = uVar2;
  return puVar3 + 1;
}



// FUNCTION 1443f8906 FUN_1443f8906 body=29 status=ok
// SIG undefined FUN_1443f8906(void)

void FUN_1443f8906(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443f8924 FUN_1443f8924 body=73 status=ok
// SIG undefined FUN_1443f8924(void)

undefined8 * FUN_1443f8924(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6d690;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f896e FUN_1443f896e body=246 status=ok
// SIG undefined FUN_1443f896e(void)

void FUN_1443f896e(longlong *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined **local_68;
  longlong local_60;
  char local_58;
  longlong local_50 [2];
  undefined2 local_40;
  undefined6 uStack_3e;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_68);
  puVar2 = &local_40;
  FUN_149021a64(&local_68,puVar2);
  if (7 < local_28) {
    puVar2 = (undefined2 *)CONCAT62(uStack_3e,local_40);
  }
  FUN_140056680(local_50,puVar2);
  FUN_1490470a0(lVar1 + 0x110,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (7 < local_28) {
    FUN_14600850e(&local_40,CONCAT62(uStack_3e,local_40));
  }
  local_30 = 0;
  local_28 = 7;
  local_40 = 0;
  local_68 = &PTR_FUN_14ba6d600;
  if ((local_60 != 0) && (local_58 == '\x01')) {
    cef_string_utf16_clear();
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f8a66 FUN_1443f8a66 body=70 status=ok
// SIG undefined FUN_1443f8a66(void)

longlong FUN_1443f8a66(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ba6d6b0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(param_2 + 0x20) = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  return param_2 + 0x18;
}



// FUNCTION 1443f8abe FUN_1443f8abe body=73 status=ok
// SIG undefined FUN_1443f8abe(void)

undefined8 * FUN_1443f8abe(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6d6b0;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f8b08 FUN_1443f8b08 body=107 status=ok
// SIG undefined FUN_1443f8b08(void)

void FUN_1443f8b08(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)*param_1;
  local_18 = param_1[1];
  if (local_18 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(local_18 + 8) + 4) + local_18 + 8))();
  }
  (**(code **)(*plVar1 + 0xc0))(plVar1,1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443f8b74 FUN_1443f8b74 body=103 status=ok
// SIG undefined FUN_1443f8b74(void)

longlong FUN_1443f8b74(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ba6d6d0;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_2 + 0x18) = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(param_2 + 0x20) = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  return param_2 + 0x18;
}



// FUNCTION 1443f8bee FUN_1443f8bee body=103 status=ok
// SIG undefined FUN_1443f8bee(void)

undefined8 * FUN_1443f8bee(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6d6d0;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f8c96 FUN_1443f8c96 body=29 status=ok
// SIG undefined FUN_1443f8c96(void)

undefined8 FUN_1443f8c96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443f8cb3 FUN_1443f8cb3 body=522 status=ok
// SIG undefined FUN_1443f8cb3(void)

undefined8
FUN_1443f8cb3(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  bool bVar9;
  double dVar10;
  
  if (param_1 != 0) {
    puVar8 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0,0x1408001,0,&DAT_14c9520b8,
                    FUN_1459738d6);
      atexit(FUN_142816fda);
      _Init_thread_footer(&DAT_14c952268);
    }
    if (DAT_14c952220 == 0) {
      bVar9 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c952218 && bVar9) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar9 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c952218) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if (bVar9) goto LAB_1443f8d57;
    }
    else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952220) != 0) {
LAB_1443f8d57:
      plVar1 = (longlong *)*param_5;
      if (plVar1 != (longlong *)0x0) {
        (*(code *)**(undefined8 **)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8))();
      }
      iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,param_6);
      if (iVar4 == 4) {
        dVar10 = (double)(**(code **)(*plVar1 + 0x70))(plVar1,param_6);
        uVar7 = (ulonglong)dVar10;
      }
      else if (iVar4 == 3) {
        iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,param_6);
        uVar7 = (ulonglong)iVar4;
      }
      else if (iVar4 == 2) {
        bVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_6);
        uVar7 = (ulonglong)bVar3;
      }
      else {
        uVar7 = 0;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8) + 8))()
        ;
      }
      puVar5 = (ulonglong *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
      if (puVar5 != (ulonglong *)0x0) {
        *puVar5 = uVar7;
        uVar6 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
        goto LAB_1443f8e0c;
      }
    }
  }
  uVar6 = 0;
LAB_1443f8e0c:
  lVar2 = *param_5;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  return uVar6;
}



// FUNCTION 1443f8ebd FUN_1443f8ebd body=349 status=ok
// SIG undefined FUN_1443f8ebd(void)

undefined8
FUN_1443f8ebd(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ushort *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  
  if (param_1 != 0) {
    lVar8 = *(longlong *)(param_1 + 8);
    lVar5 = FUN_140e98e1a();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (bVar9) goto LAB_1443f8f38;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_1443f8f38:
      plVar1 = (longlong *)*param_5;
      if (plVar1 != (longlong *)0x0) {
        (*(code *)**(undefined8 **)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8))();
      }
      iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,param_6);
      if (iVar4 == 4) {
        dVar10 = (double)(**(code **)(*plVar1 + 0x70))(plVar1,param_6);
        uVar3 = (ushort)(int)dVar10;
      }
      else if (iVar4 == 3) {
        uVar3 = (**(code **)(*plVar1 + 0x68))(plVar1,param_6);
      }
      else if (iVar4 == 2) {
        bVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,param_6);
        uVar3 = (ushort)bVar2;
      }
      else {
        uVar3 = 0;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8) + 8))()
        ;
      }
      puVar6 = (ushort *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = uVar3;
        uVar7 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
        goto LAB_1443f8fe9;
      }
    }
  }
  uVar7 = 0;
LAB_1443f8fe9:
  lVar8 = *param_5;
  if (lVar8 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar8 + 8) + 4) + lVar8 + 8) + 8))();
  }
  return uVar7;
}



// FUNCTION 1443f901a FUN_1443f901a body=522 status=ok
// SIG undefined FUN_1443f901a(void)

undefined8
FUN_1443f901a(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  bool bVar9;
  double dVar10;
  
  if (param_1 != 0) {
    puVar8 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0,0x1008801,0,&DAT_14c9520b8,
                    FUN_1468e122c);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
    if (DAT_14c9522d0 == 0) {
      bVar9 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c9522c8 && bVar9) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar9 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c9522c8) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if (bVar9) goto LAB_1443f90bf;
    }
    else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c9522d0) != 0) {
LAB_1443f90bf:
      plVar1 = (longlong *)*param_5;
      if (plVar1 != (longlong *)0x0) {
        (*(code *)**(undefined8 **)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8))();
      }
      iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,param_6);
      if (iVar4 == 4) {
        dVar10 = (double)(**(code **)(*plVar1 + 0x70))(plVar1,param_6);
        uVar5 = (uint)(longlong)dVar10;
      }
      else if (iVar4 == 3) {
        uVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_6);
      }
      else {
        uVar5 = 0;
        if (iVar4 == 2) {
          bVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_6);
          uVar5 = (uint)bVar3;
        }
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8) + 8))()
        ;
      }
      puVar6 = (uint *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
      if (puVar6 != (uint *)0x0) {
        *puVar6 = uVar5;
        uVar7 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
        goto LAB_1443f9172;
      }
    }
  }
  uVar7 = 0;
LAB_1443f9172:
  lVar2 = *param_5;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  return uVar7;
}



// FUNCTION 1443f9224 FUN_1443f9224 body=548 status=ok
// SIG undefined FUN_1443f9224(void)

undefined8
FUN_1443f9224(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  bool bVar9;
  double dVar10;
  
  if (param_1 != 0) {
    puVar8 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0,0x1008201,0,&DAT_14c9520b8,
                    FUN_1468e12e4);
      atexit(FUN_142817061);
      _Init_thread_footer(&DAT_14c952370);
    }
    if (DAT_14c952328 == 0) {
      bVar9 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c952320 && bVar9) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar9 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c952320) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if (bVar9) goto LAB_1443f92c8;
    }
    else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952328) != 0) {
LAB_1443f92c8:
      plVar1 = (longlong *)*param_5;
      if (plVar1 != (longlong *)0x0) {
        (*(code *)**(undefined8 **)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8))();
      }
      iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,param_6);
      if (iVar4 == 4) {
        dVar10 = (double)(**(code **)(*plVar1 + 0x70))(plVar1,param_6);
        uVar7 = (longlong)(dVar10 - 9.223372036854776e+18) & (longlong)dVar10 >> 0x3f |
                (longlong)dVar10;
      }
      else if (iVar4 == 3) {
        iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,param_6);
        uVar7 = (ulonglong)iVar4;
      }
      else if (iVar4 == 2) {
        bVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_6);
        uVar7 = (ulonglong)bVar3;
      }
      else {
        uVar7 = 0;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8) + 8))()
        ;
      }
      puVar5 = (ulonglong *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
      if (puVar5 != (ulonglong *)0x0) {
        *puVar5 = uVar7;
        uVar6 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
        goto LAB_1443f9397;
      }
    }
  }
  uVar6 = 0;
LAB_1443f9397:
  lVar2 = *param_5;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  return uVar6;
}



// FUNCTION 1443f9448 FUN_1443f9448 body=536 status=ok
// SIG undefined FUN_1443f9448(void)

undefined8
FUN_1443f9448(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  double dVar10;
  float fVar11;
  
  if (param_1 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                    FUN_1408a629c);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (DAT_14c952380 == 0) {
      bVar9 = puVar8 != (undefined8 *)0x0;
      if (puVar8 != &DAT_14c952378 && bVar9) {
        do {
          puVar8 = (undefined8 *)puVar8[6];
          bVar9 = puVar8 != (undefined8 *)0x0;
          if (puVar8 == &DAT_14c952378) break;
        } while (puVar8 != (undefined8 *)0x0);
      }
      if (bVar9) goto LAB_1443f94f1;
    }
    else if ((puVar8[3] & DAT_14c952380) != 0) {
LAB_1443f94f1:
      plVar1 = (longlong *)*param_5;
      if (plVar1 != (longlong *)0x0) {
        (*(code *)**(undefined8 **)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8))();
      }
      iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,param_6);
      if (iVar4 == 4) {
        dVar10 = (double)(**(code **)(*plVar1 + 0x70))(plVar1,param_6);
        fVar11 = (float)dVar10;
      }
      else {
        if (iVar4 == 3) {
          uVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_6);
        }
        else {
          fVar11 = 0.0;
          if (iVar4 != 2) goto LAB_1443f956e;
          bVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_6);
          uVar5 = (uint)bVar3;
        }
        fVar11 = (float)(int)uVar5;
      }
LAB_1443f956e:
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8) + 8))()
        ;
      }
      pfVar6 = (float *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
      if (pfVar6 != (float *)0x0) {
        *pfVar6 = fVar11;
        uVar7 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
        goto LAB_1443f95aa;
      }
    }
  }
  uVar7 = 0;
LAB_1443f95aa:
  lVar2 = *param_5;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  return uVar7;
}



// FUNCTION 1443f9660 FUN_1443f9660 body=542 status=ok
// SIG undefined FUN_1443f9660(void)

undefined8
FUN_1443f9660(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined *puVar8;
  bool bVar9;
  double dVar10;
  
  if (param_1 != 0) {
    puVar8 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0,0x101008001,0,&DAT_14c9520b8,
                    FUN_14079c5e4);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    if (DAT_14c9523d8 == 0) {
      bVar9 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c9523d0 && bVar9) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar9 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c9523d0) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if (bVar9) goto LAB_1443f970a;
    }
    else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c9523d8) != 0) {
LAB_1443f970a:
      plVar1 = (longlong *)*param_5;
      if (plVar1 != (longlong *)0x0) {
        (*(code *)**(undefined8 **)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8))();
      }
      iVar4 = (**(code **)(*plVar1 + 0x50))(plVar1,param_6);
      if (iVar4 == 4) {
        dVar10 = (double)(**(code **)(*plVar1 + 0x70))(plVar1,param_6);
      }
      else {
        if (iVar4 == 3) {
          uVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_6);
        }
        else {
          dVar10 = 0.0;
          if (iVar4 != 2) goto LAB_1443f9785;
          bVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_6);
          uVar5 = (uint)bVar3;
        }
        dVar10 = (double)(int)uVar5;
      }
LAB_1443f9785:
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)((longlong)plVar1 + (longlong)*(int *)(plVar1[1] + 4) + 8) + 8))()
        ;
      }
      pdVar6 = (double *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
      if (pdVar6 != (double *)0x0) {
        *pdVar6 = dVar10;
        uVar7 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
        goto LAB_1443f97c1;
      }
    }
  }
  uVar7 = 0;
LAB_1443f97c1:
  lVar2 = *param_5;
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar2 + 8) + 4) + lVar2 + 8) + 8))();
  }
  return uVar7;
}



// FUNCTION 1443f987e FUN_1443f987e body=1277 status=ok
// SIG undefined FUN_1443f987e(void)

undefined4
FUN_1443f987e(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,longlong *param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined2 *puVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined **local_c8;
  longlong local_c0;
  char local_b8;
  undefined **local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_70;
  undefined2 local_68;
  undefined6 uStack_66;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar6 = (**(code **)(*(longlong *)*param_6 + 0x50))((longlong *)*param_6,param_7);
  if (iVar6 != 7) {
LAB_1443f99af:
    uVar7 = 0;
    goto LAB_1443f9a25;
  }
  puVar9 = *(undefined **)(param_2 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_e8 = FUN_1446ddbd2();
    local_e0 = FUN_1403a682c;
    local_f0 = 0;
    local_f8 = (undefined2 *)0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  if (DAT_14c952a10 == 0) {
    bVar11 = puVar9 != (undefined *)0x0;
    if (puVar9 != &DAT_14c952a08 && bVar11) {
      do {
        puVar9 = *(undefined **)(puVar9 + 0x30);
        bVar11 = puVar9 != (undefined *)0x0;
        if (puVar9 == &DAT_14c952a08) break;
      } while (puVar9 != (undefined *)0x0);
    }
    if (!bVar11) goto LAB_1443f99af;
  }
  else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) == 0) goto LAB_1443f99af;
  (**(code **)(*(longlong *)*param_6 + 0x88))((longlong *)*param_6,&local_70,param_7);
  if (param_2 == 0) {
LAB_1443f9a01:
    uVar7 = 0;
  }
  else {
    puVar9 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_1403a682c;
      local_f0 = 0;
      local_f8 = (undefined2 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar11 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c952a08 && bVar11) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar11 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c952a08) break;
        } while (puVar9 != (undefined *)0x0);
      }
      if (bVar11) goto LAB_1443f99e7;
      goto LAB_1443f9a01;
    }
    if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) == 0) goto LAB_1443f9a01;
LAB_1443f99e7:
    if (DAT_14cbf6550 == 0) {
      uVar8 = FUN_14596ec61();
      DAT_14cbf6550 = FUN_140002ddd(FUN_146673262,uVar8,L"WebJSFunction");
    }
    plVar3 = local_70;
    if (*(longlong *)(param_2 + 0x70) != DAT_14cbf6550) goto LAB_1443f9a01;
    local_88 = 0;
    uStack_80 = 0;
    FUN_14901fe1a(&local_c8,&DAT_14ba6b1c5);
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_b0,&local_c8);
    puVar10 = &local_68;
    FUN_149021a64(&local_b0,puVar10);
    if (7 < local_50) {
      puVar10 = (undefined2 *)CONCAT62(uStack_66,local_68);
    }
    FUN_140056680(local_98,puVar10);
    cVar5 = FUN_140b10a34(local_98,&local_88);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (7 < local_50) {
      FUN_14600850e(&local_68,CONCAT62(uStack_66,local_68));
    }
    local_58 = 0;
    local_50 = 7;
    local_68 = 0;
    local_b0 = &PTR_FUN_14ba6d600;
    if (local_a8 != 0) {
      if ((local_a0 == '\x01') && (cef_string_utf16_clear(), local_a8 != 0)) {
        FUN_1400020a8();
      }
      local_a8 = 0;
      local_a0 = '\0';
    }
    local_c8 = &PTR_FUN_14ba6d600;
    if (((local_c0 != 0) && (local_b8 == '\x01')) && (cef_string_utf16_clear(), local_c0 != 0)) {
      FUN_1400020a8();
    }
    if (cVar5 == '\0') goto LAB_1443f9a01;
    local_d8 = *param_1;
    local_d0 = param_1[1];
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
    }
    FUN_149036c00(&local_68,&local_d8,&local_88);
    local_f8 = &local_68;
    uVar7 = FUN_1443fa0ab(param_2,param_3,param_4,param_5);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*(longlong *)((longlong)local_70 + (longlong)*(int *)(local_70[1] + 4) + 8) + 8))()
    ;
  }
LAB_1443f9a25:
  plVar3 = (longlong *)param_1[1];
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
  lVar4 = *param_6;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1443f9d7c FUN_1443f9d7c body=127 status=ok
// SIG undefined FUN_1443f9d7c(void)

uint FUN_1443f9d7c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  
  iVar3 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  if (iVar3 == 4) {
    dVar5 = (double)(**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,param_2);
    uVar4 = (uint)dVar5;
  }
  else if (iVar3 == 3) {
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x68))((longlong *)*param_1,param_2);
  }
  else {
    uVar4 = 0;
    if (iVar3 == 2) {
      bVar2 = (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,param_2);
      uVar4 = (uint)bVar2;
    }
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  return uVar4;
}



// FUNCTION 1443f9dfb FUN_1443f9dfb body=604 status=ok
// SIG undefined FUN_1443f9dfb(void)

longlong FUN_1443f9dfb(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  void *_Dst;
  size_t _Size;
  ulonglong uVar9;
  longlong lVar10;
  undefined *puVar11;
  bool bVar12;
  
  if (param_2 == 0) {
LAB_1443f9f11:
    if ((int)param_1[6] <= param_4) {
      return 0;
    }
    return (longlong)param_4 * (longlong)*(int *)((longlong)param_1 + 0x34) +
           param_3 + *(int *)((longlong)param_1 + 0x44);
  }
  puVar11 = *(undefined **)(param_2 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0,0x208001,0,&DAT_14c951a38,
                  FUN_140b31576);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar12 = puVar11 != (undefined *)0x0;
    if (puVar11 != &DAT_14c951a90 && bVar12) {
      do {
        puVar11 = *(undefined **)(puVar11 + 0x30);
        bVar12 = puVar11 != (undefined *)0x0;
        if (puVar11 == &DAT_14c951a90) break;
      } while (puVar11 != (undefined *)0x0);
    }
    if (!bVar12) goto LAB_1443f9f11;
  }
  else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a98) == 0) goto LAB_1443f9f11;
  if (*(longlong **)(param_2 + 0x78) != param_1) {
    return 0;
  }
  lVar10 = (longlong)*(int *)(param_2 + 0x44);
  puVar1 = (ulonglong *)(param_3 + lVar10);
  bVar2 = *(byte *)(param_2 + 0x70);
  uVar7 = (**(code **)(**(longlong **)(param_2 + 0x78) + 0x178))();
  plVar6 = *(longlong **)(param_2 + 0x78);
  iVar3 = *(int *)((longlong)plVar6 + 0x34);
  _Size = (size_t)iVar3;
  iVar4 = *(int *)(param_3 + 8 + lVar10);
  iVar8 = iVar4 + 1;
  *(int *)(param_3 + 8 + lVar10) = iVar8;
  iVar5 = *(int *)(param_3 + 0xc + lVar10);
  if ((bVar2 & 1) == 0) {
    if (iVar5 <= iVar4) {
      FUN_14097bbd2(puVar1,iVar4,iVar3,uVar7);
      iVar8 = (int)puVar1[1];
    }
    if (iVar8 == 0) {
LAB_1443fa050:
      _Dst = (void *)0x0;
      goto LAB_1443f9ec4;
    }
    uVar9 = *puVar1;
  }
  else {
    if (iVar5 <= iVar4) {
      FUN_1468c03c2(puVar1,iVar4,iVar3,uVar7);
      iVar8 = (int)puVar1[1];
    }
    if (iVar8 == 0) goto LAB_1443fa050;
    uVar9 = *puVar1;
    if ((uVar9 & 1) != 0) {
      uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar1;
    }
  }
  _Dst = (void *)((longlong)iVar4 * _Size + uVar9);
LAB_1443f9ec4:
  if ((*(byte *)((longlong)plVar6 + 0x39) & 2) == 0) {
    (**(code **)(*plVar6 + 0x160))(plVar6);
  }
  else {
    memset(_Dst,0,_Size);
  }
  if ((int)puVar1[1] == 0) {
    return 0;
  }
  if ((bVar2 & 1) == 0) {
    uVar9 = *puVar1;
  }
  else {
    uVar9 = *puVar1;
    if ((uVar9 & 1) != 0) {
      uVar9 = (longlong)puVar1 + ((longlong)uVar9 >> 0x18);
    }
  }
  return (longlong)iVar4 * _Size + uVar9;
}



// FUNCTION 1443fa057 FUN_1443fa057 body=84 status=ok
// SIG undefined FUN_1443fa057(void)

undefined8 FUN_1443fa057(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *in_stack_00000028;
  
  plVar3 = (longlong *)FUN_1443f9dfb();
  uVar4 = 0;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = (longlong *)*in_stack_00000028;
    plVar2 = (longlong *)*plVar3;
    if (plVar2 != plVar1) {
      *plVar3 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    uVar4 = (ulonglong)*(uint *)(in_stack_00000028 + 1);
    *(uint *)(plVar3 + 1) = *(uint *)(in_stack_00000028 + 1);
  }
  return CONCAT71((int7)(uVar4 >> 8),plVar3 != (longlong *)0x0);
}



// FUNCTION 1443fa0ab FUN_1443fa0ab body=89 status=ok
// SIG undefined FUN_1443fa0ab(void)

bool FUN_1443fa0ab(void)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *in_stack_00000028;
  
  puVar5 = (undefined8 *)FUN_1443f9dfb();
  if (puVar5 != (undefined8 *)0x0) {
    uVar2 = *in_stack_00000028;
    lVar3 = in_stack_00000028[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)puVar5[1];
    *puVar5 = uVar2;
    puVar5[1] = lVar3;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    uVar2 = in_stack_00000028[3];
    puVar5[2] = in_stack_00000028[2];
    puVar5[3] = uVar2;
  }
  return puVar5 != (undefined8 *)0x0;
}



// FUNCTION 1443fa104 FUN_1443fa104 body=722 status=ok
// SIG undefined FUN_1443fa104(void)

undefined8
FUN_1443fa104(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  undefined **local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    puVar9 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
      FUN_14475b26a();
      local_70 = FUN_1459738d6;
      local_78 = &DAT_14c9520b8;
      local_80 = 0;
      local_88 = 0x1408001;
      FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
      atexit(FUN_142816fda);
      _Init_thread_footer(&DAT_14c952268);
    }
    if (DAT_14c952220 == 0) {
      bVar11 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c952218 && bVar11) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar11 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c952218) break;
        } while (puVar9 != (undefined *)0x0);
      }
      if (bVar11) {
LAB_1443fa1c2:
        local_60 = &PTR_FUN_14ba6d600;
        local_58 = 0;
        local_50 = '\0';
        puVar1 = (undefined8 *)param_6[1];
        uVar8 = 0;
        uVar7 = 0;
        if (puVar1 != (undefined8 *)0x0) {
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
        }
        FUN_149048250(&local_60,uVar7,uVar8,1);
        plVar2 = (longlong *)*param_5;
        if (plVar2 != (longlong *)0x0) {
          (*(code *)**(undefined8 **)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8))();
        }
        iVar5 = (**(code **)(*plVar2 + 0x58))(plVar2,&local_60);
        if (iVar5 == 4) {
          dVar12 = (double)(**(code **)(*plVar2 + 0x78))(plVar2,&local_60);
          uVar10 = (ulonglong)dVar12;
        }
        else if (iVar5 == 3) {
          iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_60);
          uVar10 = (ulonglong)iVar5;
        }
        else if (iVar5 == 2) {
          bVar4 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_60);
          uVar10 = (ulonglong)bVar4;
        }
        else {
          uVar10 = 0;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*(longlong *)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8) + 8))
                    ();
        }
        local_60 = &PTR_FUN_14ba6d600;
        if (local_58 != 0) {
          if ((local_50 == '\x01') && (cef_string_utf16_clear(), local_58 != 0)) {
            FUN_1400020a8();
          }
          local_58 = 0;
          local_50 = '\0';
        }
        puVar6 = (ulonglong *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
        if (puVar6 == (ulonglong *)0x0) {
          uVar7 = 0;
        }
        else {
          *puVar6 = uVar10;
          uVar7 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
        }
        goto LAB_1443fa2fc;
      }
    }
    else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952220) != 0) goto LAB_1443fa1c2;
  }
  uVar7 = 0;
LAB_1443fa2fc:
  lVar3 = *param_5;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  *param_6 = &PTR_FUN_14ba6d600;
  FUN_149046764(param_6);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1443fa3d7 FUN_1443fa3d7 body=555 status=ok
// SIG undefined FUN_1443fa3d7(void)

undefined8
FUN_1443fa3d7(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined **local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    lVar9 = *(longlong *)(param_1 + 8);
    lVar5 = FUN_140e98e1a();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar10 = lVar9 != 0;
      if (lVar9 != lVar5 && bVar10) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar10 = lVar9 != 0;
          if (lVar9 == lVar5) break;
        } while (lVar9 != 0);
      }
      if (bVar10) {
LAB_1443fa4c4:
        local_60 = &PTR_FUN_14ba6d600;
        local_58 = 0;
        local_50 = '\0';
        puVar1 = (undefined8 *)param_6[1];
        uVar8 = 0;
        uVar7 = 0;
        if (puVar1 != (undefined8 *)0x0) {
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
        }
        FUN_149048250(&local_60,uVar7,uVar8,1);
        plVar2 = (longlong *)*param_5;
        if (plVar2 != (longlong *)0x0) {
          (*(code *)**(undefined8 **)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8))();
        }
        iVar4 = (**(code **)(*plVar2 + 0x58))(plVar2,&local_60);
        if (iVar4 == 4) {
          dVar11 = (double)(**(code **)(*plVar2 + 0x78))(plVar2,&local_60);
          local_64 = (uint)dVar11;
        }
        else if (iVar4 == 3) {
          local_64 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_60);
        }
        else if (iVar4 == 2) {
          bVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_60);
          local_64 = (uint)bVar3;
        }
        else {
          local_64 = 0;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*(longlong *)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8) + 8))
                    ();
        }
        local_60 = &PTR_FUN_14ba6d600;
        if (local_58 != 0) {
          if ((local_50 == '\x01') && (cef_string_utf16_clear(), local_58 != 0)) {
            FUN_1400020a8();
          }
          local_58 = 0;
          local_50 = '\0';
        }
        puVar6 = (undefined2 *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = (short)local_64;
          uVar7 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
          goto LAB_1443fa40d;
        }
      }
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1443fa4c4;
  }
  uVar7 = 0;
LAB_1443fa40d:
  lVar9 = *param_5;
  if (lVar9 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar9 + 8) + 4) + lVar9 + 8) + 8))();
  }
  *param_6 = &PTR_FUN_14ba6d600;
  FUN_149046764(param_6);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1443fa603 FUN_1443fa603 body=727 status=ok
// SIG undefined FUN_1443fa603(void)

undefined8
FUN_1443fa603(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  undefined **local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    puVar10 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
      FUN_14475b26a();
      local_70 = FUN_1468e122c;
      local_78 = &DAT_14c9520b8;
      local_80 = 0;
      local_88 = 0x1008801;
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
    if (DAT_14c9522d0 == 0) {
      bVar11 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c9522c8 && bVar11) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c9522c8) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (bVar11) {
LAB_1443fa71e:
        local_60 = &PTR_FUN_14ba6d600;
        local_58 = 0;
        local_50 = '\0';
        puVar2 = (undefined8 *)param_6[1];
        uVar9 = 0;
        uVar8 = 0;
        if (puVar2 != (undefined8 *)0x0) {
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
        }
        FUN_149048250(&local_60,uVar8,uVar9,1);
        plVar3 = (longlong *)*param_5;
        if (plVar3 != (longlong *)0x0) {
          (*(code *)**(undefined8 **)((longlong)plVar3 + (longlong)*(int *)(plVar3[1] + 4) + 8))();
        }
        iVar5 = (**(code **)(*plVar3 + 0x58))(plVar3,&local_60);
        if (iVar5 == 4) {
          dVar12 = (double)(**(code **)(*plVar3 + 0x78))(plVar3,&local_60);
          uVar6 = (uint)(longlong)dVar12;
        }
        else if (iVar5 == 3) {
          uVar6 = (**(code **)(*plVar3 + 0x70))(plVar3,&local_60);
        }
        else {
          uVar6 = 0;
          if (iVar5 == 2) {
            bVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_60);
            uVar6 = (uint)bVar4;
          }
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)((longlong)plVar3 + (longlong)*(int *)(plVar3[1] + 4) + 8) + 8))
                    ();
        }
        local_60 = &PTR_FUN_14ba6d600;
        if (local_58 != 0) {
          if ((local_50 == '\x01') && (cef_string_utf16_clear(), local_58 != 0)) {
            FUN_1400020a8();
          }
          local_58 = 0;
          local_50 = '\0';
        }
        puVar7 = (uint *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
        if (puVar7 != (uint *)0x0) {
          *puVar7 = uVar6;
          uVar8 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
          goto LAB_1443fa639;
        }
      }
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c9522d0) != 0) goto LAB_1443fa71e;
  }
  uVar8 = 0;
LAB_1443fa639:
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  *param_6 = &PTR_FUN_14ba6d600;
  FUN_149046764(param_6);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1443fa8db FUN_1443fa8db body=746 status=ok
// SIG undefined FUN_1443fa8db(void)

undefined8
FUN_1443fa8db(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  undefined **local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    puVar10 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
      FUN_14475b26a();
      local_70 = FUN_1468e12e4;
      local_78 = &DAT_14c9520b8;
      local_80 = 0;
      local_88 = 0x1008201;
      FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
      atexit(FUN_142817061);
      _Init_thread_footer(&DAT_14c952370);
    }
    if (DAT_14c952328 == 0) {
      bVar11 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c952320 && bVar11) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c952320) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (bVar11) {
LAB_1443fa999:
        local_60 = &PTR_FUN_14ba6d600;
        local_58 = 0;
        local_50 = '\0';
        puVar1 = (undefined8 *)param_6[1];
        uVar9 = 0;
        uVar7 = 0;
        if (puVar1 != (undefined8 *)0x0) {
          uVar7 = *puVar1;
          uVar9 = puVar1[1];
        }
        FUN_149048250(&local_60,uVar7,uVar9,1);
        plVar2 = (longlong *)*param_5;
        if (plVar2 != (longlong *)0x0) {
          (*(code *)**(undefined8 **)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8))();
        }
        iVar5 = (**(code **)(*plVar2 + 0x58))(plVar2,&local_60);
        if (iVar5 == 4) {
          dVar12 = (double)(**(code **)(*plVar2 + 0x78))(plVar2,&local_60);
          uVar8 = (longlong)(dVar12 - 9.223372036854776e+18) & (longlong)dVar12 >> 0x3f |
                  (longlong)dVar12;
        }
        else if (iVar5 == 3) {
          iVar5 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_60);
          uVar8 = (ulonglong)iVar5;
        }
        else if (iVar5 == 2) {
          bVar4 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_60);
          uVar8 = (ulonglong)bVar4;
        }
        else {
          uVar8 = 0;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*(longlong *)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8) + 8))
                    ();
        }
        local_60 = &PTR_FUN_14ba6d600;
        if (local_58 != 0) {
          if ((local_50 == '\x01') && (cef_string_utf16_clear(), local_58 != 0)) {
            FUN_1400020a8();
          }
          local_58 = 0;
          local_50 = '\0';
        }
        puVar6 = (ulonglong *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
        if (puVar6 == (ulonglong *)0x0) {
          uVar7 = 0;
        }
        else {
          *puVar6 = uVar8;
          uVar7 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
        }
        goto LAB_1443faaeb;
      }
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c952328) != 0) goto LAB_1443fa999;
  }
  uVar7 = 0;
LAB_1443faaeb:
  lVar3 = *param_5;
  if (lVar3 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar3 + 8) + 4) + lVar3 + 8) + 8))();
  }
  *param_6 = &PTR_FUN_14ba6d600;
  FUN_149046764(param_6);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1443fabc6 FUN_1443fabc6 body=733 status=ok
// SIG undefined FUN_1443fabc6(void)

undefined8
FUN_1443fabc6(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  double dVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  undefined **local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    puVar9 = *(undefined8 **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      local_80 = FUN_1408a629c;
      local_88 = &DAT_14c9520b8;
      local_90 = 0;
      local_98 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (DAT_14c952380 == 0) {
      bVar10 = puVar9 != (undefined8 *)0x0;
      if (puVar9 != &DAT_14c952378 && bVar10) {
        do {
          puVar9 = (undefined8 *)puVar9[6];
          bVar10 = puVar9 != (undefined8 *)0x0;
          if (puVar9 == &DAT_14c952378) break;
        } while (puVar9 != (undefined8 *)0x0);
      }
      if (bVar10) {
LAB_1443faceb:
        local_78 = &PTR_FUN_14ba6d600;
        local_70 = 0;
        local_68 = '\0';
        puVar9 = (undefined8 *)param_6[1];
        uVar8 = 0;
        uVar7 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar7 = *puVar9;
          uVar8 = puVar9[1];
        }
        FUN_149048250(&local_78,uVar7,uVar8,1);
        plVar2 = (longlong *)*param_5;
        if (plVar2 != (longlong *)0x0) {
          (*(code *)**(undefined8 **)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8))();
        }
        iVar4 = (**(code **)(*plVar2 + 0x58))(plVar2,&local_78);
        if (iVar4 == 4) {
          dVar11 = (double)(**(code **)(*plVar2 + 0x78))(plVar2,&local_78);
          fVar12 = (float)dVar11;
        }
        else {
          if (iVar4 == 3) {
            uVar5 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_78);
          }
          else {
            fVar12 = 0.0;
            if (iVar4 != 2) goto LAB_1443fada9;
            bVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_78);
            uVar5 = (uint)bVar3;
          }
          fVar12 = (float)(int)uVar5;
        }
LAB_1443fada9:
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*(longlong *)((longlong)plVar2 + (longlong)*(int *)(plVar2[1] + 4) + 8) + 8))
                    ();
        }
        local_78 = &PTR_FUN_14ba6d600;
        if (local_70 != 0) {
          if ((local_68 == '\x01') && (cef_string_utf16_clear(), local_70 != 0)) {
            FUN_1400020a8();
          }
          local_70 = 0;
          local_68 = '\0';
        }
        pfVar6 = (float *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
        if (pfVar6 != (float *)0x0) {
          *pfVar6 = fVar12;
          uVar7 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
          goto LAB_1443fac01;
        }
      }
    }
    else if ((puVar9[3] & DAT_14c952380) != 0) goto LAB_1443faceb;
  }
  uVar7 = 0;
LAB_1443fac01:
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  *param_6 = &PTR_FUN_14ba6d600;
  FUN_149046764(param_6);
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1443faea4 FUN_1443faea4 body=742 status=ok
// SIG undefined FUN_1443faea4(void)

undefined8
FUN_1443faea4(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             longlong *param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  double *pdVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  undefined **local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    puVar10 = *(undefined **)(param_1 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      FUN_14475b26a();
      local_80 = FUN_14079c5e4;
      local_88 = &DAT_14c9520b8;
      local_98 = 0x101008001;
      local_90 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    if (DAT_14c9523d8 == 0) {
      bVar11 = puVar10 != (undefined *)0x0;
      if (puVar10 != &DAT_14c9523d0 && bVar11) {
        do {
          puVar10 = *(undefined **)(puVar10 + 0x30);
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 == &DAT_14c9523d0) break;
        } while (puVar10 != (undefined *)0x0);
      }
      if (bVar11) {
LAB_1443fafca:
        local_78 = &PTR_FUN_14ba6d600;
        local_70 = 0;
        local_68 = '\0';
        puVar2 = (undefined8 *)param_6[1];
        uVar9 = 0;
        uVar8 = 0;
        if (puVar2 != (undefined8 *)0x0) {
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
        }
        FUN_149048250(&local_78,uVar8,uVar9,1);
        plVar3 = (longlong *)*param_5;
        if (plVar3 != (longlong *)0x0) {
          (*(code *)**(undefined8 **)((longlong)plVar3 + (longlong)*(int *)(plVar3[1] + 4) + 8))();
        }
        iVar5 = (**(code **)(*plVar3 + 0x58))(plVar3,&local_78);
        if (iVar5 == 4) {
          dVar12 = (double)(**(code **)(*plVar3 + 0x78))(plVar3,&local_78);
        }
        else {
          if (iVar5 == 3) {
            uVar6 = (**(code **)(*plVar3 + 0x70))(plVar3,&local_78);
          }
          else {
            dVar12 = 0.0;
            if (iVar5 != 2) goto LAB_1443fb089;
            bVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_78);
            uVar6 = (uint)bVar4;
          }
          dVar12 = (double)(int)uVar6;
        }
LAB_1443fb089:
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)((longlong)plVar3 + (longlong)*(int *)(plVar3[1] + 4) + 8) + 8))
                    ();
        }
        local_78 = &PTR_FUN_14ba6d600;
        if (local_70 != 0) {
          if ((local_68 == '\x01') && (cef_string_utf16_clear(), local_70 != 0)) {
            FUN_1400020a8();
          }
          local_70 = 0;
          local_68 = '\0';
        }
        pdVar7 = (double *)FUN_1443f9dfb(param_1,param_2,param_3,param_4 & 0xffffffff);
        if (pdVar7 != (double *)0x0) {
          *pdVar7 = dVar12;
          uVar8 = CONCAT71((uint7)(param_4 >> 8) & 0xffffff,1);
          goto LAB_1443faee0;
        }
      }
    }
    else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c9523d8) != 0) goto LAB_1443fafca;
  }
  uVar8 = 0;
LAB_1443faee0:
  lVar1 = *param_5;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  *param_6 = &PTR_FUN_14ba6d600;
  FUN_149046764(param_6);
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1443fb18b FUN_1443fb18b body=1289 status=ok
// SIG undefined FUN_1443fb18b(void)

undefined4
FUN_1443fb18b(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,longlong *param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined2 *puVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined **local_c8;
  longlong local_c0;
  char local_b8;
  undefined **local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_70;
  undefined2 local_68;
  undefined6 uStack_66;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar6 = (**(code **)(*(longlong *)*param_6 + 0x58))((longlong *)*param_6,param_7);
  if (iVar6 == 7) {
    puVar9 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      local_e8 = FUN_1446ddbd2();
      local_e0 = FUN_1403a682c;
      local_f0 = 0;
      local_f8 = (undefined2 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar11 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c952a08 && bVar11) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar11 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c952a08) break;
        } while (puVar9 != (undefined *)0x0);
      }
      if (bVar11) {
LAB_1443fb2e3:
        (**(code **)(*(longlong *)*param_6 + 0x90))((longlong *)*param_6,&local_70,param_7);
        if (param_2 == 0) {
LAB_1443fb300:
          uVar7 = 0;
        }
        else {
          puVar9 = *(undefined **)(param_2 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
            local_e8 = FUN_1446ddbd2();
            local_e0 = FUN_1403a682c;
            local_f0 = 0;
            local_f8 = (undefined2 *)0x108001;
            FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
            atexit(FUN_142818c9e);
            _Init_thread_footer(&DAT_14c952a58);
          }
          if (DAT_14c952a10 != 0) {
            if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) != 0) goto LAB_1443fb3a8;
            goto LAB_1443fb300;
          }
          bVar11 = puVar9 != (undefined *)0x0;
          if (puVar9 != &DAT_14c952a08 && bVar11) {
            do {
              puVar9 = *(undefined **)(puVar9 + 0x30);
              bVar11 = puVar9 != (undefined *)0x0;
              if (puVar9 == &DAT_14c952a08) break;
            } while (puVar9 != (undefined *)0x0);
          }
          if (!bVar11) goto LAB_1443fb300;
LAB_1443fb3a8:
          if (DAT_14cbf6550 == 0) {
            uVar8 = FUN_14596ec61();
            DAT_14cbf6550 = FUN_140002ddd(FUN_146673262,uVar8,L"WebJSFunction");
          }
          plVar3 = local_70;
          if (*(longlong *)(param_2 + 0x70) != DAT_14cbf6550) goto LAB_1443fb300;
          local_88 = 0;
          uStack_80 = 0;
          FUN_14901fe1a(&local_c8,&DAT_14ba6b1c5);
          (**(code **)(*plVar3 + 0x80))(plVar3,&local_b0,&local_c8);
          puVar10 = &local_68;
          FUN_149021a64(&local_b0,puVar10);
          if (7 < local_50) {
            puVar10 = (undefined2 *)CONCAT62(uStack_66,local_68);
          }
          FUN_140056680(local_98,puVar10);
          cVar5 = FUN_140b10a34(local_98,&local_88);
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
          if (7 < local_50) {
            FUN_14600850e(&local_68,CONCAT62(uStack_66,local_68));
          }
          local_58 = 0;
          local_50 = 7;
          local_68 = 0;
          local_b0 = &PTR_FUN_14ba6d600;
          if (local_a8 != 0) {
            if ((local_a0 == '\x01') && (cef_string_utf16_clear(), local_a8 != 0)) {
              FUN_1400020a8();
            }
            local_a8 = 0;
            local_a0 = '\0';
          }
          local_c8 = &PTR_FUN_14ba6d600;
          if (((local_c0 != 0) && (local_b8 == '\x01')) && (cef_string_utf16_clear(), local_c0 != 0)
             ) {
            FUN_1400020a8();
          }
          if (cVar5 == '\0') goto LAB_1443fb300;
          local_d8 = *param_1;
          local_d0 = param_1[1];
          if (local_d0 != 0) {
            LOCK();
            *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
            UNLOCK();
          }
          FUN_149036c00(&local_68,&local_d8,&local_88);
          local_f8 = &local_68;
          uVar7 = FUN_1443fa0ab(param_2,param_3,param_4,param_5);
          if (local_60 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_60 + 0x10))();
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          (**(code **)(*(longlong *)((longlong)local_70 + (longlong)*(int *)(local_70[1] + 4) + 8) +
                      8))();
        }
        goto LAB_1443fb252;
      }
    }
    else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) != 0) goto LAB_1443fb2e3;
  }
  uVar7 = 0;
LAB_1443fb252:
  plVar3 = (longlong *)param_1[1];
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
  lVar4 = *param_6;
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar4 + 8) + 4) + lVar4 + 8) + 8))();
  }
  *param_7 = &PTR_FUN_14ba6d600;
  FUN_149046764(param_7);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1443fb695 FUN_1443fb695 body=145 status=ok
// SIG undefined FUN_1443fb695(void)

uint FUN_1443fb695(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  
  iVar3 = (**(code **)(*(longlong *)*param_1 + 0x58))();
  if (iVar3 == 4) {
    dVar5 = (double)(**(code **)(*(longlong *)*param_1 + 0x78))((longlong *)*param_1,param_2);
    uVar4 = (uint)dVar5;
  }
  else if (iVar3 == 3) {
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,param_2);
  }
  else {
    uVar4 = 0;
    if (iVar3 == 2) {
      bVar2 = (**(code **)(*(longlong *)*param_1 + 0x68))((longlong *)*param_1,param_2);
      uVar4 = (uint)bVar2;
    }
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  *param_2 = &PTR_FUN_14ba6d600;
  FUN_149046764(param_2);
  return uVar4;
}



// FUNCTION 1443fb726 FUN_1443fb726 body=2056 status=ok
// SIG undefined FUN_1443fb726(void)

void FUN_1443fb726(longlong *param_1)

{
  undefined ****ppppuVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined ******ppppppuVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  uint local_164;
  longlong *local_160;
  ulonglong local_158;
  undefined2 *local_150;
  int local_148;
  undefined4 local_144;
  undefined2 *local_140;
  int local_138;
  undefined4 local_134;
  undefined **local_130;
  longlong local_128;
  char local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  longlong local_f8 [2];
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined *****local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  longlong local_a8;
  char local_a0;
  undefined *****local_98;
  longlong lStack_90;
  char local_88 [8];
  undefined **local_80;
  uint *local_78;
  uint local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar10 = *param_1;
  FUN_140056680(&local_d8,L"Accept-Language");
  FUN_14903e24e(local_f8 + 2);
  local_f8[1] = 0;
  local_f8[0] = FUN_14001cc68(0x50,0x10);
  *(longlong *)local_f8[0] = local_f8[0];
  *(longlong *)(local_f8[0] + 8) = local_f8[0];
  *(longlong *)(local_f8[0] + 0x10) = local_f8[0];
  *(undefined2 *)(local_f8[0] + 0x18) = 0x101;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_f8);
  puVar11 = local_d8;
  if (local_d0 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  FUN_1490201ba(&local_98,puVar11);
  lVar5 = FUN_149046e8a(local_f8,&local_98);
  local_98 = (undefined *****)&PTR_FUN_14ba6d600;
  if (((lStack_90 != 0) && (local_88[0] == '\x01')) && (cef_string_utf16_clear(), lStack_90 != 0)) {
    FUN_1400020a8();
  }
  if (lVar5 == local_f8[0]) {
    puVar11 = &DAT_149dfb77a;
    if (local_e0 != 0) {
      puVar11 = local_e8;
    }
    puVar13 = &DAT_149dfb77a;
    if (local_d0 != 0) {
      puVar13 = local_d8;
    }
    FUN_1490201ba(&local_98,puVar13);
    FUN_1490201ba(&local_80,puVar11);
    FUN_1490441e0(local_f8,&local_c8,&local_98);
    local_80 = &PTR_FUN_14ba6d600;
    if (local_78 != (uint *)0x0) {
      if (((char)local_70 == '\x01') && (cef_string_utf16_clear(), local_78 != (uint *)0x0)) {
        FUN_1400020a8();
      }
      local_78 = (uint *)0x0;
      local_70 = local_70 & 0xffffff00;
    }
    local_98 = (undefined *****)&PTR_FUN_14ba6d600;
    if (((lStack_90 != 0) && (local_88[0] == '\x01')) && (cef_string_utf16_clear(), lStack_90 != 0))
    {
      FUN_1400020a8();
    }
  }
  else {
    puVar11 = local_e8;
    if (local_e0 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    FUN_14903e1c6(lVar5 + 0x38,puVar11);
  }
  lVar5 = *(longlong *)(lVar10 + 0x30);
  uVar3 = 0;
  if (lVar5 != 0) {
    (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_c8);
    FUN_149021a64(&local_c8,&local_98);
    ppppppuVar15 = &local_98;
    if ((undefined **)0x7 < local_80) {
      ppppppuVar15 = (undefined ******)local_98;
    }
    FUN_140056680(&local_130,ppppppuVar15);
    uVar3 = FUN_14903f360(lVar5,&local_130);
    if (local_130 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if ((undefined **)0x7 < local_80) {
      FUN_14600850e(&local_98,local_98);
    }
    local_88[0] = '\0';
    local_88[1] = '\0';
    local_88[2] = '\0';
    local_88[3] = '\0';
    local_88[4] = '\0';
    local_88[5] = '\0';
    local_88[6] = '\0';
    local_88[7] = '\0';
    local_80 = (undefined **)0x7;
    local_98 = (undefined *****)((ulonglong)local_98 & 0xffffffffffff0000);
    local_c8 = (undefined *****)&PTR_FUN_14ba6d600;
    if (((local_c0 != 0) && ((char)local_b8 == '\x01')) && (cef_string_utf16_clear(), local_c0 != 0)
       ) {
      FUN_1400020a8();
    }
  }
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = (undefined *****)0x0;
  lStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x98))();
  local_140 = (undefined2 *)CONCAT44(local_140._4_4_,uVar4);
  FUN_14903064d(local_108);
  (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],&local_130);
  FUN_149021a64(&local_130,&local_c8);
  ppppppuVar15 = &local_c8;
  if ((undefined **)0x7 < local_b0) {
    ppppppuVar15 = (undefined ******)local_c8;
  }
  FUN_140056680(local_118,ppppppuVar15);
  local_178 = uVar3;
  FUN_149035d9c(lVar10 + 0x20,local_118,local_108,&local_98);
  if ((undefined **)0x7 < local_b0) {
    FUN_14600850e(&local_c8,local_c8);
  }
  local_b8 = 0;
  local_b0 = (undefined **)0x7;
  local_c8 = (undefined *****)((ulonglong)local_c8 & 0xffffffffffff0000);
  local_130 = &PTR_FUN_14ba6d600;
  if (((local_128 != 0) && (local_120 == '\x01')) && (cef_string_utf16_clear(), local_128 != 0)) {
    FUN_1400020a8();
  }
  local_160 = param_1;
  if (local_70 == 0) {
    uVar18 = 1;
    uVar16 = 0;
    iVar17 = 0;
    uVar6 = 0;
  }
  else {
    puVar9 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar9 = (uint *)local_88;
    }
    uVar6 = *puVar9;
    if (uVar6 == 0) {
      iVar17 = local_70 + 0x1e;
      if (-1 < (int)(local_70 + -1)) {
        iVar17 = local_70 + -1;
      }
      uVar16 = 0;
      uVar12 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar12 = uVar16;
      }
      iVar17 = 0;
      do {
        if (uVar12 == uVar16) goto LAB_1443fbe69;
        iVar17 = iVar17 + 0x20;
        uVar6 = puVar9[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar16 = 0;
      iVar17 = 0;
    }
    uVar18 = (ulonglong)(-uVar6 & uVar6);
    uVar12 = uVar18 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar6 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if ((int)local_70 <= (int)uVar6) {
      uVar6 = local_70;
    }
  }
  if ((int)uVar6 < (int)local_70) {
    uVar19 = 0xffffffff;
    do {
      lVar10 = (longlong)(int)uVar6;
      local_140 = (undefined2 *)0x0;
      local_138 = *(int *)(local_98 + lVar10 * 5 + 1);
      lVar5 = (longlong)local_138;
      ppppuVar1 = local_98[lVar10 * 5];
      local_164 = uVar19;
      local_158 = uVar16;
      if (lVar5 == 0) {
        local_134 = 0;
      }
      else {
        FUN_1446dd670(&local_140,local_138,0);
        memcpy(local_140,ppppuVar1,lVar5 * 2);
      }
      local_150 = (undefined2 *)0x0;
      local_148 = *(int *)(local_98 + lVar10 * 5 + 3);
      lVar5 = (longlong)local_148;
      ppppuVar1 = local_98[lVar10 * 5 + 2];
      if (lVar5 == 0) {
        local_144 = 0;
LAB_1443fbccb:
        puVar11 = &DAT_149dfb77a;
      }
      else {
        FUN_1446dd670(&local_150,local_148,0);
        memcpy(local_150,ppppuVar1,lVar5 * 2);
        puVar11 = local_150;
        if (local_148 == 0) goto LAB_1443fbccb;
      }
      puVar13 = &DAT_149dfb77a;
      if (local_138 != 0) {
        puVar13 = local_140;
      }
      FUN_1490201ba(&local_c8,puVar13);
      FUN_1490201ba(&local_b0,puVar11);
      FUN_1490441e0(local_f8,&local_130);
      uVar16 = local_158;
      uVar19 = local_164;
      local_b0 = &PTR_FUN_14ba6d600;
      if (local_a8 != 0) {
        if ((local_a0 == '\x01') && (cef_string_utf16_clear(), local_a8 != 0)) {
          FUN_1400020a8();
        }
        local_a8 = 0;
        local_a0 = '\0';
      }
      local_c8 = (undefined *****)&PTR_FUN_14ba6d600;
      if (((local_c0 != 0) && ((char)local_b8 == '\x01')) &&
         (cef_string_utf16_clear(), local_c0 != 0)) {
        FUN_1400020a8();
      }
      if (local_150 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_140 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar19 = uVar19 & ~(uint)uVar18;
      puVar9 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar9 = (uint *)local_88;
      }
      iVar14 = (int)uVar16;
      lVar10 = (longlong)iVar14;
      uVar6 = puVar9[lVar10] & uVar19;
      if (uVar6 == 0) {
        iVar7 = local_70 + 0x1e;
        if (-1 < (int)(local_70 + -1)) {
          iVar7 = local_70 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar14) {
          iVar8 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar5 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar6 = puVar9[lVar10 + lVar5 + 1];
          if (uVar6 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar8 - lVar10 == lVar5) goto LAB_1443fbe69;
        }
        uVar16 = (ulonglong)(iVar14 + (int)lVar5 + 1);
        uVar19 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar6 & uVar6);
      uVar12 = uVar18 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar6 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while ((int)uVar6 < (int)local_70);
  }
LAB_1443fbe69:
  plVar2 = local_160;
  (**(code **)(*(longlong *)local_160[1] + 0x58))((longlong *)local_160[1],local_f8);
  (*(code *)**(undefined8 **)plVar2[2])((undefined8 *)plVar2[2],1);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_98);
  FUN_149041800(*(undefined8 *)(local_f8[0] + 8));
  FUN_1400020a8(local_f8[0]);
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443fbf30 FUN_1443fbf30 body=111 status=ok
// SIG undefined FUN_1443fbf30(void)

longlong FUN_1443fbf30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ba6d780;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(param_2 + 0x20) = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_2 + 0x28) = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  return param_2 + 0x18;
}



// FUNCTION 1443fbfb2 FUN_1443fbfb2 body=103 status=ok
// SIG undefined FUN_1443fbfb2(void)

undefined8 * FUN_1443fbfb2(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6d780;
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443fc019 FUN_1443fc019 body=38 status=ok
// SIG undefined FUN_1443fc019(void)

void FUN_1443fc019(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1443f7668(param_1);
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1443fc080 FUN_1443fc080 body=29 status=ok
// SIG undefined FUN_1443fc080(void)

undefined8 FUN_1443fc080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443fc0b8 FUN_1443fc0b8 body=80 status=ok
// SIG undefined FUN_1443fc0b8(void)

longlong FUN_1443fc0b8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ba6d8b0;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_2 + 0x18) = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8))();
  }
  *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_1 + 0x10);
  return param_2 + 0x18;
}



// FUNCTION 1443fc11a FUN_1443fc11a body=73 status=ok
// SIG undefined FUN_1443fc11a(void)

undefined8 * FUN_1443fc11a(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ba6d8b0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(*(int *)(*(longlong *)(lVar1 + 8) + 4) + lVar1 + 8) + 8))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443fc164 FUN_1443fc164 body=516 status=ok
// SIG undefined FUN_1443fc164(void)

void FUN_1443fc164(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  int local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  int *local_58;
  longlong *local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)*param_1;
  if ((plVar6 != (longlong *)0x0) &&
     (iVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,1,0x10), iVar4 == 0)) {
    local_38 = 0;
    local_2c = 1;
    local_34 = (int)param_1[3];
    local_40 = (int)param_1[2];
    local_3c = *(int *)((longlong)param_1 + 0x14);
    local_30 = *(int *)((longlong)param_1 + 0x1c);
    if ((local_30 - local_3c) * (local_34 - local_40) < 1) {
      local_40 = 0;
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)param_1[1] + 8))();
      local_34 = (**(code **)*puVar5)(puVar5);
      local_3c = 0;
      plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 8))();
      local_30 = (**(code **)(*plVar6 + 8))(plVar6);
    }
    local_48 = (longlong *)0x0;
    plVar6 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x3b8))();
    (**(code **)(*plVar6 + 0x140))(plVar6,&local_48);
    lVar10 = param_1[1] + -0x10;
    if (param_1[1] == 0) {
      lVar10 = 0;
    }
    plVar6 = *(longlong **)(lVar10 + 8);
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,0);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      puVar1 = (uint *)(plVar6 + 1);
      if (*(char *)((longlong)plVar6 + 0x52) == '\0') {
        uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
        local_68 = param_1[4];
        local_58 = &local_40;
        local_70 = local_38;
        local_78 = local_3c;
        local_60 = 0;
        (**(code **)(*local_48 + 0x170))(local_48,uVar7,0,local_40);
      }
      (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,0);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)plVar6 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = (longlong)plVar6;
          plVar6 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar11) {
                plVar6 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c8;
              plVar6 = plVar8;
              if (bVar11) {
                plVar9 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443fc37a FUN_1443fc37a body=29 status=ok
// SIG undefined FUN_1443fc37a(void)

void FUN_1443fc37a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443fc398 FUN_1443fc398 body=58 status=ok
// SIG undefined FUN_1443fc398(void)

undefined8 * FUN_1443fc398(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba6d8d0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443fc3fa FUN_1443fc3fa body=282 status=ok
// SIG undefined FUN_1443fc3fa(void)

undefined8 * FUN_1443fc3fa(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1443fc3d2);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1443fc514 FUN_1443fc514 body=93 status=ok
// SIG undefined FUN_1443fc514(void)

void FUN_1443fc514(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1443fc164(param_1 + 0x15);
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001443fc567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1443fc572 FUN_1443fc572 body=29 status=ok
// SIG undefined FUN_1443fc572(void)

undefined8 FUN_1443fc572(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443fc5a4 FUN_1443fc5a4 body=93 status=ok
// SIG undefined FUN_1443fc5a4(void)

void FUN_1443fc5a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba6e770;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1443fc602 FUN_1443fc602 body=93 status=ok
// SIG undefined FUN_1443fc602(void)

void FUN_1443fc602(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba6e770;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1443fc660 FUN_1443fc660 body=126 status=ok
// SIG undefined FUN_1443fc660(void)

void FUN_1443fc660(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba6e770;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443fc6cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443fc71c FUN_1443fc71c body=29 status=ok
// SIG undefined FUN_1443fc71c(void)

undefined8 FUN_1443fc71c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443fc739 FUN_1443fc739 body=258 status=ok
// SIG undefined FUN_1443fc739(void)

void FUN_1443fc739(void)

{
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cbf6258,L"r.CEFGPUAcceleration",&DAT_14c7649b8,
                L"Enables GPU acceleration in CEF\n");
  atexit(FUN_1443f21bc);
  FUN_140056680(&DAT_14cbf6268,L"X-GET-CUSTOM-CONTENT");
  atexit((_func_5014 *)&LAB_1443f243e);
  FUN_140056680(&DAT_14cbf64c8,L"ExecuteUObjectMethod");
  atexit((_func_5014 *)&LAB_1443f48cc);
  local_28 = 0x800000014ba6be20;
  local_14 = 10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14667310a(&local_28);
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 3;
  FUN_14282b410(L"/Script/WebBrowser",0,0,&PTR_FUN_14ba6c630);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443fc83c FUN_1443fc83c body=1326 status=ok
// SIG undefined FUN_1443fc83c(void)

ulonglong FUN_1443fc83c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined1 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  code *local_a0;
  undefined4 local_98;
  longlong *local_90;
  int local_88;
  longlong local_80 [2];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar7 = (longlong *)(param_1 + 0x18);
  local_50 = param_2;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x10);
    uVar8 = (uint)param_2 & 0xffff;
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar9 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar8) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar5 = *plVar7 + (longlong)iVar9 * 0x68;
        if (*(longlong *)(*plVar7 + (longlong)iVar9 * 0x68) == param_2) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) goto LAB_1443fc99e;
          break;
        }
        iVar9 = *(int *)(lVar5 + 0x60);
      } while (iVar9 != -1);
    }
  }
  plVar6 = (longlong *)FUN_1401e3228(&local_50);
  if (plVar6 == (longlong *)0x0) {
LAB_1443fc99e:
    uVar12 = 0;
    goto LAB_1443fc9a0;
  }
  (**(code **)(*plVar6 + 0x80))(plVar6,&local_60);
  (**(code **)(*plVar6 + 0x70))(plVar6,&local_70);
  bVar11 = local_70 != (longlong *)0x0 && local_60 != (longlong *)0x0;
  uVar12 = CONCAT71((int7)((ulonglong)plVar6 >> 8),bVar11);
  if (bVar11) {
    FUN_1400021e4(&local_50,&local_90);
    plVar6 = local_90;
    if (local_88 == 0) {
      plVar6 = (longlong *)&DAT_149dfb77a;
    }
    FUN_140002266(local_80,L"LoginFlowContext_%s",plVar6);
    if (local_90 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_90 = &local_50;
    FUN_14905bacc(plVar7,&local_a0);
    lVar3 = *plVar7;
    lVar10 = (longlong)(int)local_a0 * 0x68;
    lVar5 = lVar3 + lVar10;
    *(longlong *)(lVar5 + 8) = local_50;
    FUN_14905bea2(lVar3 + lVar10 + 0x10,param_3);
    FUN_14905bea2(lVar3 + lVar10 + 0x30,param_4);
    plVar7 = (longlong *)FUN_14001cc68(0x58,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14ba6fb00;
    FUN_14905bf26(plVar7 + 2,local_80);
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(lVar5 + 0x48) = 0x10;
      plVar6 = *(longlong **)(lVar5 + 0x50);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(lVar5 + 0x50) = 0;
LAB_1443fcb28:
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
        if (plVar7 != (longlong *)0x0) goto LAB_1443fcb4c;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong **)(lVar5 + 0x48) = plVar7 + 2;
      plVar6 = *(longlong **)(lVar5 + 0x50);
      if (plVar7 == plVar6) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      else {
        *(longlong **)(lVar5 + 0x50) = plVar7;
        if (plVar6 != (longlong *)0x0) goto LAB_1443fcb28;
      }
LAB_1443fcb4c:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    *(undefined1 *)(*(longlong *)(lVar5 + 0x48) + 0x30) = param_5;
    *(undefined1 *)(lVar5 + 0x58) = 0;
    *(undefined1 *)(lVar5 + 0x59) = param_6;
    local_a0 = FUN_1443fcd6c;
    local_98 = 0;
    FUN_149051ff2(&local_90,param_1,&local_a0,&local_50);
    (**(code **)(*local_60 + 0xd8))(local_60,&local_a0,&local_90);
    *(code **)(lVar5 + 0x28) = local_a0;
    if (local_88 == 0) {
LAB_1443fcc04:
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,0);
      FUN_1446efa72(&local_90,0,0,0x10);
      local_88 = 0;
      goto LAB_1443fcc04;
    }
    plVar7 = local_70;
    local_a0 = FUN_1443fd0b2;
    local_98 = 0;
    FUN_14905214a(&local_90,param_1,&local_a0,&local_50);
    (**(code **)(*plVar7 + 0xd0))(plVar7,&local_a0,&local_90);
    *(code **)(lVar5 + 0x20) = local_a0;
    if (local_88 == 0) {
LAB_1443fcc99:
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,0);
      FUN_1446efa72(&local_90,0,0,0x10);
      local_88 = 0;
      goto LAB_1443fcc99;
    }
    local_a0 = FUN_1443fdab6;
    local_98 = 0;
    FUN_14905214a(&local_90,param_1,&local_a0,&local_50);
    (**(code **)(*local_70 + 0xf0))(local_70,&local_a0,&local_90);
    *(code **)(lVar5 + 0x40) = local_a0;
    if (local_88 == 0) {
LAB_1443fcd2e:
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_90 != (longlong *)0x0) {
      (**(code **)*local_90)(local_90,0);
      FUN_1446efa72(&local_90,0,0,0x10);
      local_88 = 0;
      goto LAB_1443fcd2e;
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_58 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_1443fc9a0:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1443fcd6c FUN_1443fcd6c body=837 status=ok
// SIG undefined FUN_1443fcd6c(void)

void FUN_1443fcd6c(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  char *_Src;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  void *local_60;
  ulonglong local_58;
  char *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    lVar7 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x58);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x68;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 0x68) == param_3) {
          if (((lVar7 + 8U & 0xfffffffffffffff7) != 0) && (0 < (int)param_2[1])) {
            local_50 = "WebBrowser";
            local_48 = CONCAT35(local_48._5_3_,10);
            uVar3 = FUN_14001a6c0(&local_50,1);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
            {
              FUN_145762954(&DAT_14c874628);
              DAT_14c874a18 = 1;
              atexit(FUN_14278de47);
              _Init_thread_footer(&DAT_14c874a20);
            }
            plVar4 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3,&local_50,1);
            plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
            if (plVar4 != (longlong *)0x0) {
              local_50 = (char *)0x0;
              local_48 = 0xffffffff00000000;
              if (*(char ***)(lVar7 + 0x48) == (char **)0x0 ||
                  *(char ***)(lVar7 + 0x48) == &local_50) {
LAB_1443fcf4d:
                local_60 = (void *)0x0;
                local_58 = 0xffffffff00000000;
              }
              else {
                FUN_14034a368(&local_50);
                _Src = local_50;
                if (local_48._4_4_ == -1) goto LAB_1443fcf4d;
                local_60 = (void *)0x0;
                lVar7 = (longlong)(int)local_48;
                local_58 = CONCAT44(local_58._4_4_,(int)local_48);
                if (lVar7 == 0) {
                  local_58 = local_48 & 0xffffffff;
                }
                else {
                  FUN_1446dd670(&local_60,local_48 & 0xffffffff,0);
                  memcpy(local_60,_Src,lVar7 * 2);
                }
              }
              (**(code **)(*plVar4 + 0x20))(plVar4,&local_b8,&local_60);
              if ((local_b8 != (longlong *)0x0) && ((longlong)(int)param_2[1] != 0)) {
                lVar7 = *param_2;
                lVar8 = (longlong)(int)param_2[1] << 4;
                do {
                  plVar4 = local_b8;
                  local_a8[0] = 0;
                  local_98 = 0;
                  FUN_140056680(local_c8,&DAT_149dfb77a);
                  (**(code **)(*plVar4 + 8))(plVar4,lVar7,local_c8,local_a8);
                  if (local_c8[0] != 0) {
                    FUN_1400020a8();
                  }
                  lVar7 = lVar7 + 0x10;
                  lVar8 = lVar8 + -0x10;
                } while (lVar8 != 0);
              }
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                plVar4 = local_b0 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*local_b0)(local_b0);
                  LOCK();
                  piVar1 = (int *)((longlong)local_b0 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_b0 + 0x10))(local_b0);
                  }
                }
              }
              if ((local_48._4_4_ != -1) && (local_50 != (char *)0x0)) {
                FUN_1400020a8();
              }
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar7 + 0x60);
      } while (iVar6 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443fd0b2 FUN_1443fd0b2 body=2563 status=ok
// SIG undefined FUN_1443fd0b2(void)

void FUN_1443fd0b2(longlong param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uchar auVar10 [8];
  char cVar11;
  undefined4 uVar12;
  void *_Dst;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uchar auVar17 [8];
  bool bVar18;
  undefined1 auStack_378 [32];
  code **local_358;
  code *local_348;
  undefined8 local_340;
  GUID local_338 [2];
  undefined1 local_318 [8];
  longlong *local_310;
  undefined8 *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  longlong *local_2e8;
  code *pcStack_2e0;
  int local_2d8 [2];
  code *local_2d0;
  int local_2c8 [2];
  code *local_2c0;
  int local_2b8 [2];
  undefined1 local_2b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  *param_5 = 0;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = (uint)((ulonglong)param_6 >> 0x10);
    uVar15 = (uint)param_6 & 0xffff;
    lVar14 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x58);
    }
    iVar16 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(param_1 + 0x60) - 1U &
                               (int)((ulonglong)param_6 >> 0x20) + ((uint)param_6 << 0x10 | uVar15)
                               + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) * 4);
    if (iVar16 != -1) {
      do {
        lVar14 = *(longlong *)(param_1 + 0x18) + (longlong)iVar16 * 0x68;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar16 * 0x68) == param_6) {
          if (((((lVar14 + 8 != 0 && lVar14 != 0) && (*(longlong *)(param_1 + 0x68) == 0)) &&
               (*(longlong *)(param_1 + 0x70) == 0)) &&
              ((*(int *)(lVar14 + 0x18) != 0 && (*(longlong **)(lVar14 + 0x10) != (longlong *)0x0)))
              ) && (cVar11 = (**(code **)(**(longlong **)(lVar14 + 0x10) + 0x30))(), cVar11 != '\0')
             ) {
            *param_5 = 1;
            FUN_1443fe4b0(lVar14 + 8);
            _Dst = (void *)FUN_14001cc68(0xb0);
            memset(_Dst,0,0xb0);
            FUN_145c8dbc0((longlong)_Dst + 0x60,0x13);
            *(undefined4 *)((longlong)_Dst + 0xa0) = 0;
            lVar5 = *(longlong *)(param_1 + 0x68);
            *(void **)(param_1 + 0x68) = _Dst;
            if (lVar5 != 0) {
              FUN_14905b676(lVar5);
              FUN_1400020a8(lVar5);
            }
            local_338[0].Data1 = 0;
            local_338[0].Data2 = 0;
            local_338[0].Data3 = 0;
            local_338[0].Data4[0] = '\0';
            local_338[0].Data4[1] = '\0';
            local_338[0].Data4[2] = '\0';
            local_338[0].Data4[3] = '\0';
            local_338[0].Data4[4] = '\0';
            local_338[0].Data4[5] = '\0';
            local_338[0].Data4[6] = '\0';
            local_338[0].Data4[7] = '\0';
            CoCreateGuid(local_338);
            local_308 = (undefined8 *)0x0;
            uStack_300 = 0;
            FUN_1407c869a(local_338,&local_308,0);
            ppuVar6 = *(undefined8 ***)(param_1 + 0x68);
            if (ppuVar6 == &local_308) {
              if (local_308 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*ppuVar6 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              *ppuVar6 = local_308;
              local_308 = (undefined8 *)0x0;
              *(int *)(ppuVar6 + 1) = (int)uStack_300;
              *(undefined4 *)((longlong)ppuVar6 + 0xc) = uStack_300._4_4_;
            }
            FUN_14905c6e8(*(longlong *)(param_1 + 0x68) + 0x10,param_3);
            FUN_14905c76c(*(longlong *)(param_1 + 0x68) + 0x40,param_4);
            *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xa8) = 0;
            FUN_140a53a96(&local_308);
            local_358 = &local_348;
            FUN_140a53d66(local_338,&DAT_149efe19f,
                          ".\\../Plugins/Online/OnlineFramework/Source/LoginFlow/Private/LoginFlowManager.cpp"
                          ,0xd1);
            lVar5 = *(longlong *)(param_1 + 0x68);
            if (local_338[0].Data4 != (uchar  [8])0x0) {
              LOCK();
              *(int *)((longlong)local_338[0].Data4 + 8) =
                   *(int *)((longlong)local_338[0].Data4 + 8) + 1;
              UNLOCK();
            }
            plVar13 = *(longlong **)(lVar5 + 0x28);
            *(undefined8 *)(lVar5 + 0x20) = local_338[0]._0_8_;
            *(uchar (*) [8])(lVar5 + 0x28) = local_338[0].Data4;
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar13 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
            FUN_140a50bf4(local_338,local_318,&local_308);
            if (local_310 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_310 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*local_310)(local_310);
                LOCK();
                piVar2 = (int *)((longlong)local_310 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_310 + 0x10))(local_310);
                }
              }
            }
            auVar17 = local_338[0].Data4;
            if (local_338[0].Data4 != (uchar  [8])0x0) {
              LOCK();
              plVar13 = (longlong *)((longlong)local_338[0].Data4 + 8);
              *(int *)plVar13 = *(int *)plVar13 + -1;
              UNLOCK();
              if (*(int *)plVar13 == 0) {
                (*(code *)**(undefined8 **)local_338[0].Data4)(local_338[0].Data4);
                LOCK();
                piVar2 = (int *)((longlong)auVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*(longlong *)auVar17 + 0x10))(auVar17);
                }
              }
            }
            FUN_140a5660c(&local_308);
            local_338[0]._0_8_ = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x20);
            auVar17 = *(uchar (*) [8])(*(longlong *)(param_1 + 0x68) + 0x28);
            if (auVar17 == (uchar  [8])0x0) {
              local_338[0].Data4[0] = '\0';
              local_338[0].Data4[1] = '\0';
              local_338[0].Data4[2] = '\0';
              local_338[0].Data4[3] = '\0';
              local_338[0].Data4[4] = '\0';
              local_338[0].Data4[5] = '\0';
              local_338[0].Data4[6] = '\0';
              local_338[0].Data4[7] = '\0';
            }
            else {
              LOCK();
              *(int *)((longlong)auVar17 + 8) = *(int *)((longlong)auVar17 + 8) + 1;
              UNLOCK();
              LOCK();
              *(int *)((longlong)auVar17 + 8) = *(int *)((longlong)auVar17 + 8) + 1;
              UNLOCK();
              local_338[0].Data4 = auVar17;
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)(lVar14 + 0x10);
            }
            (**(code **)(*plVar13 + 0x58))(plVar13,&local_308,local_338);
            puVar7 = local_308;
            lVar5 = *(longlong *)(param_1 + 0x68);
            plVar13 = (longlong *)(lVar5 + 0x30);
            local_308 = (undefined8 *)0x0;
            uVar12 = (int)uStack_300;
            uStack_300 = uStack_300 & 0xffffffff00000000;
            if (*(int *)(lVar5 + 0x38) == 0) {
LAB_1443fd455:
              if (*plVar13 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              puVar8 = (undefined8 *)*plVar13;
              if (puVar8 != (undefined8 *)0x0) {
                (**(code **)*puVar8)(puVar8,0);
                FUN_1446efa72(plVar13,0,0,0x10);
                *(undefined4 *)(lVar5 + 0x38) = 0;
                goto LAB_1443fd455;
              }
            }
            *(undefined8 **)(lVar5 + 0x30) = puVar7;
            *(undefined4 *)(lVar5 + 0x38) = uVar12;
            if ((int)uStack_300 == 0) {
LAB_1443fd4a6:
              if (local_308 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_308 != (undefined8 *)0x0) {
              (**(code **)*local_308)(local_308,0);
              FUN_1446efa72(&local_308,0,0,0x10);
              uStack_300 = uStack_300 & 0xffffffff00000000;
              goto LAB_1443fd4a6;
            }
            auVar10 = local_338[0].Data4;
            if (local_338[0].Data4 != (uchar  [8])0x0) {
              LOCK();
              plVar13 = (longlong *)((longlong)local_338[0].Data4 + 8);
              *(int *)plVar13 = *(int *)plVar13 + -1;
              UNLOCK();
              if (*(int *)plVar13 == 0) {
                (*(code *)**(undefined8 **)local_338[0].Data4)(local_338[0].Data4);
                LOCK();
                piVar2 = (int *)((longlong)auVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*(longlong *)auVar10 + 0x10))(auVar10);
                }
              }
            }
            if (auVar17 != (uchar  [8])0x0) {
              LOCK();
              plVar13 = (longlong *)((longlong)auVar17 + 8);
              *(int *)plVar13 = *(int *)plVar13 + -1;
              UNLOCK();
              if (*(int *)plVar13 == 0) {
                (*(code *)**(undefined8 **)auVar17)(auVar17);
                LOCK();
                piVar2 = (int *)((longlong)auVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*(longlong *)auVar17 + 0x10))(auVar17);
                }
              }
            }
            local_2d0 = (code *)0x0;
            local_2c8[0] = 0;
            local_2c0 = (code *)0x0;
            local_2b8[0] = 0;
            local_2b0 = 0;
            local_308 = (undefined8 *)0x0;
            uStack_300 = 0;
            local_2f8 = 0;
            uStack_2f0 = 0;
            local_2e8 = (longlong *)0x0;
            pcStack_2e0 = (code *)0x0;
            local_2d8[0] = 0;
            if (&local_308 != param_2) {
              uVar4 = *(uint *)(param_2 + 1);
              puVar7 = *param_2;
              uStack_300 = (ulonglong)uVar4;
              if ((longlong)(int)uVar4 != 0) {
                FUN_1446dd670(&local_308,uVar4,0);
                memcpy(local_308,puVar7,(longlong)(int)uVar4 * 2);
              }
            }
            plVar1 = local_2e8;
            local_2b0 = *(undefined1 *)(lVar14 + 0x59);
            uStack_2f0 = *(undefined8 *)(lVar14 + 0x48);
            plVar13 = *(longlong **)(lVar14 + 0x50);
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar13 + 8) = *(int *)((longlong)plVar13 + 8) + 1;
              UNLOCK();
            }
            if (local_2e8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_2e8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                puVar7 = (undefined8 *)*local_2e8;
                local_2e8 = plVar13;
                (*(code *)*puVar7)(plVar1);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar13 = local_2e8;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                  plVar13 = local_2e8;
                }
              }
            }
            local_2e8 = plVar13;
            local_348 = FUN_14905245c;
            local_340 = (uchar  [8])((ulonglong)local_340._4_4_ << 0x20);
            FUN_149052328(local_338,param_1,&local_348,*(undefined8 *)(param_1 + 0x68));
            uVar9 = local_338[0]._0_8_;
            local_338[0]._0_8_ = (code *)0x0;
            uVar12 = local_338[0].Data4._0_4_;
            local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
            if (local_2d8[0] == 0) {
LAB_1443fd61d:
              if (pcStack_2e0 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (pcStack_2e0 != (code *)0x0) {
              (*(code *)**(undefined8 **)pcStack_2e0)(pcStack_2e0,0);
              FUN_1446efa72(&pcStack_2e0,0,0,0x10);
              local_2d8[0] = 0;
              goto LAB_1443fd61d;
            }
            auVar17 = local_338[0].Data4;
            pcStack_2e0 = (code *)uVar9;
            local_338[0].Data4[0] = (uchar)uVar12;
            local_338[0].Data4[1] = SUB41(uVar12,1);
            local_338[0].Data4[2] = SUB41(uVar12,2);
            local_338[0].Data4[3] = SUB41(uVar12,3);
            local_2d8[0]._0_1_ = local_338[0].Data4[0];
            local_2d8[0]._1_1_ = local_338[0].Data4[1];
            local_2d8[0]._2_1_ = local_338[0].Data4[2];
            local_2d8[0]._3_1_ = local_338[0].Data4[3];
            local_338[0].Data4._0_4_ = auVar17._0_4_;
            bVar18 = local_338[0].Data4._0_4_ == 0;
            local_338[0].Data4 = auVar17;
            if (bVar18) {
LAB_1443fd677:
              if ((code *)local_338[0]._0_8_ != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if ((code *)local_338[0]._0_8_ != (code *)0x0) {
              (*(code *)**(undefined8 **)local_338[0]._0_8_)(local_338[0]._0_8_,0);
              FUN_1446efa72(local_338,0,0,0x10);
              local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
              goto LAB_1443fd677;
            }
            local_348 = FUN_149052606;
            local_340 = (uchar  [8])((ulonglong)local_340 & 0xffffffff00000000);
            FUN_1490524d2(local_338,param_1,&local_348,*(undefined8 *)(param_1 + 0x68));
            uVar9 = local_338[0]._0_8_;
            local_338[0]._0_8_ = (code *)0x0;
            uVar12 = local_338[0].Data4._0_4_;
            local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
            if (local_2c8[0] == 0) {
LAB_1443fd6c9:
              if (local_2d0 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_2d0 != (code *)0x0) {
              (*(code *)**(undefined8 **)local_2d0)(local_2d0,0);
              FUN_1446efa72(&local_2d0,0,0,0x10);
              local_2c8[0] = 0;
              goto LAB_1443fd6c9;
            }
            auVar17 = local_338[0].Data4;
            local_2d0 = (code *)uVar9;
            local_338[0].Data4[0] = (uchar)uVar12;
            local_338[0].Data4[1] = SUB41(uVar12,1);
            local_338[0].Data4[2] = SUB41(uVar12,2);
            local_338[0].Data4[3] = SUB41(uVar12,3);
            local_2c8[0]._0_1_ = local_338[0].Data4[0];
            local_2c8[0]._1_1_ = local_338[0].Data4[1];
            local_2c8[0]._2_1_ = local_338[0].Data4[2];
            local_2c8[0]._3_1_ = local_338[0].Data4[3];
            local_338[0].Data4._0_4_ = auVar17._0_4_;
            bVar18 = local_338[0].Data4._0_4_ == 0;
            local_338[0].Data4 = auVar17;
            if (bVar18) {
LAB_1443fd723:
              if ((code *)local_338[0]._0_8_ != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if ((code *)local_338[0]._0_8_ != (code *)0x0) {
              (*(code *)**(undefined8 **)local_338[0]._0_8_)(local_338[0]._0_8_,0);
              FUN_1446efa72(local_338,0,0,0x10);
              local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
              goto LAB_1443fd723;
            }
            local_348 = FUN_149052880;
            local_340 = (uchar  [8])((ulonglong)local_340 & 0xffffffff00000000);
            FUN_14905274c(local_338,param_1,&local_348,*(undefined8 *)(param_1 + 0x68));
            uVar9 = local_338[0]._0_8_;
            local_338[0]._0_8_ = (undefined8 *)0x0;
            uVar12 = local_338[0].Data4._0_4_;
            local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
            if (local_2b8[0] == 0) {
LAB_1443fd775:
              if (local_2c0 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_2c0 != (code *)0x0) {
              (*(code *)**(undefined8 **)local_2c0)(local_2c0,0);
              FUN_1446efa72(&local_2c0,0,0,0x10);
              local_2b8[0] = 0;
              goto LAB_1443fd775;
            }
            auVar17 = local_338[0].Data4;
            local_2c0 = (code *)uVar9;
            local_338[0].Data4[0] = (uchar)uVar12;
            local_338[0].Data4[1] = SUB41(uVar12,1);
            local_338[0].Data4[2] = SUB41(uVar12,2);
            local_338[0].Data4[3] = SUB41(uVar12,3);
            local_2b8[0]._0_1_ = local_338[0].Data4[0];
            local_2b8[0]._1_1_ = local_338[0].Data4[1];
            local_2b8[0]._2_1_ = local_338[0].Data4[2];
            local_2b8[0]._3_1_ = local_338[0].Data4[3];
            local_338[0].Data4._0_4_ = auVar17._0_4_;
            bVar18 = local_338[0].Data4._0_4_ == 0;
            local_338[0].Data4 = auVar17;
            if (bVar18) {
LAB_1443fd7cf:
              if ((undefined8 *)local_338[0]._0_8_ != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if ((undefined8 *)local_338[0]._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_338[0]._0_8_)(local_338[0]._0_8_,0);
              FUN_1446efa72(local_338,0,0,0x10);
              local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
              goto LAB_1443fd7cf;
            }
            local_338[0]._0_8_ = "LoginFlow";
            local_338[0].Data4[0] = '\t';
            local_338[0].Data4[1] = '\0';
            local_338[0].Data4[2] = '\0';
            local_338[0].Data4[3] = '\0';
            local_338[0].Data4[4] = '\0';
            uVar12 = FUN_14001a6c0(local_338,1);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
            {
              FUN_145762954(&DAT_14c874628);
              DAT_14c874a18 = 1;
              atexit(FUN_14278de47);
              _Init_thread_footer(&DAT_14c874a20);
            }
            plVar13 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar12,local_338,1);
            (**(code **)(*plVar13 + 0x48))(plVar13,local_338,&local_308);
            if (*(longlong *)(param_1 + 0x68) != 0) {
              FUN_140a58896(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x20) + 0x1e0,local_338);
              *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xa8) = 1;
              lVar14 = DAT_14c98e618;
              local_348 = (code *)local_338[0]._0_8_;
              local_340._0_1_ = local_338[0].Data4[0];
              local_340._1_1_ = local_338[0].Data4[1];
              local_340._2_1_ = local_338[0].Data4[2];
              local_340._3_1_ = local_338[0].Data4[3];
              local_340._4_1_ = local_338[0].Data4[4];
              local_340._5_1_ = local_338[0].Data4[5];
              local_340._6_1_ = local_338[0].Data4[6];
              local_340._7_1_ = local_338[0].Data4[7];
              if (local_338[0].Data4 == (uchar  [8])0x0) {
                auVar17[0] = '\0';
                auVar17[1] = '\0';
                auVar17[2] = '\0';
                auVar17[3] = '\0';
                auVar17[4] = '\0';
                auVar17[5] = '\0';
                auVar17[6] = '\0';
                auVar17[7] = '\0';
              }
              else {
                LOCK();
                *(int *)((longlong)local_338[0].Data4 + 8) =
                     *(int *)((longlong)local_338[0].Data4 + 8) + 1;
                UNLOCK();
                auVar17 = local_338[0].Data4;
              }
              uVar12 = (**(code **)(**(longlong **)(lVar14 + 0x720) + 8))();
              FUN_1410a3d58(lVar14,uVar12,&local_348,2);
              if (auVar17 != (uchar  [8])0x0) {
                LOCK();
                plVar13 = (longlong *)((longlong)auVar17 + 8);
                *(int *)plVar13 = *(int *)plVar13 + -1;
                UNLOCK();
                if (*(int *)plVar13 == 0) {
                  (*(code *)**(undefined8 **)auVar17)(auVar17);
                  LOCK();
                  piVar2 = (int *)((longlong)auVar17 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*(longlong *)auVar17 + 0x10))(auVar17);
                  }
                }
              }
            }
            auVar17 = local_338[0].Data4;
            if (local_338[0].Data4 != (uchar  [8])0x0) {
              LOCK();
              plVar13 = (longlong *)((longlong)local_338[0].Data4 + 8);
              *(int *)plVar13 = *(int *)plVar13 + -1;
              UNLOCK();
              if (*(int *)plVar13 == 0) {
                (*(code *)**(undefined8 **)local_338[0].Data4)(local_338[0].Data4);
                LOCK();
                piVar2 = (int *)((longlong)auVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*(longlong *)auVar17 + 0x10))(auVar17);
                }
              }
            }
            FUN_1490529f8(&local_308);
          }
          break;
        }
        iVar16 = *(int *)(lVar14 + 0x60);
      } while (iVar16 != -1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443fdab6 FUN_1443fdab6 body=2552 status=ok
// SIG undefined FUN_1443fdab6(void)

void FUN_1443fdab6(longlong param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uchar auVar10 [8];
  char cVar11;
  undefined4 uVar12;
  void *_Dst;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uchar auVar17 [8];
  bool bVar18;
  undefined1 auStack_378 [32];
  code **local_358;
  code *local_348;
  undefined8 local_340;
  GUID local_338 [2];
  undefined1 local_318 [8];
  longlong *local_310;
  undefined8 *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  longlong *local_2e8;
  code *pcStack_2e0;
  int local_2d8 [2];
  code *local_2d0;
  int local_2c8 [2];
  code *local_2c0;
  int local_2b8 [2];
  undefined1 local_2b0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_378;
  *param_5 = 0;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = (uint)((ulonglong)param_6 >> 0x10);
    uVar15 = (uint)param_6 & 0xffff;
    lVar14 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x58);
    }
    iVar16 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(param_1 + 0x60) - 1U &
                               (int)((ulonglong)param_6 >> 0x20) + ((uint)param_6 << 0x10 | uVar15)
                               + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) * 4);
    if (iVar16 != -1) {
      do {
        lVar14 = *(longlong *)(param_1 + 0x18) + (longlong)iVar16 * 0x68;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar16 * 0x68) == param_6) {
          if (((((lVar14 + 8 != 0 && lVar14 != 0) && (*(longlong *)(param_1 + 0x68) == 0)) &&
               (*(longlong *)(param_1 + 0x70) == 0)) &&
              ((*(int *)(lVar14 + 0x38) != 0 && (*(longlong **)(lVar14 + 0x30) != (longlong *)0x0)))
              ) && (cVar11 = (**(code **)(**(longlong **)(lVar14 + 0x30) + 0x30))(), cVar11 != '\0')
             ) {
            *param_5 = 1;
            FUN_1443fe4b0(lVar14 + 8);
            _Dst = (void *)FUN_14001cc68(0xb0);
            memset(_Dst,0,0xb0);
            FUN_145c8dbc0((longlong)_Dst + 0x60,0x13);
            *(undefined4 *)((longlong)_Dst + 0xa0) = 0;
            lVar5 = *(longlong *)(param_1 + 0x70);
            *(void **)(param_1 + 0x70) = _Dst;
            if (lVar5 != 0) {
              FUN_14905b6f2(lVar5);
              FUN_1400020a8(lVar5);
            }
            local_338[0].Data1 = 0;
            local_338[0].Data2 = 0;
            local_338[0].Data3 = 0;
            local_338[0].Data4[0] = '\0';
            local_338[0].Data4[1] = '\0';
            local_338[0].Data4[2] = '\0';
            local_338[0].Data4[3] = '\0';
            local_338[0].Data4[4] = '\0';
            local_338[0].Data4[5] = '\0';
            local_338[0].Data4[6] = '\0';
            local_338[0].Data4[7] = '\0';
            CoCreateGuid(local_338);
            local_308 = (undefined8 *)0x0;
            uStack_300 = 0;
            FUN_1407c869a(local_338,&local_308,0);
            ppuVar6 = *(undefined8 ***)(param_1 + 0x70);
            if (ppuVar6 == &local_308) {
              if (local_308 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*ppuVar6 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              *ppuVar6 = local_308;
              local_308 = (undefined8 *)0x0;
              *(int *)(ppuVar6 + 1) = (int)uStack_300;
              *(undefined4 *)((longlong)ppuVar6 + 0xc) = uStack_300._4_4_;
            }
            FUN_14905c6e8(*(longlong *)(param_1 + 0x70) + 0x10,param_3);
            FUN_14905c76c(*(longlong *)(param_1 + 0x70) + 0x40,param_4);
            *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0xa8) = 0;
            FUN_140a53a96(&local_308);
            local_358 = &local_348;
            FUN_140a53d66(local_338,&DAT_149efe19f,
                          ".\\../Plugins/Online/OnlineFramework/Source/LoginFlow/Private/LoginFlowManager.cpp"
                          ,0x1a5);
            lVar5 = *(longlong *)(param_1 + 0x70);
            if (local_338[0].Data4 != (uchar  [8])0x0) {
              LOCK();
              *(int *)((longlong)local_338[0].Data4 + 8) =
                   *(int *)((longlong)local_338[0].Data4 + 8) + 1;
              UNLOCK();
            }
            plVar13 = *(longlong **)(lVar5 + 0x28);
            *(undefined8 *)(lVar5 + 0x20) = local_338[0]._0_8_;
            *(uchar (*) [8])(lVar5 + 0x28) = local_338[0].Data4;
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar13 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
            FUN_140a50bf4(local_338,local_318,&local_308);
            if (local_310 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_310 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*local_310)(local_310);
                LOCK();
                piVar2 = (int *)((longlong)local_310 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_310 + 0x10))(local_310);
                }
              }
            }
            auVar17 = local_338[0].Data4;
            if (local_338[0].Data4 != (uchar  [8])0x0) {
              LOCK();
              plVar13 = (longlong *)((longlong)local_338[0].Data4 + 8);
              *(int *)plVar13 = *(int *)plVar13 + -1;
              UNLOCK();
              if (*(int *)plVar13 == 0) {
                (*(code *)**(undefined8 **)local_338[0].Data4)(local_338[0].Data4);
                LOCK();
                piVar2 = (int *)((longlong)auVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*(longlong *)auVar17 + 0x10))(auVar17);
                }
              }
            }
            FUN_140a5660c(&local_308);
            local_338[0]._0_8_ = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x20);
            auVar17 = *(uchar (*) [8])(*(longlong *)(param_1 + 0x70) + 0x28);
            if (auVar17 == (uchar  [8])0x0) {
              local_338[0].Data4[0] = '\0';
              local_338[0].Data4[1] = '\0';
              local_338[0].Data4[2] = '\0';
              local_338[0].Data4[3] = '\0';
              local_338[0].Data4[4] = '\0';
              local_338[0].Data4[5] = '\0';
              local_338[0].Data4[6] = '\0';
              local_338[0].Data4[7] = '\0';
            }
            else {
              LOCK();
              *(int *)((longlong)auVar17 + 8) = *(int *)((longlong)auVar17 + 8) + 1;
              UNLOCK();
              LOCK();
              *(int *)((longlong)auVar17 + 8) = *(int *)((longlong)auVar17 + 8) + 1;
              UNLOCK();
              local_338[0].Data4 = auVar17;
            }
            if (*(int *)(lVar14 + 0x38) == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)(lVar14 + 0x30);
            }
            (**(code **)(*plVar13 + 0x58))(plVar13,&local_308,local_338);
            puVar7 = local_308;
            lVar5 = *(longlong *)(param_1 + 0x70);
            plVar13 = (longlong *)(lVar5 + 0x30);
            local_308 = (undefined8 *)0x0;
            uVar12 = (int)uStack_300;
            uStack_300 = uStack_300 & 0xffffffff00000000;
            if (*(int *)(lVar5 + 0x38) == 0) {
LAB_1443fde59:
              if (*plVar13 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              puVar8 = (undefined8 *)*plVar13;
              if (puVar8 != (undefined8 *)0x0) {
                (**(code **)*puVar8)(puVar8,0);
                FUN_1446efa72(plVar13,0,0,0x10);
                *(undefined4 *)(lVar5 + 0x38) = 0;
                goto LAB_1443fde59;
              }
            }
            *(undefined8 **)(lVar5 + 0x30) = puVar7;
            *(undefined4 *)(lVar5 + 0x38) = uVar12;
            if ((int)uStack_300 == 0) {
LAB_1443fdeaa:
              if (local_308 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_308 != (undefined8 *)0x0) {
              (**(code **)*local_308)(local_308,0);
              FUN_1446efa72(&local_308,0,0,0x10);
              uStack_300 = uStack_300 & 0xffffffff00000000;
              goto LAB_1443fdeaa;
            }
            auVar10 = local_338[0].Data4;
            if (local_338[0].Data4 != (uchar  [8])0x0) {
              LOCK();
              plVar13 = (longlong *)((longlong)local_338[0].Data4 + 8);
              *(int *)plVar13 = *(int *)plVar13 + -1;
              UNLOCK();
              if (*(int *)plVar13 == 0) {
                (*(code *)**(undefined8 **)local_338[0].Data4)(local_338[0].Data4);
                LOCK();
                piVar2 = (int *)((longlong)auVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*(longlong *)auVar10 + 0x10))(auVar10);
                }
              }
            }
            if (auVar17 != (uchar  [8])0x0) {
              LOCK();
              plVar13 = (longlong *)((longlong)auVar17 + 8);
              *(int *)plVar13 = *(int *)plVar13 + -1;
              UNLOCK();
              if (*(int *)plVar13 == 0) {
                (*(code *)**(undefined8 **)auVar17)(auVar17);
                LOCK();
                piVar2 = (int *)((longlong)auVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*(longlong *)auVar17 + 0x10))(auVar17);
                }
              }
            }
            local_2d0 = (code *)0x0;
            local_2c8[0] = 0;
            local_2c0 = (code *)0x0;
            local_2b8[0] = 0;
            local_2b0 = 0;
            local_308 = (undefined8 *)0x0;
            uStack_300 = 0;
            local_2f8 = 0;
            uStack_2f0 = 0;
            local_2e8 = (longlong *)0x0;
            pcStack_2e0 = (code *)0x0;
            local_2d8[0] = 0;
            if (&local_308 != param_2) {
              uVar4 = *(uint *)(param_2 + 1);
              puVar7 = *param_2;
              uStack_300 = (ulonglong)uVar4;
              if ((longlong)(int)uVar4 != 0) {
                FUN_1446dd670(&local_308,uVar4,0);
                memcpy(local_308,puVar7,(longlong)(int)uVar4 * 2);
              }
            }
            plVar1 = local_2e8;
            uStack_2f0 = *(undefined8 *)(lVar14 + 0x48);
            plVar13 = *(longlong **)(lVar14 + 0x50);
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar13 + 8) = *(int *)((longlong)plVar13 + 8) + 1;
              UNLOCK();
            }
            if (local_2e8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_2e8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                puVar7 = (undefined8 *)*local_2e8;
                local_2e8 = plVar13;
                (*(code *)*puVar7)(plVar1);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar13 = local_2e8;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                  plVar13 = local_2e8;
                }
              }
            }
            local_2e8 = plVar13;
            local_348 = FUN_149052c3e;
            local_340 = (uchar  [8])((ulonglong)local_340._4_4_ << 0x20);
            FUN_149052328(local_338,param_1,&local_348,*(undefined8 *)(param_1 + 0x70));
            uVar9 = local_338[0]._0_8_;
            local_338[0]._0_8_ = (code *)0x0;
            uVar12 = local_338[0].Data4._0_4_;
            local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
            if (local_2d8[0] == 0) {
LAB_1443fe016:
              if (pcStack_2e0 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (pcStack_2e0 != (code *)0x0) {
              (*(code *)**(undefined8 **)pcStack_2e0)(pcStack_2e0,0);
              FUN_1446efa72(&pcStack_2e0,0,0,0x10);
              local_2d8[0] = 0;
              goto LAB_1443fe016;
            }
            auVar17 = local_338[0].Data4;
            pcStack_2e0 = (code *)uVar9;
            local_338[0].Data4[0] = (uchar)uVar12;
            local_338[0].Data4[1] = SUB41(uVar12,1);
            local_338[0].Data4[2] = SUB41(uVar12,2);
            local_338[0].Data4[3] = SUB41(uVar12,3);
            local_2d8[0]._0_1_ = local_338[0].Data4[0];
            local_2d8[0]._1_1_ = local_338[0].Data4[1];
            local_2d8[0]._2_1_ = local_338[0].Data4[2];
            local_2d8[0]._3_1_ = local_338[0].Data4[3];
            local_338[0].Data4._0_4_ = auVar17._0_4_;
            bVar18 = local_338[0].Data4._0_4_ == 0;
            local_338[0].Data4 = auVar17;
            if (bVar18) {
LAB_1443fe070:
              if ((code *)local_338[0]._0_8_ != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if ((code *)local_338[0]._0_8_ != (code *)0x0) {
              (*(code *)**(undefined8 **)local_338[0]._0_8_)(local_338[0]._0_8_,0);
              FUN_1446efa72(local_338,0,0,0x10);
              local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
              goto LAB_1443fe070;
            }
            local_348 = FUN_149052af8;
            local_340 = (uchar  [8])((ulonglong)local_340 & 0xffffffff00000000);
            FUN_1490524d2(local_338,param_1,&local_348,*(undefined8 *)(param_1 + 0x70));
            uVar9 = local_338[0]._0_8_;
            local_338[0]._0_8_ = (code *)0x0;
            uVar12 = local_338[0].Data4._0_4_;
            local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
            if (local_2c8[0] == 0) {
LAB_1443fe0c2:
              if (local_2d0 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_2d0 != (code *)0x0) {
              (*(code *)**(undefined8 **)local_2d0)(local_2d0,0);
              FUN_1446efa72(&local_2d0,0,0,0x10);
              local_2c8[0] = 0;
              goto LAB_1443fe0c2;
            }
            auVar17 = local_338[0].Data4;
            local_2d0 = (code *)uVar9;
            local_338[0].Data4[0] = (uchar)uVar12;
            local_338[0].Data4[1] = SUB41(uVar12,1);
            local_338[0].Data4[2] = SUB41(uVar12,2);
            local_338[0].Data4[3] = SUB41(uVar12,3);
            local_2c8[0]._0_1_ = local_338[0].Data4[0];
            local_2c8[0]._1_1_ = local_338[0].Data4[1];
            local_2c8[0]._2_1_ = local_338[0].Data4[2];
            local_2c8[0]._3_1_ = local_338[0].Data4[3];
            local_338[0].Data4._0_4_ = auVar17._0_4_;
            bVar18 = local_338[0].Data4._0_4_ == 0;
            local_338[0].Data4 = auVar17;
            if (bVar18) {
LAB_1443fe11c:
              if ((code *)local_338[0]._0_8_ != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if ((code *)local_338[0]._0_8_ != (code *)0x0) {
              (*(code *)**(undefined8 **)local_338[0]._0_8_)(local_338[0]._0_8_,0);
              FUN_1446efa72(local_338,0,0,0x10);
              local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
              goto LAB_1443fe11c;
            }
            local_348 = FUN_149052cb4;
            local_340 = (uchar  [8])((ulonglong)local_340 & 0xffffffff00000000);
            FUN_14905274c(local_338,param_1,&local_348,*(undefined8 *)(param_1 + 0x70));
            uVar9 = local_338[0]._0_8_;
            local_338[0]._0_8_ = (undefined8 *)0x0;
            uVar12 = local_338[0].Data4._0_4_;
            local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
            if (local_2b8[0] == 0) {
LAB_1443fe16e:
              if (local_2c0 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_2c0 != (code *)0x0) {
              (*(code *)**(undefined8 **)local_2c0)(local_2c0,0);
              FUN_1446efa72(&local_2c0,0,0,0x10);
              local_2b8[0] = 0;
              goto LAB_1443fe16e;
            }
            auVar17 = local_338[0].Data4;
            local_2c0 = (code *)uVar9;
            local_338[0].Data4[0] = (uchar)uVar12;
            local_338[0].Data4[1] = SUB41(uVar12,1);
            local_338[0].Data4[2] = SUB41(uVar12,2);
            local_338[0].Data4[3] = SUB41(uVar12,3);
            local_2b8[0]._0_1_ = local_338[0].Data4[0];
            local_2b8[0]._1_1_ = local_338[0].Data4[1];
            local_2b8[0]._2_1_ = local_338[0].Data4[2];
            local_2b8[0]._3_1_ = local_338[0].Data4[3];
            local_338[0].Data4._0_4_ = auVar17._0_4_;
            bVar18 = local_338[0].Data4._0_4_ == 0;
            local_338[0].Data4 = auVar17;
            if (bVar18) {
LAB_1443fe1c8:
              if ((undefined8 *)local_338[0]._0_8_ != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if ((undefined8 *)local_338[0]._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_338[0]._0_8_)(local_338[0]._0_8_,0);
              FUN_1446efa72(local_338,0,0,0x10);
              local_338[0].Data4 = (uchar  [8])((ulonglong)local_338[0].Data4 & 0xffffffff00000000);
              goto LAB_1443fe1c8;
            }
            local_338[0]._0_8_ = "LoginFlow";
            local_338[0].Data4[0] = '\t';
            local_338[0].Data4[1] = '\0';
            local_338[0].Data4[2] = '\0';
            local_338[0].Data4[3] = '\0';
            local_338[0].Data4[4] = '\0';
            uVar12 = FUN_14001a6c0(local_338,1);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
            {
              FUN_145762954(&DAT_14c874628);
              DAT_14c874a18 = 1;
              atexit(FUN_14278de47);
              _Init_thread_footer(&DAT_14c874a20);
            }
            plVar13 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar12,local_338,1);
            (**(code **)(*plVar13 + 0x48))(plVar13,local_338,&local_308);
            if (*(longlong *)(param_1 + 0x70) != 0) {
              FUN_140a58896(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x20) + 0x1e0,local_338);
              *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0xa8) = 1;
              lVar14 = DAT_14c98e618;
              local_348 = (code *)local_338[0]._0_8_;
              local_340._0_1_ = local_338[0].Data4[0];
              local_340._1_1_ = local_338[0].Data4[1];
              local_340._2_1_ = local_338[0].Data4[2];
              local_340._3_1_ = local_338[0].Data4[3];
              local_340._4_1_ = local_338[0].Data4[4];
              local_340._5_1_ = local_338[0].Data4[5];
              local_340._6_1_ = local_338[0].Data4[6];
              local_340._7_1_ = local_338[0].Data4[7];
              if (local_338[0].Data4 == (uchar  [8])0x0) {
                auVar17[0] = '\0';
                auVar17[1] = '\0';
                auVar17[2] = '\0';
                auVar17[3] = '\0';
                auVar17[4] = '\0';
                auVar17[5] = '\0';
                auVar17[6] = '\0';
                auVar17[7] = '\0';
              }
              else {
                LOCK();
                *(int *)((longlong)local_338[0].Data4 + 8) =
                     *(int *)((longlong)local_338[0].Data4 + 8) + 1;
                UNLOCK();
                auVar17 = local_338[0].Data4;
              }
              uVar12 = (**(code **)(**(longlong **)(lVar14 + 0x720) + 8))();
              FUN_1410a3d58(lVar14,uVar12,&local_348,2);
              if (auVar17 != (uchar  [8])0x0) {
                LOCK();
                plVar13 = (longlong *)((longlong)auVar17 + 8);
                *(int *)plVar13 = *(int *)plVar13 + -1;
                UNLOCK();
                if (*(int *)plVar13 == 0) {
                  (*(code *)**(undefined8 **)auVar17)(auVar17);
                  LOCK();
                  piVar2 = (int *)((longlong)auVar17 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*(longlong *)auVar17 + 0x10))(auVar17);
                  }
                }
              }
            }
            auVar17 = local_338[0].Data4;
            if (local_338[0].Data4 != (uchar  [8])0x0) {
              LOCK();
              plVar13 = (longlong *)((longlong)local_338[0].Data4 + 8);
              *(int *)plVar13 = *(int *)plVar13 + -1;
              UNLOCK();
              if (*(int *)plVar13 == 0) {
                (*(code *)**(undefined8 **)local_338[0].Data4)(local_338[0].Data4);
                LOCK();
                piVar2 = (int *)((longlong)auVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*(longlong *)auVar17 + 0x10))(auVar17);
                }
              }
            }
            FUN_1490529f8(&local_308);
          }
          break;
        }
        iVar16 = *(int *)(lVar14 + 0x60);
      } while (iVar16 != -1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443fe4b0 FUN_1443fe4b0 body=468 status=ok
// SIG undefined FUN_1443fe4b0(void)

void FUN_1443fe4b0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  char *local_68;
  int local_60;
  char *local_58;
  int local_50;
  uint local_4c;
  char *local_48;
  int local_40;
  uint local_3c;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x50) == '\0') {
    local_48 = "WebBrowser";
    local_40 = 10;
    local_3c = local_3c & 0xffffff00;
    uVar2 = FUN_14001a6c0(&local_48,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar3 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar2,&local_48,1);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x48))(plVar3);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(char *)(lVar4 + 0x30) == '\x01') {
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_68);
      local_48 = local_68;
      local_40 = local_60 + -1;
      if (local_60 == 0) {
        local_40 = 0;
      }
      local_38 = L"webcache";
      local_30 = 8;
      FUN_140bee87a(&local_58,&local_48,2);
      if (local_68 != (char *)0x0) {
        FUN_1400020a8();
      }
      FUN_1401aea18(&local_48,&local_58);
      if (local_58 != (char *)0x0) {
        FUN_1400020a8();
      }
      local_58 = local_48;
      local_50 = local_40;
      local_4c = local_3c;
      iVar1 = local_40 + -1;
      if (local_40 == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(*(longlong *)(param_1 + 0x40) + 0x20,local_48,iVar1);
      if (local_58 != (char *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = *(longlong *)(param_1 + 0x40);
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,lVar4);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443fe686 FUN_1443fe686 body=112 status=ok
// SIG undefined FUN_1443fe686(void)

void FUN_1443fe686(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x68);
  if ((*(int *)(lVar2 + 0x48) != 0) &&
     (plVar1 = *(longlong **)(lVar2 + 0x40), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,lVar2 + 0x50);
    lVar2 = *(longlong *)(param_1 + 0x68);
  }
  if ((*(int *)(lVar2 + 0x38) != 0) && (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x60))();
    lVar2 = *(longlong *)(param_1 + 0x68);
  }
  if (lVar2 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_14905b676(lVar2);
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 1443fe6f6 FUN_1443fe6f6 body=112 status=ok
// SIG undefined FUN_1443fe6f6(void)

void FUN_1443fe6f6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if ((*(int *)(lVar2 + 0x48) != 0) &&
     (plVar1 = *(longlong **)(lVar2 + 0x40), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,lVar2 + 0x50);
    lVar2 = *(longlong *)(param_1 + 0x70);
  }
  if ((*(int *)(lVar2 + 0x38) != 0) && (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x60))();
    lVar2 = *(longlong *)(param_1 + 0x70);
  }
  if (lVar2 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_14905b6f2(lVar2);
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 1443fe766 FUN_1443fe766 body=436 status=ok
// SIG undefined FUN_1443fe766(void)

void FUN_1443fe766(longlong param_1)

{
  longlong *plVar1;
  void *pvVar2;
  int iVar3;
  longlong *_Dst;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  LPCRITICAL_SECTION local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x370) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x18))();
    *(undefined1 *)(param_1 + 0x370) = 0;
  }
  local_80 = (LPCRITICAL_SECTION)(param_1 + 0x348);
  EnterCriticalSection(local_80);
  if (*(int *)(param_1 + 0x340) != 0) {
    plVar1 = (longlong *)(param_1 + 0x338);
    do {
      _Dst = (longlong *)*plVar1;
      local_58 = (void *)0x0;
      local_50 = (int)_Dst[1];
      lVar4 = (longlong)local_50;
      pvVar2 = (void *)*_Dst;
      if (lVar4 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar2,lVar4 * 2);
        _Dst = (longlong *)*plVar1;
      }
      if (*_Dst != 0) {
        FUN_1400020a8();
      }
      iVar3 = *(int *)(param_1 + 0x340) + -1;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        memmove(_Dst,_Dst + 2,(longlong)iVar3 << 4);
        iVar3 = *(int *)(param_1 + 0x340) + -1;
      }
      *(int *)(param_1 + 0x340) = iVar3;
      FUN_140b12644(plVar1);
      FUN_140056680(local_68,&DAT_149dfb77a);
      pvVar2 = local_58;
      local_78 = (void *)0x0;
      lVar4 = (longlong)local_50;
      local_70 = local_50;
      if (lVar4 == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,local_50,0);
        memcpy(local_78,pvVar2,lVar4 * 2);
      }
      FUN_1443fe93e(param_1,&local_78);
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
    } while (*(int *)(param_1 + 0x340) != 0);
  }
  LeaveCriticalSection(local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443fe91c FUN_1443fe91c body=34 status=ok
// SIG undefined FUN_1443fe91c(void)

void FUN_1443fe91c(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x268) + 0x18))();
  *(undefined1 *)(param_1 + 0x370) = 0;
  return;
}



// FUNCTION 1443fe93e FUN_1443fe93e body=826 status=ok
// SIG undefined FUN_1443fe93e(void)

ulonglong FUN_1443fe93e(size_t param_1,longlong *param_2,longlong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined2 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0xffffffff;
  local_78 = 0;
  iVar2 = FUN_1447ee042(param_2,L"chrome-devtools");
  if (iVar2 != -1) {
    *(undefined1 *)(param_1 + 0x371) = 1;
LAB_1443fe99d:
    uVar7 = 0;
    goto LAB_1443feb35;
  }
  if (1 < (int)param_3[1]) {
    FUN_1400b22c2(&local_58,"_blank");
    uVar6 = local_50 - 1;
    if (local_50 == 0) {
      uVar6 = 0;
    }
    puVar14 = &DAT_149dfb77a;
    puVar5 = local_58;
    if (local_50 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    if ((int)uVar6 < 1) {
LAB_1443feb85:
      FUN_1400b22c2(&local_68,"blank");
      puVar5 = local_68;
      uVar7 = (ulonglong)(local_60 - 1);
      if (local_60 == 0) {
        puVar5 = &DAT_149dfb77a;
        uVar7 = 0;
      }
      if ((int)uVar7 < 1) {
        bVar16 = true;
      }
      else {
        if ((int)param_3[1] != 0) {
          puVar14 = (undefined2 *)*param_3;
        }
        lVar9 = 0;
LAB_1443febce:
        uVar10 = *(ushort *)((longlong)puVar14 + lVar9);
        uVar12 = *(ushort *)((longlong)puVar5 + lVar9);
        if (uVar10 == uVar12) {
          iVar2 = 0;
          if ((uVar10 == 0) || (uVar7 == 1)) goto LAB_1443fec1c;
LAB_1443febeb:
          uVar7 = uVar7 - 1;
          lVar9 = lVar9 + 2;
          goto LAB_1443febce;
        }
        if ((uVar12 | uVar10) < 0x80) {
          if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[(uint)uVar12]) {
            iVar2 = (uint)(byte)(&DAT_149e05da0)[uVar10] -
                    (uint)(byte)(&DAT_149e05da0)[(uint)uVar12];
            goto LAB_1443fec1c;
          }
          if (uVar7 == 1) {
            iVar2 = 0;
            goto LAB_1443fec1c;
          }
          goto LAB_1443febeb;
        }
        iVar2 = (uint)uVar10 - (uint)uVar12;
LAB_1443fec1c:
        bVar16 = iVar2 != 0;
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar7 = (ulonglong)uVar6;
      if ((int)param_3[1] == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*param_3;
      }
      lVar9 = 0;
      while( true ) {
        uVar10 = *(ushort *)((longlong)puVar8 + lVar9);
        uVar11 = (ulonglong)uVar10;
        uVar12 = *(ushort *)((longlong)puVar5 + lVar9);
        if (uVar10 != uVar12) break;
        bVar16 = false;
        if ((uVar10 == 0) || (uVar7 == 1)) goto LAB_1443fea55;
LAB_1443fea21:
        uVar7 = uVar7 - 1;
        lVar9 = lVar9 + 2;
      }
      if ((uVar12 | uVar10) < 0x80) {
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        uVar13 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar13]) goto LAB_1443feb79;
        if (uVar7 != 1) goto LAB_1443fea21;
      }
      else {
LAB_1443feb79:
        if (uVar10 != uVar12) goto LAB_1443feb85;
      }
      bVar16 = false;
    }
LAB_1443fea55:
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar16) goto LAB_1443fe99d;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443fec5c;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x348);
    EnterCriticalSection(lpCriticalSection);
    iVar2 = *(int *)(param_1 + 0x340);
    *(uint *)(param_1 + 0x340) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x344) < iVar2 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0x338),iVar2);
    }
    lVar9 = *(longlong *)(param_1 + 0x338);
    lVar15 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar9 + lVar15);
    *(undefined8 *)(lVar9 + lVar15) = 0;
    iVar2 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(lVar9 + 8 + lVar15) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      param_1 = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2,0);
      param_1 = (longlong)iVar2 * 2;
      memcpy((void *)*puVar1,_Src,param_1);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
LAB_1443fec5c:
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x30))(*(longlong **)(param_1 + 0x268),param_2);
  }
  uVar7 = CONCAT71((int7)(param_1 >> 8),1);
LAB_1443feb35:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443fec8c FUN_1443fec8c body=5740 status=ok
// SIG undefined FUN_1443fec8c(void)

ulonglong FUN_1443fec8c(longlong param_1,code *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  code *pcVar10;
  code **ppcVar11;
  int iVar12;
  char cVar13;
  undefined1 uVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 unaff_RBP;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStack_898 [32];
  code **local_878;
  code *local_868;
  code *local_860;
  code *local_858;
  undefined8 local_850;
  longlong local_848;
  code *local_840;
  longlong *local_838;
  undefined1 local_830 [8];
  longlong *local_828;
  undefined1 local_819;
  code *local_818;
  undefined8 local_810;
  undefined8 *local_800;
  code *local_7f8;
  int local_7f0;
  undefined4 uStack_7ec;
  undefined8 local_7e0;
  longlong *local_7d8;
  undefined8 local_7d0;
  longlong *local_7c8;
  undefined8 local_7c0;
  longlong *local_7b8;
  longlong *local_7b0;
  undefined4 local_7a8;
  undefined1 local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  code *local_788;
  longlong *local_780;
  undefined8 local_778;
  longlong *local_770;
  undefined8 local_768;
  longlong *plStack_760;
  code **local_758;
  longlong *local_750;
  code *local_748;
  code **local_740;
  undefined8 local_5a0;
  longlong *local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined1 local_578;
  undefined8 *local_570;
  int local_568;
  code *local_488;
  int local_480;
  code *local_478;
  int local_470;
  code *local_468;
  int local_460;
  code *local_458;
  int local_450;
  code *local_438;
  int local_430;
  code *local_3a8;
  longlong *plStack_3a0;
  undefined1 local_398;
  undefined8 *local_390;
  ulonglong uStack_388;
  undefined1 local_1d0;
  undefined1 local_1cf;
  code *local_130;
  int local_128;
  code *local_120;
  int local_118;
  code *local_f0;
  int local_e8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_898;
  plVar20 = (longlong *)param_3[1];
  if (plVar20 == (longlong *)0x0) {
LAB_1443fecfe:
    plVar20 = (longlong *)0x0;
  }
  else {
    iVar15 = (int)plVar20[1];
    do {
      if (iVar15 == 0) goto LAB_1443fecfe;
      LOCK();
      iVar12 = (int)plVar20[1];
      bVar23 = iVar15 == iVar12;
      if (bVar23) {
        *(int *)(plVar20 + 1) = iVar15 + 1;
        iVar12 = iVar15;
      }
      iVar15 = iVar12;
      UNLOCK();
    } while (!bVar23);
  }
  plVar22 = (longlong *)0x0;
  if (plVar20 != (longlong *)0x0) {
    plVar22 = (longlong *)*param_3;
  }
  if (*(char *)(param_1 + 0x371) == '\x01') {
    *(undefined1 *)(param_1 + 0x371) = 0;
    plVar21 = DAT_14c98e618;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_1443fedb5:
      local_768 = 0;
      plStack_760 = (longlong *)0x0;
      (**(code **)(*plVar21 + 0x28))(plVar21,&local_758);
    }
    else {
      iVar15 = (int)plVar3[1];
      do {
        if (iVar15 == 0) goto LAB_1443fedb5;
        LOCK();
        iVar12 = (int)plVar3[1];
        bVar23 = iVar15 == iVar12;
        if (bVar23) {
          *(int *)(plVar3 + 1) = iVar15 + 1;
          iVar12 = iVar15;
        }
        iVar15 = iVar12;
        UNLOCK();
      } while (!bVar23);
      uVar4 = *(undefined8 *)(param_1 + 8);
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
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_768 = uVar4;
      plStack_760 = plVar3;
      (**(code **)(*plVar21 + 0x28))(plVar21,&local_758);
      LOCK();
      plVar21 = plVar3 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
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
    uVar19 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_758 != (code **)0x0);
    if (local_758 != (code **)0x0) {
      cVar13 = (**(code **)(*plVar22 + 0x10))(plVar22);
      fVar7 = 100.0;
      fVar8 = fVar7;
      if (cVar13 != '\0') {
        iVar15 = (**(code **)(*plVar22 + 8))(plVar22);
        fVar8 = (float)iVar15;
      }
      cVar13 = (**(code **)(*plVar22 + 0x20))(plVar22);
      if (cVar13 != '\0') {
        iVar15 = (**(code **)(*plVar22 + 0x18))(plVar22);
        fVar7 = (float)iVar15;
      }
      cVar13 = (**(code **)(*plVar22 + 0x30))(plVar22);
      if (cVar13 == '\0') {
        fVar6 = 800.0;
      }
      else {
        iVar15 = (**(code **)(*plVar22 + 0x28))(plVar22);
        fVar6 = (float)iVar15;
      }
      cVar13 = (**(code **)(*plVar22 + 0x40))(plVar22);
      if (cVar13 == '\0') {
        fVar5 = 600.0;
      }
      else {
        iVar15 = (**(code **)(*plVar22 + 0x38))(plVar22);
        fVar5 = (float)iVar15;
      }
      cVar13 = (**(code **)(*plVar22 + 0x70))(plVar22);
      local_778 = 0;
      local_770 = *(longlong **)(param_2 + 8);
      if (local_770 != (longlong *)0x0) {
        iVar15 = (int)local_770[1];
        do {
          if (iVar15 == 0) {
            local_770 = (longlong *)0x0;
            goto LAB_1443ff585;
          }
          LOCK();
          iVar12 = (int)local_770[1];
          bVar23 = iVar15 == iVar12;
          if (bVar23) {
            *(int *)(local_770 + 1) = iVar15 + 1;
            iVar12 = iVar15;
          }
          iVar15 = iVar12;
          UNLOCK();
        } while (!bVar23);
        if (local_770 != (longlong *)0x0) {
          local_778 = *(undefined8 *)param_2;
        }
      }
LAB_1443ff585:
      FUN_14627df0c(&local_748);
      local_868 = param_2;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      local_7b0 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_7a8 = DAT_14c844848;
      local_7a0 = 1;
      local_798 = 0;
      uStack_790 = 0;
      lVar17 = FUN_14627f7ee(&local_748);
      *(float *)(lVar17 + 0x1ec) = fVar6;
      *(float *)(lVar17 + 0x1f0) = fVar5;
      *(float *)(lVar17 + 0x1e4) = fVar8;
      *(float *)(lVar17 + 0x1e8) = fVar7;
      *(undefined1 *)(lVar17 + 0x1e1) = 0;
      *(char *)(lVar17 + 0x202) = cVar13 * '\x02';
      *(char *)(lVar17 + 0x20e) = cVar13;
      *(char *)(lVar17 + 0x20f) = cVar13;
      *(undefined1 *)(lVar17 + 0x20d) = 1;
      *(undefined1 *)(lVar17 + 0x234) = 1;
      uVar14 = (**(code **)(*plVar22 + 0x78))(plVar22);
      *(undefined1 *)(lVar17 + 0x200) = uVar14;
      *(undefined8 *)(lVar17 + 0x238) = 0;
      *(undefined8 *)(lVar17 + 0x240) = 0;
      local_878 = &local_7f8;
      FUN_1461c0e96(&local_3a8,"SWindow",
                    ".\\../Plugins/Online/OnlineFramework/Source/LoginFlow/Private/SLoginFlow.cpp",
                    0x15a);
      FUN_1462139ea(&local_3a8,&local_788,lVar17);
      if (plStack_3a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_3a0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_3a0)(plStack_3a0);
          LOCK();
          piVar2 = (int *)((longlong)plStack_3a0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plStack_3a0 + 0x10))(plStack_3a0);
          }
        }
      }
      FUN_14627e134(&local_748);
      local_858 = local_788;
      FUN_140a562d0(&local_748);
      local_590 = 0;
      local_3a8 = (code *)0x0;
      plStack_3a0 = (longlong *)0x0;
      local_398 = 1;
      local_588 = 0;
      uStack_580 = 0;
      local_578 = 1;
      local_390 = (undefined8 *)0x0;
      uStack_388 = 0;
      if (local_568 == 0) {
LAB_1443ff766:
        if (local_570 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_570 != (undefined8 *)0x0) {
        (**(code **)*local_570)(local_570,0);
        FUN_1446efa72(&local_570,0,0,0x10);
        local_568 = 0;
        goto LAB_1443ff766;
      }
      local_570 = (undefined8 *)0x0;
      local_568 = 0;
      if ((int)uStack_388 == 0) {
LAB_1443ff7d4:
        if (local_390 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_390 != (undefined8 *)0x0) {
        (**(code **)*local_390)(local_390,0);
        FUN_1446efa72(&local_390,0,0,0x10);
        uStack_388 = uStack_388 & 0xffffffff00000000;
        goto LAB_1443ff7d4;
      }
      FUN_149057058(&local_3a8);
      local_1d0 = (**(code **)(*plVar22 + 0x58))(plVar22);
      local_1cf = (**(code **)(*plVar22 + 0x60))(plVar22);
      local_818 = FUN_1443fec8c;
      local_810 = (longlong *)((ulonglong)local_810._4_4_ << 0x20);
      FUN_149056b6e(&local_7f8,param_1);
      iVar15 = local_7f0;
      pcVar9 = local_7f8;
      local_7f8 = (code *)0x0;
      local_7f0 = 0;
      if (local_128 == 0) {
LAB_1443ff85a:
        if (local_130 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_130 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_130)(local_130,0);
        FUN_1446efa72(&local_130,0,0,0x10);
        local_128 = 0;
        goto LAB_1443ff85a;
      }
      local_130 = pcVar9;
      local_128 = iVar15;
      if (local_7f0 == 0) {
LAB_1443ff8bf:
        if (local_7f8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_7f8 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_7f8)(local_7f8,0);
        FUN_1446efa72(&local_7f8,0,0,0x10);
        local_7f0 = 0;
        goto LAB_1443ff8bf;
      }
      local_818 = FUN_1444002fa;
      local_810 = (longlong *)((ulonglong)local_810 & 0xffffffff00000000);
      FUN_149057544(&local_7f8,param_1);
      iVar15 = local_7f0;
      pcVar9 = local_7f8;
      local_7f8 = (code *)0x0;
      local_7f0 = 0;
      if (local_118 == 0) {
LAB_1443ff912:
        if (local_120 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_120 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_120)(local_120,0);
        FUN_1446efa72(&local_120,0,0,0x10);
        local_118 = 0;
        goto LAB_1443ff912;
      }
      local_120 = pcVar9;
      local_118 = iVar15;
      if (local_7f0 == 0) {
LAB_1443ff977:
        if (local_7f8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_7f8 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_7f8)(local_7f8,0);
        FUN_1446efa72(&local_7f8,0,0,0x10);
        local_7f0 = 0;
        goto LAB_1443ff977;
      }
      local_818 = (code *)&LAB_149054f3a;
      local_810 = (longlong *)((ulonglong)local_810 & 0xffffffff00000000);
      FUN_149057a2e(&local_7f8,param_1);
      iVar15 = local_7f0;
      pcVar9 = local_7f8;
      local_7f8 = (code *)0x0;
      local_7f0 = 0;
      if (local_e8 == 0) {
LAB_1443ff9ca:
        if (local_f0 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_f0 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_f0)(local_f0,0);
        FUN_1446efa72(&local_f0,0,0,0x10);
        local_e8 = 0;
        goto LAB_1443ff9ca;
      }
      local_f0 = pcVar9;
      local_e8 = iVar15;
      if (local_7f0 == 0) {
LAB_1443ffa2f:
        if (local_7f8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_7f8 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_7f8)(local_7f8,0);
        FUN_1446efa72(&local_7f8,0,0,0x10);
        local_7f0 = 0;
        goto LAB_1443ffa2f;
      }
      local_800 = &local_778;
      FUN_149057f18(&local_7f8);
      local_860 = local_7f8;
      plVar22 = (longlong *)CONCAT44(uStack_7ec,local_7f0);
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
        UNLOCK();
      }
      FUN_1490571b4(&local_7f8,&local_7e0,&local_3a8);
      plVar21 = local_598;
      plVar3 = local_7d8;
      if (local_7d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_7d8 + 1) = (int)local_7d8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_7d8 + 1) = (int)local_7d8[1] + 1;
        UNLOCK();
      }
      local_5a0 = local_7e0;
      local_598 = local_7d8;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar21 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      local_878 = (code **)&local_819;
      FUN_140a55c32(&local_818,"SBorder",
                    ".\\../Plugins/Online/OnlineFramework/Source/LoginFlow/Private/SLoginFlow.cpp",
                    0x16a);
      FUN_140a530e4(&local_818,&local_7d0,&local_748);
      local_7c0 = local_7d0;
      local_7b8 = local_7c8;
      if (local_7c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_7c8 + 1) = (int)local_7c8[1] + 1;
        UNLOCK();
      }
      FUN_140763be6(local_858,&local_7c0);
      pcVar9 = local_868;
      if (local_7c8 != (longlong *)0x0) {
        LOCK();
        plVar21 = local_7c8 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*local_7c8)(local_7c8);
          LOCK();
          piVar2 = (int *)((longlong)local_7c8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_7c8 + 0x10))(local_7c8);
          }
        }
      }
      plVar21 = local_810;
      if (local_810 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_810 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_810)(local_810);
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar3 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
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
      if (local_7d8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_7d8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_7d8)(local_7d8);
          LOCK();
          piVar2 = (int *)((longlong)local_7d8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_7d8 + 0x10))(local_7d8);
          }
        }
      }
      plVar3 = (longlong *)CONCAT44(uStack_7ec,local_7f0);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar3 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
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
      FUN_14905722e(&local_3a8);
      FUN_140a59028(&local_748);
      pcVar10 = local_788;
      uVar4 = *(undefined8 *)pcVar9;
      lVar17 = *(longlong *)(pcVar9 + 8);
      if (lVar17 != 0) {
        LOCK();
        *(int *)(lVar17 + 0xc) = *(int *)(lVar17 + 0xc) + 1;
        UNLOCK();
      }
      local_748 = (code *)0x0;
      local_740._0_4_ = 0;
      FUN_1446efa72(&local_748,0,3,0x10);
      local_740._0_4_ = 3;
      *(undefined ***)local_748 = &PTR_LAB_14ba6f7f0;
      *(undefined8 *)(local_748 + 8) = uVar4;
      *(longlong *)(local_748 + 0x10) = lVar17;
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 1;
      lVar17 = DAT_14c758608 + 1;
      if (lVar18 == 0) {
        LOCK();
        UNLOCK();
        lVar18 = DAT_14c758608 + 2;
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      *(longlong *)(local_748 + 0x18) = lVar18;
      *(undefined ***)local_748 = &PTR_FUN_14ba6f780;
      *(code **)(local_748 + 0x20) = FUN_1444006a4;
      FUN_145ae452c(pcVar10 + 0x5b0,&local_748);
      if ((int)local_740 == 0) {
LAB_1443ffd4f:
        if (local_748 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_748 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_748)(local_748,0);
        FUN_1446efa72(&local_748,0,0,0x10);
        local_740._0_4_ = 0;
        goto LAB_1443ffd4f;
      }
      plVar3 = DAT_14c98e618;
      local_840 = local_788;
      local_838 = local_780;
      if (local_780 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_780 + 1) = (int)local_780[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,local_830,&local_840,1);
      if (local_828 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_828 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_828)(local_828);
          LOCK();
          piVar2 = (int *)((longlong)local_828 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_828 + 0x10))(local_828);
          }
        }
      }
      plVar3 = *(longlong **)(local_788 + 0x510);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,0);
      }
      plVar3 = DAT_14c98e618;
      local_748 = local_860;
      if (plVar22 == (longlong *)0x0) {
        plVar21 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
        UNLOCK();
        plVar21 = plVar22;
      }
      local_740 = (code **)plVar22;
      uVar16 = (**(code **)(*(longlong *)plVar3[0xe4] + 8))();
      FUN_1410a3d58(plVar3,uVar16,&local_748,2);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar21 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      local_3a8 = local_788;
      plStack_3a0 = local_780;
      if (local_780 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_780 + 0xc) = *(int *)((longlong)local_780 + 0xc) + 1;
        UNLOCK();
      }
      local_748 = local_868;
      local_740 = &local_3a8;
      FUN_1490583d4(param_1 + 0x2e8,&local_7f8);
      if (plStack_3a0 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plStack_3a0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plStack_3a0 + 0x10))();
        }
      }
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar22 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (local_780 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_780 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_780)(local_780);
          LOCK();
          piVar2 = (int *)((longlong)local_780 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_780 + 0x10))(local_780);
          }
        }
      }
      plVar22 = local_770;
      if (local_770 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_770 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_770)(local_770);
          LOCK();
          piVar2 = (int *)((longlong)plVar22 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
    }
    if (local_750 != (longlong *)0x0) {
      LOCK();
      plVar22 = local_750 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*local_750)(local_750);
        LOCK();
        piVar2 = (int *)((longlong)local_750 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_750 + 0x10))(local_750);
        }
      }
    }
    goto LAB_1443ff4fc;
  }
  local_818 = (code *)0x0;
  local_810 = *(longlong **)(param_2 + 8);
  if (local_810 != (longlong *)0x0) {
    iVar15 = (int)local_810[1];
    do {
      if (iVar15 == 0) {
        local_810 = (longlong *)0x0;
        goto LAB_1443fef79;
      }
      LOCK();
      iVar12 = (int)local_810[1];
      bVar23 = iVar15 == iVar12;
      if (bVar23) {
        *(int *)(local_810 + 1) = iVar15 + 1;
        iVar12 = iVar15;
      }
      iVar15 = iVar12;
      UNLOCK();
    } while (!bVar23);
    if (local_810 != (longlong *)0x0) {
      local_818 = *(code **)param_2;
    }
  }
LAB_1443fef79:
  FUN_14903921a(&local_748);
  local_570 = (undefined8 *)CONCAT62(local_570._2_6_,0x100);
  local_850 = *(undefined8 *)param_2;
  local_848 = *(longlong *)(param_2 + 8);
  if (local_848 != 0) {
    LOCK();
    *(int *)(local_848 + 0xc) = *(int *)(local_848 + 0xc) + 1;
    UNLOCK();
  }
  local_3a8 = FUN_14440078a;
  plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
  FUN_149057386(&local_748,param_1,&local_3a8,&local_850);
  local_7f8 = FUN_1443fe93e;
  local_7f0 = 0;
  FUN_149056042(&local_3a8,param_1);
  pcVar9 = local_3a8;
  local_3a8 = (code *)0x0;
  iVar15 = (int)plStack_3a0;
  plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
  if (local_480 == 0) {
LAB_1443ff026:
    if (local_488 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_488 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_488)(local_488,0);
    FUN_1446efa72(&local_488,0,0,0x10);
    local_480 = 0;
    goto LAB_1443ff026;
  }
  local_488 = pcVar9;
  local_480 = iVar15;
  if ((int)plStack_3a0 == 0) {
LAB_1443ff08a:
    if (local_3a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_3a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_3a8)(local_3a8,0);
    FUN_1446efa72(&local_3a8,0,0,0x10);
    plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
    goto LAB_1443ff08a;
  }
  local_7f8 = FUN_1443fec8c;
  local_7f0 = 0;
  FUN_149056b6e(&local_3a8,param_1);
  pcVar9 = local_3a8;
  local_3a8 = (code *)0x0;
  iVar15 = (int)plStack_3a0;
  plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
  if (local_470 == 0) {
LAB_1443ff0dd:
    if (local_478 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_478 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_478)(local_478,0);
    FUN_1446efa72(&local_478,0,0,0x10);
    local_470 = 0;
    goto LAB_1443ff0dd;
  }
  local_478 = pcVar9;
  local_470 = iVar15;
  if ((int)plStack_3a0 == 0) {
LAB_1443ff141:
    if (local_3a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_3a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_3a8)(local_3a8,0);
    FUN_1446efa72(&local_3a8,0,0,0x10);
    plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
    goto LAB_1443ff141;
  }
  local_7f8 = FUN_1444002fa;
  local_7f0 = 0;
  FUN_149057544(&local_3a8,param_1);
  pcVar9 = local_3a8;
  local_3a8 = (code *)0x0;
  iVar15 = (int)plStack_3a0;
  plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
  if (local_460 == 0) {
LAB_1443ff194:
    if (local_468 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_468 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_468)(local_468,0);
    FUN_1446efa72(&local_468,0,0,0x10);
    local_460 = 0;
    goto LAB_1443ff194;
  }
  local_468 = pcVar9;
  local_460 = iVar15;
  if ((int)plStack_3a0 == 0) {
LAB_1443ff1f8:
    if (local_3a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_3a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_3a8)(local_3a8,0);
    FUN_1446efa72(&local_3a8,0,0,0x10);
    plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
    goto LAB_1443ff1f8;
  }
  local_7f8 = (code *)&LAB_1443fec7a;
  local_7f0 = 0;
  FUN_149056684(&local_3a8,param_1);
  pcVar9 = local_3a8;
  local_3a8 = (code *)0x0;
  iVar15 = (int)plStack_3a0;
  plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
  if (local_450 == 0) {
LAB_1443ff24b:
    if (local_458 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_458 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_458)(local_458,0);
    FUN_1446efa72(&local_458,0,0,0x10);
    local_450 = 0;
    goto LAB_1443ff24b;
  }
  local_458 = pcVar9;
  local_450 = iVar15;
  if ((int)plStack_3a0 == 0) {
LAB_1443ff2af:
    if (local_3a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_3a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_3a8)(local_3a8,0);
    FUN_1446efa72(&local_3a8,0,0,0x10);
    plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
    goto LAB_1443ff2af;
  }
  local_7f8 = (code *)&LAB_149054f3a;
  local_7f0 = 0;
  FUN_149057a2e(&local_3a8,param_1);
  plVar22 = plStack_3a0;
  pcVar9 = local_3a8;
  local_3a8 = (code *)0x0;
  iVar15 = (int)plStack_3a0;
  plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
  if (local_430 == 0) {
LAB_1443ff302:
    if (local_438 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_438 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_438)(local_438,0);
    FUN_1446efa72(&local_438,0,0,0x10);
    local_430 = 0;
    goto LAB_1443ff302;
  }
  local_438 = pcVar9;
  local_430 = iVar15;
  if ((int)plStack_3a0 == 0) {
LAB_1443ff366:
    if (local_3a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_3a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_3a8)(local_3a8,0);
    FUN_1446efa72(&local_3a8,0,0,0x10);
    plStack_3a0 = (longlong *)((ulonglong)plStack_3a0 & 0xffffffff00000000);
    goto LAB_1443ff366;
  }
  local_758 = &local_818;
  FUN_149059124(&local_3a8);
  FUN_149057410(&local_3a8,&local_7f8,&local_748);
  plVar3 = plStack_3a0;
  if (plStack_3a0 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_3a0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plStack_3a0)(plStack_3a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1490396d4(&local_748);
  local_740 = (code **)CONCAT44(uStack_7ec,local_7f0);
  local_748 = local_7f8;
  if (local_740 != (code **)0x0) {
    LOCK();
    *(int *)(local_740 + 1) = (int)local_740[1] + 1;
    UNLOCK();
  }
  FUN_14905748a(param_1,&local_748);
  ppcVar11 = local_740;
  if (local_740 != (code **)0x0) {
    LOCK();
    plVar3 = (longlong *)(local_740 + 1);
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_740)(local_740);
      LOCK();
      piVar2 = (int *)((longlong)ppcVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)((longlong)*ppcVar11 + 0x10))(ppcVar11);
      }
    }
  }
  plStack_3a0 = (longlong *)CONCAT44(uStack_7ec,local_7f0);
  local_3a8 = local_7f8;
  if (plStack_3a0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_3a0 + 0xc) = *(int *)((longlong)plStack_3a0 + 0xc) + 1;
    UNLOCK();
  }
  local_748 = param_2;
  local_740 = &local_3a8;
  FUN_149059278(param_1 + 0x288,&local_758);
  if (plStack_3a0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_3a0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plStack_3a0 + 0x10))();
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_7ec,local_7f0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar3 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
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
  plVar3 = local_810;
  if (local_810 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_810 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_810)(local_810);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  uVar19 = CONCAT71((uint7)(uint3)((ulonglong)plVar22 >> 8),1);
LAB_1443ff4fc:
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar22 = plVar20 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
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
  if ((local_a0 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
}



// FUNCTION 1444002fa FUN_1444002fa body=936 status=ok
// SIG undefined FUN_1444002fa(void)

ulonglong FUN_1444002fa(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_144400365:
    uVar11 = 0;
    goto LAB_144400367;
  }
  iVar9 = (int)plVar4[1];
  do {
    if (iVar9 == 0) goto LAB_144400365;
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar13 = iVar9 == iVar6;
    if (bVar13) {
      *(int *)(plVar4 + 1) = iVar9 + 1;
      iVar6 = iVar9;
    }
    iVar9 = iVar6;
    UNLOCK();
  } while (!bVar13);
  plVar5 = (longlong *)*param_2;
  if (plVar5 == (longlong *)0x0) {
LAB_1444005e4:
    uVar11 = 0;
  }
  else {
    cVar7 = (**(code **)(*plVar5 + 0x38))(plVar5);
    if (cVar7 == '\0') {
      uVar11 = 0;
      (**(code **)(*plVar5 + 0x118))(plVar5,0,0);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
      UNLOCK();
      plVar3 = param_1 + 0x51;
      local_50 = plVar5;
      local_48 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
        UNLOCK();
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      uVar8 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4)) *
              -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      iVar9 = FUN_1490595ec(plVar3,uVar8 >> 0x10 ^ uVar8,&local_50);
      if (iVar9 == -1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (longlong)iVar9 * 0x28 + *plVar3;
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      if (lVar12 == 0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
        UNLOCK();
        param_1 = param_1 + 0x5d;
        local_50 = plVar5;
        local_48 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
          UNLOCK();
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        uVar8 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        iVar9 = FUN_149058748(param_1,uVar8 >> 0x10 ^ uVar8,&local_50);
        if (iVar9 == -1) {
          lVar12 = 0;
        }
        else {
          lVar12 = (longlong)iVar9 * 0x28 + *param_1;
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        if (lVar12 == 0) goto LAB_1444005e4;
        plVar10 = *(longlong **)(lVar12 + 0x18);
        bVar13 = true;
        if (plVar10 == (longlong *)0x0) {
LAB_14440061c:
          plVar10 = (longlong *)0x0;
        }
        else {
          iVar9 = (int)plVar10[1];
          do {
            if (iVar9 == 0) goto LAB_14440061c;
            LOCK();
            iVar6 = (int)plVar10[1];
            bVar14 = iVar9 == iVar6;
            if (bVar14) {
              *(int *)(plVar10 + 1) = iVar9 + 1;
              iVar6 = iVar9;
            }
            iVar9 = iVar6;
            UNLOCK();
          } while (!bVar14);
          if (*(longlong *)(lVar12 + 0x10) != 0) {
            FUN_14698158e();
          }
          bVar13 = false;
        }
        LOCK();
        *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
        UNLOCK();
        local_50 = plVar5;
        local_48 = plVar4;
        FUN_149059cd6(param_1);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        uVar11 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        if (!bVar13) {
          LOCK();
          plVar5 = plVar10 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              lVar12 = *plVar10;
              goto LAB_1444005b2;
            }
          }
        }
      }
      else {
        plVar10 = *(longlong **)(lVar12 + 0x18);
        bVar13 = true;
        if (plVar10 == (longlong *)0x0) {
LAB_1444004d4:
          plVar10 = (longlong *)0x0;
        }
        else {
          iVar9 = (int)plVar10[1];
          do {
            if (iVar9 == 0) goto LAB_1444004d4;
            LOCK();
            iVar6 = (int)plVar10[1];
            bVar14 = iVar9 == iVar6;
            if (bVar14) {
              *(int *)(plVar10 + 1) = iVar9 + 1;
              iVar6 = iVar9;
            }
            iVar9 = iVar6;
            UNLOCK();
          } while (!bVar14);
          local_50 = *(longlong **)(lVar12 + 0x10);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            local_48 = plVar10;
            FUN_1490599c2(param_1,&local_50);
            param_1 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_48 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)param_1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*param_1 + 0x10))(param_1);
                }
              }
            }
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
          bVar13 = false;
        }
        LOCK();
        *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar4 + 0xcU) = *(int *)((longlong)plVar4 + 0xcU) + 1;
        UNLOCK();
        local_50 = plVar5;
        local_48 = plVar4;
        FUN_149059a38(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
        uVar11 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        if (!bVar13) {
          LOCK();
          plVar5 = plVar10 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              lVar12 = *plVar10;
LAB_1444005b2:
              (**(code **)(lVar12 + 0x10))(plVar10);
            }
          }
        }
      }
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_144400367:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1444006a4 FUN_1444006a4 body=229 status=ok
// SIG undefined FUN_1444006a4(void)

void FUN_1444006a4(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_144400754;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar8 = iVar7 == iVar5;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar8);
    plVar3 = (longlong *)*param_2;
    if (plVar3 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar3 + 0x38))(plVar3);
      plVar4 = DAT_14c968098;
      if (cVar6 == '\0') {
        (**(code **)(*plVar3 + 0x118))(plVar3,0,0);
      }
      else {
        local_38 = *param_1;
        local_30 = param_1[1];
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar4 + 0x140))(plVar4,&local_38);
      }
    }
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
LAB_144400754:
    plVar2 = (longlong *)param_2[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14440078a FUN_14440078a body=174 status=ok
// SIG undefined FUN_14440078a(void)

void FUN_14440078a(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = (longlong *)param_2[1];
  bVar2 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    plVar6 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1444007c3;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar6 = (longlong *)*param_2;
    bVar2 = false;
  }
LAB_1444007c3:
  cVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
  if ((cVar4 != '\0') && (cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6), cVar4 == '\0')) {
    (**(code **)(*plVar6 + 0x118))(plVar6,0,0);
  }
  if (!bVar2) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014440082a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144400838 FUN_144400838 body=127 status=ok
// SIG undefined FUN_144400838(void)

void FUN_144400838(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&DAT_14cbf6590,L"UNSET",1);
  local_28 = 0x800000014ba6f086;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1466733da(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444008b8 FUN_1444008b8 body=91 status=ok
// SIG undefined FUN_1444008b8(void)

void FUN_1444008b8(void)

{
  uint uVar1;
  undefined1 auStack_38 [32];
  char *local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = "RewindDebuggerRuntimeExtension";
  local_10 = 0x1e;
  local_c = 0;
  uVar1 = FUN_14001a6c0(&local_18,1);
  DAT_14cbf65a0 = (ulonglong)uVar1;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144400914 FUN_144400914 body=763 status=ok
// SIG undefined FUN_144400914(void)

void FUN_144400914(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  ulonglong uVar11;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < (longlong)*(int *)(param_2 + 1)) {
    local_78 = 0;
    uStack_70 = 0;
    puVar13 = (undefined8 *)*param_2;
    puVar8 = puVar13 + (longlong)*(int *)(param_2 + 1) * 2;
LAB_14440097e:
    iVar4 = *(int *)(puVar13 + 1);
    puVar6 = &DAT_149dfb77a;
    if (iVar4 != 0) {
      puVar6 = (undefined2 *)*puVar13;
    }
    lVar7 = 10;
    lVar9 = 0;
    while( true ) {
      uVar2 = *(ushort *)((longlong)puVar6 + lVar9);
      uVar11 = (ulonglong)uVar2;
      uVar10 = (uint)uVar2;
      uVar3 = *(ushort *)((longlong)L"-tracefile" + lVar9);
      uVar12 = (uint)uVar3;
      if (uVar2 != uVar3) break;
      if (uVar2 == 0) goto LAB_144400a73;
LAB_1444009ad:
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) goto LAB_144400a73;
      lVar9 = lVar9 + 2;
    }
    if ((uVar3 | uVar2) < 0x80) {
      pbVar1 = &DAT_149e05da0 + uVar11;
      uVar11 = 0;
      uVar10 = (uint)*pbVar1;
      uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
      if (*pbVar1 == (&DAT_149e05da0)[uVar3]) goto LAB_1444009ad;
    }
    uVar11 = (ulonglong)(uVar10 - uVar12);
    if (uVar10 - uVar12 != 0) {
      puVar6 = &DAT_149dfb77a;
      if (iVar4 != 0) {
        puVar6 = (undefined2 *)*puVar13;
      }
      lVar7 = 10;
      lVar9 = 0;
      goto LAB_1444009f8;
    }
LAB_144400a73:
    puVar6 = &DAT_149dfb77a;
    if (iVar4 != 0) {
      puVar6 = (undefined2 *)*puVar13;
    }
    local_a8 = 0;
    cVar5 = FUN_14063337c(puVar6,L"-tracefile=",&local_78,CONCAT71((int7)(uVar11 >> 8),1));
    if (cVar5 != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c844850) {
        FUN_144b3d300(&DAT_14c844850);
        if (DAT_14c844850 == -1) {
          DAT_14c844840 = (longlong *)FUN_14494321d();
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
      }
      local_88 = DAT_14c844840;
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
      local_80 = 0;
      cVar5 = FUN_1468112f6(&local_78,&local_88);
      if (cVar5 == '\0') {
        FUN_1400b22c2(&local_98,&DAT_149e02088);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_78 = CONCAT44(uStack_94,local_98);
        uStack_70 = CONCAT44(uStack_8c,uStack_90);
      }
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    goto LAB_144400b3e;
  }
LAB_144400be0:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1444009f8:
  uVar2 = *(ushort *)((longlong)puVar6 + lVar9);
  uVar11 = (ulonglong)uVar2;
  uVar10 = (uint)uVar2;
  uVar3 = *(ushort *)((longlong)L"-tracehost" + lVar9);
  uVar12 = (uint)uVar3;
  if (uVar2 == uVar3) {
    if (uVar2 == 0) goto LAB_144400a49;
LAB_144400a14:
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) goto LAB_144400a49;
    lVar9 = lVar9 + 2;
    goto LAB_1444009f8;
  }
  if ((uVar3 | uVar2) < 0x80) {
    pbVar1 = &DAT_149e05da0 + uVar11;
    uVar11 = 0;
    uVar10 = (uint)*pbVar1;
    uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
    if (*pbVar1 == (&DAT_149e05da0)[uVar3]) goto LAB_144400a14;
  }
  uVar11 = (ulonglong)(uVar10 - uVar12);
  if (uVar10 - uVar12 != 0) goto LAB_144400b3e;
LAB_144400a49:
  puVar6 = &DAT_149dfb77a;
  if (iVar4 != 0) {
    puVar6 = (undefined2 *)*puVar13;
  }
  local_a8 = 0;
  FUN_14063337c(puVar6,L"-tracehost=",&local_78,CONCAT71((int7)(uVar11 >> 8),1));
LAB_144400b3e:
  puVar13 = puVar13 + 2;
  if (puVar13 == puVar8) goto LAB_144400bd1;
  goto LAB_14440097e;
LAB_144400bd1:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  goto LAB_144400be0;
}



// FUNCTION 144400c10 FUN_144400c10 body=644 status=ok
// SIG undefined FUN_144400c10(void)

void FUN_144400c10(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined ***pppuVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  undefined ***pppuVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [40];
  longlong local_90;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x48) != '\x01') goto LAB_144400dfe;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14ba702d0;
  local_60 = &LAB_144400e96;
  local_88 = FUN_14905df54;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  uVar6 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cbf65a0);
  pppuVar16 = (undefined ***)0x0;
  if ((int)uVar6 < 1) {
LAB_144400d1a:
    pppuVar11 = &local_68;
    if (pppuVar16 != (undefined ***)0x0) {
      pppuVar11 = pppuVar16;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  else {
    do {
      lVar8 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,DAT_14cbf65a0,pppuVar16);
      pcVar4 = local_88;
      local_90 = lVar8 + -8;
      if (lVar8 == 0) {
        local_90 = 0;
      }
      pppuVar11 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar11 = &local_68;
      }
      uVar9 = (*(code *)(*pppuVar11)[1])();
      (*pcVar4)(uVar9,&local_90);
      uVar14 = (int)pppuVar16 + 1;
      pppuVar16 = (undefined ***)(ulonglong)uVar14;
    } while (uVar6 != uVar14);
    pppuVar16 = local_78;
    if (local_88 != (code *)0x0) goto LAB_144400d1a;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  iVar7 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x44) = iVar7 + 1;
  uVar10 = (ulonglong)*(int *)(param_1 + 0x38);
  if ((longlong)uVar10 < 1) {
    *(int *)(param_1 + 0x44) = iVar7;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x30);
    bVar13 = false;
    do {
      lVar8 = uVar10 * 0x10 + -8;
      uVar17 = uVar10;
      while (((*(int *)(*plVar1 + lVar8) != 0 &&
              (plVar2 = *(longlong **)(*plVar1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar2 + 0x60))(), cVar5 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar17 < 2;
        uVar17 = uVar17 - 1;
        if (bVar3) {
          iVar7 = *(int *)(param_1 + 0x44) + -1;
          *(int *)(param_1 + 0x44) = iVar7;
          if (bVar13) goto LAB_144400d9d;
          goto LAB_144400dfe;
        }
      }
      uVar10 = uVar17 - 1;
      bVar13 = true;
    } while (1 < uVar17);
    iVar7 = *(int *)(param_1 + 0x44) + -1;
    *(int *)(param_1 + 0x44) = iVar7;
LAB_144400d9d:
    if (iVar7 < 1) {
      iVar7 = *(int *)(param_1 + 0x38);
      iVar12 = iVar7;
      if (0 < iVar7) {
        iVar15 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar15 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar15 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar5 = (**(code **)(*plVar2 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(plVar1,iVar15);
            FUN_14005b248(plVar1);
          }
          else {
            iVar15 = iVar15 + 1;
          }
          iVar12 = *(int *)(param_1 + 0x38);
        } while (iVar15 < iVar12);
      }
      iVar15 = 2;
      if (2 < iVar12 * 2) {
        iVar15 = iVar12 * 2;
      }
      *(int *)(param_1 + 0x40) = iVar15;
      if ((iVar15 < iVar7) && (*(int *)(param_1 + 0x3c) != iVar12)) {
        FUN_14045812c(plVar1);
      }
    }
  }
LAB_144400dfe:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144400e9d FUN_144400e9d body=202 status=ok
// SIG undefined FUN_144400e9d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144400e9d(void)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cbf65a8);
  if (cVar1 == '\0') {
    _DAT_14cbf65a8 = 0;
    uRam000000014cbf65b0 = 0;
  }
  if (local_28 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_28 = &DAT_14a19662d;
  local_20 = 4;
  local_1c = 0;
  FUN_14001a6c0(&local_28,1);
  local_28 = (undefined *)0x800000014ba7029a;
  local_14 = 0x15;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14667353e(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144400f68 FUN_144400f68 body=102 status=ok
// SIG undefined FUN_144400f68(void)

void FUN_144400f68(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba704a0;
  local_14 = 0x19;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1466737b6(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144400fd0 FUN_144400fd0 body=57 status=ok
// SIG undefined FUN_144400fd0(void)

void FUN_144400fd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6638 == 0) {
    uVar1 = FUN_1466738f8();
    DAT_14cbf6638 = FUN_14171c317(FUN_1466739d8,uVar1,L"EBlockoutShape");
  }
  return;
}



// FUNCTION 144401009 FUN_144401009 body=378 status=ok
// SIG undefined FUN_144401009(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144401009(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cbf65e0);
  if (cVar1 == '\0') {
    _DAT_14cbf65e0 = 0;
    uRam000000014cbf65e8 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxBlockout",&PTR_FUN_14ba71520,1,0);
  FUN_1446f470e(&DAT_14cbf6608,L"SetMaterialParameters",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxBlockout",&PTR_FUN_14ba71ae0,1,0);
  ppuStack_60 = &PTR_FUN_14ba72000;
  local_68 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxBlockout",&PTR_FUN_14ba72020,1,0);
  local_48 = "AssetRegistry";
  local_40 = 0xd;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cbf6660 = (ulonglong)uVar2;
  local_48 = (char *)0x800000014ba72048;
  local_34 = 0xb;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146673b3e(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144401184 FUN_144401184 body=69 status=ok
// SIG undefined FUN_144401184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144401184(void)

{
  _DAT_14cbf6700 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444011c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf6708,1);
  return;
}



// FUNCTION 1444011ca FUN_1444011ca body=48 status=ok
// SIG undefined FUN_1444011ca(void)

longlong FUN_1444011ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_140899b20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444011fa FUN_1444011fa body=48 status=ok
// SIG undefined FUN_1444011fa(void)

longlong FUN_1444011fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_140899bb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440122a FUN_14440122a body=48 status=ok
// SIG undefined FUN_14440122a(void)

longlong FUN_14440122a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x718;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440125a FUN_14440125a body=655 status=ok
// SIG undefined FUN_14440125a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440125a(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_48;
  int local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxBiome",&PTR_FUN_14ba72a20,1,0);
  local_48 = "SMInstance";
  local_40 = 10;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  _DAT_14cbf66a0 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_48,&DAT_14cbf66a8);
  if (cVar2 == '\0') {
    _DAT_14cbf66a8 = 0;
    uRam000000014cbf66b0 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxBiome",&PTR_FUN_14ba738c0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxBiome",&PTR_FUN_14ba74750,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxBiome",&PTR_FUN_14ba755e0,1,0);
  local_68 = CONCAT44(local_68._4_4_,0x40);
  FUN_14153156c(&DAT_14cbf6700,L"gbx.Biome.RespectGrassDistanceScale",&DAT_14cbf6710,
                L"If true, AGbxBiomeActor instances will scale their instance draw distance based on `grass.CullDistanceScale`.Changes to this CVar and the distance scale CVar will require reloading the World to PostLoad the components"
               );
  atexit(FUN_144401184);
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_149e062c0;
  *(code **)(local_48 + 0x18) = FUN_1419056b6;
  FUN_141253d16(&DAT_14cbf6738,&local_48);
  if (local_40 != 0) {
    if (local_48 == (char *)0x0) goto LAB_144401475;
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_144401475:
  local_48 = (char *)0x800000014ba75804;
  local_34 = 8;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146673ea0(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444014ec FUN_1444014ec body=147 status=ok
// SIG undefined FUN_1444014ec(void)

void FUN_1444014ec(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/GbxProcedural",&PTR_FUN_14ba76160,1,0);
  local_28 = 0x800000014b4db492;
  local_14 = 0xd;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146674234(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144401580 FUN_144401580 body=147 status=ok
// SIG undefined FUN_144401580(void)

void FUN_144401580(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0x800000014ba7628e;
  local_14 = 6;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1466743ce(&local_28);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14282b410(L"/Script/GbxPCG",&PTR_FUN_14ba76990,1,0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144401636 FUN_144401636 body=41 status=ok
// SIG undefined FUN_144401636(void)

void FUN_144401636(void)

{
  DAT_14cbf6918 = 0;
  if (DAT_14cbf6910 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69ea4();
  return;
}



// FUNCTION 14440165f FUN_14440165f body=4397 status=ok
// SIG undefined FUN_14440165f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440165f(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  double *pdVar10;
  char cVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1400b22c2(&local_128,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar11 = FUN_140b10a34(&local_128,&DAT_14cbf67d0);
  if (cVar11 == '\0') {
    _DAT_14cbf67d0 = 0;
    uRam000000014cbf67d8 = 0;
  }
  if (local_128 != 0.0) {
    FUN_1400020a8();
  }
  local_1d8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  FUN_14282b410(L"/Script/GbxBlockingVolumes",&PTR_FUN_14ba76e30,1,0);
  local_1d8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  FUN_14282b410(L"/Script/GbxBlockingVolumes",&PTR_FUN_14ba772a0,1,0);
  local_1d8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  FUN_14282b410(L"/Script/GbxBlockingVolumes",&PTR_FUN_14ba78160,2,0);
  FUN_1446f470e(&DAT_14cbf6858,L"Opacity",1);
  FUN_1446f470e(&DAT_14cbf6860,L"InvertColors",1);
  FUN_1446f470e(&DAT_14cbf6868,L"Pawns_Blocked",1);
  FUN_1446f470e(&DAT_14cbf6870,L"Grenades_Blocked",1);
  FUN_1446f470e(&DAT_14cbf6878,L"WeaponFire_Blocked",1);
  FUN_1446f470e(&DAT_14cbf6880,L"Usables_Blocked",1);
  FUN_1446f470e(&DAT_14cbf6888,L"Boosters_Blocked",1);
  FUN_1446f470e(&DAT_14cbf6890,L"Vehicles_Blocked",1);
  FUN_1446f470e(&DAT_14cbf6898,L"Team_Set",1);
  FUN_1446f470e(&DAT_14cbf68a0,L"InvisibleWall",1);
  _DAT_14cbf68a8 = 0xb33bbd2e;
  local_128 = DAT_14c846290;
  uStack_120 = DAT_14c846298;
  local_118 = DAT_14c8462a0;
  local_110 = DAT_14c8462a8;
  dStack_108 = DAT_14c8462b0;
  local_100 = DAT_14c8462b8;
  local_f8 = DAT_14c8462c0;
  dStack_f0 = DAT_14c8462c8;
  local_e8 = DAT_14c8462d0;
  local_e0 = DAT_14c8462d8;
  dStack_d8 = DAT_14c8462e0;
  local_d0 = DAT_14c8462e8;
  dVar16 = DAT_14c8462e0 + DAT_14c846298;
  dVar2 = DAT_14c8462d8 + DAT_14c846290;
  dVar1 = dVar2 * dVar2 + dVar16 * dVar16;
  uVar12 = SUB84(DAT_14c8464f0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar12;
    uVar14 = uVar15;
    local_1d0 = DAT_14c8464e8;
    dVar17 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar14 = 0;
      local_1d0 = dVar16 * (1.0 / SQRT(dVar1));
      dVar17 = dVar2 * (1.0 / SQRT(dVar1));
    }
    dVar2 = dVar17;
    local_1c8 = (double)CONCAT44(uVar14,uVar13);
  }
  else {
    local_1c8 = (double)(-(ulonglong)(DAT_14c8462e8 + DAT_14c8462a0 == 0.0) &
                        (ulonglong)(DAT_14c8462e8 + DAT_14c8462a0));
    local_1d0 = dVar16;
  }
  uStack_1c0 = 0;
  dVar16 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar17 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar1 = dVar17 * dVar17 + dVar16 * dVar16;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    uVar13 = uVar12;
    uVar14 = uVar15;
    dVar18 = DAT_14c8464e8;
    dVar3 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar13 = 0;
      uVar14 = 0;
      dVar18 = dVar16 * (1.0 / SQRT(dVar1));
      dVar3 = dVar17 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c8462e8 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c8462e8 + DAT_14c8462b8);
    uVar13 = (int)uVar6;
    uVar14 = (int)(uVar6 >> 0x20);
    dVar18 = dVar16;
    dVar3 = dVar17;
  }
  local_138 = DAT_14c846300;
  local_148 = DAT_14c8462f0;
  dStack_140 = DAT_14c8462f8;
  local_168 = DAT_14c846308;
  dStack_160 = DAT_14c846310;
  local_158 = DAT_14c846318;
  dVar1 = DAT_14c846298 + DAT_14c846310;
  dVar16 = DAT_14c846290 + DAT_14c846308;
  dVar17 = dVar16 * dVar16 + dVar1 * dVar1;
  if ((dVar17 != 1.0) || (NAN(dVar17))) {
    uVar19 = uVar12;
    uVar20 = uVar15;
    dVar4 = DAT_14c8464e8;
    dVar5 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar17) {
      uVar19 = 0;
      uVar20 = 0;
      dVar4 = dVar1 * (1.0 / SQRT(dVar17));
      dVar5 = dVar16 * (1.0 / SQRT(dVar17));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462a0 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462a0);
    uVar19 = (int)uVar6;
    uVar20 = (int)(uVar6 >> 0x20);
    dVar4 = dVar1;
    dVar5 = dVar16;
  }
  dVar16 = DAT_14c8462b0 + DAT_14c846310;
  dVar17 = DAT_14c8462a8 + DAT_14c846308;
  dVar1 = dVar17 * dVar17 + dVar16 * dVar16;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    dVar7 = DAT_14c8464e8;
    dVar8 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar1) {
      uVar12 = 0;
      uVar15 = 0;
      dVar7 = dVar16 * (1.0 / SQRT(dVar1));
      dVar8 = dVar17 * (1.0 / SQRT(dVar1));
    }
  }
  else {
    uVar6 = -(ulonglong)(DAT_14c846318 + DAT_14c8462b8 == 0.0) &
            (ulonglong)(DAT_14c846318 + DAT_14c8462b8);
    uVar12 = (undefined4)uVar6;
    uVar15 = (undefined4)(uVar6 >> 0x20);
    dVar7 = dVar16;
    dVar8 = dVar17;
  }
  DAT_14cbf68b0 = (void *)0x0;
  _DAT_14cbf68b8 = 10;
  FUN_1405b70fe(&DAT_14cbf68b0,10,0);
  pvVar9 = DAT_14cbf68b0;
  memcpy(DAT_14cbf68b0,&local_128,0x60);
  *(double *)((longlong)pvVar9 + 0x60) = dVar2;
  *(double *)((longlong)pvVar9 + 0x68) = local_1d0;
  *(double *)((longlong)pvVar9 + 0x70) = local_1c8;
  *(double *)((longlong)pvVar9 + 0x78) = dVar3;
  *(double *)((longlong)pvVar9 + 0x80) = dVar18;
  *(ulonglong *)((longlong)pvVar9 + 0x88) = CONCAT44(uVar14,uVar13);
  *(double *)((longlong)pvVar9 + 0x90) = local_148;
  *(double *)((longlong)pvVar9 + 0x98) = dStack_140;
  *(double *)((longlong)pvVar9 + 0xa0) = local_138;
  *(double *)((longlong)pvVar9 + 0xb8) = local_158;
  *(double *)((longlong)pvVar9 + 0xa8) = local_168;
  *(double *)((longlong)pvVar9 + 0xb0) = dStack_160;
  *(double *)((longlong)pvVar9 + 0xc0) = dVar5;
  *(double *)((longlong)pvVar9 + 200) = dVar4;
  *(ulonglong *)((longlong)pvVar9 + 0xd0) = CONCAT44(uVar20,uVar19);
  *(double *)((longlong)pvVar9 + 0xd8) = dVar8;
  *(double *)((longlong)pvVar9 + 0xe0) = dVar7;
  *(ulonglong *)((longlong)pvVar9 + 0xe8) = CONCAT44(uVar15,uVar12);
  atexit((_func_5014 *)&LAB_144401614);
  uVar13 = SUB84(DAT_14c846290,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
  uVar12 = SUB84(DAT_14c846298,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  if ((((DAT_14c846290 != 0.0) || (NAN(DAT_14c846290))) || (DAT_14c846298 != 0.0)) ||
     (NAN(DAT_14c846298))) {
    local_1d0 = atan2(DAT_14c846298,DAT_14c846290);
    local_1d0 = local_1d0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846290,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c846290 >> 0x20);
    uVar12 = SUB84(DAT_14c846298,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846298 >> 0x20);
  }
  else {
    local_1d0 = 0.0;
  }
  dVar2 = SQRT((double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar14,uVar13) +
               (double)CONCAT44(uVar15,uVar12) * (double)CONCAT44(uVar15,uVar12));
  dVar1 = 0.0;
  if (((DAT_14c8462a0 != 0.0) || (NAN(DAT_14c8462a0))) || ((dVar2 != 0.0 || (NAN(dVar2))))) {
    dVar1 = atan2(DAT_14c8462a0,dVar2);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462a8,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
  uVar12 = SUB84(DAT_14c8462b0,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  if (((DAT_14c8462a8 != 0.0) || (NAN(DAT_14c8462a8))) ||
     ((DAT_14c8462b0 != 0.0 || (NAN(DAT_14c8462b0))))) {
    local_1a8 = atan2(DAT_14c8462b0,DAT_14c8462a8);
    local_1a8 = local_1a8 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462a8,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462a8 >> 0x20);
    uVar12 = SUB84(DAT_14c8462b0,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462b0 >> 0x20);
  }
  else {
    local_1a8 = 0.0;
  }
  dVar16 = SQRT((double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar14,uVar13) +
                (double)CONCAT44(uVar15,uVar12) * (double)CONCAT44(uVar15,uVar12));
  dVar2 = 0.0;
  if ((((DAT_14c8462b8 != 0.0) || (NAN(DAT_14c8462b8))) || (dVar16 != 0.0)) || (NAN(dVar16))) {
    dVar2 = atan2(DAT_14c8462b8,dVar16);
    dVar2 = dVar2 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462c0,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
  uVar12 = SUB84(DAT_14c8462c8,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  if (((DAT_14c8462c0 != 0.0) || (NAN(DAT_14c8462c0))) ||
     ((DAT_14c8462c8 != 0.0 || (NAN(DAT_14c8462c8))))) {
    local_1b0 = atan2(DAT_14c8462c8,DAT_14c8462c0);
    local_1b0 = local_1b0 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462c0,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462c0 >> 0x20);
    uVar12 = SUB84(DAT_14c8462c8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
  }
  else {
    local_1b0 = 0.0;
  }
  dVar16 = SQRT((double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar14,uVar13) +
                (double)CONCAT44(uVar15,uVar12) * (double)CONCAT44(uVar15,uVar12));
  local_178 = 0.0;
  if (((DAT_14c8462d0 != 0.0) || (NAN(DAT_14c8462d0))) || ((dVar16 != 0.0 || (NAN(dVar16))))) {
    local_178 = atan2(DAT_14c8462d0,dVar16);
    local_178 = local_178 * 57.29577951308232;
  }
  uVar12 = SUB84(DAT_14c8462d8,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  uVar13 = SUB84(DAT_14c8462e0,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  if ((((DAT_14c8462d8 != 0.0) || (NAN(DAT_14c8462d8))) || (DAT_14c8462e0 != 0.0)) ||
     (NAN(DAT_14c8462e0))) {
    local_1b8 = atan2(DAT_14c8462e0,DAT_14c8462d8);
    local_1b8 = local_1b8 * 57.29577951308232;
    uVar12 = SUB84(DAT_14c8462d8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
  }
  else {
    local_1b8 = 0.0;
  }
  dVar16 = SQRT((double)CONCAT44(uVar15,uVar12) * (double)CONCAT44(uVar15,uVar12) +
                (double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar14,uVar13));
  local_180 = 0.0;
  if (((DAT_14c8462e8 != 0.0) || (NAN(DAT_14c8462e8))) || ((dVar16 != 0.0 || (NAN(dVar16))))) {
    local_180 = atan2(DAT_14c8462e8,dVar16);
    local_180 = local_180 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462e0,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462e0 >> 0x20);
    uVar12 = SUB84(DAT_14c8462d8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462d8 >> 0x20);
  }
  dVar18 = (double)CONCAT44(uVar14,uVar13) + DAT_14c846298;
  dVar17 = (double)CONCAT44(uVar15,uVar12) + DAT_14c846290;
  dVar16 = dVar17 * dVar17 + dVar18 * dVar18;
  if ((dVar16 != 1.0) || (NAN(dVar16))) {
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464e0;
    dVar5 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar16) {
      dVar3 = dVar18 * (1.0 / SQRT(dVar16));
      dVar4 = dVar17 * (1.0 / SQRT(dVar16));
      dVar5 = 0.0;
    }
  }
  else {
    dVar16 = DAT_14c8462e8 + DAT_14c8462a0;
    dVar3 = dVar18;
    dVar4 = dVar17;
    dVar5 = 0.0;
    if ((dVar16 == 0.0) && (dVar5 = 0.0, !NAN(dVar16))) {
      dVar5 = dVar16;
    }
  }
  local_188 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    local_188 = atan2(dVar3,dVar4);
    local_188 = local_188 * 57.29577951308232;
  }
  dVar16 = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
  local_190 = 0.0;
  if (((dVar5 != 0.0) || (NAN(dVar5))) || ((dVar16 != 0.0 || (NAN(dVar16))))) {
    local_190 = atan2(dVar5,dVar16);
    local_190 = local_190 * 57.29577951308232;
  }
  dVar16 = DAT_14c8462e0 + DAT_14c8462b0;
  dVar17 = DAT_14c8462d8 + DAT_14c8462a8;
  dVar18 = dVar17 * dVar17 + dVar16 * dVar16;
  if ((dVar18 != 1.0) || (NAN(dVar18))) {
    if (9.99999993922529e-09 <= dVar18) {
      dVar16 = dVar16 * (1.0 / SQRT(dVar18));
      dVar17 = dVar17 * (1.0 / SQRT(dVar18));
      uVar12 = 0;
      uVar15 = 0;
    }
    else {
      uVar12 = SUB84(DAT_14c8464f0,0);
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar16 = DAT_14c8464e8;
      dVar17 = DAT_14c8464e0;
    }
  }
  else {
    dVar18 = DAT_14c8462e8 + DAT_14c8462b8;
    uVar12 = 0;
    uVar15 = 0;
    if ((dVar18 == 0.0) && (!NAN(dVar18))) {
      uVar12 = SUB84(dVar18,0);
      uVar15 = (undefined4)((ulonglong)dVar18 >> 0x20);
    }
  }
  local_198 = 0.0;
  if ((((dVar16 != 0.0) || (NAN(dVar16))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
    local_198 = atan2(dVar16,dVar17);
    local_198 = local_198 * 57.29577951308232;
  }
  dVar16 = SQRT(dVar17 * dVar17 + dVar16 * dVar16);
  local_1a0 = 0.0;
  if ((((double)CONCAT44(uVar15,uVar12) != 0.0) || (NAN((double)CONCAT44(uVar15,uVar12)))) ||
     ((dVar16 != 0.0 || (NAN(dVar16))))) {
    local_1a0 = atan2((double)CONCAT44(uVar15,uVar12),dVar16);
    local_1a0 = local_1a0 * 57.29577951308232;
  }
  uVar13 = SUB84(DAT_14c8462f0,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
  uVar12 = SUB84(DAT_14c8462f8,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  dVar16 = 0.0;
  local_1c8 = dVar1;
  if (((DAT_14c8462f0 != 0.0) || (NAN(DAT_14c8462f0))) ||
     ((DAT_14c8462f8 != 0.0 || (NAN(DAT_14c8462f8))))) {
    dVar16 = atan2(DAT_14c8462f8,DAT_14c8462f0);
    dVar16 = dVar16 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c8462f0,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c8462f0 >> 0x20);
    uVar12 = SUB84(DAT_14c8462f8,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c8462f8 >> 0x20);
  }
  dVar17 = SQRT((double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar14,uVar13) +
                (double)CONCAT44(uVar15,uVar12) * (double)CONCAT44(uVar15,uVar12));
  dVar1 = 0.0;
  if ((((DAT_14c846300 != 0.0) || (NAN(DAT_14c846300))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
    dVar1 = atan2(DAT_14c846300,dVar17);
    dVar1 = dVar1 * 57.29577951308232;
  }
  uVar12 = SUB84(DAT_14c846308,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  uVar13 = SUB84(DAT_14c846310,0);
  uVar14 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  dVar17 = 0.0;
  local_170 = dVar2;
  if (((DAT_14c846308 != 0.0) || (NAN(DAT_14c846308))) ||
     ((DAT_14c846310 != 0.0 || (NAN(DAT_14c846310))))) {
    dVar17 = atan2(DAT_14c846310,DAT_14c846308);
    dVar17 = dVar17 * 57.29577951308232;
    uVar12 = SUB84(DAT_14c846308,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
    uVar13 = SUB84(DAT_14c846310,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
  }
  dVar18 = SQRT((double)CONCAT44(uVar15,uVar12) * (double)CONCAT44(uVar15,uVar12) +
                (double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar14,uVar13));
  dVar2 = 0.0;
  if (((DAT_14c846318 != 0.0) || (NAN(DAT_14c846318))) || ((dVar18 != 0.0 || (NAN(dVar18))))) {
    dVar2 = atan2(DAT_14c846318,dVar18);
    dVar2 = dVar2 * 57.29577951308232;
    uVar13 = SUB84(DAT_14c846310,0);
    uVar14 = (undefined4)((ulonglong)DAT_14c846310 >> 0x20);
    uVar12 = SUB84(DAT_14c846308,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846308 >> 0x20);
  }
  dVar4 = (double)CONCAT44(uVar14,uVar13) + DAT_14c846298;
  dVar3 = (double)CONCAT44(uVar15,uVar12) + DAT_14c846290;
  dVar18 = dVar3 * dVar3 + dVar4 * dVar4;
  if ((dVar18 != 1.0) || (NAN(dVar18))) {
    if (9.99999993922529e-09 <= dVar18) {
      dVar4 = dVar4 * (1.0 / SQRT(dVar18));
      dVar3 = dVar3 * (1.0 / SQRT(dVar18));
      uVar12 = 0;
      uVar15 = 0;
    }
    else {
      uVar12 = SUB84(DAT_14c8464f0,0);
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar4 = DAT_14c8464e8;
      dVar3 = DAT_14c8464e0;
    }
  }
  else {
    dVar18 = DAT_14c846318 + DAT_14c8462a0;
    uVar12 = 0;
    uVar15 = 0;
    if ((dVar18 == 0.0) && (!NAN(dVar18))) {
      uVar12 = SUB84(dVar18,0);
      uVar15 = (undefined4)((ulonglong)dVar18 >> 0x20);
    }
  }
  dVar18 = 0.0;
  if ((((dVar4 != 0.0) || (NAN(dVar4))) || (dVar3 != 0.0)) || (NAN(dVar3))) {
    dVar18 = atan2(dVar4,dVar3);
    dVar18 = dVar18 * 57.29577951308232;
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar4 * dVar4);
  dVar3 = 0.0;
  if ((((double)CONCAT44(uVar15,uVar12) != 0.0) || (NAN((double)CONCAT44(uVar15,uVar12)))) ||
     ((dVar4 != 0.0 || (NAN(dVar4))))) {
    dVar3 = atan2((double)CONCAT44(uVar15,uVar12),dVar4);
    dVar3 = dVar3 * 57.29577951308232;
  }
  dVar5 = DAT_14c846310 + DAT_14c8462b0;
  dVar7 = DAT_14c846308 + DAT_14c8462a8;
  dVar4 = dVar7 * dVar7 + dVar5 * dVar5;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar5 = dVar5 * (1.0 / SQRT(dVar4));
      dVar7 = dVar7 * (1.0 / SQRT(dVar4));
      uVar12 = 0;
      uVar15 = 0;
    }
    else {
      uVar12 = SUB84(DAT_14c8464f0,0);
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar5 = DAT_14c8464e8;
      dVar7 = DAT_14c8464e0;
    }
  }
  else {
    dVar4 = DAT_14c846318 + DAT_14c8462b8;
    uVar12 = 0;
    uVar15 = 0;
    if ((dVar4 == 0.0) && (!NAN(dVar4))) {
      uVar12 = SUB84(dVar4,0);
      uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
  }
  dVar4 = 0.0;
  if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar7 != 0.0)) || (NAN(dVar7))) {
    dVar4 = atan2(dVar5,dVar7);
    dVar4 = dVar4 * 57.29577951308232;
  }
  dVar7 = SQRT(dVar7 * dVar7 + dVar5 * dVar5);
  dVar5 = 0.0;
  if ((((double)CONCAT44(uVar15,uVar12) != 0.0) || (NAN((double)CONCAT44(uVar15,uVar12)))) ||
     ((dVar7 != 0.0 || (NAN(dVar7))))) {
    dVar5 = atan2((double)CONCAT44(uVar15,uVar12),dVar7);
    dVar5 = dVar5 * 57.29577951308232;
  }
  DAT_14cbf68c0 = (double *)0x0;
  _DAT_14cbf68c8 = 10;
  FUN_1464bf958(&DAT_14cbf68c0,10,0);
  pdVar10 = DAT_14cbf68c0;
  *DAT_14cbf68c0 = local_1c8;
  pdVar10[1] = local_1d0;
  pdVar10[2] = 0.0;
  pdVar10[3] = local_170;
  pdVar10[4] = local_1a8;
  pdVar10[5] = 0.0;
  pdVar10[6] = local_178;
  pdVar10[7] = local_1b0;
  pdVar10[8] = 0.0;
  pdVar10[9] = local_180;
  pdVar10[10] = local_1b8;
  pdVar10[0xb] = 0.0;
  pdVar10[0xc] = local_190;
  pdVar10[0xd] = local_188;
  pdVar10[0xe] = 0.0;
  pdVar10[0xf] = local_1a0;
  pdVar10[0x10] = local_198;
  pdVar10[0x11] = 0.0;
  pdVar10[0x12] = dVar1;
  pdVar10[0x13] = dVar16;
  pdVar10[0x14] = 0.0;
  pdVar10[0x15] = dVar2;
  pdVar10[0x16] = dVar17;
  pdVar10[0x17] = 0.0;
  pdVar10[0x18] = dVar3;
  pdVar10[0x19] = dVar18;
  pdVar10[0x1a] = 0.0;
  pdVar10[0x1b] = dVar5;
  pdVar10[0x1c] = dVar4;
  pdVar10[0x1d] = 0.0;
  atexit((_func_5014 *)&LAB_144401625);
  local_128 = -2.74909810591472e-314;
  local_148 = (double)CONCAT44(local_148._4_4_,0x12);
  uVar12 = FUN_14577453c(L"GbxBlockingVolumes");
  uStack_120._0_5_ = CONCAT14(1,uVar12);
  FUN_1466746fa(&local_128);
  FUN_1446f470e(&DAT_14cbf6924,L"GbxBlockingVolumes",1);
  if ((local_c0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144402790 FUN_144402790 body=55 status=ok
// SIG undefined FUN_144402790(void)

void FUN_144402790(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6b60 == 0) {
    uVar1 = FUN_141022b16();
    DAT_14cbf6b60 = FUN_14171c317(FUN_1466750fb,uVar1,L"EPrefabLayerShuffleType");
  }
  return;
}



// FUNCTION 1444027c7 FUN_1444027c7 body=55 status=ok
// SIG undefined FUN_1444027c7(void)

void FUN_1444027c7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6b78 == 0) {
    uVar1 = FUN_141022b16();
    DAT_14cbf6b78 = FUN_14171c317(FUN_14667512a,uVar1,L"EPrefabLayerCollisionMode");
  }
  return;
}



// FUNCTION 1444027fe FUN_1444027fe body=55 status=ok
// SIG undefined FUN_1444027fe(void)

void FUN_1444027fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6c98 == 0) {
    uVar1 = FUN_141022b16();
    DAT_14cbf6c98 = FUN_14171c317(FUN_1466755bd,uVar1,L"EPrefabDecalMode");
  }
  return;
}



// FUNCTION 14440284c FUN_14440284c body=48 status=ok
// SIG undefined FUN_14440284c(void)

longlong FUN_14440284c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14034d9a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144402932 FUN_144402932 body=1213 status=ok
// SIG undefined FUN_144402932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144402932(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba78ae0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba790c0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba79800,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba79b80,1,0);
  local_58 = "AssetRegistry";
  uStack_50 = 0xd;
  uStack_4c = uStack_4c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_58,1);
  _DAT_14cbf69a8 = (ulonglong)uVar2;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7a2b0,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GbxPrefab",0,0,&PTR_FUN_14ba7ae30);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cbf6a10);
  if (cVar1 == '\0') {
    _DAT_14cbf6a10 = 0;
    uRam000000014cbf6a18 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7b2e0,1,&PTR_FUN_14ba7b2b0);
  FUN_1446f470e(&DAT_14cbf6a50,L"CanModifyComponent",1);
  FUN_1446f470e(&DAT_14cbf6a60,L"GetInstanceParametersStruct",1);
  FUN_1446f470e(&DAT_14cbf6a70,L"GetInstanceParamName",1);
  FUN_1446f470e(&DAT_14cbf6a80,L"GetModifierTag",1);
  FUN_1446f470e(&DAT_14cbf6a90,L"IsInstanceEditable",1);
  FUN_1446f470e(&DAT_14cbf6aa0,L"ModifyComponent",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7b9b0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7c0f0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7c840,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7cf40,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7d680,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7ddd0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7e500,1,0);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14ba7eb20;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxPrefab",0,0,&PTR_FUN_14ba7eb60);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7ef10,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7f900,1,&PTR_FUN_14ba7f8b0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba7fa80,1,&PTR_FUN_14ba7fa50);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba801e0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba809f0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxPrefab",&PTR_FUN_14ba80d60,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14ba81020;
  local_78 = 4;
  FUN_14282b410(L"/Script/GbxPrefab",0,0,&PTR_FUN_14ba81040);
  local_58 = (char *)0x2b9bdf6a83e4c24;
  uStack_50 = 0xd3e5828f;
  uStack_4c = 0x35f3c321;
  _DAT_14cbf6d08 = 0xa83e4c24;
  uRam000000014cbf6d0c = 0x2b9bdf6;
  uRam000000014cbf6d10 = 0xd3e5828f;
  uRam000000014cbf6d14 = 0x35f3c321;
  FUN_141005458(&local_58,1,L"GbxPrefabPackedActorVer",0);
  atexit((_func_5014 *)&LAB_144402835);
  FUN_145d0cfec(&DAT_14cbf6d18,"GbxPrefab",0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144402df0 FUN_144402df0 body=69 status=ok
// SIG undefined FUN_144402df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144402df0(void)

{
  _DAT_14cbf6d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144402e32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf6d30,1);
  return;
}



// FUNCTION 144402e35 FUN_144402e35 body=69 status=ok
// SIG undefined FUN_144402e35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144402e35(void)

{
  _DAT_14cbf6d38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144402e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf6d40,1);
  return;
}



// FUNCTION 144402e7a FUN_144402e7a body=69 status=ok
// SIG undefined FUN_144402e7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144402e7a(void)

{
  _DAT_14cbf6d50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144402ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf6d58,1);
  return;
}



// FUNCTION 144402ebf FUN_144402ebf body=69 status=ok
// SIG undefined FUN_144402ebf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144402ebf(void)

{
  _DAT_14cbf6d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144402f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf6d70,1);
  return;
}



// FUNCTION 144402f04 FUN_144402f04 body=69 status=ok
// SIG undefined FUN_144402f04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144402f04(void)

{
  _DAT_14cbf6d80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144402f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf6d88,1);
  return;
}



// FUNCTION 144402f5a FUN_144402f5a body=29 status=ok
// SIG undefined FUN_144402f5a(void)

undefined8 FUN_144402f5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144402f8c FUN_144402f8c body=85 status=ok
// SIG undefined FUN_144402f8c(void)

void FUN_144402f8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba82f10;
  return;
}



// FUNCTION 144402fe2 FUN_144402fe2 body=85 status=ok
// SIG undefined FUN_144402fe2(void)

void FUN_144402fe2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba82f10;
  return;
}



// FUNCTION 144403038 FUN_144403038 body=118 status=ok
// SIG undefined FUN_144403038(void)

void FUN_144403038(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba82f10;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014440309f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1444030c0 FUN_1444030c0 body=750 status=ok
// SIG undefined FUN_1444030c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444030c0(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  int local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = "AssetRegistry";
  local_30 = 0xd;
  local_2c = 0;
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14cbf6d20 = (ulonglong)uVar2;
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)((longlong)local_38 + 0x10) = lVar3;
  *(undefined ***)local_38 = &PTR_FUN_14ba82f10;
  local_48 = 0;
  FUN_14152bcb8(&DAT_14cbf6d28,L"gbx.Prefab.ToggleDebugLog",L"Toggles GbxPrefab debug log",&local_38
               );
  if (local_30 != 0) {
    if (local_38 == (char *)0x0) goto LAB_1444031db;
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1444031db:
  atexit(FUN_144402df0);
  local_38._0_4_ = 1;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cbf6d38,L"gbx.Prefab.OnlyUdateWhenNeeded",&local_38,
                L"Only update the ConstructionScript if the Blueprint or the instances parameter has changed"
               );
  atexit(FUN_144402e35);
  local_38._0_4_ = 1;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cbf6d50,L"gbx.Prefab.PackIntoISM",&local_38,
                L"If we pack prefab into InstancedStaticMeshComponent");
  atexit(FUN_144402e7a);
  local_38._0_4_ = 1;
  local_48 = 0;
  FUN_14078dbce(&DAT_14cbf6d68,L"gbx.Prefab.UsePrefabCacheForBlueprintPackedVersion",&local_38,
                L"If we use prefab cache for blueprint packed version check");
  atexit(FUN_144402ebf);
  local_38 = (char *)((ulonglong)local_38._4_4_ << 0x20);
  local_48 = 0;
  FUN_14078dbce(&DAT_14cbf6d80,L"gbx.Prefab.DirtyOnConstruction",&local_38,
                L"If the prefab actors are flagged dirty when it need to be rebuilt.  It will show the checkout dialog"
               );
  atexit(FUN_144402f04);
  FUN_140056680(&DAT_14cbf6da0,L"Invalid");
  atexit((_func_5014 *)&LAB_144402f49);
  FUN_1446f470e(&DAT_14cbf6dc0,L"PackedVersion",1);
  FUN_1446f470e(&DAT_14cbf6dc8,L"ComponentUniqueId",1);
  local_38 = "PrefabSpawnedActorSourceActorGuid";
  local_30 = 0x21;
  local_2c = 0;
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14cbf6dd0 = (ulonglong)uVar2;
  local_38 = (char *)0x800000014ba82a70;
  local_24 = 9;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_146675cc4(&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444033b0 FUN_1444033b0 body=69 status=ok
// SIG undefined FUN_1444033b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444033b0(void)

{
  _DAT_14cbf6df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444033f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf6e00,1);
  return;
}



// FUNCTION 1444033f6 FUN_1444033f6 body=1627 status=ok
// SIG undefined FUN_1444033f6(void)

bool FUN_1444033f6(LARGE_INTEGER param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined8 *local_118;
  undefined4 local_10c;
  ulonglong local_108;
  LARGE_INTEGER local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined1 local_ec;
  void **local_e8;
  void **local_e0;
  longlong *local_d8;
  longlong local_d0;
  void *local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_80;
  LARGE_INTEGER *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  QueryPerformanceCounter(&local_100);
  lVar4 = *(longlong *)(param_2 + 0x90);
  lVar5 = *(longlong *)(param_2 + 0x98);
  iVar2 = *(int *)(lVar4 + lVar5);
  uVar10 = *(uint *)(lVar4 + 4 + lVar5);
  uVar6 = *(uint *)(lVar4 + 8 + lVar5);
  uVar3 = *(uint *)(lVar4 + 0xc + lVar5);
  uVar9 = (ulonglong)uVar3;
  *(longlong *)(param_2 + 0x98) = lVar5 + 0x10;
  if (iVar2 - 0x7bU < 3) {
    local_108 = (ulonglong)uVar6;
    FUN_14906c1f4(param_2,param_3 + 0x70);
    FUN_140333aca(param_2);
    local_98 = 0;
    uStack_90 = 0;
    local_10c = 1;
    if (iVar2 != 0x7b) {
      FUN_1447a84cc(param_2);
      local_10c = (undefined4)uStack_90;
    }
    memset((void *)(param_1.QuadPart + 0x10),0,0x8000);
    *(longlong *)(param_1.QuadPart + 8) = param_3;
    local_a8 = (void *)0x0;
    uStack_a0 = (ulonglong)(uVar10 + 0x10);
    if (uVar10 + 0x10 != 0) {
      FUN_1447403be(&local_a8,0);
    }
    memcpy(local_a8,(void *)(*(longlong *)(param_2 + 0x90) + *(longlong *)(param_2 + 0x98)),
           (ulonglong)uVar10);
    *(longlong *)(param_2 + 0x98) = *(longlong *)(param_2 + 0x98) + (ulonglong)uVar10;
    local_c0 = uStack_a0 & 0xffffffff;
    local_c8 = local_a8;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_149062ba8(param_1.QuadPart,&local_c8,iVar2);
    FUN_14906297c(param_1.QuadPart);
    if (*(char *)(param_3 + 0xb8) == '\0') {
      uVar10 = (uint)local_108;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_108);
      }
      *(undefined4 *)(param_3 + 0xa8) = 0;
      iVar11 = 0;
      uVar6 = uVar10;
      if (*(uint *)(param_3 + 0xac) != uVar10) {
        FUN_14480809c(param_3 + 0xa0,local_108 & 0xffffffff);
        iVar11 = *(int *)(param_3 + 0xa8);
        uVar6 = *(uint *)(param_3 + 0xac);
      }
      *(uint *)(param_3 + 0xa8) = iVar11 + uVar10;
      if (uVar6 - iVar11 < uVar10) {
        FUN_1447808da(param_3 + 0xa0);
      }
    }
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar9);
    }
    *(undefined4 *)(param_3 + 8) = 0;
    iVar11 = 0;
    uVar10 = uVar3;
    if (*(uint *)(param_3 + 0xc) != uVar3) {
      FUN_140678446(param_3,uVar3);
      iVar11 = *(int *)(param_3 + 8);
      uVar10 = *(uint *)(param_3 + 0xc);
    }
    *(uint *)(param_3 + 8) = iVar11 + uVar3;
    if (uVar10 - iVar11 < uVar3) {
      FUN_140c0b6f2(param_3);
    }
    *(undefined4 *)(param_3 + 0x58) = 0;
    if (*(uint *)(param_3 + 0x5c) != uVar3) {
      FUN_14480809c(param_3 + 0x50,uVar3);
    }
    if (*(char *)(param_3 + 0xb5) == '\x01') {
      iVar11 = *(int *)(param_3 + 0x58);
      *(uint *)(param_3 + 0x58) = iVar11 + uVar3;
      if ((uint)(*(int *)(param_3 + 0x5c) - iVar11) < uVar3) {
        FUN_1447808da(param_3 + 0x50);
      }
    }
    plVar1 = (longlong *)(param_3 + 0x40);
    *(undefined4 *)(param_3 + 0x48) = 0;
    iVar11 = 0;
    uVar10 = uVar3;
    if (*(uint *)(param_3 + 0x4c) != uVar3) {
      FUN_146971392(plVar1,uVar3);
      iVar11 = *(int *)(param_3 + 0x48);
      uVar10 = *(uint *)(param_3 + 0x4c);
    }
    *(uint *)(param_3 + 0x48) = uVar3 + iVar11;
    if (*(char *)(param_3 + 0xb3) == '\x01') {
      if (uVar10 - iVar11 < uVar3) {
        FUN_14602b1fc(plVar1,iVar11);
      }
    }
    else {
      if (uVar10 - iVar11 < uVar3) {
        FUN_14602b1fc(plVar1);
      }
      memset((void *)((longlong)iVar11 * 4 + *plVar1),0,uVar9 * 4);
    }
    plVar1 = (longlong *)(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x28) = 0;
    iVar11 = 0;
    uVar10 = uVar3;
    if (*(uint *)(param_3 + 0x2c) != uVar3) {
      FUN_141742b1c(plVar1,uVar3);
      iVar11 = *(int *)(param_3 + 0x28);
      uVar10 = *(uint *)(param_3 + 0x2c);
    }
    *(uint *)(param_3 + 0x28) = uVar3 + iVar11;
    if (*(char *)(param_3 + 0xb0) == '\x01') {
      if (uVar10 - iVar11 < uVar3) {
        FUN_1470eb252(plVar1,iVar11);
      }
    }
    else {
      if (uVar10 - iVar11 < uVar3) {
        FUN_1470eb252(plVar1);
      }
      memset((void *)((longlong)iVar11 * 4 + *plVar1),0,uVar9 * 4);
    }
    plVar1 = (longlong *)(param_3 + 0x30);
    *(undefined4 *)(param_3 + 0x38) = 0;
    iVar11 = 0;
    uVar10 = uVar3;
    if (*(uint *)(param_3 + 0x3c) != uVar3) {
      FUN_141742b1c(plVar1,uVar3);
      iVar11 = *(int *)(param_3 + 0x38);
      uVar10 = *(uint *)(param_3 + 0x3c);
    }
    *(uint *)(param_3 + 0x38) = uVar3 + iVar11;
    if (*(char *)(param_3 + 0xb1) == '\x01') {
      if (uVar10 - iVar11 < uVar3) {
        FUN_1470eb252(plVar1,iVar11);
      }
    }
    else {
      if (uVar10 - iVar11 < uVar3) {
        FUN_1470eb252(plVar1);
      }
      memset((void *)((longlong)iVar11 * 4 + *plVar1),0,uVar9 * 4);
    }
    plVar1 = (longlong *)(param_3 + 0x10);
    *(undefined4 *)(param_3 + 0x18) = 0;
    iVar11 = 0;
    uVar10 = uVar3;
    if (*(uint *)(param_3 + 0x1c) != uVar3) {
      FUN_14171ef34(plVar1,uVar3);
      iVar11 = *(int *)(param_3 + 0x18);
      uVar10 = *(uint *)(param_3 + 0x1c);
    }
    *(uint *)(param_3 + 0x18) = uVar3 + iVar11;
    if (*(char *)(param_3 + 0xb2) == '\x01') {
      if (uVar10 - iVar11 < uVar3) {
        FUN_140752556(plVar1,iVar11);
      }
    }
    else {
      if (uVar10 - iVar11 < uVar3) {
        FUN_140752556(plVar1);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar1),0,uVar9 * 8);
    }
    plVar1 = (longlong *)(param_3 + 0x60);
    *(undefined4 *)(param_3 + 0x68) = 0;
    iVar11 = 0;
    uVar10 = uVar3;
    if (*(uint *)(param_3 + 0x6c) != uVar3) {
      FUN_140678446(plVar1,uVar3);
      iVar11 = *(int *)(param_3 + 0x68);
      uVar10 = *(uint *)(param_3 + 0x6c);
    }
    *(uint *)(param_3 + 0x68) = uVar3 + iVar11;
    if (*(char *)(param_3 + 0xb4) == '\x01') {
      if (uVar10 - iVar11 < uVar3) {
        FUN_140c0b6f2(plVar1,iVar11);
      }
    }
    else {
      if (uVar10 - iVar11 < uVar3) {
        FUN_140c0b6f2(plVar1);
      }
      memset((void *)((longlong)iVar11 * 0xc + *plVar1),0,uVar9 * 0xc);
    }
    local_ec = iVar2 != 0x7b;
    local_f8 = local_10c;
    local_f4 = (undefined4)local_108;
    local_e8 = &local_a8;
    local_e0 = &local_c8;
    local_d8 = &local_98;
    local_118 = &local_70;
    local_70 = 0;
    uVar9 = 0;
    local_68 = 0;
    local_80 = FUN_14440bbe4;
    local_120 = 0;
    local_100 = param_1;
    local_f0 = uVar3;
    local_d0 = param_3;
    local_78 = &local_100;
    FUN_1401f8d10(L"ParallelFor Task",local_10c,1);
    lVar4 = DAT_14cbf6e08;
    iVar11 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar11 != 0x40000002) {
      if ((DAT_14c86a9f8 == '\x01') && (iVar11 != 2)) {
        if (iVar11 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          uVar9 = (ulonglong)(DVar7 != DVar8);
        }
        else {
          uVar9 = 1;
        }
      }
      else {
        uVar9 = 0;
      }
    }
    if (*(int *)(lVar4 + uVar9 * 4) == 1) {
      QueryPerformanceCounter(&local_100);
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return iVar2 - 0x7bU < 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144403a52 FUN_144403a52 body=361 status=ok
// SIG undefined FUN_144403a52(void)

void FUN_144403a52(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  longlong *local_170;
  wchar_t *local_168;
  undefined4 local_160;
  undefined4 local_e8;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x58) = 0;
  if (*(int *)(lVar3 + 0x5c) != 0) {
    FUN_14906c438(lVar3 + 0x50,0);
  }
  *(undefined4 *)(lVar3 + 0x38) = 0;
  if (*(int *)(lVar3 + 0x3c) != 0) {
    FUN_1474ba72a(lVar3 + 0x30,0);
  }
  local_168 = L"GeometryCacheEmptied";
  local_160 = 0x14;
  FUN_1446e940c(local_34,&local_168);
  local_168 = L"GeometryCache";
  local_160 = 0xd;
  FUN_1446e940c(local_38,&local_168);
  local_168 = 
  L"Geometry Cache asset has been emptied as it does not support backwards compatibility";
  local_160 = 0x54;
  FUN_140208c1e(local_30,local_38,local_34,&local_168);
  FUN_1469b1e6a(&local_168,local_30);
  local_e8 = 0x40a00000;
  uVar4 = FUN_1413f66b6();
  FUN_146a1e072(uVar4,local_178,&local_168);
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar2 = (int *)((longlong)local_170 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_170 + 0x10))(local_170);
      }
    }
  }
  FUN_1469b2018(&local_168);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144403bbc FUN_144403bbc body=282 status=ok
// SIG undefined FUN_144403bbc(void)

void FUN_144403bbc(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  *(byte *)((longlong)param_1 + 0x25) = *(byte *)((longlong)param_1 + 0x25) | 4;
  FUN_140430222(param_1 + 4,param_2,param_3,0,1,0);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  param_1 = param_1 + 2;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144403c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      return;
    }
    FUN_14572512c(param_2,param_1);
    return;
  }
  *param_1 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 144403cd6 FUN_144403cd6 body=1261 status=ok
// SIG undefined FUN_144403cd6(void)

bool FUN_144403cd6(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_118 [40];
  undefined **local_f0;
  ulonglong *local_e8;
  byte local_c8;
  byte local_c6;
  longlong *local_98;
  longlong local_78;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  char local_48;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_3c = 0;
  FUN_145adf2ae();
  lVar8 = (**(code **)(DAT_14cbf71a8 + 0xd8))
                    (&DAT_14cbf71a8,*(undefined8 *)(*param_2 + 0x18),(int)param_2[2],&local_3c);
  if (lVar8 == 0) goto LAB_144403d36;
  uVar10 = (ulonglong)local_3c;
  FUN_144869430(&local_f0);
  local_f0 = &PTR__purecall_149e30ac0;
  local_58 = 0;
  local_48 = '\0';
  local_c8 = local_c8 | 1;
  local_60 = lVar8;
  local_50 = uVar10;
  FUN_1449c2eca(&local_f0,1);
  local_f0 = &PTR_FUN_149e447c0;
  puVar6 = (undefined8 *)param_2[3];
  FUN_14486d1ee(&local_f0,&DAT_149e390e4);
  local_34 = 0;
  if ((local_c8 & 4) != 0) {
    local_34 = *(undefined4 *)(puVar6 + 1);
  }
  FUN_140333aca(&local_f0,puVar6 + 0x10);
  FUN_14906c1f4(&local_f0,puVar6 + 0xe);
  pcVar3 = (char *)(puVar6 + 0x16);
  FUN_14906500a(&local_f0,pcVar3);
  puVar1 = (undefined4 *)*local_e8 + 1;
  if ((undefined4 *)local_e8[1] < puVar1) {
    if ((local_c6 & 2) == 0) {
      (*(code *)local_f0[0x2e])(&local_f0,&local_34,4);
    }
    else {
      FUN_14572512c(&local_f0,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*local_e8;
    *local_e8 = (ulonglong)puVar1;
  }
  if ((local_c8 & 1) != 0) {
    FUN_146bfab7c(puVar6,local_34,1);
    if (*(char *)((longlong)puVar6 + 0xb2) == '\x01') {
      FUN_146c50912(puVar6 + 2,local_34,1);
    }
    if (*pcVar3 == '\x01') {
      FUN_1490653ca(puVar6 + 4,local_34);
    }
    if (*(char *)((longlong)puVar6 + 0xb1) == '\x01') {
      FUN_1490653ca(puVar6 + 6,local_34);
    }
    if (*(char *)((longlong)puVar6 + 0xb3) == '\x01') {
      FUN_14735b34c(puVar6 + 8,local_34,1);
    }
    if (*(char *)((longlong)puVar6 + 0xb5) == '\x01') {
      FUN_14017c08a(puVar6 + 10,local_34,1);
    }
    if (*(char *)((longlong)puVar6 + 0xb4) == '\x01') {
      FUN_146bfab7c(puVar6 + 0xc,local_34,1);
    }
  }
  if (0 < *(int *)(puVar6 + 1)) {
    (*(code *)local_f0[0x2e])(&local_f0,*puVar6,*(int *)(puVar6 + 1) * 0xc);
    if (*(char *)((longlong)puVar6 + 0xb2) == '\x01') {
      (*(code *)local_f0[0x2e])(&local_f0,puVar6[2],*(int *)(puVar6 + 3) << 3);
    }
    if (*pcVar3 == '\x01') {
      (*(code *)local_f0[0x2e])(&local_f0,puVar6[4],*(int *)(puVar6 + 5) << 2);
    }
    if (*(char *)((longlong)puVar6 + 0xb1) == '\x01') {
      (*(code *)local_f0[0x2e])(&local_f0,puVar6[6],*(int *)(puVar6 + 7) << 2);
    }
    if (*(char *)((longlong)puVar6 + 0xb3) == '\x01') {
      (*(code *)local_f0[0x2e])(&local_f0,puVar6[8],*(int *)(puVar6 + 9) << 2);
    }
    if (*(char *)((longlong)puVar6 + 0xb5) == '\x01') {
      (*(code *)local_f0[0x2e])(&local_f0,puVar6[10],*(int *)(puVar6 + 0xb) << 2);
    }
    if (*(char *)((longlong)puVar6 + 0xb4) == '\x01') {
      (*(code *)local_f0[0x2e])(&local_f0,puVar6[0xc],*(int *)(puVar6 + 0xd) * 0xc);
    }
  }
  local_38 = *(uint *)(puVar6 + 0x15);
  puVar2 = (uint *)*local_e8 + 1;
  if ((uint *)local_e8[1] < puVar2) {
    if ((local_c6 & 2) == 0) {
      (*(code *)local_f0[0x2e])(&local_f0,&local_38,4);
    }
    else {
      FUN_14572512c(&local_f0,&local_38);
    }
  }
  else {
    local_38 = *(uint *)*local_e8;
    *local_e8 = (ulonglong)puVar2;
  }
  puVar4 = puVar6 + 0x14;
  if ((local_c8 & 1) == 0) {
LAB_1444040f3:
    uVar5 = *(uint *)(puVar6 + 0x15);
  }
  else {
    if ((int)local_38 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_38);
    }
    *(undefined4 *)(puVar6 + 0x15) = 0;
    iVar7 = 0;
    uVar9 = local_38;
    if (*(uint *)((longlong)puVar6 + 0xac) != local_38) {
      FUN_14480809c(puVar4);
      iVar7 = *(int *)(puVar6 + 0x15);
      uVar9 = *(uint *)((longlong)puVar6 + 0xac);
    }
    uVar5 = local_38 + iVar7;
    *(uint *)(puVar6 + 0x15) = uVar5;
    if (uVar9 - iVar7 < local_38) {
      FUN_1447808da(puVar4,iVar7);
      goto LAB_1444040f3;
    }
  }
  if (0 < (int)uVar5) {
    (*(code *)local_f0[0x2e])(&local_f0,*puVar4,(ulonglong)uVar5 << 2);
  }
  FUN_145adf2ae();
  (**(code **)(DAT_14cbf71a8 + 0xe0))
            (&DAT_14cbf71a8,*(undefined8 *)(*param_2 + 0x18),(int)param_2[2]);
  if (local_48 == '\x01') {
    FUN_1400020a8(local_60);
    local_60 = 0;
  }
  local_f0 = &PTR__purecall_149e35f70;
  if (local_98 != (longlong *)0x0) {
    if (*local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_98);
  }
  if (local_78 != 0) {
    if (*(longlong *)(local_78 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_78);
  }
LAB_144403d36:
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8 != 0;
}



// FUNCTION 1444041c6 FUN_1444041c6 body=425 status=ok
// SIG undefined FUN_1444041c6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1444041c6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_8118 [40];
  undefined **local_80f0 [5];
  byte local_80c8;
  longlong *local_8098;
  longlong local_8078;
  longlong local_8060;
  undefined8 local_8058;
  ulonglong local_8050;
  char local_8048;
  uint local_803c;
  undefined **local_8038 [4098];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_8118;
  local_803c = 0;
  FUN_145adf2ae();
  lVar1 = (**(code **)(DAT_14cbf71a8 + 0xd8))
                    (&DAT_14cbf71a8,*(undefined8 *)(*param_2 + 0x18),(int)param_2[2],&local_803c);
  if (lVar1 != 0) {
    uVar2 = (ulonglong)local_803c;
    FUN_144869430(local_80f0);
    local_80f0[0] = &PTR__purecall_149e30ac0;
    local_8058 = 0;
    local_8048 = '\0';
    local_80c8 = local_80c8 | 1;
    local_8060 = lVar1;
    local_8050 = uVar2;
    FUN_1449c2eca(local_80f0,1);
    local_80f0[0] = &PTR_FUN_149e447c0;
    local_8038[0] = &PTR_FUN_14ba8a6f0;
    FUN_1444033f6(local_8038,local_80f0,param_2[3]);
    FUN_145adf2ae();
    (**(code **)(DAT_14cbf71a8 + 0xe0))
              (&DAT_14cbf71a8,*(undefined8 *)(*param_2 + 0x18),(int)param_2[2]);
    if (local_8048 == '\x01') {
      FUN_1400020a8(local_8060);
      local_8060 = 0;
    }
    local_80f0[0] = &PTR__purecall_149e35f70;
    if (local_8098 != (longlong *)0x0) {
      if (*local_8098 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_8098);
    }
    if (local_8078 != 0) {
      if (*(longlong *)(local_8078 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_8078);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_8118) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144404370 FUN_144404370 body=1550 status=ok
// SIG undefined FUN_144404370(void)

void FUN_144404370(longlong param_1,undefined4 param_2,ulonglong param_3,undefined1 param_4,
                  undefined1 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  byte bVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auStack_f8 [32];
  code **local_d8;
  undefined4 local_d0;
  float local_c8;
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined4 local_80;
  float local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_1 + 0x66c) = param_2;
  if (0 < *(int *)(param_1 + 0x668)) {
    bVar16 = 0;
    iVar18 = 0;
    do {
      bVar7 = FUN_149064960(param_1,iVar18,param_2);
      bVar16 = bVar16 | bVar7;
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(param_1 + 0x668));
    if ((bVar16 & 1) != 0) {
      FUN_149064ab8(param_1);
      FUN_1448c69c8(param_1);
    }
  }
  uVar20 = 0;
  if ((char)(param_3 & 0xffffffff) != '\0') {
    uVar20 = *(undefined4 *)(param_1 + 0x660);
  }
  lVar4 = *(longlong *)(param_1 + 0x5a8);
  if (lVar4 == 0) goto LAB_14440451c;
  fVar21 = *(float *)(param_1 + 0x664);
  if (100.0 <= fVar21) {
    fVar21 = 100.0;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar18 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar18 == 2) goto LAB_1444048b4;
    if (iVar18 != 1) goto LAB_14440445a;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_1444048b4;
  }
  else {
LAB_14440445a:
    if (iVar18 == 0x10) goto LAB_1444048b4;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar18 = *(int *)(lVar5 + 0xc60), iVar18 == 2)) {
LAB_1444048b4:
      local_d8 = (code **)CONCAT71(local_d8._1_7_,param_4);
      local_d0 = uVar20;
      local_c8 = fVar21;
      FUN_149065f90(lVar4,&DAT_14ca85100,param_2,
                    CONCAT71((int7)((param_3 & 0xffffffff) >> 8),param_5));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
    }
    if (iVar18 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1444048b4;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_144404614;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14440bb68);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_144404614:
      puVar19 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar19 + 0x18);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar19 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar19 + 0x18);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_144404694;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_144404694:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar18 = 0;
    FUN_1447247dc(puVar19,0);
    *puVar19 = &PTR_FUN_14ba8b140;
    puVar19[0x15] = lVar4;
    *(undefined4 *)(puVar19 + 0x16) = param_2;
    *(undefined1 *)((longlong)puVar19 + 0xb4) = param_5;
    *(undefined1 *)((longlong)puVar19 + 0xb5) = param_4;
    *(undefined4 *)(puVar19 + 0x17) = uVar20;
    *(float *)((longlong)puVar19 + 0xbc) = fVar21;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar18 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
    }
    puVar19[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar19[9] = puVar19;
    puVar19[10] = puVar19;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar19[0xf] = uVar12;
    puVar19[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar19 + 0x1c) = iVar18;
    if (puVar19 == (undefined8 *)0x0) {
      local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
      UNLOCK();
      local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
      FUN_1447439e4(puVar19);
      LOCK();
      piVar1 = (int *)(puVar19 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar19)(puVar19,1);
      }
    }
  }
  else {
    local_d8 = local_b8;
    local_a8 = (undefined ***)0x0;
    local_98 = &PTR_LAB_14ba8b0e0;
    local_84 = param_5;
    local_b8[0] = FUN_14440be34;
    local_90 = lVar4;
    local_88 = param_2;
    local_83 = param_4;
    local_80 = uVar20;
    local_7c = fVar21;
    FUN_14005a792(&DAT_14ca9a440,L"FGeometryCacheUpdateAnimation",&DAT_14cbf7428);
    if (local_b8[0] != (code *)0x0) {
      pppuVar14 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar14 = &local_98;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_14440451c:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144404984 FUN_144404984 body=1890 status=ok
// SIG undefined FUN_144404984(void)

void FUN_144404984(longlong param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong unaff_RBX;
  int iVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined4 local_e0;
  float local_d8;
  code *local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(longlong *)(param_1 + 0x650) == 0) || (*(char *)(param_1 + 0x658) != '\x01')) ||
     (*(char *)(param_1 + 0x6c0) != '\0')) goto LAB_144404c75;
  fVar20 = *(float *)(param_1 + 0x660);
  if (512.0 <= fVar20) {
    fVar20 = 512.0;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar20 = fVar20 * param_2 * *(float *)(param_1 + 0x6b8) + *(float *)(param_1 + 0x66c);
  *(float *)(param_1 + 0x66c) = fVar20;
  if ((*(char *)(param_1 + 0x659) != '\x01') || (0.0 <= fVar20)) {
    if (*(char *)(param_1 + 0x659) == '\0') {
      if (0.0 <= fVar20) {
        if (fVar20 <= *(float *)(param_1 + 0x6bc)) goto LAB_144404a81;
        *(float *)(param_1 + 0x66c) = *(float *)(param_1 + 0x6bc);
      }
      else {
        *(undefined4 *)(param_1 + 0x66c) = 0;
      }
      *(undefined1 *)(param_1 + 0x658) = 0;
    }
  }
  else {
    *(float *)(param_1 + 0x66c) = fVar20 + *(float *)(param_1 + 0x6bc);
  }
LAB_144404a81:
  if (0 < *(int *)(param_1 + 0x668)) {
    unaff_RBX = 0;
    iVar17 = 0;
    do {
      fVar20 = *(float *)(param_1 + 0x65c);
      if (14400.0 <= fVar20) {
        fVar20 = 14400.0;
      }
      if (fVar20 <= -14400.0) {
        fVar20 = -14400.0;
      }
      bVar8 = FUN_149064960(param_1,iVar17,fVar20 + *(float *)(param_1 + 0x66c));
      bVar8 = (byte)unaff_RBX | bVar8;
      unaff_RBX = (ulonglong)bVar8;
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(param_1 + 0x668));
    if ((bVar8 & 1) != 0) {
      FUN_149064ab8(param_1);
    }
  }
  FUN_1448c69c8(param_1);
  uVar21 = 0;
  if (*(char *)(param_1 + 0x658) == '\x01') {
    uVar21 = *(undefined4 *)(param_1 + 0x660);
  }
  lVar5 = *(longlong *)(param_1 + 0x5a8);
  if (lVar5 == 0) goto LAB_144404c75;
  fVar20 = *(float *)(param_1 + 0x65c);
  if (14400.0 <= fVar20) {
    fVar20 = 14400.0;
  }
  if (fVar20 <= -14400.0) {
    fVar20 = -14400.0;
  }
  fVar20 = fVar20 + *(float *)(param_1 + 0x66c);
  fVar23 = ABS(*(float *)(param_1 + 0x6b8) + 1.0);
  uVar4 = *(undefined1 *)(param_1 + 0x659);
  fVar22 = *(float *)(param_1 + 0x664);
  if (100.0 <= fVar22) {
    fVar22 = 100.0;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar17 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar17 == 2) goto LAB_144405017;
    if (iVar17 != 1) goto LAB_144404b93;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 == DVar10) goto LAB_144405017;
  }
  else {
LAB_144404b93:
    if (iVar17 == 0x10) goto LAB_144405017;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar6 + 0xc60), iVar17 == 2)) {
LAB_144405017:
      local_e8 = (code **)CONCAT71(local_e8._1_7_,fVar23 <= 1e-08);
      local_e0 = uVar21;
      local_d8 = fVar22;
      FUN_149065f90(lVar5,&DAT_14ca85100,fVar20,CONCAT71((int7)(unaff_RBX >> 8),uVar4) & 0xffffffff)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_108);
    }
    if (iVar17 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_144405017;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar12 = (uint *)*puVar2;
    if (puVar12 != (uint *)0x0) goto LAB_144404d75;
    while( true ) {
      uVar14 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar14 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar14 | 1;
        __tlregdtor(&LAB_14440bb68);
      }
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar11 = *(undefined4 **)(lVar6 + 0x310);
      *(undefined8 *)(lVar6 + 0x310) = 0;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar11 = 0xffffffff;
      *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar2 = puVar11;
      FUN_140217a48(puVar2);
      puVar12 = (uint *)*puVar2;
LAB_144404d75:
      puVar19 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar16 = (uint *)(puVar19 + 0x19);
      uVar14 = puVar12[0x12];
      if (puVar16 <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar3 = *puVar12;
        *puVar12 = *puVar12 + uVar14 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar14) != 0xffffffff) break;
        puVar12 = (uint *)*puVar2;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar2 = puVar12;
        puVar19 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar19 + 0x19);
        uVar14 = 0;
        if (puVar16 <= puVar12 + 0x4000) {
          uVar14 = 1;
          goto LAB_144404df5;
        }
      }
    }
    uVar14 = uVar14 + 1;
LAB_144404df5:
    *(uint **)(puVar12 + 0x10) = puVar16;
    puVar12[0x12] = uVar14;
    iVar17 = 0;
    FUN_1447247dc(puVar19,0);
    *puVar19 = &PTR_FUN_14ba8b170;
    puVar19[0x15] = lVar5;
    *(float *)(puVar19 + 0x16) = fVar20;
    *(undefined1 *)((longlong)puVar19 + 0xb4) = uVar4;
    *(bool *)((longlong)puVar19 + 0xb5) = fVar23 <= 1e-08;
    *(undefined4 *)(puVar19 + 0x17) = uVar21;
    *(undefined4 *)((longlong)puVar19 + 0xbc) = uVar21;
    *(float *)(puVar19 + 0x18) = fVar22;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar14 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
        uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
        iVar17 = 0;
      }
      else {
        uVar18 = 2;
      }
    }
    else {
      iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar18 = 5;
    }
    if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
    }
    puVar19[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar19[9] = puVar19;
    puVar19[10] = puVar19;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar7 = 1;
      if ((char)uVar18 != '\x06') {
        uVar7 = uVar18;
      }
      uVar18 = uVar7;
      uVar13 = 0;
    }
    else {
      if ((char)uVar18 == '\x06') {
        uVar18 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar13 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar19[0xf] = uVar13;
    puVar19[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar19 + 0x1c) = iVar17;
    if (puVar19 == (undefined8 *)0x0) {
      local_c8[0] = (code *)CONCAT71(local_c8[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
      UNLOCK();
      local_c8[0] = (code *)CONCAT71(local_c8[0]._1_7_,1);
      FUN_1447439e4(puVar19);
      LOCK();
      piVar1 = (int *)(puVar19 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar19)(puVar19,1);
      }
    }
  }
  else {
    local_c8[0] = (code *)0x0;
    local_b8 = (longlong *)FUN_14001cc68(0x28,8);
    *local_b8 = (longlong)&PTR_LAB_14ba8b150;
    local_b8[1] = lVar5;
    *(float *)(local_b8 + 2) = fVar20;
    *(undefined1 *)((longlong)local_b8 + 0x14) = uVar4;
    *(bool *)((longlong)local_b8 + 0x15) = fVar23 <= 1e-08;
    *(undefined4 *)(local_b8 + 3) = uVar21;
    *(undefined4 *)((longlong)local_b8 + 0x1c) = uVar21;
    *(float *)(local_b8 + 4) = fVar22;
    if (local_b8 + 1 != (longlong *)0x0) {
      local_c8[0] = FUN_14440c048;
    }
    local_e8 = local_c8;
    FUN_14005a792(&DAT_14ca9a440,L"FGeometryCacheUpdateAnimation",&DAT_14cbf742c);
    if (local_c8[0] != (code *)0x0) {
      plVar15 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar15 = local_a8;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
  }
LAB_144404c75:
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444050ec FUN_1444050ec body=125 status=ok
// SIG undefined FUN_1444050ec(void)

void FUN_1444050ec(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_140083894();
  FUN_145adf2ae();
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145a5c03e((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(undefined8 **)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 8) = &DAT_14cbf71a8;
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 1;
    (&DAT_14cbf6e20)[lVar3 * 2] = 1 << ((byte)lVar1 & 0x1f);
    (&DAT_14cbf6e24)[lVar3 * 2] = -2 << ((byte)lVar1 & 0x1f);
    lVar3 = lVar1;
  } while (lVar1 != 0x1e);
  FUN_14622f3ba();
  return;
}



// FUNCTION 144405169 FUN_144405169 body=69 status=ok
// SIG undefined FUN_144405169(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144405169(void)

{
  _DAT_14cbf7110 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444051ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7118,1);
  return;
}



// FUNCTION 1444051ae FUN_1444051ae body=69 status=ok
// SIG undefined FUN_1444051ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444051ae(void)

{
  _DAT_14cbf7128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444051f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7130,1);
  return;
}



// FUNCTION 1444051f3 FUN_1444051f3 body=69 status=ok
// SIG undefined FUN_1444051f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444051f3(void)

{
  _DAT_14cbf7140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144405235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7148,1);
  return;
}



// FUNCTION 144405238 FUN_144405238 body=5327 status=ok
// SIG undefined FUN_144405238(void)

longlong * FUN_144405238(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 **_Dst;
  void *_Dst_00;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  int *piVar20;
  undefined ***pppuVar21;
  uint uVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_138 [32];
  undefined1 **local_118;
  int *local_110;
  longlong *local_108;
  undefined8 *local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined ***local_98;
  undefined **local_88;
  longlong *local_80;
  int iStack_78;
  undefined4 uStack_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = (longlong)&PTR_FUN_14ba87790;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x65) = 0x3f800000;
  uVar27 = (ulonglong)*(uint *)(param_1[0x42] + 8);
  (**(code **)(*param_2 + 0xa10))(param_2,param_1 + 0x66,uVar27);
  lVar13 = *param_3;
  param_1[0x6a] = lVar13;
  param_1[0x6c] = 0;
  if (lVar13 != 0) {
    plVar14 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar14 = (longlong *)param_3[2];
    }
    (**(code **)*plVar14)(plVar14,param_1 + 0x6c);
  }
  fVar29 = *(float *)((longlong)param_2 + 0x65c);
  if (14400.0 <= fVar29) {
    fVar29 = 14400.0;
  }
  if (fVar29 <= -14400.0) {
    fVar29 = -14400.0;
  }
  *(float *)((longlong)param_1 + 0x30c) = fVar29 + *(float *)((longlong)param_2 + 0x66c);
  uVar22 = *(uint *)(param_1 + 0x68) & 0xfffffffe | (uint)*(byte *)((longlong)param_2 + 0x659);
  *(uint *)(param_1 + 0x68) = uVar22;
  *(uint *)(param_1 + 0x68) = (uVar22 & 0xfffffffb) + (uint)*(byte *)((longlong)param_2 + 0x65a) * 4
  ;
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x80;
  fVar29 = 0.0;
  if ((char)param_2[0xcb] == '\x01') {
    fVar29 = *(float *)(param_2 + 0xcc);
    if (512.0 <= fVar29) {
      fVar29 = 512.0;
    }
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
  }
  *(float *)(param_1 + 0x62) = fVar29;
  fVar29 = *(float *)((longlong)param_2 + 0x664);
  if (100.0 <= fVar29) {
    fVar29 = 100.0;
  }
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x314) = fVar29;
  *(undefined1 *)(param_1 + 99) = *(undefined1 *)((longlong)param_2 + 0x6c1);
  lVar13 = param_2[0xd9];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x6cc);
  lVar10 = param_2[0xda];
  *(undefined4 *)((longlong)param_1 + 0x31c) = *(undefined4 *)((longlong)param_2 + 0x6c4);
  *(int *)(param_1 + 100) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0x324) = uVar3;
  *(int *)(param_1 + 0x65) = (int)lVar10;
  *(undefined4 *)(param_1 + 0x61) = 0;
  FUN_1403fbdee(param_1);
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0xf7;
  uVar22 = *(uint *)(param_2 + 0xd6);
  uVar26 = (ulonglong)uVar22;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar26);
  }
  local_108 = param_1 + 0x53;
  if (*(int *)((longlong)param_1 + 0x2a4) < (int)uVar22) {
    FUN_14906d0f0(local_108,uVar22);
  }
  if (uVar26 == 0) {
    piVar20 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  }
  else {
    local_d8 = param_1 + 0x6e;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar24 = (undefined8 *)(lVar13 + 0x308);
    local_100 = (undefined8 *)(lVar13 + 0x310);
    local_f0 = 0x527800b400;
    local_110 = (int *)(lVar13 + 0xc60);
    local_f8 = (longlong *)(lVar13 + 0x2b8);
    uVar19 = 0;
    local_e8 = param_3;
    local_e0 = puVar24;
    local_d0 = uVar26;
    local_c8 = param_1;
    do {
      lVar13 = param_2[0xd5];
      plVar14 = *(longlong **)(*(longlong *)(param_2[0xca] + 0x50) + uVar19 * 8);
      local_c0 = uVar19;
      lVar10 = (**(code **)(*plVar14 + 0x2e0))
                         (plVar14,*(undefined4 *)((longlong)param_1 + 0x30c),
                          CONCAT71((int7)(uVar27 >> 8),(char)param_1[0x68]) & 0xffffffffffffff01);
      pcVar5 = (code *)param_1[0x6a];
      plVar17 = (longlong *)param_1[0x6c];
      if ((longlong *)param_1[0x6c] == (longlong *)0x0) {
        plVar17 = local_d8;
      }
      uVar11 = (**(code **)(*plVar17 + 8))();
      plVar12 = (longlong *)(*pcVar5)(uVar11);
      plVar12[0x6b] = (longlong)plVar14;
      plVar14 = (longlong *)(uVar19 * 0xc0 + lVar13);
      plVar17 = plVar12 + 0x6c;
      for (lVar18 = 0x10; lVar18 != 0; lVar18 = lVar18 + -1) {
        *plVar17 = *plVar14;
        plVar14 = plVar14 + 1;
        plVar17 = plVar17 + 1;
      }
      plVar12[3] = -1;
      *(undefined4 *)((longlong)plVar12 + 0xa4) = 0xffffffff;
      *(undefined4 *)(plVar12 + 4) = 0xffffffff;
      *(undefined8 *)((longlong)plVar12 + 0x24) = 0;
      *(undefined4 *)((longlong)plVar12 + 0x2c) = 0x3f800000;
      plVar12[2] = 0;
      *(undefined1 *)((longlong)plVar12 + 0x3e1) = 0;
      iVar7 = *(int *)(lVar10 + 0x40);
      if (0 < iVar7) {
        uVar3 = *(undefined4 *)(lVar10 + 0x44);
        iVar4 = *local_110;
        if (DAT_14c86a9fc == 0) {
          if (iVar4 != 2) {
            if (iVar4 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              bVar28 = DVar8 == DVar9;
            }
            else {
              bVar28 = iVar4 == 0x10;
            }
            if (!bVar28) goto LAB_1444055f8;
          }
        }
        else if (iVar4 != 0x10) {
LAB_1444055f8:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (*local_110 == 2)) goto LAB_1444055b9;
            if (*local_110 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              if (DVar8 == DVar9) goto LAB_1444055b9;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar15 = (uint *)*puVar24;
            if (puVar15 != (uint *)0x0) goto LAB_144405976;
            do {
              puVar25 = local_100;
              uVar22 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar22 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar22 | 1;
                __tlregdtor(&LAB_14440bb68);
              }
              puVar16 = (undefined4 *)*puVar25;
              *puVar25 = 0;
              if (puVar16 == (undefined4 *)0x0) {
                puVar16 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar16 = 0xffffffff;
              *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar24 = puVar16;
              FUN_140217a48(puVar24);
              puVar15 = (uint *)*puVar24;
LAB_144405976:
              uVar27 = *(longlong *)(puVar15 + 0x10) + 7;
              uVar22 = puVar15[0x12];
              while( true ) {
                puVar25 = (undefined8 *)(uVar27 & 0xfffffffffffffff8);
                if (puVar25 + 0x17 <= puVar15 + 0x4000) {
                  *(undefined8 **)(puVar15 + 0x10) = puVar25 + 0x17;
                  puVar15[0x12] = uVar22 + 1;
                  FUN_1447247dc(puVar25,0);
                  *puVar25 = &PTR_FUN_14ba8b3a8;
                  puVar25[0x15] = plVar12;
                  *(int *)(puVar25 + 0x16) = iVar7;
                  *(undefined4 *)((longlong)puVar25 + 0xb4) = uVar3;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar22 = DAT_14c7585c8 >> 10 & 3;
                    iVar7 = 0;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
                      uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
                      iVar7 = 0;
                    }
                    else {
                      uVar27 = 2;
                    }
                  }
                  else {
                    iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                            *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar27 = 5;
                  }
                  if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
                  }
                  puVar25[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar25[9] = puVar25;
                  puVar25[10] = puVar25;
                  lVar13 = *local_f8;
                  if (lVar13 == 0) {
                    if ((char)uVar27 == '\x06') {
                      uVar27 = 1;
                    }
                    uVar11 = 0;
                  }
                  else {
                    if ((char)uVar27 == '\x06') {
                      uVar27 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
                    }
                    uVar11 = *(undefined8 *)(lVar13 + 0x30);
                  }
                  puVar25[0xf] = uVar11;
                  puVar25[0x10] = (uVar27 << 0x3b) + local_f0 | 0xc000000000000000;
                  *(int *)((longlong)puVar25 + 0x1c) = iVar7;
                  if (puVar25 == (undefined8 *)0x0) {
                    local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
                    FUN_1447439e4(0,&local_a8);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
                    UNLOCK();
                    local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
                    FUN_1447439e4(puVar25,&local_a8);
                    LOCK();
                    piVar20 = (int *)(puVar25 + 1);
                    *piVar20 = *piVar20 + -1;
                    UNLOCK();
                    if (*piVar20 == 0) {
                      (**(code **)*puVar25)(puVar25,1);
                    }
                  }
                  goto LAB_1444056b7;
                }
                *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
                LOCK();
                uVar2 = *puVar15;
                *puVar15 = *puVar15 + uVar22 + 1;
                UNLOCK();
                if ((uVar2 ^ uVar22) != 0xffffffff) break;
                puVar15 = (uint *)*puVar24;
                *puVar15 = 0xffffffff;
                *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
                puVar15[0x12] = 0;
                *puVar24 = puVar15;
                uVar27 = (longlong)puVar15 + 0x5f;
                uVar22 = 0;
              }
            } while( true );
          }
          local_98 = (undefined ***)0x0;
          local_88 = &PTR_LAB_14ba8b350;
          local_a8 = &LAB_14440c2e4;
          local_118 = &local_a8;
          local_80 = plVar12;
          iStack_78 = iVar7;
          uStack_74 = uVar3;
          FUN_14005a792(&DAT_14ca9a440,L"FGeometryCacheInitResources",&DAT_14cbf7430);
          if (local_a8 != (undefined1 *)0x0) {
            pppuVar21 = local_98;
            if (local_98 == (undefined ***)0x0) {
              pppuVar21 = &local_88;
            }
            (*(code *)(*pppuVar21)[2])();
          }
          goto LAB_1444056b7;
        }
LAB_1444055b9:
        (**(code **)(*plVar12 + 0x30))(plVar12,&DAT_14ca85100,iVar7,uVar3);
      }
LAB_1444056b7:
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,0xffffffff);
      _Dst = (undefined1 **)FUN_14001cc68(200);
      _Dst[0x18] = (undefined1 *)0x0;
      uVar11 = 0;
      memset(_Dst,0,0x99);
      _Dst[0x14] = (undefined1 *)0x0;
      _Dst[0x15] = (undefined1 *)0x0;
      *(undefined8 *)((longlong)_Dst + 0xa9) = 0;
      *(undefined8 *)((longlong)_Dst + 0xb1) = 0;
      plVar12[1] = (longlong)_Dst;
      local_118 = _Dst;
      (**(code **)(*plVar12 + 8))
                (plVar12,*(undefined4 *)((longlong)param_1 + 0x30c),
                 CONCAT71((int7)((ulonglong)uVar11 >> 8),(char)param_1[0x68]) & 0xffffffffffffff01,
                 &local_b8);
      _Dst_00 = (void *)FUN_14001cc68(200);
      *(undefined8 *)((longlong)_Dst_00 + 0xc0) = 0;
      uVar27 = 0;
      memset(_Dst_00,0,0x99);
      *(undefined8 *)((longlong)_Dst_00 + 0xa0) = 0;
      *(undefined8 *)((longlong)_Dst_00 + 0xa8) = 0;
      *(undefined8 *)((longlong)_Dst_00 + 0xa9) = 0;
      *(undefined8 *)((longlong)_Dst_00 + 0xb1) = 0;
      plVar12[2] = (longlong)_Dst_00;
      *(undefined1 *)(plVar12 + 0x7c) = 0;
      lVar13 = (longlong)*(int *)(plVar12[1] + 0x78);
      if (lVar13 != 0) {
        lVar10 = *(longlong *)(plVar12[1] + 0x70);
        lVar18 = 0;
        do {
          plVar14 = (longlong *)
                    (**(code **)(*param_2 + 0x610))(param_2,*(undefined4 *)(lVar10 + 8 + lVar18));
          if ((plVar14 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar14 + 0x340))(plVar14,0xd), cVar6 == '\0')) {
            FUN_14003fbd6();
            plVar14 = DAT_14caea080;
          }
          iVar7 = (int)plVar12[7];
          *(uint *)(plVar12 + 7) = iVar7 + 1U;
          if (*(uint *)((longlong)plVar12 + 0x3c) < iVar7 + 1U) {
            FUN_144769b64(plVar12 + 6,iVar7);
          }
          *(longlong **)(plVar12[6] + (longlong)iVar7 * 8) = plVar14;
          lVar18 = lVar18 + 0xc;
        } while (lVar13 * 0xc != lVar18);
      }
      param_1 = local_c8;
      uVar26 = local_d0;
      puVar24 = local_e0;
      if ((int)local_d0 == 1) {
        lVar13 = plVar12[7];
        (**(code **)(*param_2 + 0x9f8))(param_2,&local_a8);
        iVar7 = local_a0;
        if (local_a8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if ((int)lVar13 != iVar7) {
          (**(code **)(*param_2 + 0x9f8))(param_2,&local_a8);
          if ((undefined1 **)(plVar12 + 6) == &local_a8) {
            if (local_a8 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (plVar12[6] != 0) {
              FUN_1400020a8();
            }
            plVar12[6] = (longlong)local_a8;
            local_a8 = (undefined1 *)0x0;
            *(int *)(plVar12 + 7) = local_a0;
            *(undefined4 *)((longlong)plVar12 + 0x3c) = local_9c;
          }
        }
      }
      iVar7 = (int)param_1[0x54];
      *(uint *)(param_1 + 0x54) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0x2a4) < iVar7 + 1U) {
        FUN_14906d150(local_108,iVar7);
      }
      *(longlong **)(*local_108 + (longlong)iVar7 * 8) = plVar12;
      uVar19 = local_c0 + 1;
      piVar20 = local_110;
      param_3 = local_e8;
    } while (uVar19 != uVar26);
  }
  iVar7 = *piVar20;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar28 = DVar8 == DVar9;
      }
      else {
        bVar28 = iVar7 == 0x10;
      }
      if (!bVar28) goto LAB_144405cb4;
    }
LAB_144405c6c:
    FUN_144406dc4(param_1,&DAT_14ca85100);
  }
  else {
    if (iVar7 == 0x10) goto LAB_144405c6c;
LAB_144405cb4:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*piVar20 == 2)) goto LAB_144405c6c;
      if (*piVar20 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_144405c6c;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar24 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar15 = (uint *)*puVar24;
      if (puVar15 != (uint *)0x0) goto LAB_144405e8e;
      do {
        uVar22 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar22 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar22 | 1;
          __tlregdtor(&LAB_14440bb68);
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar16 = *(undefined4 **)(lVar13 + 0x310);
        *(undefined8 *)(lVar13 + 0x310) = 0;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar16 = 0xffffffff;
        *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar24 = puVar16;
        FUN_140217a48(puVar24);
        puVar15 = (uint *)*puVar24;
LAB_144405e8e:
        uVar27 = *(longlong *)(puVar15 + 0x10) + 7;
        uVar22 = puVar15[0x12];
        while( true ) {
          puVar25 = (undefined8 *)(uVar27 & 0xfffffffffffffff8);
          if (puVar25 + 0x16 <= puVar15 + 0x4000) {
            *(undefined8 **)(puVar15 + 0x10) = puVar25 + 0x16;
            puVar15[0x12] = uVar22 + 1;
            iVar7 = 0;
            FUN_1447247dc(puVar25,0);
            *puVar25 = &PTR_FUN_14ba8b3e0;
            puVar25[0x15] = param_1;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar22 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
                uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
                iVar7 = 0;
              }
              else {
                uVar27 = 2;
              }
            }
            else {
              iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                      *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar27 = 5;
            }
            if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
            }
            puVar25[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar25[9] = puVar25;
            puVar25[10] = puVar25;
            lVar13 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar13 == 0) {
              uVar26 = 1;
              if ((char)uVar27 != '\x06') {
                uVar26 = uVar27;
              }
              uVar27 = uVar26;
              uVar11 = 0;
            }
            else {
              if ((char)uVar27 == '\x06') {
                uVar27 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
              }
              uVar11 = *(undefined8 *)(lVar13 + 0x30);
            }
            puVar25[0xf] = uVar11;
            puVar25[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar25 + 0x1c) = iVar7;
            if (puVar25 == (undefined8 *)0x0) {
              local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
              UNLOCK();
              local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
              FUN_1447439e4(puVar25);
              LOCK();
              piVar1 = (int *)(puVar25 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar25)(puVar25,1);
              }
            }
            goto LAB_144405d4a;
          }
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar2 = *puVar15;
          *puVar15 = *puVar15 + uVar22 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar22) != 0xffffffff) break;
          puVar15 = (uint *)*puVar24;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar24 = puVar15;
          uVar27 = (longlong)puVar15 + 0x5f;
          uVar22 = 0;
        }
      } while( true );
    }
    local_118 = &local_a8;
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14ba8b3c0;
    local_a8 = &LAB_14440c4ac;
    local_80 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"FGeometryCacheUpdateAnimation",&DAT_14cbf7434);
    if (local_a8 != (undefined1 *)0x0) {
      pppuVar21 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar21 = &local_88;
      }
      (*(code *)(*pppuVar21)[2])();
    }
  }
LAB_144405d4a:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar14 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
    if (plVar14 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar14 + 0x68))(plVar14);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar13 = DAT_14ca97068;
  bVar28 = true;
  cVar6 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    iVar7 = *piVar20;
    if (iVar7 == 0x40000002) {
      cVar6 = '\x02';
      uVar27 = 0;
    }
    else {
      bVar28 = true;
      cVar6 = '\x02';
      if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          bVar28 = DVar8 == DVar9;
          cVar6 = DAT_14ca96da8;
        }
        else {
          bVar28 = false;
        }
      }
      uVar27 = (ulonglong)(bVar28 ^ 1);
    }
    bVar28 = *(int *)(lVar13 + uVar27 * 4) != 0;
  }
  if ((!bVar28) || (cVar6 == '\0')) goto LAB_1444061c6;
  uStack_b0 = param_2[3];
  iVar7 = *piVar20;
  local_b8 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar28 = DVar8 == DVar9;
      }
      else {
        bVar28 = iVar7 == 0x10;
      }
      if (!bVar28) goto LAB_144406120;
    }
  }
  else if (iVar7 != 0x10) {
LAB_144406120:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*piVar20 == 2)) goto LAB_144405dd5;
      if (*piVar20 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_144405dd5;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar24 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar15 = (uint *)*puVar24;
      if (puVar15 != (uint *)0x0) goto LAB_1444062bd;
      while( true ) {
        uVar22 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar22 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar22 | 1;
          __tlregdtor(&LAB_14440bb68);
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar16 = *(undefined4 **)(lVar13 + 0x310);
        *(undefined8 *)(lVar13 + 0x310) = 0;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar16 = 0xffffffff;
        *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar24 = puVar16;
        FUN_140217a48(puVar24);
        puVar15 = (uint *)*puVar24;
LAB_1444062bd:
        puVar25 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar23 = (uint *)(puVar25 + 0x17);
        uVar22 = puVar15[0x12];
        if (puVar23 <= puVar15 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar2 = *puVar15;
          *puVar15 = *puVar15 + uVar22 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar22) != 0xffffffff) break;
          puVar15 = (uint *)*puVar24;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar24 = puVar15;
          puVar25 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
          puVar23 = (uint *)(puVar25 + 0x17);
          uVar22 = 0;
          if (puVar23 <= puVar15 + 0x4000) {
            uVar22 = 1;
            goto LAB_14440633d;
          }
        }
      }
      uVar22 = uVar22 + 1;
LAB_14440633d:
      *(uint **)(puVar15 + 0x10) = puVar23;
      puVar15[0x12] = uVar22;
      iVar7 = 0;
      FUN_1447247dc(puVar25,0);
      *puVar25 = &PTR_FUN_14ba8b460;
      *(undefined4 *)(puVar25 + 0x15) = (undefined4)local_b8;
      *(undefined4 *)((longlong)puVar25 + 0xac) = local_b8._4_4_;
      *(int *)(puVar25 + 0x16) = (int)uStack_b0;
      *(undefined4 *)((longlong)puVar25 + 0xb4) = uStack_b0._4_4_;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar22 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar22 < 2) {
          uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar22];
          iVar7 = 0;
        }
        else {
          uVar27 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar27 = 5;
      }
      if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
      }
      puVar25[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar25[9] = puVar25;
      puVar25[10] = puVar25;
      lVar13 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar13 == 0) {
        uVar26 = 1;
        if ((char)uVar27 != '\x06') {
          uVar26 = uVar27;
        }
        uVar27 = uVar26;
        uVar11 = 0;
      }
      else {
        if ((char)uVar27 == '\x06') {
          uVar27 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar13 + 0x30);
      }
      puVar25[0xf] = uVar11;
      puVar25[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar25 + 0x1c) = iVar7;
      if (puVar25 == (undefined8 *)0x0) {
        local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
        UNLOCK();
        local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,1);
        FUN_1447439e4(puVar25);
        LOCK();
        piVar20 = (int *)(puVar25 + 1);
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        if (*piVar20 == 0) {
          (**(code **)*puVar25)(puVar25,1);
        }
      }
    }
    else {
      local_118 = &local_a8;
      local_98 = (undefined ***)0x0;
      local_88 = &PTR_LAB_14ba8b3f0;
      local_80 = local_b8;
      iStack_78 = (int)uStack_b0;
      uStack_74 = uStack_b0._4_4_;
      local_a8 = &LAB_14440cc96;
      FUN_14005a792(&DAT_14ca9a440,L"FGeometryCacheInitRayTracingGeometry",&DAT_14cbf7438);
      if (local_a8 != (undefined1 *)0x0) {
        pppuVar21 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar21 = &local_88;
        }
        (*(code *)(*pppuVar21)[2])();
      }
    }
    goto LAB_1444061c6;
  }
LAB_144405dd5:
  FUN_14440c66e(&local_b8,&DAT_14ca85100);
LAB_1444061c6:
  if (*param_3 != 0) {
    plVar14 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar14 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144406708 FUN_144406708 body=240 status=ok
// SIG undefined FUN_144406708(void)

longlong * FUN_144406708(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_145e35fb4();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_28,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_28;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444067fa FUN_1444067fa body=1481 status=ok
// SIG undefined FUN_1444067fa(void)

void FUN_1444067fa(longlong param_1,longlong param_2,ulonglong param_3,uint param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  
  lVar6 = param_5[0x22];
  iVar20 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar20 != 0x40000002) && (iVar20 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (0 < (int)*(uint *)(param_2 + 8)) {
    uVar14 = 0;
    do {
      if ((param_4 >> (uVar14 & 0x1f) & 1) != 0) {
        if ((longlong)*(int *)(param_1 + 0x2a0) == 0) {
          return;
        }
        plVar21 = *(longlong **)(param_1 + 0x298);
        plVar2 = plVar21 + *(int *)(param_1 + 0x2a0);
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xea8);
        do {
          plVar7 = (longlong *)*plVar21;
          param_3 = CONCAT71((int7)(param_3 >> 8),*(undefined1 *)(param_1 + 0x340)) &
                    0xffffffffffffff01;
          lVar9 = (**(code **)(*plVar7 + 0x20))(plVar7,*(undefined4 *)(param_1 + 0x30c),param_3);
          if (*(char *)(lVar9 + 0x10) == '\x01') {
            lVar9 = plVar7[(ulonglong)*(byte *)(plVar7 + 0x7c) + 1];
            lVar10 = (longlong)*(int *)(lVar9 + 0x78);
            if (0 < lVar10) {
              iVar20 = *(int *)(param_2 + 8);
              lVar24 = 0;
              do {
                if (0 < iVar20) {
                  lVar22 = lVar24 * 0xc + *(longlong *)(lVar9 + 0x70);
                  uVar14 = 0;
                  do {
                    if ((param_4 >> (uVar14 & 0x1f) & 1) != 0) {
                      iVar20 = (int)param_5[1];
                      iVar19 = (int)param_5[2];
                      iVar15 = (iVar19 + 0x44) / 0x44;
                      *(int *)(param_5 + 2) = iVar19 + 1;
                      if (iVar20 < iVar15) {
                        do {
                          lVar13 = FUN_14001cc68(0x3fc0,0x10);
                          lVar23 = 0;
                          do {
                            *(undefined8 *)(lVar13 + 0xa8 + lVar23) = 0;
                            puVar16 = (undefined8 *)(lVar13 + 0xb8 + lVar23);
                            *puVar16 = 0;
                            puVar16[1] = 0;
                            *(undefined8 *)(lVar13 + 200 + lVar23) = 0;
                            *(undefined8 *)(lVar13 + 0xd0 + lVar23) = 0xffffffff;
                            *(undefined8 *)(lVar13 + 0xd8 + lVar23) = 0xff0000ffffffff;
                            *(undefined1 *)(lVar13 + 0xe0 + lVar23) = 0;
                            *(undefined4 *)(lVar13 + 0xe4 + lVar23) = 0x40c00f07;
                            pbVar3 = (byte *)(lVar13 + 0xe8 + lVar23);
                            *pbVar3 = *pbVar3 & 0xfc;
                            *(undefined1 **)(lVar13 + 0xb0 + lVar23) = &DAT_100000001;
                            FUN_14470b9e0(lVar13 + lVar23,1);
                            lVar23 = lVar23 + 0xf0;
                          } while (lVar23 != 0x3fc0);
                          iVar5 = (int)param_5[1];
                          *(uint *)(param_5 + 1) = iVar5 + 1U;
                          if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
                            FUN_14002baf6(param_5,iVar5);
                          }
                          *(longlong *)(*param_5 + (longlong)iVar5 * 8) = lVar13;
                          iVar20 = iVar20 + 1;
                        } while (iVar20 != iVar15);
                      }
                      plVar8 = (longlong *)param_5[0x1d];
                      param_3 = (ulonglong)(uint)(iVar19 % 0x44) * 0xf0 +
                                *(longlong *)(*param_5 + (longlong)(iVar19 / 0x44) * 8);
                      puVar11 = (uint *)*puVar1;
                      if (puVar11 != (uint *)0x0) goto LAB_144406a02;
                      while( true ) {
                        FUN_14472e504(puVar1);
                        puVar11 = (uint *)*puVar1;
LAB_144406a02:
                        puVar16 = (undefined8 *)
                                  (*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
                        uVar18 = puVar11[0x12];
                        if (puVar16 + 0x14 <= puVar11 + 0x4000) break;
                        while( true ) {
                          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                          LOCK();
                          uVar4 = *puVar11;
                          *puVar11 = *puVar11 + uVar18 + 1;
                          UNLOCK();
                          if ((uVar4 ^ uVar18) != 0xffffffff) break;
                          puVar11 = (uint *)*puVar1;
                          *puVar11 = 0xffffffff;
                          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                          puVar11[0x12] = 0;
                          *puVar1 = puVar11;
                          puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
                          uVar18 = 0;
                          if (puVar16 + 0x14 <= puVar11 + 0x4000) {
                            uVar18 = 1;
                            goto LAB_144406a80;
                          }
                        }
                      }
                      uVar18 = uVar18 + 1;
LAB_144406a80:
                      *(undefined8 **)(puVar11 + 0x10) = puVar16 + 0x15;
                      puVar11[0x12] = uVar18;
                      *(int *)(puVar16 + -1) = ((int)puVar16 + -8) - (int)puVar11;
                      *(undefined4 *)((longlong)puVar16 + -4) = 0xa0;
                      puVar16[1] = 0;
                      *puVar16 = &PTR_FUN_14ba8b470;
                      lVar13 = *plVar8;
                      do {
                        puVar16[1] = lVar13;
                        LOCK();
                        lVar23 = *plVar8;
                        bVar25 = lVar13 == lVar23;
                        if (bVar25) {
                          *plVar8 = (longlong)puVar16;
                          lVar23 = lVar13;
                        }
                        UNLOCK();
                        lVar13 = lVar23;
                      } while (!bVar25);
                      puVar16[9] = 0;
                      puVar16[10] = 0;
                      puVar16[7] = 0;
                      puVar16[8] = 0;
                      puVar16[5] = 0;
                      puVar16[6] = 0;
                      puVar16[3] = 0;
                      puVar16[4] = 0;
                      puVar16[0xb] = 0;
                      puVar16[2] = &PTR_FUN_14ba8b478;
                      puVar16[0xc] = 0;
                      puVar16[0xd] = 0;
                      puVar16[0xe] = 0;
                      puVar16[0xf] = 0;
                      puVar16[0x10] = 0;
                      puVar16[0x11] = 0;
                      puVar16[0x12] = 0;
                      puVar16[0x13] = 0;
                      plVar8 = (longlong *)param_5[0x1d];
                      puVar11 = (uint *)*puVar1;
                      if (puVar11 != (uint *)0x0) goto LAB_144406b17;
                      while( true ) {
                        FUN_14472e504(puVar1);
                        puVar11 = (uint *)*puVar1;
LAB_144406b17:
                        puVar17 = (undefined8 *)
                                  (*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
                        uVar18 = puVar11[0x12];
                        if (puVar17 + 8 <= puVar11 + 0x4000) break;
                        while( true ) {
                          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                          LOCK();
                          uVar4 = *puVar11;
                          *puVar11 = *puVar11 + uVar18 + 1;
                          UNLOCK();
                          if ((uVar4 ^ uVar18) != 0xffffffff) break;
                          puVar11 = (uint *)*puVar1;
                          *puVar11 = 0xffffffff;
                          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                          puVar11[0x12] = 0;
                          *puVar1 = puVar11;
                          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
                          uVar18 = 0;
                          if (puVar17 + 8 <= puVar11 + 0x4000) {
                            uVar18 = 1;
                            goto LAB_144406b8f;
                          }
                        }
                      }
                      uVar18 = uVar18 + 1;
LAB_144406b8f:
                      *(undefined8 **)(puVar11 + 0x10) = puVar17 + 9;
                      puVar11[0x12] = uVar18;
                      *(int *)(puVar17 + -1) = ((int)puVar17 + -8) - (int)puVar11;
                      *(undefined4 *)((longlong)puVar17 + -4) = 0x40;
                      puVar17[1] = 0;
                      *puVar17 = &PTR_FUN_14a5a8d50;
                      lVar13 = *plVar8;
                      do {
                        puVar17[1] = lVar13;
                        LOCK();
                        lVar23 = *plVar8;
                        bVar25 = lVar13 == lVar23;
                        if (bVar25) {
                          *plVar8 = (longlong)puVar17;
                          lVar23 = lVar13;
                        }
                        UNLOCK();
                        lVar13 = lVar23;
                      } while (!bVar25);
                      puVar17[2] = &PTR_FUN_14aa71480;
                      *(undefined4 *)(puVar17 + 4) = 0xffffffff;
                      *(undefined2 *)((longlong)puVar17 + 0x24) = 0x105;
                      *(undefined1 *)((longlong)puVar17 + 0x26) = 0;
                      puVar17[3] = &PTR_FUN_14a1ca300;
                      *(undefined4 *)(puVar17 + 5) = 2;
                      puVar17[6] = 0;
                      puVar17[7] = 0;
                      FUN_1490655fa(param_1,lVar6,plVar7,lVar22,puVar16 + 2,puVar17 + 2,param_3);
                      iVar20 = *(int *)(lVar22 + 8);
                      iVar19 = 0;
                      if (lVar24 < (int)plVar7[7]) {
                        iVar19 = (int)lVar24;
                      }
                      iVar15 = iVar19;
                      if (iVar20 < (int)plVar7[7]) {
                        iVar15 = iVar20;
                      }
                      if (iVar20 < 0) {
                        iVar15 = iVar19;
                      }
                      uVar12 = (**(code **)(**(longlong **)(plVar7[6] + (longlong)iVar15 * 8) +
                                           0x2f0))();
                      *(byte *)(param_3 + 0xe5) = *(byte *)(param_3 + 0xe5) & 0xef;
                      *(undefined8 *)(param_3 + 0xc0) = uVar12;
                      FUN_1436a14f8(param_5,uVar14,param_3);
                      iVar20 = *(int *)(param_2 + 8);
                    }
                    uVar14 = uVar14 + 1;
                  } while ((int)uVar14 < iVar20);
                }
                lVar24 = lVar24 + 1;
              } while (lVar24 != lVar10);
            }
          }
          plVar21 = plVar21 + 1;
          if (plVar21 == plVar2) {
            return;
          }
        } while( true );
      }
      uVar14 = uVar14 + 1;
    } while (*(uint *)(param_2 + 8) != uVar14);
  }
  return;
}



// FUNCTION 144406dc4 FUN_144406dc4 body=3644 status=ok
// SIG undefined FUN_144406dc4(void)

void FUN_144406dc4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *_Src;
  bool bVar7;
  bool bVar8;
  longlong **pplVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  longlong lVar13;
  undefined8 ***pppuVar14;
  longlong lVar15;
  char cVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  undefined8 ***pppuVar20;
  ulonglong unaff_R12;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1d8 [32];
  int *local_1b8;
  int *local_1b0;
  float *local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  float local_168 [2];
  undefined8 ***local_160;
  undefined8 ***local_158;
  longlong **local_150;
  undefined8 **local_148;
  undefined8 uStack_140;
  undefined8 **local_138;
  longlong *plStack_130;
  longlong **local_128;
  float local_11c;
  int local_118;
  int local_114;
  undefined1 *local_110;
  float *local_108;
  float local_100 [4];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_188 = param_2;
  if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
    lVar19 = *(longlong *)(param_1 + 0x298);
    local_180 = param_1 + 0x2a8;
    lVar17 = (longlong)*(int *)(param_1 + 0x2a0) << 3;
    lVar15 = 0;
    local_178 = lVar19;
    local_170 = lVar17;
    do {
      plVar3 = *(longlong **)(lVar19 + lVar15);
      if ((plVar3 != (longlong *)0x0) &&
         (lVar13 = (**(code **)(*plVar3 + 0x20))(plVar3), *(char *)(lVar13 + 0x10) == '\x01')) {
        *(undefined4 *)((longlong)plVar3 + 0x2c) = 0x3f800000;
        *(int *)(plVar3 + 4) = (int)plVar3[3];
        *(undefined4 *)(plVar3 + 5) = *(undefined4 *)((longlong)plVar3 + 0x24);
        local_1a8 = &local_11c;
        local_1b0 = &local_118;
        local_1b8 = &local_114;
        (**(code **)(*plVar3 + 0x28))(plVar3);
        fVar24 = local_11c;
        fVar25 = *(float *)((longlong)plVar3 + 0x24);
        *(float *)((longlong)plVar3 + 0x24) = local_11c;
        iVar2 = (int)plVar3[3];
        iVar18 = *(int *)((longlong)plVar3 + 0x1c);
        bVar7 = iVar18 != local_118;
        bVar8 = iVar2 != local_114;
        if (iVar18 == local_118 && iVar2 == local_114) {
          bVar21 = 0;
LAB_144406fe7:
          bVar22 = 0;
          bVar10 = 0;
        }
        else {
          lVar19 = plVar3[1];
          if (iVar18 != local_114) {
            cVar12 = (**(code **)(*plVar3 + 0x10))(plVar3,local_114,lVar19);
            if (cVar12 == '\0') {
              *(undefined4 *)(plVar3 + 3) = 0xffffffff;
              *(undefined4 *)(plVar3 + 4) = 0xffffffff;
              iVar18 = *(int *)((longlong)plVar3 + 0x1c);
              bVar21 = 1;
            }
            else {
              lVar19 = plVar3[1];
              lVar17 = plVar3[2];
              if (lVar17 != lVar19) {
                iVar2 = *(int *)(lVar19 + 0xa8);
                unaff_R12 = (ulonglong)iVar2;
                _Src = *(void **)(lVar19 + 0xa0);
                *(int *)(lVar17 + 0xa8) = iVar2;
                if (iVar2 == 0 && *(int *)(lVar17 + 0xac) == 0) {
                  *(undefined4 *)(lVar17 + 0xac) = 0;
                }
                else {
                  FUN_1447bda9e((undefined8 *)(lVar17 + 0xa0),iVar2);
                  if (iVar2 != 0) {
                    unaff_R12 = unaff_R12 << 2;
                    memcpy(*(void **)(lVar17 + 0xa0),_Src,unaff_R12);
                  }
                }
              }
              cVar12 = (**(code **)(*plVar3 + 0x10))(plVar3,local_118,plVar3[2]);
              if (cVar12 != '\0') {
                *(int *)(plVar3 + 3) = local_114;
                *(int *)((longlong)plVar3 + 0x1c) = local_118;
                bVar22 = 1;
                bVar21 = 0;
                bVar10 = 1;
                iVar18 = local_118;
                goto LAB_144406fed;
              }
              *(undefined4 *)((longlong)plVar3 + 0x1c) = 0xffffffff;
              bVar21 = 1;
              iVar18 = -1;
            }
            goto LAB_144406fe7;
          }
          plVar3[1] = plVar3[2];
          plVar3[2] = lVar19;
          *(int *)(plVar3 + 3) = local_114;
          *(int *)((longlong)plVar3 + 0x1c) = iVar2;
          bVar10 = (**(code **)(*plVar3 + 0x10))(plVar3,local_118,lVar19);
          iVar18 = -1;
          if (bVar10 != 0) {
            iVar18 = local_118;
          }
          bVar21 = bVar10 ^ 1;
          *(int *)((longlong)plVar3 + 0x1c) = iVar18;
          bVar22 = 0;
        }
LAB_144406fed:
        bVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,(int)plVar3[3],iVar18);
        pppuVar20 = (undefined8 ***)plVar3[1];
        if (((*(char *)((longlong)pppuVar20 + 0xb4) == '\x01') &&
            (lVar19 = plVar3[2], *(char *)(lVar19 + 0xb4) == '\x01')) &&
           (*(int *)(pppuVar20 + 1) == *(int *)(pppuVar20 + 0xd))) {
          unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),
                               *(int *)(lVar19 + 8) == *(int *)(lVar19 + 0x68));
        }
        else {
          unaff_R12 = 0;
        }
        cVar12 = (char)unaff_R12;
        if ((((1e-08 < ABS(fVar24 - fVar25) || (bVar7 || bVar8)) & bVar11) == 1 && bVar21 == 0) &&
           (*(int *)(DAT_14cbf7138 + 4) != 0)) {
          *(undefined1 *)(plVar3 + 0x7c) = 0;
          iVar2 = *(int *)(pppuVar20 + 1);
          if (iVar2 == 0) break;
          if (*(char *)((longlong)plVar3 + 0x3e1) == '\0') {
            (**(code **)(*plVar3 + 0x30))(plVar3,local_188,iVar2,*(undefined4 *)(pppuVar20 + 0x15));
          }
          FUN_149066454(local_180,iVar2,unaff_R12 & 0xffffffff);
          fVar25 = 1.0 - local_11c;
          local_1b0 = (int *)CONCAT44(local_1b0._4_4_,local_11c);
          local_1b8 = (int *)CONCAT44(local_1b8._4_4_,fVar25);
          FUN_142440800(*(undefined8 *)plVar3[1],*(undefined8 *)plVar3[2],
                        *(undefined8 *)(param_1 + 0x2a8),iVar2);
          local_1b8 = *(int **)(param_1 + 0x2b8);
          local_1b0 = *(int **)(param_1 + 0x2c8);
          local_198 = local_11c;
          local_1a8 = (float *)CONCAT44(local_1a8._4_4_,iVar2 * 4);
          local_1a0 = fVar25;
          FUN_1424408f0(*(undefined8 *)(plVar3[1] + 0x20),*(undefined8 *)(plVar3[2] + 0x20),
                        *(undefined8 *)(plVar3[1] + 0x30),*(undefined8 *)(plVar3[2] + 0x30));
          lVar19 = plVar3[1];
          if (*(char *)(lVar19 + 0xb3) == '\x01') {
            local_1b0 = (int *)CONCAT44(local_1b0._4_4_,local_11c);
            local_1b8 = (int *)CONCAT44(local_1b8._4_4_,fVar25);
            FUN_1424405f0(*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(plVar3[2] + 0x40),
                          *(undefined8 *)(param_1 + 0x2e8),iVar2 * 4);
            lVar19 = plVar3[1];
          }
          if (*(char *)(lVar19 + 0xb2) == '\x01') {
            local_1b0 = (int *)CONCAT44(local_1b0._4_4_,local_11c);
            local_1b8 = (int *)CONCAT44(local_1b8._4_4_,fVar25);
            FUN_142440a40(*(undefined8 *)(lVar19 + 0x10),*(undefined8 *)(plVar3[2] + 0x10),
                          *(undefined8 *)(param_1 + 0x2d8),iVar2);
            lVar19 = plVar3[1];
          }
          if (cVar12 != '\0') {
            uVar4 = *(undefined8 *)(lVar19 + 0x60);
            uVar5 = *(undefined8 *)(plVar3[2] + 0x60);
            uVar6 = *(undefined8 *)(param_1 + 0x2f8);
            fVar24 = ABS((float)((int)plVar3[3] - (int)plVar3[4]) +
                         (local_11c - *(float *)(plVar3 + 5)));
            if (1.0 <= fVar24) {
              fVar24 = 1.0;
            }
            if (fVar24 <= 0.0) {
              fVar24 = 0.0;
            }
            uVar23 = -(uint)(ABS(fVar24 + -1.0) <= 0.0001);
            *(uint *)((longlong)plVar3 + 0x2c) = uVar23 & 0x3f800000 | ~uVar23 & (uint)fVar24;
            local_1a8 = (float *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(param_1 + 0x314));
            local_1b0 = (int *)CONCAT44(local_1b0._4_4_,local_11c);
            local_1b8 = (int *)CONCAT44(local_1b8._4_4_,fVar25);
            FUN_1424406e0(uVar4,uVar5,uVar6,iVar2);
            lVar19 = plVar3[1];
          }
          if (*(char *)(lVar19 + 0xb8) == '\0') {
            FUN_144407c02(plVar3 + 0x29,local_188,lVar19 + 0xa0);
            lVar19 = plVar3[1];
          }
          if (*(char *)(lVar19 + 0xb0) == '\x01') {
            FUN_144409266(plVar3 + 0x15,local_188,*(undefined8 *)(param_1 + 0x2b8),
                          *(int *)(param_1 + 0x2c0) << 2);
            lVar19 = plVar3[1];
          }
          if (*(char *)(lVar19 + 0xb1) == '\x01') {
            FUN_144409266(plVar3 + 0x1a,local_188,*(undefined8 *)(param_1 + 0x2c8),
                          *(int *)(param_1 + 0x2d0) << 2);
            lVar19 = plVar3[1];
          }
          if (*(char *)(lVar19 + 0xb2) == '\x01') {
            FUN_144409266(plVar3 + 0x1f,local_188,*(undefined8 *)(param_1 + 0x2d8),
                          *(int *)(param_1 + 0x2e0) << 3);
            lVar19 = plVar3[1];
          }
          if (*(char *)(lVar19 + 0xb3) == '\x01') {
            FUN_144409266(plVar3 + 0x24,local_188,*(undefined8 *)(param_1 + 0x2e8),
                          *(int *)(param_1 + 0x2f0) << 2);
          }
          bVar21 = (**(code **)(*plVar3 + 0x18))
                             (plVar3,*(undefined4 *)
                                      ((longlong)plVar3 +
                                      (ulonglong)(*(uint *)(plVar3 + 0x14) & 1) * 4 + 0x90),
                              (int)plVar3[3]);
          uVar4 = local_188;
          if (cVar12 == '\0') {
            if ((bVar21 & (int)plVar3[0x14] != -1) == 0) {
              FUN_144409266(plVar3 + 8,local_188,*(undefined8 *)(param_1 + 0x2a8),
                            *(int *)(param_1 + 0x2b0) * 0xc);
              FUN_144409266(plVar3 + 0xd,uVar4,*(undefined8 *)(param_1 + 0x2a8),
                            *(int *)(param_1 + 0x2b0) * 0xc);
              *(undefined4 *)(plVar3 + 0x14) = 0;
              uVar1 = *(undefined4 *)(param_1 + 0x30c);
              *(undefined4 *)(plVar3 + 0x13) = uVar1;
              *(undefined4 *)((longlong)plVar3 + 0x9c) = uVar1;
              *(undefined4 *)(plVar3 + 0x12) = *(undefined4 *)((longlong)plVar3 + 0x1c);
              *(undefined4 *)((longlong)plVar3 + 0x94) = *(undefined4 *)((longlong)plVar3 + 0x1c);
              lVar17 = local_170;
              lVar19 = local_178;
            }
            else {
              uVar23 = (int)plVar3[0x14] + 1;
              *(uint *)(plVar3 + 0x14) = uVar23;
              FUN_144409266(plVar3 + (ulonglong)(uVar23 & 1) * 5 + 8,local_188,
                            *(undefined8 *)(param_1 + 0x2a8),*(int *)(param_1 + 0x2b0) * 0xc);
              uVar23 = *(uint *)(plVar3 + 0x14);
              *(undefined4 *)((longlong)plVar3 + (ulonglong)(uVar23 & 1) * 4 + 0x98) =
                   *(undefined4 *)(param_1 + 0x30c);
              *(undefined4 *)((longlong)plVar3 + (ulonglong)(uVar23 & 1) * 4 + 0x90) =
                   *(undefined4 *)((longlong)plVar3 + 0x1c);
              lVar17 = local_170;
              lVar19 = local_178;
            }
          }
          else {
            *(undefined4 *)(plVar3 + 0x14) = 0;
            FUN_144409266(plVar3 + 8,local_188,*(undefined8 *)(param_1 + 0x2a8),
                          *(int *)(param_1 + 0x2b0) * 0xc);
            FUN_144409266(plVar3 + 0xd,uVar4,*(undefined8 *)(param_1 + 0x2f8),
                          *(int *)(param_1 + 0x300) * 0xc);
            *(int *)(plVar3 + 0x12) = (int)plVar3[3];
            *(undefined4 *)((longlong)plVar3 + 0x94) = 0xffffffff;
            uVar1 = *(undefined4 *)(param_1 + 0x30c);
            *(undefined4 *)(plVar3 + 0x13) = uVar1;
            *(undefined4 *)((longlong)plVar3 + 0x9c) = uVar1;
            lVar17 = local_170;
            lVar19 = local_178;
          }
        }
        else if ((uint)((int)ROUND(fVar25 + fVar25 + 0.5) ^ (int)ROUND(fVar24 + fVar24 + 0.5)) < 2
                 && (!bVar7 && !bVar8)) {
          lVar17 = local_170;
          lVar19 = local_178;
          if (ABS(fVar24 - fVar25) <= 1e-08) {
            if ((bVar21 | bVar10) == 1) goto LAB_14440740c;
          }
          else if ((bVar21 != 0 || bVar10 != 0) || (*(byte *)(param_1 + 0x340) & 4) != 0)
          goto LAB_14440740c;
        }
        else {
LAB_14440740c:
          if ((((uint)(int)ROUND(local_11c + local_11c + 0.5) < 2) ||
              (*(int *)((undefined8 ***)plVar3[2] + 1) < 1)) ||
             (iVar2 = *(int *)((longlong)plVar3 + 0x1c), iVar2 == -1)) {
            iVar2 = (int)plVar3[3];
            cVar16 = '\0';
          }
          else {
            cVar16 = '\x01';
            pppuVar20 = (undefined8 ***)plVar3[2];
          }
          local_128 = (longlong **)pppuVar20;
          if (*(int *)(pppuVar20 + 1) == 0) break;
          if (*(char *)((longlong)plVar3 + 0x3e1) == '\0') {
            (**(code **)(*plVar3 + 0x30))
                      (plVar3,local_188,*(int *)(pppuVar20 + 1),*(undefined4 *)(pppuVar20 + 0x15));
          }
          *(char *)(plVar3 + 0x7c) = cVar16;
          if (*(char *)(local_128 + 0x16) == '\x01') {
            FUN_144409266(plVar3 + 0x15,local_188,local_128[4],*(int *)(local_128 + 5) << 2);
          }
          if (*(char *)((longlong)local_128 + 0xb1) == '\x01') {
            FUN_144409266(plVar3 + 0x1a,local_188,local_128[6],*(int *)(local_128 + 7) << 2);
          }
          if (*(char *)(local_128 + 0x17) == '\0') {
            FUN_144407c02(plVar3 + 0x29,local_188,local_128 + 0x14);
          }
          if (*(char *)((longlong)local_128 + 0xb2) == '\x01') {
            FUN_144409266(plVar3 + 0x1f,local_188,local_128[2],*(int *)(local_128 + 3) << 3);
          }
          if (*(char *)((longlong)local_128 + 0xb3) == '\x01') {
            FUN_144409266(plVar3 + 0x24,local_188,local_128[8],*(int *)(local_128 + 9) << 2);
          }
          bVar21 = (**(code **)(*plVar3 + 0x18))
                             (plVar3,*(undefined4 *)
                                      ((longlong)plVar3 +
                                      (ulonglong)(*(uint *)(plVar3 + 0x14) & 1) * 4 + 0x90),iVar2);
          uVar4 = local_188;
          if (cVar12 == '\0') {
            if ((byte)(bVar22 | (int)plVar3[0x14] == -1 | bVar21 ^ 1) == 1) {
              FUN_144409266(plVar3 + 8,local_188,*local_128,*(int *)(local_128 + 1) * 0xc);
              FUN_144409266(plVar3 + 0xd,uVar4,*local_128,*(int *)(local_128 + 1) * 0xc);
              *(undefined4 *)(plVar3 + 0x14) = 0;
              *(int *)(plVar3 + 0x12) = iVar2;
              *(int *)((longlong)plVar3 + 0x94) = iVar2;
              lVar17 = local_170;
              lVar19 = local_178;
            }
            else {
              uVar23 = (int)plVar3[0x14] + 1;
              *(uint *)(plVar3 + 0x14) = uVar23;
              FUN_144409266(plVar3 + (ulonglong)(uVar23 & 1) * 5 + 8,local_188,*local_128,
                            *(int *)(local_128 + 1) * 0xc);
              *(int *)((longlong)plVar3 + (ulonglong)(*(uint *)(plVar3 + 0x14) & 1) * 4 + 0x90) =
                   iVar2;
              lVar17 = local_170;
              lVar19 = local_178;
            }
          }
          else {
            local_138 = (longlong **)0x0;
            plStack_130 = (longlong *)0x0;
            fVar25 = *(float *)(param_1 + 0x314);
            fVar24 = ABS(fVar25 + -1.0);
            if (1e-08 < fVar24) {
              FUN_146bca1c8(&local_138,*(undefined4 *)(local_128 + 1),1);
              local_158 = &local_128;
              local_100[0] = 0.0;
              local_100[1] = 0.0;
              local_100[2] = 0.0;
              local_110 = &LAB_14440cf56;
              local_108 = local_168;
              local_1a8 = local_100;
              local_1b0 = (int *)((ulonglong)local_1b0 & 0xffffffff00000000);
              local_168[0] = fVar25;
              local_160 = &local_138;
              FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(local_128 + 1),1,&local_110);
            }
            pplVar9 = local_128;
            pppuVar20 = (undefined8 ***)(local_128 + 0xc);
            if (1e-08 < fVar24) {
              pppuVar20 = &local_138;
            }
            local_148 = (longlong **)0x0;
            uStack_140 = 0;
            if ((*(byte *)(param_1 + 0x340) & 4) != 0) {
              FUN_146bca1c8(&local_148,*(undefined4 *)(local_128 + 1),1);
              local_168[0] = local_11c + -1.0;
              if (cVar16 == '\0') {
                local_168[0] = local_11c;
              }
              local_160 = &local_128;
              local_158 = &local_148;
              local_100[0] = 0.0;
              local_100[1] = 0.0;
              local_100[2] = 0.0;
              local_110 = &LAB_14440cfa2;
              local_108 = local_168;
              local_1a8 = local_100;
              local_1b0 = (int *)((ulonglong)local_1b0 & 0xffffffff00000000);
              local_150 = (longlong **)pppuVar20;
              FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(local_128 + 1),1,&local_110);
            }
            uVar4 = local_188;
            fVar25 = ABS((float)((int)plVar3[3] - (int)plVar3[4]) +
                         (local_11c - *(float *)(plVar3 + 5)));
            if (1.0 <= fVar25) {
              fVar25 = 1.0;
            }
            if (fVar25 <= 0.0) {
              fVar25 = 0.0;
            }
            uVar23 = -(uint)(ABS(fVar25 + -1.0) <= 0.0001);
            *(uint *)((longlong)plVar3 + 0x2c) = uVar23 & 0x3f800000 | ~uVar23 & (uint)fVar25;
            *(undefined4 *)(plVar3 + 0x14) = 0;
            pppuVar14 = (undefined8 ***)local_128;
            if ((*(byte *)(param_1 + 0x340) & 4) != 0) {
              pppuVar14 = &local_148;
            }
            FUN_144409266(plVar3 + 8,local_188,*pppuVar14,*(int *)(pppuVar14 + 1) * 0xc);
            pppuVar14 = (undefined8 ***)(pplVar9 + 0xd);
            if (1e-08 < fVar24) {
              pppuVar14 = (undefined8 ***)&plStack_130;
            }
            FUN_144409266(plVar3 + 0xd,uVar4,*pppuVar20,*(int *)pppuVar14 * 0xc);
            *(int *)(plVar3 + 0x12) = iVar2;
            *(undefined4 *)((longlong)plVar3 + 0x94) = 0xffffffff;
            uVar1 = *(undefined4 *)(param_1 + 0x30c);
            *(undefined4 *)(plVar3 + 0x13) = uVar1;
            *(undefined4 *)((longlong)plVar3 + 0x9c) = uVar1;
            if (local_148 != (longlong **)0x0) {
              FUN_1400020a8();
            }
            lVar17 = local_170;
            lVar19 = local_178;
            if (local_138 != (longlong **)0x0) {
              FUN_1400020a8();
              lVar17 = local_170;
              lVar19 = local_178;
            }
          }
        }
      }
      lVar15 = lVar15 + 8;
    } while (lVar17 != lVar15);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144407c02 FUN_144407c02 body=1308 status=ok
// SIG undefined FUN_144407c02(void)

void FUN_144407c02(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  void *_Dst;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  ulonglong *local_c0;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  ulonglong local_98 [2];
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar5 = *(int *)(param_3 + 1);
  iVar6 = *(int *)(param_1 + 0x18);
  iVar9 = iVar5;
  if (iVar6 < iVar5) {
    *(int *)(param_1 + 0x18) = iVar5;
    local_98[0] = 0;
    local_98[1] = 0;
    local_88 = 1;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_70 = 0;
    local_6c = 0;
    local_68 = L"FGeomCacheIndexBuffer";
    local_60 = 0;
    uStack_58 = 0;
    local_a8._0_4_ = iVar5 * 4;
    local_a8._4_4_ = 4;
    uStack_a0 = 0x8102;
    if ((int)local_a8 == 0) {
      FUN_14570b4be(param_2,local_98,0x8102,4);
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_c0 = local_98;
      local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
      FUN_14002049c(param_2,0);
    }
    else {
      local_c0 = local_98;
      local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
    }
    plVar13 = (longlong *)(param_1 + 0x10);
    if (plVar13 == &local_b0) {
LAB_144407dd5:
      lVar11 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b0 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar11;
            plVar13 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar13;
                LOCK();
                bVar14 = plVar13 != DAT_14ca843c0;
                plVar12 = plVar10;
                if (bVar14) {
                  plVar13 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar14);
            }
            else {
              do {
                *plVar10 = (longlong)plVar12;
                LOCK();
                bVar14 = plVar12 != DAT_14ca843c8;
                plVar13 = plVar10;
                if (bVar14) {
                  plVar12 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar14);
            }
          }
        }
      }
    }
    else {
      lVar11 = *plVar13;
      *plVar13 = local_b0;
      local_b0 = 0;
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar11 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar11;
            plVar13 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar13;
                LOCK();
                bVar14 = plVar13 != DAT_14ca843c0;
                plVar12 = plVar10;
                if (bVar14) {
                  plVar13 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar14);
            }
            else {
              do {
                *plVar10 = (longlong)plVar12;
                LOCK();
                bVar14 = plVar12 != DAT_14ca843c8;
                plVar13 = plVar10;
                if (bVar14) {
                  plVar12 = DAT_14ca843c8;
                  plVar13 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar13;
                UNLOCK();
              } while (bVar14);
            }
          }
        }
        goto LAB_144407dd5;
      }
    }
    iVar9 = *(int *)(param_3 + 1);
  }
  if (0 < iVar9) {
    iVar9 = *(int *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    cVar4 = *(char *)(param_2 + 0x69);
    if (cVar4 == '\0') {
      FUN_14002049c(param_2,1);
    }
    local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,iVar9 << 2);
    local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,1);
    _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar8,0);
    if (cVar4 == '\0') {
      FUN_14002049c(param_2,0);
    }
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1) << 2);
      iVar9 = *(int *)(param_3 + 1);
      lVar11 = (longlong)iVar9;
      *(int *)(param_1 + 0x1c) = iVar9;
      if (iVar9 < *(int *)(param_1 + 0x18)) {
        uVar7 = *(undefined4 *)*param_3;
        do {
          *(undefined4 *)((longlong)_Dst + lVar11 * 4) = uVar7;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(param_1 + 0x18));
      }
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar8);
      }
    }
  }
  if (((iVar6 < iVar5) && (*(longlong *)(param_1 + 0x10) != 0)) && (*(int *)(param_1 + 0x18) != 0))
  {
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x10) == 0) {
      local_98[0]._0_3_ = 0x11c00;
    }
    else {
      local_98[0]._0_3_ = 0x40000;
    }
    local_98[0] = (ulonglong)(uint3)local_98[0];
    local_98[1] = 0;
    local_c8 = local_98;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a8,param_2);
    plVar13 = (longlong *)(param_1 + 0x20);
    if (plVar13 != &local_a8) {
      lVar11 = *plVar13;
      *plVar13 = CONCAT44(local_a8._4_4_,(int)local_a8);
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 0;
      if (lVar11 == 0) goto LAB_14440806b;
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar11;
          plVar13 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar14 = plVar13 != DAT_14ca843c0;
              plVar12 = plVar10;
              if (bVar14) {
                plVar13 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar14 = plVar12 != DAT_14ca843c8;
              plVar13 = plVar10;
              if (bVar14) {
                plVar12 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    lVar11 = CONCAT44(local_a8._4_4_,(int)local_a8);
    if (lVar11 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = lVar11;
          plVar13 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar13;
              LOCK();
              bVar14 = plVar13 != DAT_14ca843c0;
              plVar12 = plVar10;
              if (bVar14) {
                plVar13 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar14 = plVar12 != DAT_14ca843c8;
              plVar13 = plVar10;
              if (bVar14) {
                plVar12 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
LAB_14440806b:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144408120 FUN_144408120 body=146 status=ok
// SIG undefined FUN_144408120(void)

bool FUN_144408120(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *param_4;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar4 = FUN_149068030(lVar2);
  if (iVar4 == iVar1) {
    bVar5 = false;
  }
  else {
    iVar3 = iVar1;
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      local_48 = lVar2 + 0x68;
      local_38 = param_5;
      local_50 = param_1;
      local_40 = iVar4;
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      *param_4 = iVar4;
      iVar3 = iVar4;
    }
    bVar5 = iVar1 != iVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444081b4 FUN_1444081b4 body=182 status=ok
// SIG undefined FUN_1444081b4(void)

ulonglong FUN_1444081b4(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined8 unaff_RSI;
  undefined7 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x358);
  local_28 = uVar4;
  if (lVar2 != 0) {
    uVar4 = FUN_145b9d992();
    piVar1 = (int *)(uVar4 + 0x38);
    if ((*piVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (uVar4 = uVar4 + 0x30,
       *(ulonglong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*piVar1 * 8) ==
       uVar4)) {
      uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
      bVar5 = 1;
      if (*(longlong **)(lVar2 + 0xa8) == (longlong *)0x0) {
        bVar3 = 0;
      }
      else {
        local_48 = lVar2 + 0x98;
        local_40 = *(longlong *)(lVar2 + 0xb0) + 0x68;
        local_38 = param_2;
        local_30 = param_3;
        bVar3 = (**(code **)(**(longlong **)(lVar2 + 0xa8) + 0x10))();
      }
      goto LAB_1444081da;
    }
  }
  bVar3 = (byte)uVar4;
  bVar5 = 0;
  uVar6 = 0;
LAB_1444081da:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71(uVar6,bVar5 & bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14440826c FUN_14440826c body=1016 status=ok
// SIG undefined FUN_14440826c(void)

void FUN_14440826c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FGeomCacheIndexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  iVar5 = *(uint *)(param_1 + 0x18) << 2;
  local_98 = (undefined1)iVar5;
  uStack_97 = (undefined1)((uint)iVar5 >> 8);
  uStack_96 = (undefined1)((uint)iVar5 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar5 >> 0x18);
  uStack_94 = 4;
  uStack_90 = 0x8102;
  if ((*(uint *)(param_1 + 0x18) & 0x3fffffff) == 0) {
    FUN_14570b4be(param_2,&local_88,0x8102,4);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a0) {
LAB_144408412:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar4 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_144408412;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((lVar10 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    if ((*(byte *)(lVar10 + 0x28) & 0x10) == 0) {
      uStack_97 = 0x1c;
      uStack_96 = 1;
    }
    else {
      uStack_97 = 0;
      uStack_96 = 4;
    }
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_95 = 0;
    local_98 = 0;
    local_b8 = &local_98;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
    plVar9 = (longlong *)(param_1 + 0x20);
    if (plVar9 != &local_a0) {
      lVar10 = *plVar9;
      *plVar9 = local_a0;
      local_a0 = 0;
      if (lVar10 == 0) goto LAB_1444085b5;
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
LAB_1444085b5:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144408666 FUN_144408666 body=1022 status=ok
// SIG undefined FUN_144408666(void)

void FUN_144408666(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FGeomCacheVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  local_98 = (undefined1)iVar4;
  uStack_97 = (undefined1)((uint)iVar4 >> 8);
  uStack_96 = (undefined1)((uint)iVar4 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar4 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (iVar4 == 0) {
    FUN_14570b4be(param_2,&local_88,0x4101,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a0) {
LAB_144408809:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar5 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_144408809;
    }
  }
  if ((lVar10 != 0) &&
     ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0)) {
    if ((*(byte *)(lVar10 + 0x28) & 0x10) == 0) {
      uStack_97 = 0xd;
      uStack_96 = 1;
    }
    else {
      uStack_97 = 0;
      uStack_96 = 4;
    }
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_95 = 0;
    local_98 = 0;
    local_b8 = &local_98;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
    plVar9 = (longlong *)(param_1 + 0x20);
    if (plVar9 != &local_a0) {
      lVar10 = *plVar9;
      *plVar9 = local_a0;
      local_a0 = 0;
      if (lVar10 == 0) goto LAB_1444089b8;
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
LAB_1444089b8:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144408a66 FUN_144408a66 body=1022 status=ok
// SIG undefined FUN_144408a66(void)

void FUN_144408a66(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FGeomCacheTangentBuffer";
  local_50 = 0;
  uStack_48 = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  local_98 = (undefined1)iVar4;
  uStack_97 = (undefined1)((uint)iVar4 >> 8);
  uStack_96 = (undefined1)((uint)iVar4 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar4 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (iVar4 == 0) {
    FUN_14570b4be(param_2,&local_88,0x4101,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a0) {
LAB_144408c09:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar5 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_144408c09;
    }
  }
  if ((lVar10 != 0) &&
     ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0)) {
    if ((*(byte *)(lVar10 + 0x28) & 0x10) == 0) {
      uStack_97 = 0x3d;
      uStack_96 = 1;
    }
    else {
      uStack_97 = 0;
      uStack_96 = 4;
    }
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_95 = 0;
    local_98 = 0;
    local_b8 = &local_98;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
    plVar9 = (longlong *)(param_1 + 0x20);
    if (plVar9 != &local_a0) {
      lVar10 = *plVar9;
      *plVar9 = local_a0;
      local_a0 = 0;
      if (lVar10 == 0) goto LAB_144408db8;
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
LAB_144408db8:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144408e66 FUN_144408e66 body=1022 status=ok
// SIG undefined FUN_144408e66(void)

void FUN_144408e66(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FGeomCacheColorBuffer";
  local_50 = 0;
  uStack_48 = 0;
  iVar4 = *(int *)(param_1 + 0x18);
  local_98 = (undefined1)iVar4;
  uStack_97 = (undefined1)((uint)iVar4 >> 8);
  uStack_96 = (undefined1)((uint)iVar4 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar4 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (iVar4 == 0) {
    FUN_14570b4be(param_2,&local_88,0x4101,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a0) {
LAB_144409009:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar5 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_144409009;
    }
  }
  if ((lVar10 != 0) &&
     ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0)) {
    if ((*(byte *)(lVar10 + 0x28) & 0x10) == 0) {
      uStack_97 = 2;
      uStack_96 = 1;
    }
    else {
      uStack_97 = 0;
      uStack_96 = 4;
    }
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_95 = 0;
    local_98 = 0;
    local_b8 = &local_98;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
    plVar9 = (longlong *)(param_1 + 0x20);
    if (plVar9 != &local_a0) {
      lVar10 = *plVar9;
      *plVar9 = local_a0;
      local_a0 = 0;
      if (lVar10 == 0) goto LAB_1444091b8;
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
LAB_1444091b8:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144409266 FUN_144409266 body=1244 status=ok
// SIG undefined FUN_144409266(void)

void FUN_144409266(longlong param_1,longlong param_2,void *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  void *_Dst;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  ulonglong *local_c0;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  ulonglong local_98 [2];
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar5 = *(int *)(param_1 + 0x18);
  iVar11 = iVar5;
  if (iVar5 < param_4) {
    *(int *)(param_1 + 0x18) = param_4;
    local_98[0] = 0;
    local_98[1] = 0;
    local_88 = 1;
    local_84 = 0;
    uStack_7c = 0;
    local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_70 = 0;
    local_6c = 0;
    local_68 = L"FGeomCacheVertexBuffer";
    local_60 = 0;
    uStack_58 = 0;
    local_a8._4_4_ = 0;
    uStack_a0 = 0x4101;
    local_a8._0_4_ = param_4;
    if (param_4 == 0) {
      FUN_14570b4be(param_2,local_98,0x4101,0);
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_c0 = local_98;
      local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
      FUN_14002049c(param_2,0);
    }
    else {
      local_c0 = local_98;
      local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,0x78);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
      *(undefined4 *)(local_b0 + 0x18) = 0x78;
    }
    plVar10 = (longlong *)(param_1 + 0x10);
    if (plVar10 == &local_b0) {
LAB_144409428:
      lVar6 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_b0 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar6;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar12 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar12) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar12 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar8;
                if (bVar12) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
    }
    else {
      lVar6 = *plVar10;
      *plVar10 = local_b0;
      local_b0 = 0;
      if (lVar6 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar6 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar6 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar6 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar6;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar12 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar12) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar12 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar8;
                if (bVar12) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
        goto LAB_144409428;
      }
    }
    iVar11 = *(int *)(param_1 + 0x18);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,iVar11);
  local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar7,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(_Dst,param_3,(longlong)param_4);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar7);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar7);
  }
  if (((iVar5 < param_4) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0)) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x10) == 0) {
      local_98[0]._0_3_ = 0x10d00;
    }
    else {
      local_98[0]._0_3_ = 0x40000;
    }
    local_98[0] = (ulonglong)(uint3)local_98[0];
    local_98[1] = 0;
    local_c8 = local_98;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a8,param_2);
    plVar10 = (longlong *)(param_1 + 0x20);
    if (plVar10 != &local_a8) {
      lVar6 = *plVar10;
      *plVar10 = CONCAT44(local_a8._4_4_,(int)local_a8);
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 0;
      if (lVar6 == 0) goto LAB_144409692;
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar6;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    lVar6 = CONCAT44(local_a8._4_4_,(int)local_a8);
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar6 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar6 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar6;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
  }
LAB_144409692:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144409743 FUN_144409743 body=69 status=ok
// SIG undefined FUN_144409743(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144409743(void)

{
  _DAT_14cbf7178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144409785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7180,1);
  return;
}



// FUNCTION 144409788 FUN_144409788 body=69 status=ok
// SIG undefined FUN_144409788(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144409788(void)

{
  _DAT_14cbf7190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444097ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7198,1);
  return;
}



// FUNCTION 1444097ce FUN_1444097ce body=1424 status=ok
// SIG undefined FUN_1444097ce(void)

void FUN_1444097ce(longlong param_1)

{
  PSRWLOCK SRWLock;
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  LARGE_INTEGER LVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  ulonglong *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_e8 [32];
  LARGE_INTEGER *local_c8;
  uint *local_c0;
  longlong local_b8;
  longlong *local_b0;
  PSRWLOCK local_a8;
  longlong local_a0;
  LARGE_INTEGER local_98;
  undefined8 uStack_90;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  SRWLock = (PSRWLOCK)(param_1 + 0x78);
  AcquireSRWLockShared(SRWLock);
  local_c0 = (uint *)(param_1 + 0x28);
  iVar10 = *(int *)(param_1 + 0x40);
  local_a8 = SRWLock;
  if (iVar10 == 0) {
    uVar21 = 1;
    uVar17 = 0;
    iVar14 = 0;
    iVar6 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar11 = local_c0;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar6 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar6 = iVar10 + -1;
      }
      uVar17 = 0;
      uVar21 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar21 = uVar17;
      }
      iVar14 = 0;
      do {
        if (uVar21 == uVar17) goto LAB_144409969;
        iVar14 = iVar14 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar14 = 0;
    }
    uVar21 = (ulonglong)(-uVar16 & uVar16);
    uVar3 = uVar21 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar6) {
      iVar6 = iVar10;
    }
  }
  if (iVar6 < iVar10) {
    uVar16 = 0xffffffff;
    do {
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar6 * 0x18);
      *(undefined4 *)(lVar18 + 0x10) = 0;
      if (*(int *)(lVar18 + 0x14) != 0) {
        FUN_14481578e(lVar18 + 8,0);
      }
      uVar16 = uVar16 & ~(uint)uVar21;
      puVar11 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar11 = local_c0;
      }
      iVar10 = *(int *)(param_1 + 0x40);
      iVar6 = (int)uVar17;
      lVar18 = (longlong)iVar6;
      uVar7 = puVar11[lVar18] & uVar16;
      if (uVar7 == 0) {
        iVar8 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar8 = iVar10 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar7 = puVar11[lVar18 + lVar13 + 1];
          if (uVar7 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar18 == lVar13) goto LAB_144409969;
        }
        uVar17 = (ulonglong)(iVar6 + (int)lVar13 + 1);
        uVar16 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar21 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar10);
  }
LAB_144409969:
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    plVar19 = *(longlong **)(param_1 + 0x68);
    plVar20 = plVar19 + *(int *)(param_1 + 0x70);
    local_a0 = param_1 + 0x50;
    do {
      lVar18 = *plVar19;
      lVar13 = *(longlong *)(lVar18 + 0x650);
      if ((lVar13 != 0) && ((longlong)*(int *)(lVar13 + 0x58) != 0)) {
        puVar15 = *(ulonglong **)(lVar13 + 0x50);
        puVar1 = puVar15 + *(int *)(lVar13 + 0x58);
        do {
          uVar17 = *puVar15;
          if ((DAT_14c950c29 == '\x01') && (uVar17 != 0)) {
            FUN_1456cec3c(uVar17);
LAB_1444099f5:
            lVar13 = FUN_145b9d992();
            if ((((lVar13 != 0) && (lVar4 = *(longlong *)(uVar17 + 0x10), lVar4 != 0)) &&
                (*(int *)(lVar13 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
               ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
                 == lVar13 + 0x30 && (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c))))) {
              uVar16 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
              uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
              lVar13 = *(longlong *)(param_1 + 0x58);
              if (*(longlong *)(param_1 + 0x58) == 0) {
                lVar13 = local_a0;
              }
              iVar10 = *(int *)(lVar13 + (ulonglong)
                                         (*(int *)(param_1 + 0x60) - 1U & (uVar16 >> 0x10 ^ uVar16))
                                         * 4);
              if (iVar10 != -1) {
                do {
                  puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar10 * 0x18);
                  if (*puVar2 == uVar17) {
                    if (puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
                      fVar22 = *(float *)(lVar18 + 0x65c);
                      if (14400.0 <= fVar22) {
                        fVar22 = 14400.0;
                      }
                      if (fVar22 <= -14400.0) {
                        fVar22 = -14400.0;
                      }
                      fVar22 = (fVar22 + *(float *)(lVar18 + 0x66c)) -
                               *DAT_14cbf71a0 * *(float *)(lVar18 + 0x6b8);
                      fVar24 = *(float *)(lVar18 + 0x6b8) * *DAT_14cbf7188 + fVar22;
                      fVar25 = fVar24;
                      if (fVar22 <= fVar24) {
                        fVar25 = fVar22;
                        fVar22 = fVar24;
                      }
                      local_98.QuadPart = 0;
                      uStack_90 = 0;
                      local_c8 = &local_98;
                      FUN_149066ca6(uVar17,fVar25,fVar22,*(undefined1 *)(lVar18 + 0x659));
                      LVar5 = local_98;
                      local_b8 = (longlong)(int)uStack_90;
                      if (local_b8 != 0) {
                        local_b8 = local_b8 << 2;
                        lVar13 = 0;
                        local_b0 = plVar20;
                        do {
                          local_84 = *(undefined4 *)(LVar5.QuadPart + lVar13);
                          FUN_144aa221c(puVar2[1] + 8,&local_84);
                          lVar13 = lVar13 + 4;
                          plVar20 = local_b0;
                        } while (local_b8 != lVar13);
                      }
                      if (local_98.QuadPart != 0) {
                        FUN_1400020a8();
                      }
                    }
                    break;
                  }
                  iVar10 = (int)puVar2[2];
                } while (iVar10 != -1);
              }
            }
          }
          else if (uVar17 != 0) goto LAB_1444099f5;
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar1);
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar20);
  }
  QueryPerformanceCounter(&local_98);
  puVar11 = local_c0;
  dVar23 = (double)local_98.QuadPart * DAT_14c83f420;
  LOCK();
  *(undefined4 *)(param_1 + 0x10) = 0;
  UNLOCK();
  uVar17 = 0;
  *(double *)(param_1 + 0x80) = dVar23 + 16777216.0;
  iVar10 = *(int *)(param_1 + 0x40);
  if (iVar10 == 0) {
    uVar21 = 1;
    iVar14 = 0;
    iVar6 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar12 = local_c0;
    }
    uVar16 = *puVar12;
    if (uVar16 == 0) {
      iVar6 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar6 = iVar10 + -1;
      }
      uVar17 = 0;
      uVar21 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar21 = uVar17;
      }
      iVar14 = 0;
      do {
        if (uVar21 == uVar17) goto LAB_144409d01;
        iVar14 = iVar14 + 0x20;
        uVar16 = puVar12[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar14 = 0;
    }
    uVar21 = (ulonglong)(-uVar16 & uVar16);
    uVar3 = uVar21 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar6) {
      iVar6 = iVar10;
    }
  }
  if (iVar6 < iVar10) {
    uVar16 = 0xffffffff;
    do {
      FUN_144409d60(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar6 * 0x18));
      uVar16 = ~(uint)uVar21 & uVar16;
      puVar12 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar12 = puVar11;
      }
      iVar10 = *(int *)(param_1 + 0x40);
      iVar6 = (int)uVar17;
      lVar18 = (longlong)iVar6;
      uVar7 = puVar12[lVar18] & uVar16;
      if (uVar7 == 0) {
        iVar8 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar8 = iVar10 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar7 = puVar12[lVar18 + lVar13 + 1];
          if (uVar7 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar18 == lVar13) goto LAB_144409d01;
        }
        uVar17 = (ulonglong)(iVar6 + (int)lVar13 + 1);
        uVar16 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar21 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar10);
  }
LAB_144409d01:
  ReleaseSRWLockShared(local_a8);
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144409d60 FUN_144409d60 body=2321 status=ok
// SIG undefined FUN_144409d60(void)

void FUN_144409d60(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  void *_Src;
  uint *puVar10;
  longlong ****pppplVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined *****pppppuVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  int *piVar22;
  int iVar23;
  byte bVar24;
  uint *puVar25;
  ulonglong uVar26;
  int iVar27;
  int *piVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  byte bVar31;
  undefined1 auStack_118 [35];
  byte local_f5;
  int local_f4;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  LPCRITICAL_SECTION local_d8;
  int *local_d0;
  longlong *local_c8;
  int local_bc;
  code *local_b8;
  undefined8 uStack_b0;
  longlong ***local_a8 [2];
  undefined ****local_98;
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = (LPCRITICAL_SECTION)(param_1 + 0x22);
  EnterCriticalSection(local_d8);
  if ((longlong)(int)param_1[2] != 0) {
    piVar22 = (int *)param_1[1];
    piVar28 = piVar22 + (int)param_1[2];
    local_e0 = param_1 + 3;
    local_f0 = param_1 + 0xf;
    local_e8 = param_1 + 5;
    local_d0 = piVar28;
    do {
      plVar16 = local_e8;
      iVar20 = *piVar22;
      if ((longlong)(int)param_1[4] != 0) {
        lVar18 = 0;
        do {
          if (*(int *)(param_1[3] + lVar18) == iVar20) goto LAB_14440a06e;
          lVar18 = lVar18 + 4;
        } while ((longlong)(int)param_1[4] * 4 != lVar18);
      }
      iVar19 = (int)param_1[0x12];
      lVar18 = (longlong)iVar19;
      if (lVar18 != 0) {
        piVar1 = (int *)param_1[0x11];
        lVar14 = 0;
LAB_144409e1d:
        if (*(int *)((longlong)piVar1 + lVar14) != iVar20) goto code_r0x000144409e28;
        bVar31 = *piVar1 == iVar20;
        iVar23 = 0;
        iVar7 = 0;
        do {
          local_f4 = CONCAT31(local_f4._1_3_,bVar31);
          bVar24 = bVar31 ^ 1;
          lVar8 = (longlong)iVar7;
          iVar12 = iVar7;
          lVar14 = lVar8;
          iVar13 = iVar7 + 1;
          if (iVar7 + 1 < iVar19) {
            iVar13 = iVar19;
          }
          do {
            lVar14 = lVar14 + 1;
            iVar27 = iVar13;
            if (lVar18 <= lVar14) break;
            iVar27 = iVar12 + 1;
            iVar12 = iVar27;
          } while ((bool)(bVar31 & 1) == (piVar1[lVar14] == iVar20));
          bVar4 = bVar31 & 1;
          bVar31 = bVar24;
          if (bVar4 == 0) {
            if (iVar23 != iVar7) {
              local_f5 = bVar24;
              local_f4 = iVar23;
              memmove(piVar1 + iVar23,piVar1 + lVar8,(longlong)(iVar27 - iVar7) << 2);
              iVar23 = local_f4;
              bVar31 = local_f5;
            }
            iVar23 = iVar23 + (iVar27 - iVar7);
          }
          iVar7 = iVar27;
        } while (lVar14 < lVar18);
        *(int *)(param_1 + 0x12) = iVar23;
        iVar19 = (int)param_1[4];
        *(uint *)(param_1 + 4) = iVar19 + 1U;
        piVar28 = local_d0;
        if (*(uint *)((longlong)param_1 + 0x24) < iVar19 + 1U) goto LAB_14440a053;
        goto LAB_14440a05f;
      }
LAB_144409e31:
      if ((longlong)(int)param_1[0x10] != 0) {
        lVar18 = 0;
        do {
          if (*(int *)(param_1[0xf] + lVar18) == iVar20) goto LAB_14440a06e;
          lVar18 = lVar18 + 4;
        } while ((longlong)(int)param_1[0x10] * 4 != lVar18);
      }
      piVar1 = (int *)(*(longlong *)(*param_1 + 0x68) + (longlong)iVar20 * 0x38);
      plVar21 = (longlong *)(*(longlong *)(*param_1 + 0x68) + (longlong)iVar20 * 0x38 + 0x10);
      local_bc = iVar20;
      if (*plVar21 == 0) {
        local_b8 = (code *)&local_bc;
        FUN_14906e100(local_e8,&local_c8,&local_b8);
        lVar14 = (longlong)(int)local_c8;
        lVar18 = param_1[5];
        *(undefined4 *)(lVar18 + 0x14 + lVar14 * 0x28) = 0;
        *(undefined8 *)(lVar18 + 8 + lVar14 * 0x28) = 0;
        *(int *)(lVar18 + 0x10 + lVar14 * 0x28) = *piVar1;
        *(undefined8 *)(lVar18 + 0x18 + lVar14 * 0x28) = 0;
        local_a8[0] = (longlong ***)0x0;
        local_98 = (undefined ****)&PTR_LAB_14ba8b4c0;
        local_90 = (int)param_1;
        uStack_8c = (undefined4)((ulonglong)param_1 >> 0x20);
        local_b8 = FUN_14440d2d6;
        local_88 = iVar20;
        lVar8 = FUN_1468888b6(plVar21,2,&local_b8);
        *(longlong *)(lVar18 + 0x18 + lVar14 * 0x28) = lVar8;
        if (lVar8 != 0) {
          lVar18 = param_1[0x10];
          uVar6 = (int)lVar18 + 1;
          *(uint *)(param_1 + 0x10) = uVar6;
          if (*(uint *)((longlong)param_1 + 0x84) < uVar6) {
            FUN_1446f48e2();
          }
          *(int *)(*local_f0 + (longlong)(int)lVar18 * 4) = iVar20;
        }
        if (local_b8 != (code *)0x0) {
          pppppuVar15 = (undefined *****)local_a8[0];
          if ((undefined *****)local_a8[0] == (undefined *****)0x0) {
            pppppuVar15 = &local_98;
          }
          (*(code *)(*pppppuVar15)[2])();
        }
        if (lVar8 == 0) goto LAB_14440a61d;
      }
      else {
        local_b8 = (code *)&local_bc;
        FUN_14906e100(local_e8,&local_c8,&local_b8);
        lVar14 = (longlong)(int)local_c8;
        lVar18 = *plVar16;
        *(undefined4 *)(lVar18 + 0x14 + lVar14 * 0x28) = 0;
        *(undefined8 *)(lVar18 + 8 + lVar14 * 0x28) = 0;
        *(int *)(lVar18 + 0x10 + lVar14 * 0x28) = *piVar1;
        *(undefined8 *)(lVar18 + 0x18 + lVar14 * 0x28) = 0;
        uVar9 = FUN_14001cc68((longlong)*piVar1,0);
        *(undefined8 *)(lVar18 + 8 + lVar14 * 0x28) = uVar9;
        _Src = (void *)FUN_14031511a(plVar21);
        memcpy(*(void **)(lVar18 + 8 + lVar14 * 0x28),_Src,(longlong)*piVar1);
        *(undefined1 *)((longlong)piVar1 + 0x23) = 0;
        if ((*(byte *)(piVar1 + 9) & 8) != 0) {
          FUN_1400ea36e(plVar21);
        }
        iVar19 = (int)param_1[4];
        *(uint *)(param_1 + 4) = iVar19 + 1U;
        if (*(uint *)((longlong)param_1 + 0x24) < iVar19 + 1U) {
LAB_14440a053:
          FUN_1446f48e2(local_e0);
        }
LAB_14440a05f:
        *(int *)(*local_e0 + (longlong)iVar19 * 4) = iVar20;
      }
LAB_14440a06e:
      piVar22 = piVar22 + 1;
    } while (piVar22 != piVar28);
  }
  FUN_14440b718(param_1);
  if (0 < (longlong)(int)param_1[4]) {
    uVar29 = (longlong)(int)param_1[4];
    do {
      uVar30 = uVar29 - 1;
      if ((longlong)(int)param_1[2] != 0) {
        lVar18 = 0;
        do {
          if (*(int *)(param_1[1] + lVar18) == *(int *)(uVar29 * 4 + -4 + param_1[3]))
          goto LAB_14440a1b5;
          lVar18 = lVar18 + 4;
        } while ((longlong)(int)param_1[2] * 4 != lVar18);
      }
      FUN_1449e3bb0(param_1 + 0x11);
      uVar6 = *(uint *)(param_1 + 4);
      if (uVar29 != uVar6) {
        memmove((void *)(param_1[3] + uVar30 * 4),(void *)(param_1[3] + uVar30 * 4 + 4),
                (longlong)(int)(uVar6 - (int)uVar29) << 2);
        uVar6 = *(uint *)(param_1 + 4);
      }
      *(uint *)(param_1 + 4) = uVar6 - 1;
      FUN_14479f406(param_1 + 3);
LAB_14440a1b5:
      bVar3 = 1 < (longlong)uVar29;
      uVar29 = uVar30;
    } while (bVar3);
  }
  if (0 < (longlong)(int)param_1[0x12]) {
    uVar29 = (longlong)(int)param_1[0x12];
    do {
      if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
        uVar6 = *(uint *)(param_1[0x11] + -4 + uVar29 * 4);
        plVar16 = (longlong *)param_1[0xd];
        if ((longlong *)param_1[0xd] == (longlong *)0x0) {
          plVar16 = param_1 + 0xc;
        }
        uVar17 = *(uint *)((longlong)plVar16 + (ulonglong)((int)param_1[0xe] - 1U & uVar6) * 4);
        if (uVar17 != 0xffffffff) {
          do {
            puVar10 = (uint *)(param_1[5] + (longlong)(int)uVar17 * 0x28);
            if (*puVar10 == uVar6) goto LAB_14440a22b;
            uVar17 = puVar10[8];
          } while (uVar17 != 0xffffffff);
        }
      }
      puVar10 = (uint *)0x0;
LAB_14440a22b:
      uVar30 = uVar29 - 1;
      if (puVar10[5] == 0) {
        puVar25 = puVar10 + 2;
        if (*(longlong *)puVar25 != 0) {
          FUN_1400020a8();
        }
        puVar25[0] = 0;
        puVar25[1] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        uVar6 = *(uint *)(param_1 + 0x12);
        if (uVar29 != uVar6) {
          memmove((void *)(param_1[0x11] + uVar30 * 4),(void *)(param_1[0x11] + uVar30 * 4 + 4),
                  (longlong)(int)(uVar6 - (int)uVar29) << 2);
          uVar6 = *(uint *)(param_1 + 0x12);
        }
        *(uint *)(param_1 + 0x12) = uVar6 - 1;
        FUN_14479f406(param_1 + 0x11);
      }
      bVar3 = 1 < (longlong)uVar29;
      uVar29 = uVar30;
    } while (bVar3);
  }
  iVar19 = 0;
  local_98 = (undefined ****)0x0;
  local_90 = 0;
  local_b8 = (code *)0x0;
  uStack_b0 = 0;
  uStack_8c = 0x80;
  local_88 = -1;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar20 = (int)param_1[0x1d];
  if (iVar20 == 0) {
    uVar30 = 1;
    uVar29 = 0;
    iVar7 = 0;
  }
  else {
    puVar10 = (uint *)param_1[0x1c];
    if ((uint *)param_1[0x1c] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0x1a);
    }
    uVar6 = *puVar10;
    if (uVar6 == 0) {
      iVar19 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar19 = iVar20 + -1;
      }
      uVar29 = 0;
      uVar30 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar30 = uVar29;
      }
      iVar19 = 0;
      do {
        if (uVar30 == uVar29) goto LAB_14440a5f6;
        iVar19 = iVar19 + 0x20;
        uVar6 = puVar10[uVar29 + 1];
        uVar29 = uVar29 + 1;
      } while (uVar6 == 0);
    }
    else {
      iVar19 = 0;
      uVar29 = 0;
    }
    uVar30 = (ulonglong)(-uVar6 & uVar6);
    uVar26 = uVar30 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar7 = (iVar19 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar7) {
      iVar7 = iVar20;
    }
  }
  if (iVar7 != iVar20) {
    uVar6 = 0xffffffff;
    do {
      local_c8 = *(longlong **)(param_1[0x18] + (longlong)iVar7 * 0x10);
      cVar5 = (**(code **)(*local_c8 + 8))();
      if (cVar5 != '\0') {
        FUN_14906e406(&local_b8,&local_bc,&local_c8,0);
      }
      iVar23 = local_90;
      uVar6 = uVar6 & ~(uint)uVar30;
      puVar10 = (uint *)param_1[0x1c];
      if ((uint *)param_1[0x1c] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x1a);
      }
      iVar13 = (int)param_1[0x1d];
      iVar7 = (int)uVar29;
      lVar18 = (longlong)iVar7;
      uVar17 = puVar10[lVar18] & uVar6;
      if (uVar17 == 0) {
        iVar12 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar12 = iVar13 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar27 = iVar12;
        if (iVar12 < iVar7) {
          iVar27 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar14 = 0;
          do {
            uVar17 = puVar10[lVar18 + lVar14 + 1];
            if (uVar17 != 0) {
              uVar29 = (ulonglong)(iVar7 + (int)lVar14 + 1);
              uVar6 = 0xffffffff;
              goto LAB_14440a430;
            }
            iVar19 = iVar19 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar27 - lVar18 != lVar14);
          uVar6 = 0xffffffff;
          iVar7 = iVar27;
        }
        uVar29 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar13;
      }
      else {
LAB_14440a430:
        uVar30 = (ulonglong)(-uVar17 & uVar17);
        uVar26 = uVar30 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar7 = (iVar19 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar7) {
          iVar7 = iVar13;
        }
      }
    } while (iVar7 != iVar20);
    if (local_90 != 0) {
      pppplVar11 = (longlong ****)local_98;
      if ((longlong ****)local_98 == (longlong ****)0x0) {
        pppplVar11 = local_a8;
      }
      uVar6 = *(uint *)pppplVar11;
      if (uVar6 == 0) {
        iVar20 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar20 = local_90 + -1;
        }
        uVar29 = 0;
        uVar30 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar30 = uVar29;
        }
        iVar20 = 0;
        do {
          if (uVar30 == uVar29) goto LAB_14440a5f6;
          iVar20 = iVar20 + 0x20;
          uVar6 = *(uint *)((longlong)pppplVar11 + (uVar29 + 1) * 4);
          uVar29 = uVar29 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar29 = 0;
        iVar20 = 0;
      }
      uVar26 = (ulonglong)(-uVar6 & uVar6);
      uVar30 = uVar26 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar19 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar19 < local_90) {
        uVar6 = 0xffffffff;
        do {
          puVar2 = *(undefined8 **)(local_b8 + (longlong)iVar19 * 0x10);
          FUN_14906b24a(param_1 + 0x18,puVar2);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          uVar6 = uVar6 & ~(uint)uVar26;
          pppplVar11 = (longlong ****)local_98;
          if ((longlong ****)local_98 == (longlong ****)0x0) {
            pppplVar11 = local_a8;
          }
          iVar19 = (int)uVar29;
          lVar18 = (longlong)iVar19;
          uVar17 = *(uint *)((longlong)pppplVar11 + lVar18 * 4) & uVar6;
          if (uVar17 == 0) {
            iVar7 = local_90 + 0x1e;
            if (-1 < local_90 + -1) {
              iVar7 = local_90 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar20 = iVar20 + 0x20;
            iVar13 = iVar7;
            if (iVar7 < iVar19) {
              iVar13 = iVar19;
            }
            if (iVar19 < iVar7) {
              lVar14 = 0;
              do {
                uVar17 = *(uint *)((longlong)pppplVar11 + (lVar18 + lVar14 + 1) * 4);
                if (uVar17 != 0) {
                  uVar29 = (ulonglong)(iVar19 + (int)lVar14 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_14440a5bb;
                }
                iVar20 = iVar20 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar13 - lVar18 != lVar14);
              uVar6 = 0xffffffff;
              iVar19 = iVar13;
            }
            uVar29 = (ulonglong)(iVar19 + 1);
            iVar19 = local_90;
          }
          else {
LAB_14440a5bb:
            uVar26 = (ulonglong)(-uVar17 & uVar17);
            uVar30 = uVar26 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar19 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
            if (local_90 <= iVar19) {
              iVar19 = local_90;
            }
          }
        } while (iVar19 != iVar23);
      }
    }
  }
LAB_14440a5f6:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14017e2da(&local_b8);
LAB_14440a61d:
  LeaveCriticalSection(local_d8);
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000144409e28:
  lVar14 = lVar14 + 4;
  if (lVar18 * 4 - lVar14 == 0) goto LAB_144409e31;
  goto LAB_144409e1d;
}



// FUNCTION 14440a672 FUN_14440a672 body=1036 status=ok
// SIG undefined FUN_14440a672(void)

undefined4 FUN_14440a672(longlong param_1,float param_2)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auStack_b8 [32];
  PSRWLOCK local_98;
  uint *local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  SRWLock = (PSRWLOCK)(param_1 + 0x78);
  AcquireSRWLockShared(SRWLock);
  local_98 = SRWLock;
  if ((param_2 != 0.0) || (NAN(param_2))) {
    QueryPerformanceCounter(&local_88);
    dVar17 = (double)local_88.QuadPart * DAT_14c83f420;
    local_90 = (uint *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar16 = 0;
      iVar11 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar8 = local_90;
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar16 = 0;
        uVar13 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar13 = uVar16;
        }
        iVar11 = 0;
        do {
          if (uVar13 == uVar16) goto LAB_14440a8c9;
          iVar11 = iVar11 + 0x20;
          uVar12 = puVar8[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar16 = 0;
        iVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    uVar10 = 0;
    if (iVar4 < iVar2) {
      uVar12 = 0xffffffff;
      uVar15 = 0;
      do {
        QueryPerformanceCounter(&local_88);
        if ((float)(((double)param_2 + dVar17 + 16777216.0) -
                   ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0)) < 0.001) {
          uVar10 = 1;
          break;
        }
        cVar3 = FUN_14440aa80(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar4 * 0x18));
        uVar10 = 1;
        if (cVar3 == '\0') break;
        uVar12 = uVar12 & ~(uint)uVar13;
        puVar8 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar8 = local_90;
        }
        iVar2 = *(int *)(param_1 + 0x40);
        iVar4 = (int)uVar16;
        lVar14 = (longlong)iVar4;
        uVar5 = puVar8[lVar14] & uVar12;
        uVar10 = uVar15;
        if (uVar5 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar9 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = puVar8[lVar14 + lVar9 + 1];
            if (uVar5 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar7 - lVar14 == lVar9) goto LAB_14440aa2b;
          }
          uVar16 = (ulonglong)(iVar4 + (int)lVar9 + 1);
          uVar12 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar2);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar16 = 0;
      iVar11 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x28);
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar16 = 0;
        uVar13 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar13 = uVar16;
        }
        iVar11 = 0;
        do {
          if (uVar13 == uVar16) goto LAB_14440a8c9;
          iVar11 = iVar11 + 0x20;
          uVar12 = puVar8[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar16 = 0;
        iVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    uVar10 = 0;
    if (iVar4 < iVar2) {
      uVar12 = 0xffffffff;
      do {
        FUN_14440aa80(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar4 * 0x18),0)
        ;
        uVar12 = ~(uint)uVar13 & uVar12;
        puVar8 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0x28);
        }
        iVar2 = *(int *)(param_1 + 0x40);
        iVar4 = (int)uVar16;
        lVar14 = (longlong)iVar4;
        uVar5 = puVar8[lVar14] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          uVar10 = 0;
          if (iVar6 <= iVar4) goto LAB_14440aa2b;
          lVar9 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = puVar8[lVar14 + lVar9 + 1];
            if (uVar5 != 0) break;
            lVar9 = lVar9 + 1;
            uVar10 = 0;
            if (iVar7 - lVar14 == lVar9) goto LAB_14440aa2b;
          }
          uVar16 = (ulonglong)(iVar4 + (int)lVar9 + 1);
          uVar12 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar2);
LAB_14440a8c9:
      uVar10 = 0;
    }
  }
LAB_14440aa2b:
  ReleaseSRWLockShared(local_98);
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 14440aa80 FUN_14440aa80 body=1017 status=ok
// SIG undefined FUN_14440aa80(void)

ulonglong FUN_14440aa80(longlong param_1,float param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong unaff_R13;
  undefined7 uVar16;
  ulonglong uVar15;
  ulonglong uVar17;
  double dVar18;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  uVar16 = (undefined7)(unaff_R13 >> 8);
  if ((param_2 != 0.0) || (NAN(param_2))) {
    QueryPerformanceCounter(&local_88);
    dVar18 = (double)local_88.QuadPart * DAT_14c83f420;
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar4 == 0) {
      uVar11 = 1;
      uVar17 = 0;
      iVar12 = 0;
      iVar5 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x38);
      }
      uVar14 = *puVar9;
      if (uVar14 == 0) {
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        uVar17 = 0;
        uVar11 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar11 = uVar17;
        }
        iVar12 = 0;
        do {
          if (uVar11 == uVar17) goto LAB_14440ae1a;
          iVar12 = iVar12 + 0x20;
          uVar14 = puVar9[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar17 = 0;
        iVar12 = 0;
      }
      uVar11 = (ulonglong)(-uVar14 & uVar14);
      uVar15 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    uVar15 = CONCAT71(uVar16,1);
    if (iVar5 < iVar4) {
      unaff_R13 = 0xffffffff;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18 + (longlong)iVar5 * 0x28) != 0) {
          QueryPerformanceCounter(&local_88);
          if (((float)(((double)param_2 + dVar18 + 16777216.0) -
                      ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0)) < 0.001) ||
             (cVar3 = (**(code **)(**(longlong **)
                                     (*(longlong *)(param_1 + 0x28) + 0x18 + (longlong)iVar5 * 0x28)
                                  + 0x10))(), cVar3 == '\0')) {
            uVar15 = 0;
            goto LAB_14440ae22;
          }
          FUN_14440b718(param_1);
          iVar4 = *(int *)(param_1 + 0x50);
        }
        uVar14 = (uint)unaff_R13 & ~(uint)uVar11;
        unaff_R13 = (ulonglong)uVar14;
        puVar9 = *(uint **)(param_1 + 0x48);
        if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 0x38);
        }
        iVar5 = (int)uVar17;
        lVar13 = (longlong)iVar5;
        uVar14 = puVar9[lVar13] & uVar14;
        if (uVar14 == 0) {
          iVar7 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar10 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar14 = puVar9[lVar13 + lVar10 + 1];
            if (uVar14 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar8 - lVar13 == lVar10) goto LAB_14440ae1a;
          }
          uVar17 = (ulonglong)(iVar5 + (int)lVar10 + 1);
          unaff_R13 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar14 & uVar14);
        uVar15 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar4);
LAB_14440ae1a:
      uVar15 = CONCAT71((int7)(unaff_R13 >> 8),1);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar4 == 0) {
      uVar11 = 1;
      uVar17 = 0;
      iVar12 = 0;
      iVar5 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x38);
      }
      uVar14 = *puVar9;
      if (uVar14 == 0) {
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        uVar17 = 0;
        uVar11 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar11 = uVar17;
        }
        iVar12 = 0;
        do {
          if (uVar11 == uVar17) goto LAB_14440ae1a;
          iVar12 = iVar12 + 0x20;
          uVar14 = puVar9[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar17 = 0;
        iVar12 = 0;
      }
      uVar11 = (ulonglong)(-uVar14 & uVar14);
      uVar15 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    uVar15 = CONCAT71(uVar16,1);
    if (iVar5 < iVar4) {
      uVar14 = 0xffffffff;
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x18 + (longlong)iVar5 * 0x28);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
          FUN_14440b718(param_1);
          iVar4 = *(int *)(param_1 + 0x50);
        }
        uVar14 = uVar14 & ~(uint)uVar11;
        puVar9 = *(uint **)(param_1 + 0x48);
        if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
          puVar9 = (uint *)(param_1 + 0x38);
        }
        iVar5 = (int)uVar17;
        lVar13 = (longlong)iVar5;
        uVar6 = puVar9[lVar13] & uVar14;
        if (uVar6 == 0) {
          iVar7 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar7 = iVar4 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar10 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar6 = puVar9[lVar13 + lVar10 + 1];
            if (uVar6 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar8 - lVar13 == lVar10) goto LAB_14440ae22;
          }
          uVar17 = (ulonglong)(iVar5 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar4);
    }
  }
LAB_14440ae22:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  if ((local_80 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14440ae7e FUN_14440ae7e body=1070 status=ok
// SIG undefined FUN_14440ae7e(void)

void FUN_14440ae7e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_d8 [32];
  int **local_b8;
  LPCRITICAL_SECTION local_a8;
  longlong *local_a0;
  longlong *local_98;
  int *local_90;
  longlong *local_88;
  int *local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_5c;
  int *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x22);
  EnterCriticalSection(lpCriticalSection);
  fVar16 = *(float *)(param_2 + 0x65c);
  if (14400.0 <= fVar16) {
    fVar16 = 14400.0;
  }
  if (fVar16 <= -14400.0) {
    fVar16 = -14400.0;
  }
  fVar16 = fVar16 + *(float *)(param_2 + 0x66c);
  fVar17 = *(float *)(param_2 + 0x6b8) * *DAT_14cbf7420 + fVar16;
  fVar18 = fVar17;
  if (fVar16 <= fVar17) {
    fVar18 = fVar16;
    fVar16 = fVar17;
  }
  local_b8 = &local_78;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_149066ca6(*param_1,fVar18,fVar16,*(undefined1 *)(param_2 + 0x659));
  piVar12 = local_78;
  lVar9 = (longlong)(int)uStack_70;
  if (lVar9 != 0) {
    lVar10 = 0;
    local_a8 = lpCriticalSection;
    do {
      local_58 = (int *)CONCAT44(local_58._4_4_,*(undefined4 *)((longlong)piVar12 + lVar10));
      FUN_1449e3bb0(param_1 + 1);
      lVar10 = lVar10 + 4;
    } while (lVar9 * 4 != lVar10);
    lpCriticalSection = local_a8;
    if ((longlong)(int)uStack_70 != 0) {
      local_80 = local_78 + (int)uStack_70;
      local_98 = param_1 + 3;
      local_88 = param_1 + 5;
      piVar12 = local_78;
      local_a0 = param_1;
      do {
        iVar2 = *piVar12;
        FUN_14440b718();
        if ((longlong)(int)param_1[4] != 0) {
          lVar9 = 0;
          do {
            if (*(int *)(param_1[3] + lVar9) == iVar2) goto LAB_14440b104;
            lVar9 = lVar9 + 4;
          } while ((longlong)(int)param_1[4] * 4 != lVar9);
        }
        iVar6 = (int)param_1[0x12];
        lVar9 = (longlong)iVar6;
        local_90 = piVar12;
        if (lVar9 != 0) {
          piVar12 = (int *)param_1[0x11];
          lVar10 = 0;
LAB_14440aff4:
          if (*(int *)((longlong)piVar12 + lVar10) != iVar2) goto code_r0x00014440affb;
          iVar8 = 0;
          bVar11 = *piVar12 == iVar2;
          iVar13 = 0;
          do {
            lVar5 = (longlong)iVar13;
            lVar10 = lVar5;
            iVar14 = iVar13;
            iVar3 = iVar13 + 1;
            if (iVar13 + 1 < iVar6) {
              iVar3 = iVar6;
            }
            do {
              lVar10 = lVar10 + 1;
              iVar15 = iVar3;
              if (lVar9 <= lVar10) break;
              iVar15 = iVar14 + 1;
              iVar14 = iVar15;
            } while (bVar11 == (piVar12[lVar10] == iVar2));
            if (!bVar11) {
              if (iVar8 != iVar13) {
                memmove(piVar12 + iVar8,piVar12 + lVar5,(longlong)(iVar15 - iVar13) << 2);
              }
              iVar8 = iVar8 + (iVar15 - iVar13);
              param_1 = local_a0;
            }
            bVar11 = (bool)(bVar11 ^ 1);
            iVar13 = iVar15;
          } while (lVar10 < lVar9);
          *(int *)(param_1 + 0x12) = iVar8;
          iVar6 = (int)param_1[4];
          *(uint *)(param_1 + 4) = iVar6 + 1U;
          piVar12 = local_90;
          if (*(uint *)((longlong)param_1 + 0x24) < iVar6 + 1U) goto LAB_14440b0e9;
          goto LAB_14440b0f5;
        }
LAB_14440b004:
        iVar6 = (int)param_1[0x10];
        lVar9 = (longlong)iVar6;
        if (lVar9 != 0) {
          piVar12 = (int *)param_1[0xf];
          lVar10 = 0;
LAB_14440b022:
          if (*(int *)((longlong)piVar12 + lVar10) != iVar2) goto code_r0x00014440b02d;
          iVar8 = 0;
          bVar11 = *piVar12 == iVar2;
          iVar13 = 0;
          do {
            lVar5 = (longlong)iVar13;
            lVar10 = lVar5;
            iVar14 = iVar13;
            iVar3 = iVar13 + 1;
            if (iVar13 + 1 < iVar6) {
              iVar3 = iVar6;
            }
            do {
              lVar10 = lVar10 + 1;
              iVar15 = iVar3;
              if (lVar9 <= lVar10) break;
              iVar15 = iVar14 + 1;
              iVar14 = iVar15;
            } while (bVar11 == (piVar12[lVar10] == iVar2));
            if (bVar11 == false) {
              if (iVar8 != iVar13) {
                memmove(piVar12 + iVar8,piVar12 + lVar5,(longlong)(iVar15 - iVar13) << 2);
              }
              iVar8 = iVar8 + (iVar15 - iVar13);
              param_1 = local_a0;
            }
            bVar11 = (bool)(bVar11 ^ 1);
            iVar13 = iVar15;
          } while (lVar10 < lVar9);
          *(int *)(param_1 + 0x10) = iVar8;
        }
LAB_14440b1b8:
        piVar12 = local_90;
        lVar10 = *(longlong *)(*param_1 + 0x68);
        local_58 = &local_5c;
        local_5c = iVar2;
        FUN_14906e100(local_88,&local_4c,&local_58);
        lVar9 = param_1[5] + (longlong)local_4c * 0x28;
        puVar7 = (undefined8 *)(lVar9 + 8);
        *(undefined4 *)(lVar9 + 0x14) = 0;
        *puVar7 = 0;
        piVar1 = (int *)(lVar10 + (longlong)iVar2 * 0x38);
        *(int *)(lVar9 + 0x10) = *piVar1;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        uVar4 = FUN_14001cc68((longlong)*piVar1,0);
        *puVar7 = uVar4;
        FUN_14143acfc(piVar1 + 4,puVar7,1);
        iVar6 = (int)param_1[4];
        *(uint *)(param_1 + 4) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0x24) < iVar6 + 1U) {
LAB_14440b0e9:
          FUN_1446f48e2(local_98);
        }
LAB_14440b0f5:
        *(int *)(*local_98 + (longlong)iVar6 * 4) = iVar2;
LAB_14440b104:
        piVar12 = piVar12 + 1;
        lpCriticalSection = local_a8;
      } while (piVar12 != local_80);
    }
  }
  if (local_78 != (int *)0x0) {
    FUN_1400020a8(local_78);
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014440affb:
  lVar10 = lVar10 + 4;
  if (lVar9 * 4 - lVar10 == 0) goto LAB_14440b004;
  goto LAB_14440aff4;
code_r0x00014440b02d:
  lVar10 = lVar10 + 4;
  if (lVar9 * 4 - lVar10 == 0) goto LAB_14440b1b8;
  goto LAB_14440b022;
}



// FUNCTION 14440b2ae FUN_14440b2ae body=212 status=ok
// SIG undefined FUN_14440b2ae(void)

undefined8 FUN_14440b2ae(longlong param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x78));
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar5 != -1) {
      uVar4 = 0;
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) goto LAB_14440b355;
          uVar4 = FUN_14440b382(puVar1[1],param_3,param_4);
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
      goto LAB_14440b358;
    }
  }
LAB_14440b355:
  uVar4 = 0;
LAB_14440b358:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x78));
  return uVar4;
}



// FUNCTION 14440b382 FUN_14440b382 body=206 status=ok
// SIG undefined FUN_14440b382(void)

undefined8 FUN_14440b382(longlong param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  FUN_14440b718(param_1);
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    lVar4 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0x18) + lVar4) == param_2) {
        if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c)) goto LAB_14440b41b;
        lVar4 = param_1 + 0x60;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x68);
        }
        uVar1 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
        if (uVar1 == 0xffffffff) goto LAB_14440b41b;
        goto LAB_14440b405;
      }
      lVar4 = lVar4 + 4;
    } while ((longlong)*(int *)(param_1 + 0x20) * 4 != lVar4);
  }
  goto LAB_14440b438;
  while (uVar1 = puVar2[8], uVar1 != 0xffffffff) {
LAB_14440b405:
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar1 * 0x28);
    if (*puVar2 == param_2) goto LAB_14440b41d;
  }
LAB_14440b41b:
  puVar2 = (uint *)0x0;
LAB_14440b41d:
  puVar3 = puVar2 + 2;
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = puVar3[2];
  }
  puVar3[3] = puVar3[3] + 1;
  uVar5 = *(undefined8 *)puVar3;
LAB_14440b438:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  return uVar5;
}



// FUNCTION 14440b450 FUN_14440b450 body=127 status=ok
// SIG undefined FUN_14440b450(void)

void FUN_14440b450(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar2 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar3 * 0x28);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 2) & 0xfffffffffffffff7) != 0) {
            puVar1[5] = puVar1[5] - 1;
          }
          break;
        }
        uVar3 = puVar1[8];
      } while (uVar3 != 0xffffffff);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014440b4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  return;
}



// FUNCTION 14440b4db FUN_14440b4db body=349 status=ok
// SIG undefined FUN_14440b4db(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14440b4db(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_1898 [32];
  undefined2 local_1878 [256];
  undefined1 local_1678 [5632];
  int local_78 [14];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1898;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  iVar7 = 0;
  memset(local_1878,0,0x1800);
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      bVar1 = *(byte *)(param_2 + uVar4);
      iVar2 = local_78[bVar1];
      local_78[bVar1] = iVar2 + 1;
      local_1878[(ulonglong)bVar1 * 0x100 + (longlong)iVar2] = (short)uVar4;
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  lVar3 = 1;
  puVar5 = local_1678;
  do {
    iVar2 = local_78[lVar3];
    if (0 < (longlong)iVar2) {
      lVar6 = 0;
      do {
        uVar8 = iVar7 + (int)lVar6;
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
        uVar8 = (uVar8 & 0xf0f0f0f) << 4 | uVar8 >> 4 & 0xf0f0f0f;
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333) * 4;
        *(short *)(param_1 + (longlong)*(short *)(puVar5 + lVar6 * 2) * 2) =
             (short)((uVar8 >> 1 & 0x55555555) + (uVar8 & 0x55555555) * 2 >>
                    (0x20U - (char)lVar3 & 0x1f));
        lVar6 = lVar6 + 1;
      } while (iVar2 != lVar6);
      iVar7 = iVar7 + (int)lVar6;
    }
    iVar7 = iVar7 * 2;
    lVar3 = lVar3 + 1;
    puVar5 = puVar5 + 0x200;
  } while (lVar3 != 0xc);
  if ((local_40 ^ (ulonglong)auStack_1898) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14440b68e FUN_14440b68e body=69 status=ok
// SIG undefined FUN_14440b68e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440b68e(void)

{
  _DAT_14cbf7400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7408,1);
  return;
}



// FUNCTION 14440b6d3 FUN_14440b6d3 body=69 status=ok
// SIG undefined FUN_14440b6d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440b6d3(void)

{
  _DAT_14cbf7410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440b715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7418,1);
  return;
}



// FUNCTION 14440b718 FUN_14440b718 body=1103 status=ok
// SIG undefined FUN_14440b718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440b718(longlong param_1)

{
  uint *puVar1;
  uint *_Src;
  uint uVar2;
  byte bVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  byte bVar17;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_84;
  uint *local_80;
  undefined8 local_78;
  uint *local_70;
  longlong local_68;
  undefined1 local_5c [4];
  longlong *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c86a9f8 == '\x01') {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar14 = *(int *)(lVar7 + 0xc60);
    if (iVar14 != 2) {
      if (iVar14 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_14440b780;
        iVar14 = *(int *)(lVar7 + 0xc60);
      }
      if (DAT_14c86a9fc == 0) {
        if (iVar14 != 2) {
          if (iVar14 != 1) goto LAB_14440b777;
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          if (DVar5 != DVar6) goto LAB_14440bb1d;
        }
      }
      else {
LAB_14440b777:
        if (iVar14 != 0x10) goto LAB_14440bb1d;
      }
    }
  }
LAB_14440b780:
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  lVar7 = **(longlong **)(param_1 + 0xb8);
  if (lVar7 != 0) {
    while( true ) {
      local_58 = *(longlong **)(lVar7 + 8);
      uStack_50 = *(uint *)(lVar7 + 0x10);
      uStack_4c = *(undefined4 *)(lVar7 + 0x14);
      lVar11 = *(longlong *)(param_1 + 0xb8);
      *(longlong *)(param_1 + 0xb8) = lVar7;
      *(undefined8 *)(lVar7 + 8) = 0;
      *(undefined4 *)(lVar7 + 0x10) = 0;
      if (lVar11 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c)) break;
      lVar7 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar7 = param_1 + 0x60;
      }
      uVar13 = *(uint *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & uStack_50) * 4);
      if (uVar13 == 0xffffffff) break;
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar13 * 0x28),
            *puVar1 != uStack_50) {
        uVar13 = puVar1[8];
        if (uVar13 == 0xffffffff) goto LAB_14440bb1d;
      }
      if ((puVar1 == (uint *)0x0) || (puVar1 + 2 == (uint *)0x0)) break;
      if (*(longlong *)(puVar1 + 6) != 0) {
        lVar7 = (**(code **)(*local_58 + 0x18))();
        if (lVar7 == 0) {
          uVar13 = *(uint *)(param_1 + 0x80);
          lVar7 = (longlong)(int)uVar13;
          if (lVar7 != 0) {
            local_80 = *(uint **)(param_1 + 0x78);
            bVar17 = *local_80 == uStack_50;
            uVar16 = 0;
            uVar8 = 0;
            do {
              local_88 = CONCAT31(local_88._1_3_,bVar17);
              local_78 = (uint *)(longlong)(int)uVar8;
              uVar2 = uVar8 + 1;
              if ((int)(uVar8 + 1) < (int)uVar13) {
                uVar2 = uVar13;
              }
              local_70 = (uint *)CONCAT44(local_70._4_4_,uStack_50);
              local_68 = CONCAT44(local_68._4_4_,uVar16);
              local_84 = CONCAT31(local_84._1_3_,bVar17) ^ 1;
              bVar12 = bVar17 ^ 1;
              uVar9 = uVar8;
              puVar15 = local_78;
              do {
                puVar15 = (uint *)((longlong)puVar15 + 1);
                uVar10 = uVar2;
                if (lVar7 <= (longlong)puVar15) break;
                uVar9 = uVar9 + 1;
                bVar12 = (byte)local_84;
                uVar10 = uVar9;
              } while ((bool)(bVar17 & 1) == (local_80[(longlong)puVar15] == uStack_50));
              bVar3 = bVar17 & 1;
              bVar17 = bVar12;
              if (bVar3 == 0) {
                iVar14 = uVar10 - uVar8;
                if (uVar16 != uVar8) {
                  _Src = local_80 + (longlong)local_78;
                  local_78 = (uint *)CONCAT44((int)uVar8 >> 0x1f,iVar14);
                  local_88 = uVar10;
                  local_70 = puVar15;
                  memmove(local_80 + (int)uVar16,_Src,(longlong)iVar14 << 2);
                  puVar15 = local_70;
                  bVar17 = (byte)local_84;
                  uVar10 = local_88;
                  iVar14 = (int)local_78;
                  uVar16 = (uint)local_68;
                }
                uVar16 = uVar16 + iVar14;
              }
              uVar8 = uVar10;
            } while ((longlong)puVar15 < lVar7);
            *(uint *)(param_1 + 0x80) = uVar16;
          }
        }
        else {
          *(longlong *)(puVar1 + 2) = lVar7;
          iVar14 = *(int *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x20) = iVar14 + 1U;
          if (*(uint *)(param_1 + 0x24) < iVar14 + 1U) {
            FUN_1446f48e2(param_1 + 0x18,iVar14);
          }
          *(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar14 * 4) = uStack_50;
          uVar13 = *(uint *)(param_1 + 0x80);
          lVar7 = (longlong)(int)uVar13;
          if (lVar7 != 0) {
            local_78 = *(uint **)(param_1 + 0x78);
            local_70 = (uint *)CONCAT71(local_70._1_7_,*local_78 == uStack_50);
            local_84 = 0;
            local_88 = 0;
            do {
              puVar15 = local_70;
              uVar8 = local_88;
              bVar17 = (byte)local_70;
              local_70 = (uint *)((ulonglong)local_70 ^ 1);
              lVar11 = (longlong)(int)local_88;
              uVar16 = local_88 + 1;
              if ((int)(local_88 + 1) < (int)uVar13) {
                uVar16 = uVar13;
              }
              local_80 = (uint *)CONCAT44(local_80._4_4_,uStack_50);
              local_68 = lVar11;
              do {
                local_68 = local_68 + 1;
                uVar2 = uVar16;
                if (lVar7 <= local_68) break;
                local_88 = local_88 + 1;
                uVar2 = local_88;
              } while ((bool)(bVar17 & 1) == (local_78[local_68] == uStack_50));
              local_88 = uVar2;
              if (((ulonglong)puVar15 & 1) == 0) {
                iVar14 = local_88 - uVar8;
                local_80 = (uint *)CONCAT44(local_80._4_4_,iVar14);
                if (local_84 != uVar8) {
                  memmove(local_78 + (int)local_84,local_78 + lVar11,(longlong)iVar14 << 2);
                }
                local_84 = local_84 + (int)local_80;
              }
            } while (local_68 < lVar7);
            *(uint *)(param_1 + 0x80) = local_84;
          }
          FUN_145adf2ae();
          LOCK();
          _DAT_14cbf71b8 = _DAT_14cbf71b8 + puVar1[4];
          UNLOCK();
        }
        puVar1[6] = 0;
        puVar1[7] = 0;
      }
      cVar4 = (**(code **)(*local_58 + 8))();
      if (cVar4 == '\0') {
        FUN_14906e406(param_1 + 0xc0,local_5c,&local_58,0);
      }
      else if (local_58 != (longlong *)0x0) {
        (**(code **)*local_58)(local_58,1);
      }
      lVar7 = **(longlong **)(param_1 + 0xb8);
      if (lVar7 == 0) break;
    }
  }
LAB_14440bb1d:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14440bbe4 FUN_14440bbe4 body=590 status=ok
// SIG undefined FUN_14440bbe4(void)

void FUN_14440bbe4(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  uVar10 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = *(uint *)(param_1 + 2);
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    iVar1 = *param_2;
    uVar5 = *(uint *)(param_1 + 1);
    uVar3 = uVar10 / uVar5;
    iVar7 = uVar3 * iVar1;
    uVar4 = uVar8 / uVar5;
    iVar6 = uVar4 * iVar1;
    uVar8 = uVar8 - iVar6;
    uVar10 = uVar10 - iVar7;
    if (iVar1 + 1U != uVar5) {
      uVar8 = uVar4;
      uVar10 = uVar3;
    }
    uVar5 = *(uint *)(*(longlong *)param_1[5] + (longlong)iVar1 * 4);
    lVar9 = (longlong)iVar7;
    lVar11 = (longlong)iVar6;
  }
  else {
    lVar11 = 0;
    uVar5 = 0;
    lVar9 = 0;
  }
  local_58 = (ulonglong)((int)((longlong *)param_1[3])[1] - uVar5);
  local_60 = (ulonglong)uVar5 + *(longlong *)param_1[3];
  local_50 = 0;
  uStack_48 = 0;
  if (*(char *)((longlong)param_1 + 0x14) == '\0') {
    plVar12 = (longlong *)param_1[4];
  }
  else {
    plVar12 = &local_60;
  }
  if ((uVar10 != 0) && (*(char *)(param_1[6] + 0xb8) == '\0')) {
    FUN_149061cbc(lVar2,plVar12,lVar9 * 4 + *(longlong *)(param_1[6] + 0xa0));
  }
  if (uVar8 != 0) {
    FUN_1490626a2(lVar2,plVar12,*(longlong *)param_1[6] + lVar11 * 0xc,uVar8);
    lVar9 = param_1[6];
    if (*(char *)(lVar9 + 0xb5) == '\x01') {
      FUN_149061cbc(lVar2,plVar12,lVar11 * 4 + *(longlong *)(lVar9 + 0x50),uVar8);
      lVar9 = param_1[6];
    }
    if (*(char *)(lVar9 + 0xb3) == '\x01') {
      FUN_14906238e(lVar2,plVar12,lVar11 * 4 + *(longlong *)(lVar9 + 0x40),uVar8);
      lVar9 = param_1[6];
    }
    if (*(char *)(lVar9 + 0xb0) == '\x01') {
      FUN_149062290(plVar12,lVar11 * 4 + *(longlong *)(lVar9 + 0x20),uVar8,lVar2 + 0x4010);
      lVar9 = param_1[6];
    }
    if (*(char *)(lVar9 + 0xb1) == '\x01') {
      FUN_149062290(plVar12,lVar11 * 4 + *(longlong *)(lVar9 + 0x30),uVar8,lVar2 + 0x5010);
      lVar9 = param_1[6];
    }
    if (*(char *)(lVar9 + 0xb2) == '\x01') {
      FUN_14906202a(lVar2,plVar12,lVar11 * 8 + *(longlong *)(lVar9 + 0x10),uVar8);
      lVar9 = param_1[6];
    }
    if (*(char *)(lVar9 + 0xb4) == '\x01') {
      FUN_149061d7e(lVar2,plVar12,lVar11 * 0xc + *(longlong *)(lVar9 + 0x60),uVar8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14440be34 FUN_14440be34 body=61 status=ok
// SIG undefined FUN_14440be34(void)

void FUN_14440be34(undefined8 *param_1)

{
  FUN_149065f90(*param_1,*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 1),
                *(undefined1 *)((longlong)param_1 + 0xc),*(undefined1 *)((longlong)param_1 + 0xd),
                *(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14));
  return;
}



// FUNCTION 14440be7c FUN_14440be7c body=12 status=ok
// SIG undefined FUN_14440be7c(void)

void FUN_14440be7c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014440be85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14440be88 FUN_14440be88 body=29 status=ok
// SIG undefined FUN_14440be88(void)

undefined8 FUN_14440be88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440bea6 FUN_14440bea6 body=282 status=ok
// SIG undefined FUN_14440bea6(void)

undefined8 * FUN_14440bea6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14440bb68);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14440bfc0 FUN_14440bfc0 body=135 status=ok
// SIG undefined FUN_14440bfc0(void)

void FUN_14440bfc0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_149065f90(param_1[0x15],&DAT_14ca85100,*(undefined4 *)(param_1 + 0x16),
                *(undefined1 *)((longlong)param_1 + 0xb4),*(undefined1 *)((longlong)param_1 + 0xb5),
                *(undefined4 *)(param_1 + 0x17),*(undefined4 *)((longlong)param_1 + 0xbc));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014440c03d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14440c048 FUN_14440c048 body=61 status=ok
// SIG undefined FUN_14440c048(void)

void FUN_14440c048(undefined8 *param_1)

{
  FUN_149065f90(*param_1,*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 1),
                *(undefined1 *)((longlong)param_1 + 0xc),*(undefined1 *)((longlong)param_1 + 0xd),
                *(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 3));
  return;
}



// FUNCTION 14440c090 FUN_14440c090 body=29 status=ok
// SIG undefined FUN_14440c090(void)

void FUN_14440c090(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14440c0ae FUN_14440c0ae body=29 status=ok
// SIG undefined FUN_14440c0ae(void)

undefined8 FUN_14440c0ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440c0cc FUN_14440c0cc body=282 status=ok
// SIG undefined FUN_14440c0cc(void)

undefined8 * FUN_14440c0cc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14440bb68);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14440c1e6 FUN_14440c1e6 body=135 status=ok
// SIG undefined FUN_14440c1e6(void)

void FUN_14440c1e6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_149065f90(param_1[0x15],&DAT_14ca85100,*(undefined4 *)(param_1 + 0x16),
                *(undefined1 *)((longlong)param_1 + 0xb4),*(undefined1 *)((longlong)param_1 + 0xb5),
                *(undefined4 *)(param_1 + 0x17),*(undefined4 *)(param_1 + 0x18));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014440c263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14440c26e FUN_14440c26e body=46 status=ok
// SIG undefined FUN_14440c26e(void)

void FUN_14440c26e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14001cc68(0x4a0,0x10);
  FUN_14906cd4e(uVar2,*(undefined4 *)(*(longlong *)(lVar1 + 0x210) + 8));
  return;
}



// FUNCTION 14440c2c6 FUN_14440c2c6 body=29 status=ok
// SIG undefined FUN_14440c2c6(void)

undefined8 FUN_14440c2c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440c306 FUN_14440c306 body=12 status=ok
// SIG undefined FUN_14440c306(void)

void FUN_14440c306(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014440c30f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14440c312 FUN_14440c312 body=29 status=ok
// SIG undefined FUN_14440c312(void)

undefined8 FUN_14440c312(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440c330 FUN_14440c330 body=282 status=ok
// SIG undefined FUN_14440c330(void)

undefined8 * FUN_14440c330(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14440bb68);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14440c44a FUN_14440c44a body=97 status=ok
// SIG undefined FUN_14440c44a(void)

void FUN_14440c44a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x30))
            ((longlong *)param_1[0x15],&DAT_14ca85100,*(undefined4 *)(param_1 + 0x16),
             *(undefined4 *)((longlong)param_1 + 0xb4));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014440c4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14440c4be FUN_14440c4be body=12 status=ok
// SIG undefined FUN_14440c4be(void)

void FUN_14440c4be(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014440c4c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14440c4ca FUN_14440c4ca body=29 status=ok
// SIG undefined FUN_14440c4ca(void)

undefined8 FUN_14440c4ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440c4e8 FUN_14440c4e8 body=282 status=ok
// SIG undefined FUN_14440c4e8(void)

undefined8 * FUN_14440c4e8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14440bb68);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14440c602 FUN_14440c602 body=108 status=ok
// SIG undefined FUN_14440c602(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440c602(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144406dc4(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144406dc4(param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014440c645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14440c66e FUN_14440c66e body=1575 status=ok
// SIG undefined FUN_14440c66e(void)

void FUN_14440c66e(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint *puVar18;
  bool bVar19;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  int iStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined4 uStack_98;
  undefined3 uStack_94;
  undefined8 local_91;
  undefined8 uStack_89;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined5 uStack_71;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar15 = (longlong)*(int *)(*param_1 + 0x2a0);
  local_130 = param_1;
  local_128 = param_2;
  if (lVar15 != 0) {
    plVar11 = *(longlong **)(*param_1 + 0x298);
    plVar12 = plVar11 + lVar15;
    local_138 = plVar12;
    do {
      lVar15 = *plVar11;
      if (lVar15 != 0) {
        local_b8 = 0;
        uStack_b0 = 0;
        uStack_a3 = 0;
        uStack_71 = 0;
        local_81 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        local_91 = 0;
        uStack_89 = 0;
        local_a1 = 0;
        uStack_a0 = 0;
        uStack_99 = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_80 = (undefined7)local_130[1];
        uStack_79 = (undefined1)((ulonglong)local_130[1] >> 0x38);
        local_a2 = 0;
        uStack_a4 = 0;
        uStack_ac = 0;
        uStack_aa = 0;
        iStack_a8 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        lVar7 = *(longlong *)(lVar15 + 8 + (ulonglong)*(byte *)(lVar15 + 0x3e0) * 8);
        lVar17 = (longlong)*(int *)(lVar7 + 0x78);
        local_140 = lVar15;
        local_120 = plVar11;
        if (lVar17 != 0) {
          puVar18 = *(uint **)(lVar7 + 0x70);
          puVar1 = puVar18 + lVar17 * 3;
          uVar16 = (ulonglong)(*(uint *)(lVar15 + 0xa0) & 1);
          if (*(uint *)(lVar15 + 0xa0) == 0xffffffff) {
            uVar16 = 0;
          }
          lVar15 = lVar15 + uVar16 * 0x28;
          do {
            uVar16 = uStack_c0;
            uVar3 = *puVar18;
            uVar5 = puVar18[1];
            lVar7 = *(longlong *)(lVar15 + 0x50);
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            uVar6 = *(uint *)(lVar15 + 0x58);
            lVar17 = (longlong)(int)uStack_c0;
            uVar9 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar9);
            if (uStack_c0._4_4_ < uVar9) {
              FUN_1471b2628(&local_c8,uVar16 & 0xffffffff);
            }
            *(longlong *)(local_c8 + lVar17 * 0x28) = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            lVar17 = local_c8 + lVar17 * 0x28;
            *(undefined8 *)(lVar17 + 8) = 3;
            *(undefined4 *)(lVar17 + 0x10) = 0xc;
            *(uint *)(lVar17 + 0x14) = uVar6 / 0xc;
            *(uint *)(lVar17 + 0x18) = uVar3 / 3;
            *(uint *)(lVar17 + 0x1c) = uVar5;
            *(undefined2 *)(lVar17 + 0x20) = 0x100;
            *(undefined1 *)(lVar17 + 0x22) = 1;
            iStack_a8 = iStack_a8 + puVar18[1];
            if (lVar7 != 0) {
              LOCK();
              puVar2 = (uint *)(lVar7 + 8);
              uVar3 = *puVar2;
              *puVar2 = *puVar2 - 1;
              UNLOCK();
              if ((uVar3 & 0x3fffffff) == 1) {
                puVar2 = (uint *)(lVar7 + 8);
                LOCK();
                uVar3 = *puVar2;
                *puVar2 = *puVar2 | 0x40000000;
                UNLOCK();
                if ((uVar3 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(lVar7 + 0xd);
                  plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar10[1] = lVar7;
                  plVar12 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar10 = (longlong)plVar12;
                      LOCK();
                      bVar19 = plVar12 != DAT_14ca843c0;
                      plVar11 = plVar10;
                      if (bVar19) {
                        plVar12 = DAT_14ca843c0;
                        plVar11 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar11;
                      UNLOCK();
                    } while (bVar19);
                  }
                  else {
                    do {
                      *plVar10 = (longlong)plVar11;
                      LOCK();
                      bVar19 = plVar11 != DAT_14ca843c8;
                      plVar12 = plVar10;
                      if (bVar19) {
                        plVar11 = DAT_14ca843c8;
                        plVar12 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar12;
                      UNLOCK();
                    } while (bVar19);
                  }
                }
              }
            }
            puVar18 = puVar18 + 3;
          } while (puVar18 != puVar1);
        }
        FUN_14737756a(&uStack_a0,&local_c8);
        lVar7 = local_b8;
        lVar15 = local_140;
        lVar17 = local_b8;
        if ((iStack_a8 != 0) && (lVar8 = *(longlong *)(local_140 + 0x158), local_b8 != lVar8)) {
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
          }
          lVar17 = lVar8;
          if (local_b8 != 0) {
            LOCK();
            puVar1 = (uint *)(local_b8 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(local_b8 + 8);
              LOCK();
              uVar3 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)(local_b8 + 0xd);
                local_b8 = lVar8;
                plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                plVar10[1] = lVar7;
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c8;
                lVar17 = local_b8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar10 = (longlong)plVar12;
                    LOCK();
                    bVar19 = plVar12 != DAT_14ca843c0;
                    plVar11 = plVar10;
                    if (bVar19) {
                      plVar12 = DAT_14ca843c0;
                      plVar11 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar11;
                    UNLOCK();
                  } while (bVar19);
                }
                else {
                  do {
                    *plVar10 = (longlong)plVar11;
                    LOCK();
                    bVar19 = plVar11 != DAT_14ca843c8;
                    plVar12 = plVar10;
                    if (bVar19) {
                      plVar11 = DAT_14ca843c8;
                      plVar12 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar12;
                    UNLOCK();
                  } while (bVar19);
                }
              }
            }
          }
        }
        local_b8 = lVar17;
        FUN_147377468(&local_118,&local_b8);
        plVar12 = (longlong *)(lVar15 + 0x428);
        if (plVar12 != &local_118) {
          lVar7 = *plVar12;
          *plVar12 = local_118;
          local_118 = 0;
          if (lVar7 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar7 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar7 + 8);
              LOCK();
              uVar3 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar3 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)(lVar7 + 0xd);
                plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                plVar10[1] = lVar7;
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c8;
                lVar15 = local_140;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar10 = (longlong)plVar12;
                    LOCK();
                    bVar19 = plVar12 != DAT_14ca843c0;
                    plVar11 = plVar10;
                    if (bVar19) {
                      plVar12 = DAT_14ca843c0;
                      plVar11 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar11;
                    UNLOCK();
                  } while (bVar19);
                }
                else {
                  do {
                    *plVar10 = (longlong)plVar11;
                    LOCK();
                    bVar19 = plVar11 != DAT_14ca843c8;
                    plVar12 = plVar10;
                    if (bVar19) {
                      plVar11 = DAT_14ca843c8;
                      plVar12 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar12;
                    UNLOCK();
                  } while (bVar19);
                }
              }
            }
          }
        }
        *(undefined4 *)(lVar15 + 0x430) = local_110;
        *(undefined4 *)(lVar15 + 0x434) = uStack_10c;
        *(undefined4 *)(lVar15 + 0x438) = uStack_108;
        *(undefined4 *)(lVar15 + 0x43c) = uStack_104;
        FUN_140520998(lVar15 + 0x440,&local_100);
        *(undefined4 *)(lVar15 + 0x450) = local_f0;
        *(undefined4 *)(lVar15 + 0x454) = uStack_ec;
        *(undefined4 *)(lVar15 + 0x458) = uStack_e8;
        *(undefined4 *)(lVar15 + 0x45c) = uStack_e4;
        *(undefined4 *)(lVar15 + 0x460) = local_e0;
        *(undefined4 *)(lVar15 + 0x464) = uStack_dc;
        *(undefined4 *)(lVar15 + 0x468) = uStack_d8;
        *(undefined4 *)(lVar15 + 0x46c) = uStack_d4;
        *(undefined4 *)(lVar15 + 0x470) = local_d0;
        FUN_14005bcf4(local_100,local_f8);
        if (local_100 != 0) {
          FUN_1400020a8();
        }
        lVar7 = local_118;
        if (local_118 != 0) {
          LOCK();
          puVar1 = (uint *)(local_118 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_118 + 8);
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(local_118 + 0xd);
              plVar10 = (longlong *)FUN_14001cc68(0x10,8);
              plVar10[1] = lVar7;
              plVar12 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c8;
              lVar15 = local_140;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar10 = (longlong)plVar12;
                  LOCK();
                  bVar19 = plVar12 != DAT_14ca843c0;
                  plVar11 = plVar10;
                  if (bVar19) {
                    plVar12 = DAT_14ca843c0;
                    plVar11 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar11;
                  UNLOCK();
                } while (bVar19);
              }
              else {
                do {
                  *plVar10 = (longlong)plVar11;
                  LOCK();
                  bVar19 = plVar11 != DAT_14ca843c8;
                  plVar12 = plVar10;
                  if (bVar19) {
                    plVar11 = DAT_14ca843c8;
                    plVar12 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar12;
                  UNLOCK();
                } while (bVar19);
              }
            }
          }
        }
        FUN_14742848e(lVar15 + 1000,local_128);
        FUN_14005bcf4(local_c8,uStack_c0 & 0xffffffff);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_14005bcf4(CONCAT17(uStack_99,uStack_a0));
        if (CONCAT17(uStack_99,uStack_a0) != 0) {
          FUN_1400020a8();
        }
        lVar15 = local_b8;
        plVar11 = local_120;
        plVar12 = local_138;
        if (local_b8 != 0) {
          LOCK();
          puVar1 = (uint *)(local_b8 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_b8 + 8);
            LOCK();
            uVar3 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar3 >> 0x1e & 1) == 0) {
              bVar4 = *(byte *)(local_b8 + 0xd);
              plVar13 = (longlong *)FUN_14001cc68(0x10);
              plVar13[1] = lVar15;
              plVar10 = DAT_14ca843c0;
              plVar14 = DAT_14ca843c8;
              plVar11 = local_120;
              plVar12 = local_138;
              if ((bVar4 & 2) == 0) {
                do {
                  *plVar13 = (longlong)plVar10;
                  LOCK();
                  bVar19 = plVar10 != DAT_14ca843c0;
                  plVar14 = plVar13;
                  if (bVar19) {
                    plVar10 = DAT_14ca843c0;
                    plVar14 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar14;
                  UNLOCK();
                } while (bVar19);
              }
              else {
                do {
                  *plVar13 = (longlong)plVar14;
                  LOCK();
                  bVar19 = plVar14 != DAT_14ca843c8;
                  plVar10 = plVar13;
                  if (bVar19) {
                    plVar14 = DAT_14ca843c8;
                    plVar10 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar10;
                  UNLOCK();
                } while (bVar19);
              }
            }
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar12);
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14440cca6 FUN_14440cca6 body=12 status=ok
// SIG undefined FUN_14440cca6(void)

void FUN_14440cca6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014440ccaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14440ccb2 FUN_14440ccb2 body=29 status=ok
// SIG undefined FUN_14440ccb2(void)

undefined8 FUN_14440ccb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440ccd0 FUN_14440ccd0 body=282 status=ok
// SIG undefined FUN_14440ccd0(void)

undefined8 * FUN_14440ccd0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14440bb68);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14440cdea FUN_14440cdea body=105 status=ok
// SIG undefined FUN_14440cdea(void)

void FUN_14440cdea(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14440c66e(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14440c66e(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014440ce2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14440ce54 FUN_14440ce54 body=258 status=ok
// SIG undefined FUN_14440ce54(void)

undefined8 * FUN_14440ce54(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14440ce8a;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_14440ce8a:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x14 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 0x14 <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_14440cf06;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14440cf06:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x15;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0xa0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14ba8b470;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 14440d014 FUN_14440d014 body=140 status=ok
// SIG undefined FUN_14440d014(void)

void FUN_14440d014(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)
      ) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0xc))) &&
       ((uVar2 = *param_1, (*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        (lVar3 = *plVar5, lVar3 != 0)))) {
      lVar4 = FUN_1458d5f9a();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        FUN_1490670c6(uVar2,lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14440d0b6 FUN_14440d0b6 body=29 status=ok
// SIG undefined FUN_14440d0b6(void)

undefined8 FUN_14440d0b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440d0d4 FUN_14440d0d4 body=434 status=ok
// SIG undefined FUN_14440d0d4(void)

void FUN_14440d0d4(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_1;
    lVar9 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar9);
      if ((((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar9), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0 &&
           (*(int *)(lVar5 + 0x10) == iVar1)) && ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
        FUN_145adf2ae();
        iVar1 = *(int *)(lVar3 + 4 + lVar9);
        if ((iVar1 == 0) || (uVar2 = *(uint *)(lVar3 + lVar9), (int)uVar2 < 0)) {
LAB_14440d215:
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar1)) ||
               ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14440d215;
            uVar6 = *puVar7;
          }
        }
        (**(code **)(DAT_14cbf71a8 + 0xc0))(&DAT_14cbf71a8,uVar6);
        iVar1 = *(int *)(lVar3 + 4 + lVar9);
        if ((iVar1 == 0) || (uVar2 = *(uint *)(lVar3 + lVar9), (int)uVar2 < 0)) {
LAB_14440d219:
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)0x0;
          if ((int)uVar2 < DAT_14c9647dc) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar1)) ||
               ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_14440d219;
            plVar8 = (longlong *)*puVar7;
          }
        }
        (**(code **)(*plVar8 + 0x420))(plVar8,0);
      }
      lVar9 = lVar9 + 0x14;
    } while ((longlong)(int)lVar4 * 0x14 != lVar9);
  }
  if (((((*(int *)((longlong)param_1 + 0x14) != 0) &&
        (uVar2 = *(uint *)(param_1 + 2), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0x14))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
    FUN_140aeefbc(*plVar8,0,1);
    return;
  }
  return;
}



// FUNCTION 14440d29c FUN_14440d29c body=57 status=ok
// SIG undefined FUN_14440d29c(void)

undefined8 * FUN_14440d29c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba8b4a0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440d2d6 FUN_14440d2d6 body=71 status=ok
// SIG undefined FUN_14440d2d6(void)

undefined8 FUN_14440d2d6(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar5 = *param_3;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar4 = 0;
  puVar4[1] = uVar5;
  *(int *)(puVar4 + 2) = (int)lVar3;
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(lVar2 + 0xb0);
    *(undefined8 **)(lVar2 + 0xb0) = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar1;
    *puVar1 = puVar4;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 14440d33c FUN_14440d33c body=12 status=ok
// SIG undefined FUN_14440d33c(void)

void FUN_14440d33c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014440d345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14440d348 FUN_14440d348 body=29 status=ok
// SIG undefined FUN_14440d348(void)

undefined8 FUN_14440d348(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14440d365 FUN_14440d365 body=1439 status=ok
// SIG undefined FUN_14440d365(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440d365(void)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = local_68 & 0xffffffff00000000;
  local_88 = CONCAT44(local_88._4_4_,0x60);
  FUN_14078dbce(&DAT_14cbf6df8,L"GeometryCache.Codec.Debug",&local_68,
                L"Enables debug logging for the codec.");
  atexit(FUN_1444033b0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba83770,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba83fc0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba84400,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba847d0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba84b50,1,0);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_68,&DAT_14cbf6f90);
  if (cVar1 == '\0') {
    _DAT_14cbf6f90 = 0;
    uRam000000014cbf6f98 = 0;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba871f0,1,&PTR_FUN_14ba871c0);
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/GeometryCache",0,0,&PTR_FUN_14ba87440);
  local_68 = 0x800000014ba874b8;
  local_54 = 0xd;
  local_60 = FUN_14577453c();
  local_5c = 1;
  FUN_146676812(&local_68);
  local_68 = local_68 & 0xffffffff00000000;
  local_88._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cbf7110,L"GeometryCache.OffloadUpdate",&local_68,
                L"Offloat some updates from the render thread to the workers & RHI threads.");
  atexit(FUN_144405169);
  local_68._0_4_ = 1;
  local_88._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cbf7128,L"GeometryCache.InterpolateFrames",&local_68,
                L"Interpolate between geometry cache frames (if topology allows this).");
  atexit(FUN_1444051ae);
  local_68._0_4_ = 1;
  local_88._0_4_ = 0;
  FUN_14078dbce(&DAT_14cbf7140,L"r.RayTracing.Geometry.GeometryCache",&local_68,
                L"Include geometry cache primitives in ray tracing effects (default = 1 (geometry cache enabled in ray tracing))"
               );
  atexit(FUN_1444051f3);
  local_68._0_4_ = 0x40a00000;
  local_88._0_4_ = 0x60;
  FUN_140a6b41e(&DAT_14cbf7178,L"GeometryCache.LookaheadSeconds",&local_68,
                L"The amount of data (expressed in seconds of animation) to try and keep resident in advance for geometry caches. Note this works regardless of the playback direction."
               );
  atexit(FUN_144409743);
  local_68._0_4_ = 0x40200000;
  local_88 = CONCAT44(local_88._4_4_,0x60);
  FUN_140a6b41e(&DAT_14cbf7190,L"GeometryCache.TrailingSeconds",&local_68,
                L"The amount of data (expressed in seconds of animation) to try and keep resident inverse to the playback direction for geometry caches."
               );
  atexit(FUN_144409788);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba88280,1,0);
  _DAT_14cbf7250 = 0;
  _DAT_14cbf7290 = 0;
  _DAT_14cbf7258 = 0;
  uRam000000014cbf7260 = 0;
  _DAT_14cbf7268 = 0;
  uRam000000014cbf7270 = 0;
  _DAT_14cbf7278 = 0;
  uRam000000014cbf7280 = 0;
  DAT_14cbf7288 = 0;
  DAT_14cbf7298 = 2;
  _DAT_14cbf729c = 0;
  DAT_14cbf72a0 = 2;
  _DAT_14cbf72a4 = 0;
  DAT_14cbf72a8 = 1;
  DAT_14cbf7160 = 2;
  _DAT_14cbf7164 = 0;
  DAT_14cbf7168 = 2;
  _DAT_14cbf716c = 0;
  DAT_14cbf7170 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba887f0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba88c60,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba89160,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba89610,1,0);
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GeometryCache",&PTR_FUN_14ba8a2d0,1,&PTR_FUN_14ba8a280);
  DAT_14cbf7370 = 0;
  _DAT_14cbf7378 = 0;
  atexit((_func_5014 *)&LAB_14440b639);
  DAT_14cbf7380 = 0;
  DAT_14cbf7388 = FUN_144830b78(&DAT_14cbf7388,&DAT_14cb42160);
  DAT_14cbf7390 = 0;
  _DAT_14cbf7398 = 0;
  atexit((_func_5014 *)&LAB_14440b64a);
  DAT_14cbf73a0 = 0;
  DAT_14cbf73a8 = FUN_144830b78(&DAT_14cbf73a8,&DAT_14cb42160);
  DAT_14cbf73b0 = 0;
  _DAT_14cbf73b8 = 0;
  atexit((_func_5014 *)&LAB_14440b65b);
  DAT_14cbf73c0 = 0;
  DAT_14cbf73c8 = FUN_144830b78(&DAT_14cbf73c8,&DAT_14cb42160);
  DAT_14cbf73d0 = 0;
  _DAT_14cbf73d8 = 0;
  atexit((_func_5014 *)&LAB_14440b66c);
  DAT_14cbf73e0 = 0;
  DAT_14cbf73e8 = FUN_144830b78(&DAT_14cbf73e8,&DAT_14cb42160);
  DAT_14cbf73f0 = 0;
  _DAT_14cbf73f8 = 0;
  atexit((_func_5014 *)&LAB_14440b67d);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cbf7400,L"fx.Niagara.GeometryComponentRenderPoolInactiveTimeLimit",
                &DAT_14c7649bc,
                L"The time in seconds an inactive component can linger in the pool before being destroyed."
               );
  atexit(FUN_14440b68e);
  local_68 = CONCAT44(local_68._4_4_,0x3f000000);
  local_88 = CONCAT44(local_88._4_4_,0x40);
  FUN_140a6b41e(&DAT_14cbf7410,L"GeometryCache.PrefetchSeconds",&local_68,
                L"The amount of data (expressed in seconds of animation) to preload of geometry caches. This is the data blockingly loaded at component spawn time."
               );
  atexit(FUN_14440b6d3);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14440d908 FUN_14440d908 body=55 status=ok
// SIG undefined FUN_14440d908(void)

void FUN_14440d908(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7448 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7448 = FUN_14171c317(FUN_146677a19,uVar1,L"EGroomCacheImportType");
  }
  return;
}



// FUNCTION 14440d93f FUN_14440d93f body=55 status=ok
// SIG undefined FUN_14440d93f(void)

void FUN_14440d93f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7560 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7560 = FUN_14171c317(FUN_146677f4e,uVar1,L"EHairAtlasTextureType");
  }
  return;
}



// FUNCTION 14440d976 FUN_14440d976 body=6136 status=ok
// SIG undefined FUN_14440d976(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440d976(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint *puVar20;
  undefined1 auVar21 [12];
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  bool bVar32;
  undefined4 uVar33;
  undefined4 uVar35;
  undefined1 auVar34 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar36 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar55 [16];
  undefined1 local_678 [32];
  undefined1 local_658;
  undefined1 local_650;
  undefined1 local_648;
  uint *local_640;
  undefined8 local_638;
  longlong *local_628;
  byte local_61b [2];
  byte local_619;
  undefined1 local_618 [16];
  undefined4 local_608;
  undefined4 local_604;
  uint local_600;
  uint local_5fc;
  uint local_5f8;
  undefined4 uStack_5f4;
  longlong *plStack_5f0;
  undefined8 local_5e8;
  longlong *plStack_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 uStack_5d0;
  undefined1 uStack_5c8;
  undefined7 uStack_5c7;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined1 local_5a0;
  undefined7 uStack_59f;
  undefined1 local_598 [16];
  undefined1 local_588;
  undefined1 auStack_587 [11];
  undefined4 local_57c;
  undefined1 auStack_578 [12];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  undefined8 local_548;
  undefined4 local_540;
  undefined8 local_53c;
  undefined4 local_534;
  undefined1 local_530 [16];
  undefined1 local_520 [16];
  undefined8 local_510;
  undefined1 local_508 [336];
  undefined **local_3b8 [5];
  undefined1 local_390 [56];
  undefined1 local_358 [48];
  longlong local_328 [34];
  undefined8 local_218;
  undefined1 local_210 [16];
  undefined4 local_200;
  undefined4 local_1f8;
  undefined1 local_1f0 [13];
  undefined4 uStack_1e3;
  undefined1 uStack_1df;
  undefined6 uStack_1de;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [13];
  undefined4 uStack_1ab;
  undefined1 uStack_1a7;
  undefined6 uStack_1a6;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  uint local_188 [8];
  longlong local_168;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)local_678;
  local_619 = 0;
  plStack_5e0 = &local_5e8;
  local_5f8 = 0x49e37810;
  uStack_5f4 = 1;
  local_5e8 = &local_5f8;
  plStack_5f0 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
  iVar23 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  auVar19 = _DAT_149931e80;
  if (((iVar23 < 0x6b) && ((*(byte *)(param_2 + 5) & 1) != 0)) &&
     ((longlong)*(int *)(param_1 + 0x50) != 0)) {
    uVar24 = (longlong)*(int *)(param_1 + 0x50) * 0x30 - 0x30;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar24;
    uVar33 = SUB164(auVar36 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
    uVar35 = (undefined4)(uVar24 / 0x180000000);
    auVar37._0_8_ = CONCAT44(uVar35,uVar33);
    auVar37._8_4_ = uVar33;
    auVar37._12_4_ = uVar35;
    auVar34._0_8_ = auVar37._0_8_ >> 5;
    auVar34._8_8_ = auVar37._8_8_ >> 5;
    puVar25 = (undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x2e4);
    uVar26 = 0;
    auVar36 = pmovsxbq(in_XMM1,0xf0e);
    auVar37 = pmovsxbq(in_XMM2,0xd0c);
    auVar38 = pmovsxbq(in_XMM3,0xb0a);
    auVar39 = pmovsxbq(in_XMM4,0x908);
    auVar40 = pmovsxbq(in_XMM5,0x706);
    auVar41 = pmovsxbq(unaff_XMM6,0x504);
    auVar42 = pmovsxbq(unaff_XMM7,0x302);
    auVar43 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar44._8_4_ = (int)uVar26;
      auVar44._0_8_ = uVar26;
      auVar44._12_4_ = (int)(uVar26 >> 0x20);
      auVar46 = auVar34 | auVar19;
      auVar47 = (auVar44 | auVar43) ^ auVar19;
      lVar30 = auVar46._0_8_;
      auVar48._0_8_ = -(ulonglong)(lVar30 < auVar47._0_8_);
      lVar31 = auVar46._8_8_;
      auVar48._8_8_ = -(ulonglong)(lVar31 < auVar47._8_8_);
      auVar55 = pshuflw(unaff_XMM14,auVar48,0xe8);
      auVar47._8_4_ = 0xffffffff;
      auVar47._0_8_ = 0xffffffffffffffff;
      auVar47._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar55 ^ auVar47,auVar55 ^ auVar47);
      if ((auVar47._0_4_ & 1) != 0) {
        puVar25[-0x2d0] = 1;
      }
      auVar48 = packssdw(auVar48,auVar48);
      auVar55._8_4_ = 0xffffffff;
      auVar55._0_8_ = 0xffffffffffffffff;
      auVar55._12_4_ = 0xffffffff;
      auVar48 = packssdw(auVar48 ^ auVar55,auVar48 ^ auVar55);
      auVar48 = packsswb(auVar48,auVar48);
      if ((auVar48[1] & 1) != 0) {
        puVar25[-0x2a0] = 1;
      }
      auVar48 = (auVar44 | auVar42) ^ auVar19;
      auVar49._0_8_ = -(ulonglong)(lVar30 < auVar48._0_8_);
      auVar49._8_8_ = -(ulonglong)(lVar31 < auVar48._8_8_);
      auVar47 = packssdw(auVar47,auVar49);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar47 ^ auVar6,auVar47 ^ auVar6);
      auVar47 = packsswb(auVar47,auVar47);
      if ((auVar47[2] & 1) != 0) {
        puVar25[-0x270] = 1;
      }
      auVar48 = pshufhw(auVar49,auVar49,0x84);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar48 = packssdw(auVar48 ^ auVar7,auVar48 ^ auVar7);
      auVar48 = packsswb(auVar48,auVar48);
      if ((auVar48[3] & 1) != 0) {
        puVar25[-0x240] = 1;
      }
      auVar48 = (auVar44 | auVar41) ^ auVar19;
      auVar50._0_8_ = -(ulonglong)(lVar30 < auVar48._0_8_);
      auVar50._8_8_ = -(ulonglong)(lVar31 < auVar48._8_8_);
      auVar47 = pshuflw(auVar47,auVar50,0xe8);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar47 ^ auVar8,auVar47 ^ auVar8);
      auVar47 = packsswb(auVar47,auVar47);
      if ((auVar47[4] & 1) != 0) {
        puVar25[-0x210] = 1;
      }
      auVar48 = packssdw(auVar50,auVar50);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar48 = packssdw(auVar48 ^ auVar9,auVar48 ^ auVar9);
      auVar48 = packsswb(auVar48,auVar48);
      if ((auVar48[5] & 1) != 0) {
        puVar25[-0x1e0] = 1;
      }
      auVar48 = (auVar44 | auVar40) ^ auVar19;
      auVar51._0_8_ = -(ulonglong)(lVar30 < auVar48._0_8_);
      auVar51._8_8_ = -(ulonglong)(lVar31 < auVar48._8_8_);
      auVar47 = packssdw(auVar47,auVar51);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar47 ^ auVar10,auVar47 ^ auVar10);
      auVar47 = packsswb(auVar47,auVar47);
      if ((auVar47[6] & 1) != 0) {
        puVar25[-0x1b0] = 1;
      }
      auVar48 = pshufhw(auVar51,auVar51,0x84);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar48 = packssdw(auVar48 ^ auVar11,auVar48 ^ auVar11);
      auVar48 = packsswb(auVar48,auVar48);
      if ((auVar48[7] & 1) != 0) {
        puVar25[-0x180] = 1;
      }
      auVar48 = (auVar44 | auVar39) ^ auVar19;
      auVar52._0_8_ = -(ulonglong)(lVar30 < auVar48._0_8_);
      auVar52._8_8_ = -(ulonglong)(lVar31 < auVar48._8_8_);
      auVar47 = pshuflw(auVar47,auVar52,0xe8);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar47 ^ auVar12,auVar47 ^ auVar12);
      auVar47 = packsswb(auVar47,auVar47);
      if ((auVar47[8] & 1) != 0) {
        puVar25[-0x150] = 1;
      }
      auVar48 = packssdw(auVar52,auVar52);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar48 = packssdw(auVar48 ^ auVar13,auVar48 ^ auVar13);
      auVar48 = packsswb(auVar48,auVar48);
      if ((auVar48[9] & 1) != 0) {
        puVar25[-0x120] = 1;
      }
      auVar48 = (auVar44 | auVar38) ^ auVar19;
      auVar53._0_8_ = -(ulonglong)(lVar30 < auVar48._0_8_);
      auVar53._8_8_ = -(ulonglong)(lVar31 < auVar48._8_8_);
      auVar47 = packssdw(auVar47,auVar53);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar47 ^ auVar14,auVar47 ^ auVar14);
      auVar47 = packsswb(auVar47,auVar47);
      if ((auVar47[10] & 1) != 0) {
        puVar25[-0xf0] = 1;
      }
      auVar48 = pshufhw(auVar53,auVar53,0x84);
      auVar15._8_4_ = 0xffffffff;
      auVar15._0_8_ = 0xffffffffffffffff;
      auVar15._12_4_ = 0xffffffff;
      auVar48 = packssdw(auVar48 ^ auVar15,auVar48 ^ auVar15);
      auVar48 = packsswb(auVar48,auVar48);
      if ((auVar48[0xb] & 1) != 0) {
        puVar25[-0xc0] = 1;
      }
      auVar48 = (auVar44 | auVar37) ^ auVar19;
      auVar54._0_8_ = -(ulonglong)(lVar30 < auVar48._0_8_);
      auVar54._8_8_ = -(ulonglong)(lVar31 < auVar48._8_8_);
      auVar47 = pshuflw(auVar47,auVar54,0xe8);
      auVar16._8_4_ = 0xffffffff;
      auVar16._0_8_ = 0xffffffffffffffff;
      auVar16._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar47 ^ auVar16,auVar47 ^ auVar16);
      unaff_XMM14 = packsswb(auVar47,auVar47);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar25[-0x90] = 1;
      }
      auVar47 = packssdw(auVar54,auVar54);
      auVar17._8_4_ = 0xffffffff;
      auVar17._0_8_ = 0xffffffffffffffff;
      auVar17._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar47 ^ auVar17,auVar47 ^ auVar17);
      auVar47 = packsswb(auVar47,auVar47);
      if ((auVar47[0xd] & 1) != 0) {
        puVar25[-0x60] = 1;
      }
      auVar47 = (auVar44 | auVar36) ^ auVar19;
      auVar45._0_8_ = -(ulonglong)(lVar30 < auVar47._0_8_);
      auVar45._8_8_ = -(ulonglong)(lVar31 < auVar47._8_8_);
      auVar47 = packssdw(auVar46,auVar45);
      auVar46._8_4_ = 0xffffffff;
      auVar46._0_8_ = 0xffffffffffffffff;
      auVar46._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar47 ^ auVar46,auVar47 ^ auVar46);
      auVar47 = packsswb(auVar47,auVar47);
      if ((auVar47[0xe] & 1) != 0) {
        puVar25[-0x30] = 1;
      }
      auVar47 = pshufhw(auVar45,auVar45,0x84);
      auVar18._8_4_ = 0xffffffff;
      auVar18._0_8_ = 0xffffffffffffffff;
      auVar18._12_4_ = 0xffffffff;
      auVar47 = packssdw(auVar47 ^ auVar18,auVar47 ^ auVar18);
      auVar47 = packsswb(auVar47,auVar47);
      if ((auVar47[0xf] & 1) != 0) {
        *puVar25 = 1;
      }
      uVar26 = uVar26 + 0x10;
      puVar25 = puVar25 + 0x300;
    } while ((uVar24 / 0x30 + 0x10 & 0xfffffffffffffff0) != uVar26);
  }
  iVar23 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  if (2 < iVar23) {
    FUN_140562eea(local_61b,param_2,0,&DAT_14c896044);
    iVar23 = FUN_1448332aa(param_2,&DAT_149e39130);
    bVar27 = 1;
    if (0xd < iVar23) {
      puVar4 = (ulonglong *)param_2[1];
      pbVar1 = (byte *)*puVar4 + 1;
      if ((byte *)puVar4[1] < pbVar1) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_619,1);
        bVar27 = local_619;
      }
      else {
        local_619 = *(byte *)*puVar4;
        *puVar4 = (ulonglong)pbVar1;
        bVar27 = local_619;
      }
    }
    if ((local_61b[0] & 1) == 0) {
      iVar23 = FUN_1448332aa(param_2,&DAT_149e3cc78);
      if ((iVar23 < 0x6e) && ((*(byte *)(param_2 + 5) & 1) != 0 && (bVar27 & 1) == 0)) {
        (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
        (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
        uVar29 = local_218._4_4_;
        local_218 = (undefined **)((ulonglong)local_218._4_4_ << 0x20);
        puVar4 = (ulonglong *)param_2[1];
        piVar2 = (int *)*puVar4 + 1;
        if ((int *)puVar4[1] < piVar2) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_218,4);
          }
          else {
            FUN_14572512c(param_2,&local_218);
          }
          iVar23 = (uint)local_218;
        }
        else {
          iVar23 = *(int *)*puVar4;
          local_218 = (undefined **)CONCAT44(uVar29,iVar23);
          *puVar4 = (ulonglong)piVar2;
        }
        if (iVar23 != 0) {
          uVar28 = 0;
          uVar29 = 0;
          do {
            auVar21 = local_618._4_12_;
            auVar19._12_4_ = 0;
            auVar19._0_12_ = local_618._4_12_;
            local_618 = auVar19 << 0x20;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,local_618,4);
              }
              else {
                FUN_14572512c(param_2,local_618);
              }
            }
            else {
              local_618._0_4_ = *(undefined4 *)*puVar4;
              local_618 = CONCAT124(auVar21,local_618._0_4_);
              *puVar4 = (ulonglong)puVar3;
            }
            local_5fc = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_5fc,4);
              }
              else {
                FUN_14572512c(param_2,&local_5fc);
              }
            }
            else {
              local_5fc = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            local_600 = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_600,4);
              }
              else {
                FUN_14572512c(param_2,&local_600);
              }
            }
            else {
              local_600 = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            local_604 = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_604,4);
              }
              else {
                FUN_14572512c(param_2,&local_604);
              }
            }
            else {
              local_604 = *(undefined4 *)*puVar4;
              *puVar4 = (ulonglong)puVar3;
            }
            uStack_5c8 = 0;
            FUN_140119d96(param_2,&local_5f8);
            local_608 = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_608,4);
              }
              else {
                FUN_14572512c(param_2,&local_608);
              }
            }
            else {
              local_608 = *(undefined4 *)*puVar4;
              *puVar4 = (ulonglong)puVar3;
            }
            local_188[4] = 0;
            local_188[5] = 0;
            local_188[6] = 0;
            local_188[0] = 0;
            local_188[1] = 0;
            local_188[2] = 0;
            local_188[3] = 0;
            lVar30 = 0;
            do {
              plVar5 = (longlong *)param_2[1];
              if ((undefined4 *)plVar5[1] < (undefined4 *)*plVar5 + 1) {
                if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_2 + 0x170))
                            (param_2,(undefined4 *)((longlong)local_188 + lVar30),4);
                }
                else {
                  FUN_14572512c(param_2);
                }
              }
              else {
                *(undefined4 *)((longlong)local_188 + lVar30) = *(undefined4 *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
              lVar30 = lVar30 + 4;
            } while (lVar30 != 0x1c);
            auVar21 = local_618._4_12_;
            auVar38._12_4_ = 0;
            auVar38._0_12_ = local_618._4_12_;
            local_618 = auVar38 << 0x20;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,local_618,4);
              }
              else {
                FUN_14572512c(param_2,local_618);
              }
            }
            else {
              local_618._0_4_ = *(undefined4 *)*puVar4;
              local_618 = CONCAT124(auVar21,local_618._0_4_);
              *puVar4 = (ulonglong)puVar3;
            }
            local_5fc = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_5fc,4);
              }
              else {
                FUN_14572512c(param_2,&local_5fc);
              }
            }
            else {
              local_5fc = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            local_600 = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_600,4);
              }
              else {
                FUN_14572512c(param_2,&local_600);
              }
            }
            else {
              local_600 = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            local_604 = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_604,4);
              }
              else {
                FUN_14572512c(param_2,&local_604);
              }
            }
            else {
              local_604 = *(undefined4 *)*puVar4;
              *puVar4 = (ulonglong)puVar3;
            }
            uStack_5c8 = 0;
            FUN_140119d96(param_2,&local_5f8);
            local_608 = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_608,4);
              }
              else {
                FUN_14572512c(param_2,&local_608);
              }
            }
            else {
              local_608 = *(undefined4 *)*puVar4;
              *puVar4 = (ulonglong)puVar3;
            }
            local_188[4] = 0;
            local_188[5] = 0;
            local_188[6] = 0;
            local_188[0] = 0;
            local_188[1] = 0;
            local_188[2] = 0;
            local_188[3] = 0;
            lVar30 = 0;
            do {
              plVar5 = (longlong *)param_2[1];
              if ((undefined4 *)plVar5[1] < (undefined4 *)*plVar5 + 1) {
                if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_2 + 0x170))
                            (param_2,(undefined4 *)((longlong)local_188 + lVar30),4);
                }
                else {
                  FUN_14572512c(param_2);
                }
              }
              else {
                *(undefined4 *)((longlong)local_188 + lVar30) = *(undefined4 *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
              lVar30 = lVar30 + 4;
            } while (lVar30 != 0x1c);
            local_5f8 = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_5f8,4);
              }
              else {
                FUN_14572512c(param_2,&local_5f8);
              }
            }
            else {
              local_5f8 = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            local_188[0] = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,local_188,4);
              }
              else {
                FUN_14572512c(param_2,local_188);
              }
            }
            else {
              local_188[0] = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            auVar39._12_4_ = 0;
            auVar39._0_12_ = local_618._4_12_;
            local_618 = auVar39 << 0x20;
            puVar4 = (ulonglong *)param_2[1];
            if (puVar4[1] < *puVar4 + 4) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,local_618,4);
              }
              else {
                FUN_14572512c(param_2,local_618);
              }
            }
            else {
              *puVar4 = *puVar4 + 4;
            }
            auVar21 = local_618._4_12_;
            auVar40._12_4_ = 0;
            auVar40._0_12_ = local_618._4_12_;
            local_618 = auVar40 << 0x20;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,local_618,4);
              }
              else {
                FUN_14572512c(param_2,local_618);
              }
            }
            else {
              local_618._0_4_ = *(undefined4 *)*puVar4;
              local_618 = CONCAT124(auVar21,local_618._0_4_);
              *puVar4 = (ulonglong)puVar3;
            }
            local_5fc = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_5fc,4);
              }
              else {
                FUN_14572512c(param_2,&local_5fc);
              }
            }
            else {
              local_5fc = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            local_600 = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_600,4);
              }
              else {
                FUN_14572512c(param_2,&local_600);
              }
            }
            else {
              local_600 = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            local_604 = 0;
            puVar4 = (ulonglong *)param_2[1];
            puVar3 = (undefined4 *)*puVar4 + 1;
            if ((undefined4 *)puVar4[1] < puVar3) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_604,4);
              }
              else {
                FUN_14572512c(param_2,&local_604);
              }
            }
            else {
              local_604 = *(undefined4 *)*puVar4;
              *puVar4 = (ulonglong)puVar3;
            }
            local_5f8 = 0;
            uStack_5f4 = 0;
            plStack_5f0 = (longlong *)0x0;
            FUN_146e9d99c(param_2,&local_5f8);
            local_188[0] = 0;
            local_188[1] = 0;
            local_188[2] = 0;
            local_188[3] = 0;
            FUN_146db24e8(param_2,local_188);
            if (CONCAT44(local_188[1],local_188[0]) != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_5f4,local_5f8) != 0) {
              FUN_1400020a8();
            }
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              local_5f8 = uVar29;
              (**(code **)(*param_2 + 0x170))(param_2,&local_5f8,4);
              uVar29 = local_5f8;
              if (1 < local_5f8) {
                FUN_14572541c(param_2);
                uVar29 = local_5f8;
              }
            }
            else {
              uVar29 = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            uVar29 = (uint)(uVar29 != 0);
            uVar28 = uVar28 + 1;
          } while (uVar28 < (uint)local_218);
        }
      }
    }
    else {
      local_600 = *(uint *)(param_1 + 0xf8);
      puVar4 = (ulonglong *)param_2[1];
      puVar20 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar20) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_600,4);
        }
        else {
          FUN_14572512c(param_2,&local_600);
        }
      }
      else {
        local_600 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar20;
      }
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_1490748f2(param_1 + 0xf0);
      }
      if (local_600 != 0) {
        uVar29 = 0;
        do {
          lVar31 = *(longlong *)(param_1 + 0xf0);
          lVar30 = lVar31 + (longlong)(int)uVar29 * 0x690;
          (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
          FUN_149097ec0(lVar30,param_2,param_1);
          lVar31 = (longlong)(int)uVar29 * 0x690 + lVar31 + 0x240;
          (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
          if ((param_2[0xd] == 0) || (*(longlong *)(param_2[0xd] + 0x10) == 0)) {
LAB_14440e081:
            FUN_149098260(lVar31,param_2,param_1);
            (**(code **)(*(longlong *)(lVar30 + 0x240) + 0x20))(lVar31,param_2);
            plStack_5f0 = (longlong *)0x0;
            local_5e8._0_4_ = 0;
            local_5e8._4_4_ = 0;
            local_5f8 = 4;
            uStack_5d8 = (undefined4)param_1;
            uVar33 = uStack_5d8;
            uStack_5d4 = (undefined4)((ulonglong)param_1 >> 0x20);
            uVar35 = uStack_5d4;
            plStack_5e0 = param_2;
            (**(code **)(*(longlong *)(lVar30 + 0x240) + 0x18))(lVar31,&local_5f8);
            lVar31 = lVar30 + 0x480;
            FUN_149098c4e(lVar31,param_2,param_1);
            (**(code **)(*(longlong *)(lVar30 + 0x480) + 0x20))(lVar31,param_2);
            plStack_5f0 = (longlong *)0x0;
            local_5e8._0_4_ = 0;
            local_5e8._4_4_ = 0;
            local_5f8 = 4;
            plStack_5e0 = param_2;
            uStack_5d8 = uVar33;
            uStack_5d4 = uVar35;
            (**(code **)(*(longlong *)(lVar30 + 0x480) + 0x18))(lVar31,&local_5f8);
            iVar23 = FUN_1448332aa(param_2,&DAT_149e39130);
            if (0xb < iVar23) {
              lVar31 = lVar30 + 0x510;
              FUN_149098ea2(lVar31,param_2,param_1);
              (**(code **)(*(longlong *)(lVar30 + 0x510) + 0x20))(lVar31,param_2);
              plStack_5f0 = (longlong *)0x0;
              local_5e8._0_4_ = 0;
              local_5e8._4_4_ = 0;
              local_5f8 = 4;
              plStack_5e0 = param_2;
              uStack_5d8 = uVar33;
              uStack_5d4 = uVar35;
              (**(code **)(*(longlong *)(lVar30 + 0x510) + 0x18))(lVar31,&local_5f8);
            }
          }
          else {
            puVar20 = local_5e8;
            if ((*(byte *)(param_2 + 5) & 4) != 0) {
              uStack_5d8 = 0;
              local_5e8._0_4_ = 0;
              local_5e8._4_4_ = 0;
              plStack_5e0 = (longlong *)0x0;
              local_5f8 = 0;
              uStack_5f4 = 0;
              plStack_5f0 = (longlong *)0x0;
              uStack_5d4._0_1_ = 1;
              local_638 = 0;
              local_640 = local_188;
              local_648 = 1;
              local_650 = 1;
              local_658 = 1;
              FUN_149098154(&local_5f8,0x3fffff,0xffffff,lVar31);
              FUN_149073728(&local_5f8);
              uStack_5d8 = 0;
              local_5e8._0_4_ = 0;
              local_5e8._4_4_ = 0;
              plStack_5e0 = (longlong *)0x0;
              local_5f8 = 0;
              uStack_5f4 = 0;
              plStack_5f0 = (longlong *)0x0;
              uStack_5d4._0_1_ = 1;
              local_638 = 0;
              local_640 = local_188;
              local_648 = 1;
              local_650 = 1;
              local_658 = 1;
              FUN_149098154(&local_5f8,0x3fffff,0xffffff,lVar30 + 0x480);
              FUN_149073728(&local_5f8);
              uStack_5d8 = 0;
              local_5e8._0_4_ = 0;
              local_5e8._4_4_ = 0;
              plStack_5e0 = (longlong *)0x0;
              local_5f8 = 0;
              uStack_5f4 = 0;
              plStack_5f0 = (longlong *)0x0;
              uStack_5d4 = CONCAT31(uStack_5d4._1_3_,1);
              local_638 = 0;
              local_640 = local_188;
              local_648 = 1;
              local_650 = 1;
              local_658 = 1;
              FUN_149098154(&local_5f8,0x3fffff,0xffffff,lVar30 + 0x510);
              FUN_149073728(&local_5f8);
              puVar20 = (uint *)CONCAT44(local_5e8._4_4_,(undefined4)local_5e8);
              local_5e8 = (uint *)CONCAT44(local_5e8._4_4_,(undefined4)local_5e8);
              if ((param_2[0xd] == 0) ||
                 (local_5e8 = puVar20, *(longlong *)(param_2[0xd] + 0x10) == 0)) goto LAB_14440e081;
            }
            local_5e8 = puVar20;
            if (*(char *)(lVar30 + 0x610) == '\0') goto LAB_14440e081;
            FUN_149074b38(&local_5f8);
            FUN_149098260(&local_5f8,param_2,param_1);
            (**(code **)(CONCAT44(uStack_5f4,local_5f8) + 0x20))(&local_5f8,param_2);
            local_188[2] = 0;
            local_188[3] = 0;
            local_188[4] = 0;
            local_188[5] = 0;
            local_188[0] = 4;
            local_188[6] = (uint)param_2;
            uVar28 = local_188[6];
            local_188[7] = (uint)((ulonglong)param_2 >> 0x20);
            uVar22 = local_188[7];
            local_168 = param_1;
            (**(code **)(CONCAT44(uStack_5f4,local_5f8) + 0x18))(&local_5f8,local_188);
            FUN_149098c4e(local_3b8,param_2,param_1);
            (*(code *)local_3b8[0][4])(local_3b8,param_2);
            local_188[2] = 0;
            local_188[3] = 0;
            local_188[4] = 0;
            local_188[5] = 0;
            local_188[0] = 4;
            local_188[6] = uVar28;
            local_188[7] = uVar22;
            local_168 = param_1;
            (*(code *)local_3b8[0][3])(local_3b8,local_188);
            iVar23 = FUN_1448332aa(param_2,&DAT_149e39130);
            if (0xb < iVar23) {
              FUN_149098ea2(local_328,param_2,param_1);
              (**(code **)(local_328[0] + 0x20))(local_328,param_2);
              local_188[2] = 0;
              local_188[3] = 0;
              local_188[4] = 0;
              local_188[5] = 0;
              local_188[0] = 4;
              local_188[6] = uVar28;
              local_188[7] = uVar22;
              local_168 = param_1;
              (**(code **)(local_328[0] + 0x18))(local_328,local_188);
            }
            FUN_149075034(local_328);
            local_3b8[0] = &PTR_FUN_14ba97de0;
            FUN_1400ea36e(local_358,local_358);
            FUN_1400ea36e(local_390,local_390);
            FUN_149074f1c(&local_5f8);
          }
          iVar23 = FUN_1448332aa(param_2,&DAT_149e39130);
          if (0xc < iVar23) {
            if (param_2[0xd] == 0) {
              bVar32 = false;
            }
            else {
              bVar32 = *(longlong *)(param_2[0xd] + 0x10) != 0;
            }
            puVar4 = (ulonglong *)param_2[1];
            puVar20 = (uint *)*puVar4 + 1;
            if ((uint *)puVar4[1] < puVar20) {
              local_5f8 = (uint)bVar32;
              (**(code **)(*param_2 + 0x170))(param_2,&local_5f8,4);
              uVar28 = local_5f8;
              if (1 < local_5f8) {
                FUN_14572541c(param_2);
                uVar28 = local_5f8;
              }
            }
            else {
              uVar28 = *(uint *)*puVar4;
              *puVar4 = (ulonglong)puVar20;
            }
            if (uVar28 != 0) {
              local_5fc = *(uint *)(lVar30 + 0x628);
              puVar4 = (ulonglong *)param_2[1];
              puVar20 = (uint *)*puVar4 + 1;
              if ((uint *)puVar4[1] < puVar20) {
                if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_2 + 0x170))(param_2,&local_5fc,4);
                }
                else {
                  FUN_14572512c(param_2,&local_5fc);
                }
              }
              else {
                local_5fc = *(uint *)*puVar4;
                *puVar4 = (ulonglong)puVar20;
              }
              local_628 = (longlong *)(lVar30 + 0x620);
              if ((*(byte *)(param_2 + 5) & 1) != 0) {
                FUN_14907508a(local_628);
              }
              if (local_5fc != 0) {
                uVar28 = 0;
                do {
                  lVar31 = (longlong)(int)uVar28 * 0x390 + *local_628;
                  if (((param_2[0xd] == 0) || (*(longlong *)(param_2[0xd] + 0x10) == 0)) ||
                     (*(char *)(lVar31 + 0x388) == '\0')) {
                    FUN_1490972ba(lVar31,param_2);
                    FUN_1490b4f0a(param_2,lVar31 + 0xa8);
                    FUN_149097ec0(lVar31 + 0xb8,param_2,param_1);
                    FUN_149097ec0(lVar31 + 0x2f8,param_2,param_1);
                  }
                  else {
                    memset(local_188,0,0xa1);
                    local_618 = (undefined1  [16])0x0;
                    local_5f8 = 0x4ba97db0;
                    uStack_5f4 = 1;
                    plStack_5e0 = (longlong *)0x0;
                    uStack_5d8 = 0;
                    plStack_5f0 = (longlong *)0x0;
                    local_5e8._0_4_ = 0;
                    local_5e8._4_4_ = 0;
                    local_5b0 = 0;
                    uStack_5a8 = 0;
                    local_5c0 = 0;
                    uStack_5b8 = 0;
                    uStack_5d0 = 0;
                    uStack_5c8 = 0;
                    uStack_5c7 = 0;
                    local_5a0 = 0;
                    auStack_578 = SUB1612((undefined1  [16])0x0,4);
                    local_588 = 0;
                    auStack_587 = SUB1611((undefined1  [16])0x0,1);
                    local_57c = 0;
                    local_598 = (undefined1  [16])0x0;
                    local_558 = (undefined1  [16])0x0;
                    local_568 = (undefined1  [16])0x0;
                    local_540 = DAT_14c846358;
                    local_548 = DAT_14c846350;
                    local_534 = DAT_14c846358;
                    local_53c = DAT_14c846350;
                    local_510 = 0;
                    local_520 = (undefined1  [16])0x0;
                    local_530 = (undefined1  [16])0x0;
                    FUN_149074d84(local_508);
                    local_218 = &PTR_FUN_14ba97de0;
                    local_1f8 = 0;
                    uStack_1de = 0;
                    local_1f0 = SUB1613((undefined1  [16])0x0,0);
                    local_200 = 0;
                    local_210 = (undefined1  [16])0x0;
                    uStack_1df = 0xff;
                    uStack_1e3 = 0xffffffff;
                    local_1d0 = DAT_14c845dc4;
                    local_1d8 = DAT_14c845dbc;
                    local_1c8 = 0;
                    local_1c0 = 0;
                    uStack_1a6 = 0;
                    local_1b8 = SUB1613((undefined1  [16])0x0,0);
                    uStack_1a7 = 0xff;
                    uStack_1ab = 0xffffffff;
                    local_198 = DAT_14c845dc4;
                    local_1a0 = DAT_14c845dbc;
                    local_190 = 0;
                    FUN_1490972ba(local_188,param_2);
                    FUN_1490b4f0a(param_2,local_618);
                    FUN_149097ec0(&local_5f8,param_2,param_1);
                    FUN_149097ec0(&local_218,param_2,param_1);
                    local_218 = &PTR_FUN_14ba97de0;
                    FUN_1400ea36e(local_1b8,local_1b8);
                    FUN_1400ea36e();
                    FUN_149074f1c(&local_5f8);
                    if (local_618._0_8_ != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14907547c(local_188);
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar28 < local_5fc);
              }
              local_188[0] = *(uint *)(lVar30 + 0x638);
              puVar4 = (ulonglong *)param_2[1];
              puVar20 = (uint *)*puVar4 + 1;
              if ((uint *)puVar4[1] < puVar20) {
                if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_2 + 0x170))(param_2,local_188,4);
                }
                else {
                  FUN_14572512c(param_2,local_188);
                }
              }
              else {
                local_188[0] = *(uint *)*puVar4;
                *puVar4 = (ulonglong)puVar20;
              }
              if ((*(byte *)(param_2 + 5) & 1) != 0) {
                FUN_149075544((longlong *)(lVar30 + 0x630));
              }
              if (local_188[0] != 0) {
                uVar28 = 0;
                do {
                  lVar31 = (longlong)(int)uVar28 * 0x80 + *(longlong *)(lVar30 + 0x630);
                  if (((param_2[0xd] == 0) || (*(longlong *)(param_2[0xd] + 0x10) == 0)) ||
                     (*(char *)(lVar31 + 0x78) == '\0')) {
                    FUN_1490973f2(lVar31,param_2);
                  }
                  else {
                    local_598 = (undefined1  [16])0x0;
                    uStack_5a8 = 0;
                    local_5a0 = 0;
                    uStack_59f = 0;
                    uStack_5b8 = 0;
                    local_5b0 = 0;
                    uStack_5c8 = 0;
                    uStack_5c7 = 0;
                    local_5c0 = 0;
                    uStack_5d8 = 0;
                    uStack_5d4 = 0;
                    uStack_5d0 = 0;
                    local_5e8._0_4_ = 0;
                    local_5e8._4_4_ = 0;
                    plStack_5e0 = (longlong *)0x0;
                    local_5f8 = 0;
                    uStack_5f4 = 0;
                    plStack_5f0 = (longlong *)0x0;
                    local_588 = 0;
                    FUN_1490973f2(&local_5f8,param_2);
                    FUN_149075738(&local_5f8);
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar28 < local_188[0]);
              }
            }
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 < local_600);
      }
    }
  }
  if ((local_e0 ^ (ulonglong)local_678) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14440f16f FUN_14440f16f body=69 status=ok
// SIG undefined FUN_14440f16f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f16f(void)

{
  _DAT_14cbf7648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f1b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7650,1);
  return;
}



// FUNCTION 14440f1b4 FUN_14440f1b4 body=69 status=ok
// SIG undefined FUN_14440f1b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f1b4(void)

{
  _DAT_14cbf7658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7660,1);
  return;
}



// FUNCTION 14440f1f9 FUN_14440f1f9 body=69 status=ok
// SIG undefined FUN_14440f1f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f1f9(void)

{
  _DAT_14cbf7670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f23b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7678,1);
  return;
}



// FUNCTION 14440f248 FUN_14440f248 body=69 status=ok
// SIG undefined FUN_14440f248(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f248(void)

{
  _DAT_14cbf7688 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f28a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7690,1);
  return;
}



// FUNCTION 14440f28d FUN_14440f28d body=69 status=ok
// SIG undefined FUN_14440f28d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f28d(void)

{
  _DAT_14cbf76a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f2cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf76a8,1);
  return;
}



// FUNCTION 14440f2d2 FUN_14440f2d2 body=69 status=ok
// SIG undefined FUN_14440f2d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f2d2(void)

{
  _DAT_14cbf76b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf76c0,1);
  return;
}



// FUNCTION 14440f317 FUN_14440f317 body=69 status=ok
// SIG undefined FUN_14440f317(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f317(void)

{
  _DAT_14cbf76d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf76d8,1);
  return;
}



// FUNCTION 14440f35c FUN_14440f35c body=271 status=ok
// SIG undefined FUN_14440f35c(void)

void FUN_14440f35c(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  int local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14906fd76(&local_38,0x10,1,0);
  uVar6 = (ulonglong)local_28;
  lVar3 = local_38;
  if ((int)local_28 < local_30 && -1 < (int)local_28) {
    iVar2 = local_30;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar3 + (uVar6 & 0xffffffff) * 8) + 0xf8);
      uVar4 = (uint)uVar6;
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          lVar3 = *(longlong *)(local_38 + (longlong)(int)local_28 * 8);
          FUN_14906f882(local_78,(longlong)iVar5 * 0x690 + *(longlong *)(lVar3 + 0xf0),
                        (longlong)iVar5 * 0x58 + *(longlong *)(lVar3 + 0x100));
          iVar5 = iVar5 + 1;
          lVar3 = local_38;
          iVar2 = local_30;
          uVar4 = local_28;
        } while (iVar1 != iVar5);
      }
      uVar6 = (longlong)(int)uVar4;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_28 = (uint)uVar6;
        if ((longlong)iVar2 <= (longlong)uVar6) break;
      } while (*(longlong *)(lVar3 + uVar6 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)local_28 < iVar2));
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14440f46c FUN_14440f46c body=69 status=ok
// SIG undefined FUN_14440f46c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f46c(void)

{
  _DAT_14cbf76e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f4ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf76f0,1);
  return;
}



// FUNCTION 14440f4b1 FUN_14440f4b1 body=266 status=ok
// SIG undefined FUN_14440f4b1(void)

void FUN_14440f4b1(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  int local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14906ffe8(&local_38,0x10,1,0);
  uVar6 = (ulonglong)local_28;
  lVar3 = local_38;
  if ((int)local_28 < local_30 && -1 < (int)local_28) {
    iVar2 = local_30;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar3 + (uVar6 & 0xffffffff) * 8) + 0xa8);
      uVar4 = (uint)uVar6;
      if (iVar1 != 0) {
        iVar5 = 0;
        do {
          lVar3 = *(longlong *)(local_38 + (longlong)(int)local_28 * 8);
          FUN_14906fdfc(local_50,(longlong)iVar5 * 0x30 + *(longlong *)(lVar3 + 0xa0),
                        (longlong)iVar5 * 0x20 + *(longlong *)(lVar3 + 0x78));
          iVar5 = iVar5 + 1;
          lVar3 = local_38;
          iVar2 = local_30;
          uVar4 = local_28;
        } while (iVar1 != iVar5);
      }
      uVar6 = (longlong)(int)uVar4;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_28 = (uint)uVar6;
        if ((longlong)iVar2 <= (longlong)uVar6) break;
      } while (*(longlong *)(lVar3 + uVar6 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)local_28 < iVar2));
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14440f5bc FUN_14440f5bc body=69 status=ok
// SIG undefined FUN_14440f5bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f5bc(void)

{
  _DAT_14cbf7700 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7708,1);
  return;
}



// FUNCTION 14440f601 FUN_14440f601 body=69 status=ok
// SIG undefined FUN_14440f601(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14440f601(void)

{
  _DAT_14cbf7718 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014440f643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7720,1);
  return;
}



// FUNCTION 14440f646 FUN_14440f646 body=233 status=ok
// SIG undefined FUN_14440f646(void)

void FUN_14440f646(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  ulonglong uVar6;
  short *psVar7;
  
  if (-1 < param_2) {
    lVar2 = (longlong)*(int *)((undefined8 *)*param_1 + 1);
    if (lVar2 != 0) {
      psVar4 = *(short **)*param_1;
      lVar2 = lVar2 * 0x38;
      do {
        if ((*psVar4 == param_2) && (*(int *)(psVar4 + 2) == param_3)) {
          if (psVar4 != (short *)0x0) goto LAB_14440f694;
          break;
        }
        psVar4 = psVar4 + 0x1c;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    psVar4 = (short *)FUN_149074810();
    *psVar4 = (short)param_2;
    *(int *)(psVar4 + 2) = param_3;
LAB_14440f694:
    psVar7 = psVar4 + 4;
    psVar3 = *(short **)(psVar4 + 0x14);
    psVar5 = psVar3;
    if (psVar3 == (short *)0x0) {
      psVar5 = psVar7;
    }
    iVar1 = *(int *)(psVar4 + 0x18);
    lVar2 = (longlong)iVar1;
    if (lVar2 != 0) {
      uVar6 = 0;
      do {
        if ((*(longlong *)((longlong)psVar5 + uVar6) == param_4) &&
           (*(longlong *)((longlong)psVar5 + uVar6 + 8) == 0)) {
          if ((int)(~uVar6 >> 4) != 0) {
            return;
          }
          break;
        }
        uVar6 = uVar6 + 0x10;
      } while (lVar2 << 4 != uVar6);
    }
    *(uint *)(psVar4 + 0x18) = iVar1 + 1U;
    if (*(uint *)(psVar4 + 0x1a) < iVar1 + 1U) {
      FUN_140df0cf8(psVar7,iVar1);
      psVar3 = *(short **)(psVar4 + 0x14);
    }
    if (psVar3 != (short *)0x0) {
      psVar7 = psVar3;
    }
    *(longlong *)(psVar7 + lVar2 * 8) = param_4;
    psVar7 = psVar7 + lVar2 * 8 + 4;
    psVar7[0] = 0;
    psVar7[1] = 0;
    psVar7[2] = 0;
    psVar7[3] = 0;
  }
  return;
}



// FUNCTION 14440f730 FUN_14440f730 body=6719 status=ok
// SIG undefined FUN_14440f730(void)

void FUN_14440f730(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  undefined4 uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  longlong *plVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong *plVar32;
  undefined1 auStack_198 [32];
  undefined2 **local_178;
  longlong **pplStack_170;
  longlong *local_168;
  undefined8 *local_160;
  uint local_154;
  longlong *local_150;
  longlong local_148;
  undefined8 *local_140;
  int *local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined1 local_109;
  longlong *local_108;
  longlong *plStack_100;
  int local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined1 local_e8 [32];
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined2 *local_b8;
  ulonglong uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong local_98 [11];
  
  local_98[7] = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_178 = (undefined2 **)0x0;
    pplStack_170 = (longlong **)0x0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar5 = FUN_1400439fc(param_1,0);
  if (cVar5 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  FUN_144750a86(param_1,&local_b8,0,0);
  puVar14 = local_b8;
  if ((int)uStack_b0 == 0) {
    puVar14 = &DAT_149dfb77a;
  }
  uVar8 = FUN_1447053be(puVar14);
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar8;
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar31 = param_1[0xe];
  if ((longlong)(int)lVar31 != 0) {
    lVar30 = param_1[0xd];
    lVar23 = 0;
    do {
      cVar5 = *(char *)(lVar30 + 0x1c + lVar23);
      if (*(char *)(lVar30 + 9 + lVar23) == '\0') {
        if (cVar5 != '\0') goto LAB_14440f81b;
      }
      else {
        *(char *)(lVar30 + 8 + lVar23) = cVar5 + '\x01';
LAB_14440f81b:
        *(undefined8 *)(lVar30 + 0x10 + lVar23) = *(undefined8 *)(lVar30 + 0x20 + lVar23);
        *(undefined1 *)(lVar30 + 9 + lVar23) = 0;
        *(undefined1 *)(lVar30 + 0x1c + lVar23) = 0;
        *(undefined8 *)(lVar30 + 0x20 + lVar23) = 0;
      }
      lVar23 = lVar23 + 0x28;
    } while ((longlong)(int)lVar31 * 0x28 != lVar23);
  }
  lVar31 = param_1[0x12];
  if ((longlong)(int)lVar31 != 0) {
    lVar23 = param_1[0x11];
    lVar30 = lVar23 + 0x10;
    lVar27 = 0;
    do {
      if (*(char *)(lVar30 + lVar27) == '\0') {
        *(undefined1 *)(lVar23 + 0x20 + lVar27) = 1;
        *(undefined1 *)(lVar30 + lVar27) = 1;
        lVar15 = *(longlong *)(lVar23 + 0x18 + lVar27);
        if (DAT_14c950c29 == '\x01') {
          if (lVar15 == 0) {
            lVar15 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar15 = *(longlong *)(lVar23 + 0x18 + lVar27);
          }
        }
        *(longlong *)(lVar23 + 0x28 + lVar27) = lVar15;
        *(undefined8 *)(lVar23 + 0x18 + lVar27) = 0;
        if (*(longlong *)(lVar23 + 0x90 + lVar27) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar30 + lVar27 + 0x80) = 0;
        *(undefined8 *)(lVar30 + lVar27 + 0x88) = 0;
      }
      if (*(int *)(lVar23 + 0x40 + lVar27) == 0) {
        lVar15 = lVar23 + 0x38 + lVar27;
        *(undefined1 *)(lVar23 + 0x30 + lVar27) = 0;
        uVar26 = *(uint *)(lVar23 + 0x44 + lVar27);
        iVar21 = 0;
        if ((int)uVar26 < 6) {
          FUN_14907a4de(lVar15);
          iVar21 = *(int *)(lVar23 + 0x40 + lVar27);
          uVar26 = *(uint *)(lVar23 + 0x44 + lVar27);
        }
        *(uint *)(lVar23 + 0x40 + lVar27) = iVar21 + 1U;
        if (uVar26 < iVar21 + 1U) {
          FUN_148182430(lVar15,iVar21);
        }
        lVar3 = *(longlong *)(lVar23 + 0x48 + lVar27);
        *(longlong *)(*(longlong *)(lVar23 + 0x38 + lVar27) + (longlong)iVar21 * 8) = lVar3;
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar23 + 0x40 + lVar27);
        *(uint *)(lVar23 + 0x40 + lVar27) = iVar21 + 1U;
        if (*(uint *)(lVar23 + 0x44 + lVar27) < iVar21 + 1U) {
          FUN_148182430(lVar15,iVar21);
        }
        lVar3 = *(longlong *)(lVar23 + 0x50 + lVar27);
        *(longlong *)(*(longlong *)(lVar23 + 0x38 + lVar27) + (longlong)iVar21 * 8) = lVar3;
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar23 + 0x40 + lVar27);
        *(uint *)(lVar23 + 0x40 + lVar27) = iVar21 + 1U;
        if (*(uint *)(lVar23 + 0x44 + lVar27) < iVar21 + 1U) {
          FUN_148182430(lVar15,iVar21);
        }
        lVar3 = *(longlong *)(lVar23 + 0x58 + lVar27);
        *(longlong *)(*(longlong *)(lVar23 + 0x38 + lVar27) + (longlong)iVar21 * 8) = lVar3;
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar23 + 0x40 + lVar27);
        *(uint *)(lVar23 + 0x40 + lVar27) = iVar21 + 1U;
        if (*(uint *)(lVar23 + 0x44 + lVar27) < iVar21 + 1U) {
          FUN_148182430(lVar15,iVar21);
        }
        lVar3 = *(longlong *)(lVar23 + 0x60 + lVar27);
        *(longlong *)(*(longlong *)(lVar23 + 0x38 + lVar27) + (longlong)iVar21 * 8) = lVar3;
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar23 + 0x40 + lVar27);
        *(uint *)(lVar23 + 0x40 + lVar27) = iVar21 + 1U;
        if (*(uint *)(lVar23 + 0x44 + lVar27) < iVar21 + 1U) {
          FUN_148182430(lVar15,iVar21);
        }
        lVar3 = *(longlong *)(lVar23 + 0x70 + lVar27);
        *(longlong *)(*(longlong *)(lVar23 + 0x38 + lVar27) + (longlong)iVar21 * 8) = lVar3;
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar23 + 0x40 + lVar27);
        *(uint *)(lVar23 + 0x40 + lVar27) = iVar21 + 1U;
        if (*(uint *)(lVar23 + 0x44 + lVar27) < iVar21 + 1U) {
          FUN_148182430(lVar15,iVar21);
        }
        lVar15 = *(longlong *)(lVar23 + 0x68 + lVar27);
        *(longlong *)(*(longlong *)(lVar23 + 0x38 + lVar27) + (longlong)iVar21 * 8) = lVar15;
        if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
          FUN_1456cec3c();
        }
      }
      lVar27 = lVar27 + 0xa0;
    } while ((longlong)(int)lVar31 * 0xa0 != lVar27);
  }
  lVar31 = param_1[0x14];
  if ((longlong)(int)lVar31 != 0) {
    lVar30 = param_1[0x13];
    lVar23 = 0;
    do {
      if (*(int *)(lVar30 + 0x28 + lVar23) == 0) {
        lVar27 = lVar30 + 0x20 + lVar23;
        *(undefined1 *)(lVar30 + 0x18 + lVar23) = 1;
        uVar26 = *(uint *)(lVar30 + 0x2c + lVar23);
        iVar21 = 0;
        if ((int)uVar26 < 6) {
          FUN_14907a4de(lVar27);
          iVar21 = *(int *)(lVar30 + 0x28 + lVar23);
          uVar26 = *(uint *)(lVar30 + 0x2c + lVar23);
        }
        *(uint *)(lVar30 + 0x28 + lVar23) = iVar21 + 1U;
        if (uVar26 < iVar21 + 1U) {
          FUN_148182430(lVar27,iVar21);
        }
        lVar15 = *(longlong *)(lVar30 + 0x30 + lVar23);
        *(longlong *)(*(longlong *)(lVar30 + 0x20 + lVar23) + (longlong)iVar21 * 8) = lVar15;
        if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar30 + 0x28 + lVar23);
        *(uint *)(lVar30 + 0x28 + lVar23) = iVar21 + 1U;
        if (*(uint *)(lVar30 + 0x2c + lVar23) < iVar21 + 1U) {
          FUN_148182430(lVar27,iVar21);
        }
        lVar15 = *(longlong *)(lVar30 + 0x38 + lVar23);
        *(longlong *)(*(longlong *)(lVar30 + 0x20 + lVar23) + (longlong)iVar21 * 8) = lVar15;
        if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar30 + 0x28 + lVar23);
        *(uint *)(lVar30 + 0x28 + lVar23) = iVar21 + 1U;
        if (*(uint *)(lVar30 + 0x2c + lVar23) < iVar21 + 1U) {
          FUN_148182430(lVar27,iVar21);
        }
        lVar15 = *(longlong *)(lVar30 + 0x40 + lVar23);
        *(longlong *)(*(longlong *)(lVar30 + 0x20 + lVar23) + (longlong)iVar21 * 8) = lVar15;
        if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar30 + 0x28 + lVar23);
        *(uint *)(lVar30 + 0x28 + lVar23) = iVar21 + 1U;
        if (*(uint *)(lVar30 + 0x2c + lVar23) < iVar21 + 1U) {
          FUN_148182430(lVar27,iVar21);
        }
        lVar15 = *(longlong *)(lVar30 + 0x48 + lVar23);
        *(longlong *)(*(longlong *)(lVar30 + 0x20 + lVar23) + (longlong)iVar21 * 8) = lVar15;
        if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar30 + 0x28 + lVar23);
        *(uint *)(lVar30 + 0x28 + lVar23) = iVar21 + 1U;
        if (*(uint *)(lVar30 + 0x2c + lVar23) < iVar21 + 1U) {
          FUN_148182430(lVar27,iVar21);
        }
        lVar15 = *(longlong *)(lVar30 + 0x58 + lVar23);
        *(longlong *)(*(longlong *)(lVar30 + 0x20 + lVar23) + (longlong)iVar21 * 8) = lVar15;
        if ((DAT_14c950c29 == '\x01') && (lVar15 != 0)) {
          FUN_1456cec3c();
        }
        iVar21 = *(int *)(lVar30 + 0x28 + lVar23);
        *(uint *)(lVar30 + 0x28 + lVar23) = iVar21 + 1U;
        if (*(uint *)(lVar30 + 0x2c + lVar23) < iVar21 + 1U) {
          FUN_148182430(lVar27,iVar21);
        }
        lVar27 = *(longlong *)(lVar30 + 0x50 + lVar23);
        *(longlong *)(*(longlong *)(lVar30 + 0x20 + lVar23) + (longlong)iVar21 * 8) = lVar27;
        if ((DAT_14c950c29 == '\x01') && (lVar27 != 0)) {
          FUN_1456cec3c();
        }
      }
      lVar23 = lVar23 + 0x80;
    } while ((longlong)(int)lVar31 * 0x80 != lVar23);
  }
  plVar18 = param_1 + 0x15;
  cVar5 = FUN_149070b70(param_1 + 9,plVar18);
  if ((cVar5 == '\0') && (cVar5 = FUN_149070c23(param_1 + 0x11,plVar18), cVar5 == '\0')) {
    bVar6 = FUN_149070cd6(param_1 + 0x13,plVar18);
    bVar6 = bVar6 ^ 1;
  }
  else {
    bVar6 = 0;
  }
  plVar17 = param_1;
  if ((bVar6 == 0) && (DAT_14cbf7680 == 0)) {
    FUN_14282b7b8(param_1);
  }
  for (; plVar17 != (longlong *)0x0; plVar17 = (longlong *)plVar17[4]) {
    if ((*(uint *)(plVar17 + 1) & 0x30) != 0) goto LAB_144410fad;
  }
  if (0 < DAT_14c7649c0) {
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    local_b8 = (undefined2 *)0x0;
    uStack_b0 = 0;
    local_98[6] = 0;
    local_120 = plVar18;
    FUN_149070d82(param_1 + 0x20,&local_b8,(int)param_1[0x1f]);
    FUN_149070334(param_1);
    local_148 = CONCAT44(local_148._4_4_,(int)param_1[0x1f]);
    if ((int)param_1[0x1f] != 0) {
      lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_160 = (undefined8 *)(lVar31 + 0x308);
      local_140 = (undefined8 *)(lVar31 + 0x310);
      local_128 = 0x527800b400;
      local_138 = (int *)(lVar31 + 0xc60);
      local_130 = (longlong *)(lVar31 + 0x2b8);
      iVar21 = 0;
      do {
        FUN_149070558(param_1,iVar21);
        lVar31 = param_1[0x1e];
        lVar30 = (longlong)iVar21;
        iVar25 = *(int *)(param_1[0xf] + 8 + lVar30 * 0x10);
        plVar18 = (longlong *)(param_1[0x20] + lVar30 * 0x58 + 0x30);
        FUN_149071bc8(plVar18,iVar25);
        cVar5 = FUN_144b0f89b(1,0x9b);
        if (((cVar5 != '\0') && (iVar25 != 0)) && ((int)param_1[0x12] != 0)) {
          plVar17 = (longlong *)(lVar31 + lVar30 * 0x690 + 0x620);
          iVar22 = 0;
          local_150 = plVar17;
LAB_14440ff01:
          if ((longlong)(int)param_1[0x12] != 0) {
            lVar23 = (longlong)iVar22 * 0x390 + *plVar17;
            plVar28 = (longlong *)((longlong)iVar22 * 0x30 + *plVar18);
            lVar31 = param_1[0x11];
            lVar30 = (longlong)(int)param_1[0x12] * 0xa0;
            do {
              if ((*(int *)(lVar31 + 0x80) == iVar21) && (*(int *)(lVar31 + 0x84) == iVar22)) {
                if ((lVar31 != 0) && ((*plVar28 == 0 && (0 < *(int *)(lVar23 + 0x28))))) {
                  local_118 = 0;
                  local_168 = (longlong *)FUN_14001cc68(0x148,0x10);
                  FUN_14908dbc0(local_168,lVar23,&local_109);
                  *plVar28 = (longlong)local_168;
                  puVar20 = (undefined8 *)FUN_14001cc68(0x78,0x10);
                  *(undefined4 *)(puVar20 + 1) = 0xffffffff;
                  *(undefined2 *)((longlong)puVar20 + 0xc) = 0x105;
                  *(undefined1 *)((longlong)puVar20 + 0xe) = 0;
                  *(undefined2 *)(puVar20 + 2) = 1;
                  *(undefined1 *)((longlong)puVar20 + 0x12) = 1;
                  *(undefined8 *)((longlong)puVar20 + 0x14) = local_118;
                  *(undefined4 *)(puVar20 + 8) = 0;
                  puVar20[6] = 0;
                  puVar20[7] = 0;
                  puVar20[4] = 0;
                  puVar20[5] = 0;
                  *(undefined1 *)((longlong)puVar20 + 0x44) = 1;
                  *(undefined4 *)(puVar20 + 9) = 0x3fffff;
                  *puVar20 = &PTR_FUN_14baa8a10;
                  puVar20[0xc] = 0;
                  puVar20[0xd] = 0;
                  puVar20[10] = 0;
                  puVar20[0xb] = 0;
                  puVar20[0xe] = lVar23 + 0xa8;
                  plVar28[1] = (longlong)puVar20;
                  puVar20 = (undefined8 *)FUN_14001cc68(0x158,0x10);
                  *(undefined4 *)(puVar20 + 1) = 0xffffffff;
                  *(undefined2 *)((longlong)puVar20 + 0xc) = 0x105;
                  *(undefined1 *)((longlong)puVar20 + 0xe) = 0;
                  *(undefined2 *)(puVar20 + 2) = 1;
                  *(undefined1 *)((longlong)puVar20 + 0x12) = 1;
                  *(undefined8 *)((longlong)puVar20 + 0x14) = local_118;
                  *(undefined4 *)(puVar20 + 8) = 0;
                  puVar20[6] = 0;
                  puVar20[7] = 0;
                  puVar20[4] = 0;
                  puVar20[5] = 0;
                  *(undefined1 *)((longlong)puVar20 + 0x44) = 1;
                  *puVar20 = &PTR_FUN_14baa6180;
                  *(undefined8 *)((longlong)puVar20 + 0x79) = 0;
                  *(undefined8 *)((longlong)puVar20 + 0x81) = 0;
                  puVar20[0xe] = 0;
                  puVar20[0xf] = 0;
                  puVar20[0xc] = 0;
                  puVar20[0xd] = 0;
                  puVar20[10] = 0;
                  puVar20[0xb] = 0;
                  *(undefined8 *)((longlong)puVar20 + 0x99) = 0;
                  *(undefined8 *)((longlong)puVar20 + 0xa1) = 0;
                  puVar20[0x12] = 0;
                  puVar20[0x13] = 0;
                  *(undefined8 *)((longlong)puVar20 + 0x119) = 0;
                  *(undefined8 *)((longlong)puVar20 + 0x121) = 0;
                  puVar20[0x22] = 0;
                  puVar20[0x23] = 0;
                  puVar20[0x20] = 0;
                  puVar20[0x21] = 0;
                  puVar20[0x1e] = 0;
                  puVar20[0x1f] = 0;
                  puVar20[0x1c] = 0;
                  puVar20[0x1d] = 0;
                  puVar20[0x1a] = 0;
                  puVar20[0x1b] = 0;
                  puVar20[0x18] = 0;
                  puVar20[0x19] = 0;
                  puVar20[0x16] = 0;
                  puVar20[0x17] = 0;
                  puVar20[0x26] = lVar23 + 0xb8;
                  *(undefined1 *)(puVar20 + 0x27) = 2;
                  *(undefined4 *)(puVar20 + 9) = 0;
                  puVar20[0x28] = 0;
                  puVar20[0x29] = 0;
                  *(undefined4 *)(puVar20 + 0x2a) = 0;
                  plVar28[2] = (longlong)puVar20;
                  puVar20 = (undefined8 *)FUN_14001cc68(0x98,0x10);
                  *(undefined4 *)(puVar20 + 1) = 0xffffffff;
                  *(undefined2 *)((longlong)puVar20 + 0xc) = 0x105;
                  *(undefined1 *)((longlong)puVar20 + 0xe) = 0;
                  *(undefined2 *)(puVar20 + 2) = 1;
                  *(undefined1 *)((longlong)puVar20 + 0x12) = 1;
                  *(undefined8 *)((longlong)puVar20 + 0x14) = local_118;
                  *(undefined4 *)(puVar20 + 8) = 0;
                  puVar20[6] = 0;
                  puVar20[7] = 0;
                  puVar20[4] = 0;
                  puVar20[5] = 0;
                  *(undefined1 *)((longlong)puVar20 + 0x44) = 1;
                  *puVar20 = &PTR_FUN_14baa88d0;
                  puVar20[0x10] = 0;
                  puVar20[0x11] = 0;
                  puVar20[0xe] = 0;
                  puVar20[0xf] = 0;
                  puVar20[0xc] = 0;
                  puVar20[0xd] = 0;
                  puVar20[10] = 0;
                  puVar20[0xb] = 0;
                  puVar20[0x12] = lVar23 + 0x2f8;
                  *(undefined4 *)(puVar20 + 9) = 0;
                  plVar28[3] = (longlong)puVar20;
                  FUN_140308182(*plVar28,0);
                  FUN_140308182(plVar28[1],0);
                  FUN_140308182(plVar28[2],0);
                  FUN_140308182(plVar28[3],0);
                  plVar28 = (longlong *)*plVar28;
                  plVar17 = local_150;
                  if (plVar28 != (longlong *)0x0) {
                    *(undefined1 *)(plVar28 + 0x13) = *(undefined1 *)(lVar31 + 0x20);
                    if ((longlong)*(int *)(lVar31 + 0x40) != 0) {
                      local_154 = (uint)*(byte *)(lVar31 + 0x30);
                      plVar17 = *(longlong **)(lVar31 + 0x38);
                      plVar32 = plVar17 + *(int *)(lVar31 + 0x40);
                      bVar7 = false;
                      goto LAB_1444101fe;
                    }
                  }
                }
                break;
              }
              lVar31 = lVar31 + 0xa0;
              lVar30 = lVar30 + -0xa0;
            } while (lVar30 != 0);
          }
          goto LAB_14440ff55;
        }
LAB_144410822:
        iVar21 = iVar21 + 1;
      } while (iVar21 != (uint)local_148);
      local_154 = *(uint *)(param_1 + 0x1f);
      if (local_154 != 0) {
        uVar26 = 0;
        do {
          FUN_1490705d2(param_1,uVar26);
          lVar31 = param_1[0x1e];
          lVar30 = (longlong)(int)uVar26;
          iVar21 = *(int *)(param_1[0xf] + 8 + lVar30 * 0x10);
          local_168 = (longlong *)(param_1[0x20] + lVar30 * 0x58 + 0x40);
          FUN_149071c38(local_168,iVar21);
          cVar5 = FUN_144b0f89b(2,0x9b);
          if (((cVar5 != '\0') && (iVar21 != 0)) && ((int)param_1[0x14] != 0)) {
            plVar18 = (longlong *)(lVar31 + lVar30 * 0x690 + 0x630);
            iVar25 = 0;
            local_150 = plVar18;
LAB_1444108ca:
            if ((longlong)(int)param_1[0x14] != 0) {
              lVar31 = param_1[0x13];
              lVar30 = (longlong)(int)param_1[0x14] << 7;
              do {
                if ((*(uint *)(lVar31 + 0x68) == uVar26) && (*(int *)(lVar31 + 0x6c) == iVar25)) {
                  if (lVar31 != 0) {
                    lVar30 = *plVar18;
                    lVar23 = (longlong)iVar25;
                    if (0 < *(int *)(lVar30 + 8 + lVar23 * 0x80)) {
                      local_148 = *local_168;
                      uVar11 = FUN_14001cc68(0x120,0x10);
                      local_b8 = (undefined2 *)0x0;
                      FUN_14908e39a(uVar11,lVar30 + lVar23 * 0x80,&local_108,&local_b8);
                      lVar30 = local_148;
                      *(undefined8 *)(local_148 + lVar23 * 0x18) = uVar11;
                      FUN_140308182(uVar11,0);
                      plVar17 = *(longlong **)(lVar30 + lVar23 * 0x18);
                      plVar18 = local_150;
                      if (plVar17 != (longlong *)0x0) {
                        *(undefined1 *)(plVar17 + 0x13) = 0;
                        if ((longlong)*(int *)(lVar31 + 0x28) != 0) {
                          local_148 = CONCAT44(local_148._4_4_,(uint)*(byte *)(lVar31 + 0x18));
                          plVar32 = *(longlong **)(lVar31 + 0x20);
                          plVar28 = plVar32 + *(int *)(lVar31 + 0x28);
                          bVar7 = false;
                          goto LAB_1444109b4;
                        }
                      }
                    }
                  }
                  break;
                }
                lVar31 = lVar31 + 0x80;
                lVar30 = lVar30 + -0x80;
              } while (lVar30 != 0);
            }
            goto LAB_144410912;
          }
LAB_144410f93:
          uVar26 = uVar26 + 1;
        } while (uVar26 != local_154);
      }
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
    plVar18 = local_120;
  }
LAB_144410fad:
  FUN_149070a3c(param_1);
  cVar5 = FUN_140c62276();
  if (cVar5 != '\0') {
    lVar31 = (**(code **)(*param_1 + 0x180))(param_1);
    uVar26 = DAT_14c760db4;
    if (lVar31 != 0) {
      lVar31 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar26 = (uint)*(byte *)(lVar31 + 0x150);
    }
    FUN_149070066(param_1,&local_b8,*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)uVar26 * 2));
    local_108 = (longlong *)0x0;
    plStack_100 = (longlong *)0x0;
    local_118 = 0x9e00;
    if ((longlong)(int)uStack_b0 != 0) {
      lVar31 = (longlong)(int)uStack_b0 * 0x38;
      puVar14 = local_b8 + 4;
      do {
        plVar17 = *(longlong **)(*plVar18 + (longlong)(short)puVar14[-4] * 0x10);
        if (plVar17 != (longlong *)0x0) {
          local_178 = (undefined2 **)((ulonglong)local_178 & 0xffffffffffffff00);
          pplStack_170 = &local_108;
          (**(code **)(*plVar17 + 0x368))(plVar17,local_e8,puVar14,&local_118);
          puVar16 = local_c8;
          if (local_c8 == (undefined1 *)0x0) {
            puVar16 = local_e8;
          }
          FUN_144717c65(puVar16,local_c0);
          if (local_c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
        puVar14 = puVar14 + 0x1c;
        lVar31 = lVar31 + -0x38;
      } while (lVar31 != 0);
      if (local_108 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_149079a85(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_149070dd8(param_1);
  if ((local_98[7] ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    local_168 = plVar28;
    FUN_1400337aa();
    plVar17 = plVar17 + 1;
    bVar7 = true;
    plVar28 = local_168;
    if (plVar17 == plVar32) break;
LAB_1444101fe:
    if (*plVar17 == 0) {
      plVar17 = plVar17 + 1;
      if (plVar17 == plVar32) {
        plVar17 = local_150;
        if (!bVar7) goto LAB_14440ff55;
        break;
      }
      goto LAB_1444101fe;
    }
  }
  plStack_100 = (longlong *)0x0;
  local_f8 = *(int *)(lVar31 + 0x40);
  lVar30 = (longlong)local_f8;
  pvVar4 = *(void **)(lVar31 + 0x38);
  local_108 = plVar28;
  if (lVar30 == 0) {
    local_f4 = 0;
  }
  else {
    FUN_140b3d586(&plStack_100,local_f8,0);
    memcpy(plStack_100,pvVar4,lVar30 << 3);
  }
  local_f0 = local_154;
  iVar29 = *local_138;
  if (DAT_14c86a9fc == 0) {
    if (iVar29 != 2) {
      if (iVar29 != 1) goto LAB_1444102b1;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_1444102b6;
      goto LAB_1444102e5;
    }
  }
  else {
LAB_1444102b1:
    if (iVar29 != 0x10) {
LAB_1444102e5:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*local_138 == 2)) goto LAB_1444102b6;
        if (*local_138 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_1444102b6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar13 = (uint *)*local_160;
        if (puVar13 != (uint *)0x0) goto LAB_1444104c0;
        do {
          uVar26 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar26 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar26 | 1;
            __tlregdtor(&LAB_144411f32);
          }
          puVar12 = (undefined4 *)*local_140;
          *local_140 = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *local_160 = puVar12;
          FUN_140217a48();
          puVar13 = (uint *)*local_160;
LAB_1444104c0:
          uVar19 = *(longlong *)(puVar13 + 0x10) + 7;
          uVar26 = puVar13[0x12];
          while( true ) {
            puVar20 = (undefined8 *)(uVar19 & 0xfffffffffffffff8);
            if (puVar20 + 0x19 <= puVar13 + 0x4000) {
              *(undefined8 **)(puVar13 + 0x10) = puVar20 + 0x19;
              puVar13[0x12] = uVar26 + 1;
              FUN_1447247dc(puVar20,0);
              *puVar20 = &PTR_FUN_14ba9b260;
              puVar20[0x15] = local_108;
              puVar20[0x16] = 0;
              lVar31 = (longlong)local_f8;
              *(int *)(puVar20 + 0x17) = local_f8;
              if (lVar31 == 0) {
                *(undefined4 *)((longlong)puVar20 + 0xbc) = 0;
              }
              else {
                local_168 = plStack_100;
                FUN_140b3d586(puVar20 + 0x16,local_f8,0);
                memcpy((void *)puVar20[0x16],local_168,lVar31 << 3);
              }
              *(uint *)(puVar20 + 0x18) = local_f0;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar26 = DAT_14c7585c8 >> 10 & 3;
                iVar29 = 0;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar26 < 2) {
                  uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar26];
                  iVar29 = 0;
                }
                else {
                  uVar19 = 2;
                }
              }
              else {
                iVar29 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar19 = 5;
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
              lVar31 = *local_130;
              if (lVar31 == 0) {
                if ((char)uVar19 == '\x06') {
                  uVar19 = 1;
                }
                uVar11 = 0;
              }
              else {
                if ((char)uVar19 == '\x06') {
                  uVar19 = *(ulonglong *)(lVar31 + 0x38) >> 0x3b;
                }
                uVar11 = *(undefined8 *)(lVar31 + 0x30);
              }
              puVar20[0xf] = uVar11;
              puVar20[0x10] = (uVar19 << 0x3b) + local_128 | 0xc000000000000000;
              *(int *)((longlong)puVar20 + 0x1c) = iVar29;
              if (puVar20 == (undefined8 *)0x0) {
                local_b8 = (undefined2 *)CONCAT71(local_b8._1_7_,1);
                FUN_1447439e4(0,&local_b8);
              }
              else {
                LOCK();
                *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                UNLOCK();
                local_b8 = (undefined2 *)CONCAT71(local_b8._1_7_,1);
                FUN_1447439e4(puVar20,&local_b8);
                LOCK();
                piVar1 = (int *)(puVar20 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar20)(puVar20,1);
                }
              }
              goto LAB_144410428;
            }
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar24 = *puVar13;
            *puVar13 = *puVar13 + uVar26 + 1;
            UNLOCK();
            if ((uVar24 ^ uVar26) != 0xffffffff) break;
            puVar13 = (uint *)*local_160;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *local_160 = puVar13;
            uVar19 = (longlong)puVar13 + 0x5f;
            uVar26 = 0;
          }
        } while( true );
      }
      local_b8 = (undefined2 *)0x0;
      local_a8 = (longlong *)0x0;
      plVar17 = (longlong *)FUN_14001cc68(0x28,8);
      *plVar17 = (longlong)&PTR_LAB_14ba9b200;
      plVar17[1] = (longlong)local_108;
      plVar17[2] = 0;
      lVar31 = (longlong)local_f8;
      *(int *)(plVar17 + 3) = local_f8;
      local_a8 = plVar17;
      if (lVar31 == 0) {
        *(undefined4 *)((longlong)plVar17 + 0x1c) = 0;
      }
      else {
        local_168 = plStack_100;
        FUN_140b3d586(plVar17 + 2,local_f8,0);
        memcpy((void *)plVar17[2],local_168,lVar31 << 3);
      }
      *(uint *)(plVar17 + 4) = local_f0;
      if (plVar17 != (longlong *)&DAT_fffffffffffffff8) {
        local_b8 = (undefined2 *)&LAB_1444159be;
      }
      local_178 = &local_b8;
      FUN_14005a792(&DAT_14ca9a440,L"HairStrandsCardsTextureCommand",&DAT_14cbf7c64);
      if (local_b8 != (undefined2 *)0x0) {
        plVar17 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar17 = local_98;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      goto LAB_144410428;
    }
  }
LAB_1444102b6:
  FUN_144415792(&local_108);
LAB_144410428:
  plVar17 = local_150;
  if (plStack_100 != (longlong *)0x0) {
    FUN_1400020a8();
    plVar17 = local_150;
  }
LAB_14440ff55:
  iVar22 = iVar22 + 1;
  if (iVar22 == iVar25) goto LAB_144410822;
  goto LAB_14440ff01;
  while( true ) {
    FUN_1400337aa();
    plVar32 = plVar32 + 1;
    bVar7 = true;
    plVar18 = local_150;
    if (plVar32 == plVar28) break;
LAB_1444109b4:
    if (*plVar32 == 0) {
      plVar32 = plVar32 + 1;
      if (plVar32 == plVar28) {
        if (!bVar7) goto LAB_144410912;
        break;
      }
      goto LAB_1444109b4;
    }
  }
  plStack_100 = (longlong *)0x0;
  local_f8 = *(int *)(lVar31 + 0x28);
  lVar30 = (longlong)local_f8;
  pvVar4 = *(void **)(lVar31 + 0x20);
  local_108 = plVar17;
  if (lVar30 == 0) {
    local_f4 = 0;
  }
  else {
    FUN_140b3d586(&plStack_100,local_f8,0);
    memcpy(plStack_100,pvVar4,lVar30 << 3);
  }
  local_f0 = (uint)local_148;
  iVar22 = *local_138;
  if (DAT_14c86a9fc == 0) {
    if (iVar22 != 2) {
      if (iVar22 != 1) goto LAB_144410a5f;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_144410a64;
      goto LAB_144410a91;
    }
  }
  else {
LAB_144410a5f:
    if (iVar22 != 0x10) {
LAB_144410a91:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*local_138 == 2)) goto LAB_144410a64;
        if (*local_138 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_144410a64;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar13 = (uint *)*local_160;
        if (puVar13 != (uint *)0x0) goto LAB_144410c5a;
        do {
          uVar24 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar24 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar24 | 1;
            __tlregdtor(&LAB_144411f32);
          }
          puVar12 = (undefined4 *)*local_140;
          *local_140 = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *local_160 = puVar12;
          FUN_140217a48();
          puVar13 = (uint *)*local_160;
LAB_144410c5a:
          uVar19 = *(longlong *)(puVar13 + 0x10) + 7;
          uVar24 = puVar13[0x12];
          while( true ) {
            puVar20 = (undefined8 *)(uVar19 & 0xfffffffffffffff8);
            if (puVar20 + 0x19 <= puVar13 + 0x4000) {
              *(undefined8 **)(puVar13 + 0x10) = puVar20 + 0x19;
              puVar13[0x12] = uVar24 + 1;
              FUN_1447247dc(puVar20,0);
              plVar18 = plStack_100;
              *puVar20 = &PTR_FUN_14ba9b2c0;
              puVar20[0x15] = local_108;
              puVar20[0x16] = 0;
              lVar31 = (longlong)local_f8;
              *(int *)(puVar20 + 0x17) = local_f8;
              if (lVar31 == 0) {
                *(undefined4 *)((longlong)puVar20 + 0xbc) = 0;
              }
              else {
                FUN_140b3d586(puVar20 + 0x16,local_f8,0);
                memcpy((void *)puVar20[0x16],plVar18,lVar31 << 3);
              }
              *(uint *)(puVar20 + 0x18) = local_f0;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar24 = DAT_14c7585c8 >> 10 & 3;
                iVar22 = 0;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
                  uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
                  iVar22 = 0;
                }
                else {
                  uVar19 = 2;
                }
              }
              else {
                iVar22 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar19 = 5;
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
              lVar31 = *local_130;
              if (lVar31 == 0) {
                if ((char)uVar19 == '\x06') {
                  uVar19 = 1;
                }
                uVar11 = 0;
              }
              else {
                if ((char)uVar19 == '\x06') {
                  uVar19 = *(ulonglong *)(lVar31 + 0x38) >> 0x3b;
                }
                uVar11 = *(undefined8 *)(lVar31 + 0x30);
              }
              puVar20[0xf] = uVar11;
              puVar20[0x10] = (uVar19 << 0x3b) + local_128 | 0xc000000000000000;
              *(int *)((longlong)puVar20 + 0x1c) = iVar22;
              if (puVar20 == (undefined8 *)0x0) {
                local_b8 = (undefined2 *)CONCAT71(local_b8._1_7_,1);
                FUN_1447439e4(0,&local_b8);
              }
              else {
                LOCK();
                *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                UNLOCK();
                local_b8 = (undefined2 *)CONCAT71(local_b8._1_7_,1);
                FUN_1447439e4(puVar20,&local_b8);
                LOCK();
                piVar1 = (int *)(puVar20 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar20)(puVar20,1);
                }
              }
              goto LAB_144410bc2;
            }
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar24 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar24) != 0xffffffff) break;
            puVar13 = (uint *)*local_160;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *local_160 = puVar13;
            uVar19 = (longlong)puVar13 + 0x5f;
            uVar24 = 0;
          }
        } while( true );
      }
      local_b8 = (undefined2 *)0x0;
      local_a8 = (longlong *)0x0;
      plVar17 = (longlong *)FUN_14001cc68(0x28,8);
      plVar18 = plStack_100;
      *plVar17 = (longlong)&PTR_LAB_14ba9b2a0;
      plVar17[1] = (longlong)local_108;
      plVar17[2] = 0;
      lVar31 = (longlong)local_f8;
      *(int *)(plVar17 + 3) = local_f8;
      local_a8 = plVar17;
      if (lVar31 == 0) {
        *(undefined4 *)((longlong)plVar17 + 0x1c) = 0;
      }
      else {
        FUN_140b3d586(plVar17 + 2,local_f8,0);
        memcpy((void *)plVar17[2],plVar18,lVar31 << 3);
      }
      *(uint *)(plVar17 + 4) = local_f0;
      if (plVar17 != (longlong *)&DAT_fffffffffffffff8) {
        local_b8 = (undefined2 *)&LAB_144415f3c;
      }
      local_178 = &local_b8;
      FUN_14005a792(&DAT_14ca9a440,L"HairStrandsCardsTextureCommand",&DAT_14cbf7c68);
      if (local_b8 != (undefined2 *)0x0) {
        plVar18 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar18 = local_98;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      goto LAB_144410bc2;
    }
  }
LAB_144410a64:
  FUN_144415d10(&local_108);
LAB_144410bc2:
  plVar18 = local_150;
  if (plStack_100 != (longlong *)0x0) {
    FUN_1400020a8();
    plVar18 = local_150;
  }
LAB_144410912:
  iVar25 = iVar25 + 1;
  if (iVar25 == iVar21) goto LAB_144410f93;
  goto LAB_1444108ca;
}



// FUNCTION 144411170 FUN_144411170 body=55 status=ok
// SIG undefined FUN_144411170(void)

void FUN_144411170(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7730 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7730 = FUN_14171c317(FUN_14667861e,uVar1,L"EHairCardsSourceType");
  }
  return;
}



// FUNCTION 1444111a7 FUN_1444111a7 body=55 status=ok
// SIG undefined FUN_1444111a7(void)

void FUN_1444111a7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7748 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7748 = FUN_14171c317(FUN_14667864d,uVar1,L"EHairCardsGuideType");
  }
  return;
}



// FUNCTION 1444111de FUN_1444111de body=55 status=ok
// SIG undefined FUN_1444111de(void)

void FUN_1444111de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7760 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7760 = FUN_14171c317(FUN_14667867c,uVar1,L"EHairTextureLayout");
  }
  return;
}



// FUNCTION 144411215 FUN_144411215 body=55 status=ok
// SIG undefined FUN_144411215(void)

void FUN_144411215(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf77f0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf77f0 = FUN_14171c317(FUN_1466788ed,uVar1,L"EHairInterpolationQuality");
  }
  return;
}



// FUNCTION 14441124c FUN_14441124c body=55 status=ok
// SIG undefined FUN_14441124c(void)

void FUN_14441124c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7808 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7808 = FUN_14171c317(FUN_14667891c,uVar1,L"EHairInterpolationWeight");
  }
  return;
}



// FUNCTION 144411283 FUN_144411283 body=55 status=ok
// SIG undefined FUN_144411283(void)

void FUN_144411283(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7820 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7820 = FUN_14171c317(FUN_14667894b,uVar1,L"EGroomGeometryType");
  }
  return;
}



// FUNCTION 1444112ba FUN_1444112ba body=55 status=ok
// SIG undefined FUN_1444112ba(void)

void FUN_1444112ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7838 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7838 = FUN_14171c317(FUN_14667897a,uVar1,L"EGroomBindingType");
  }
  return;
}



// FUNCTION 1444112f1 FUN_1444112f1 body=55 status=ok
// SIG undefined FUN_1444112f1(void)

void FUN_1444112f1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7850 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7850 = FUN_14171c317(FUN_1466789a9,uVar1,L"EGroomOverrideType");
  }
  return;
}



// FUNCTION 144411328 FUN_144411328 body=55 status=ok
// SIG undefined FUN_144411328(void)

void FUN_144411328(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7868 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7868 = FUN_14171c317(FUN_1466789d8,uVar1,L"EGroomGuideType");
  }
  return;
}



// FUNCTION 14441135f FUN_14441135f body=55 status=ok
// SIG undefined FUN_14441135f(void)

void FUN_14441135f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7880 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7880 = FUN_14171c317(FUN_1466785ef,uVar1,L"EGroomLODMode");
  }
  return;
}



// FUNCTION 144411396 FUN_144411396 body=55 status=ok
// SIG undefined FUN_144411396(void)

void FUN_144411396(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7940 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7940 = FUN_14171c317(FUN_146678d98,uVar1,L"EGroomNiagaraSolvers");
  }
  return;
}



// FUNCTION 1444113cd FUN_1444113cd body=55 status=ok
// SIG undefined FUN_1444113cd(void)

void FUN_1444113cd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7958 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7958 = FUN_14171c317(FUN_146678dc7,uVar1,L"EGroomStrandsSize");
  }
  return;
}



// FUNCTION 144411404 FUN_144411404 body=55 status=ok
// SIG undefined FUN_144411404(void)

void FUN_144411404(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7970 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7970 = FUN_14171c317(FUN_146678279,uVar1,L"EGroomInterpolationType");
  }
  return;
}



// FUNCTION 14441143b FUN_14441143b body=55 status=ok
// SIG undefined FUN_14441143b(void)

void FUN_14441143b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7b38 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7b38 = FUN_14171c317(FUN_146679828,uVar1,L"EGroomBindingMeshType");
  }
  return;
}



// FUNCTION 144411472 FUN_144411472 body=55 status=ok
// SIG undefined FUN_144411472(void)

void FUN_144411472(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7b50 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7b50 = FUN_14171c317(FUN_146679859,uVar1,L"EGroomBindingAsyncProperties");
  }
  return;
}



// FUNCTION 1444114aa FUN_1444114aa body=839 status=ok
// SIG undefined FUN_1444114aa(void)

void FUN_1444114aa(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  undefined2 **local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined2 *local_70;
  int local_68;
  undefined1 local_59;
  undefined2 *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_88 = (undefined2 **)0x0;
    uStack_80 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_70);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  FUN_144750a86(param_1,&local_70,0,0);
  iVar9 = local_68 + -1;
  if (local_68 == 0) {
    iVar9 = 0;
  }
  puVar8 = local_70;
  if (local_68 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  uVar4 = FUN_1447053be(puVar8,iVar9 * 2);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar4;
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = param_1;
  if (param_1[7] != 0) {
    FUN_1400337aa();
  }
  for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[4]) {
    if ((*(uint *)(plVar7 + 1) & 0x30) != 0) goto LAB_14441179c;
  }
  if ((char)param_1[0x16] == '\x01') {
    FUN_1416cf400(param_1,1);
    if ((longlong)(int)param_1[0x15] != 0) {
      lVar10 = param_1[0x14];
      local_78 = (longlong)(int)param_1[0x15] * 0x30 + lVar10;
      do {
        puVar5 = (undefined8 *)FUN_1490735f6(param_1 + 0xf);
        local_70 = (undefined2 *)0x0;
        *puVar5 = 0;
        if (0 < *(int *)(lVar10 + 8)) {
          plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
          local_88 = &local_70;
          FUN_1490910b0(plVar7,lVar10,0,&local_49);
          *puVar5 = plVar7;
          lVar13 = plVar7[1];
          if ((longlong)(int)lVar13 != 0) {
            lVar2 = *plVar7;
            lVar12 = 0;
            do {
              FUN_140308182(*(undefined8 *)(lVar2 + lVar12),0);
              lVar12 = lVar12 + 8;
            } while ((longlong)(int)lVar13 * 8 != lVar12);
          }
        }
        puVar5[1] = 0;
        cVar3 = FUN_144b0f89b(0,0x9b);
        if ((cVar3 != '\0') && (0 < *(int *)(lVar10 + 0x18))) {
          plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
          local_88 = &local_70;
          FUN_1490910b0(plVar7,lVar10 + 0x10,1,&local_49);
          puVar5[1] = plVar7;
          lVar13 = plVar7[1];
          if ((longlong)(int)lVar13 != 0) {
            lVar2 = *plVar7;
            lVar12 = 0;
            do {
              FUN_140308182(*(undefined8 *)(lVar2 + lVar12),0);
              lVar12 = lVar12 + 8;
            } while ((longlong)(int)lVar13 * 8 != lVar12);
          }
        }
        cVar3 = FUN_144b0f89b(1,0x9b);
        if (cVar3 != '\0') {
          iVar9 = *(int *)(lVar10 + 0x28);
          plVar7 = puVar5 + 2;
          FUN_149073632(plVar7,iVar9);
          if (iVar9 != 0) {
            iVar11 = 0;
            do {
              lVar13 = (longlong)iVar11;
              *(undefined8 *)(*plVar7 + lVar13 * 8) = 0;
              if (0 < *(int *)(*(longlong *)(lVar10 + 0x20) + 8 + lVar13 * 0x10)) {
                uVar6 = FUN_14001cc68(0x18,0x10);
                local_58 = (undefined2 *)0x0;
                local_88 = &local_58;
                FUN_1490910b0(uVar6,lVar13 * 0x10 + *(longlong *)(lVar10 + 0x20),2,&local_59);
                *(undefined8 *)(*plVar7 + lVar13 * 8) = uVar6;
                plVar1 = *(longlong **)(*plVar7 + lVar13 * 8);
                lVar13 = (longlong)(int)plVar1[1];
                if (lVar13 != 0) {
                  lVar2 = *plVar1;
                  lVar12 = 0;
                  do {
                    FUN_140308182(*(undefined8 *)(lVar2 + lVar12),0);
                    lVar12 = lVar12 + 8;
                  } while (lVar13 * 8 != lVar12);
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 != iVar9);
          }
        }
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != local_78);
    }
  }
LAB_14441179c:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444117f2 FUN_1444117f2 body=280 status=ok
// SIG undefined FUN_1444117f2(void)

ulonglong FUN_1444117f2(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar2 = DAT_14c9d23d8;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != (longlong *)0x0 && param_2 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar7 = 1;
    }
    if (0 < *(int *)(lVar2 + uVar7 * 4)) {
      if ((*(char *)(param_2 + 0x30) == '\0') && (*(longlong *)(param_2 + 0x48) != 0)) {
        iVar1 = *(int *)(param_2 + 0x80);
        if ((longlong)iVar1 != 0) {
          lVar2 = *(longlong *)(param_2 + 0x78);
          lVar9 = 0;
          do {
            if (((*(longlong *)(lVar2 + lVar9) != 0) &&
                (iVar4 = (**(code **)(*param_1 + 0x3c0))(param_1),
                iVar4 != *(int *)(*(longlong *)(lVar2 + lVar9) + 8))) ||
               ((*(longlong *)(lVar2 + 8 + lVar9) != 0 &&
                ((iVar4 = (**(code **)(*param_1 + 0x3c0))(param_1),
                 iVar4 != *(int *)(*(longlong *)(lVar2 + 8 + lVar9) + 8) &&
                 (cVar3 = FUN_144b0f89b(0,0x9b), cVar3 != '\0')))))) goto LAB_14441186b;
            lVar9 = lVar9 + 0x20;
          } while ((longlong)iVar1 * 0x20 != lVar9);
        }
      }
      else {
LAB_14441186b:
        uVar8 = 0;
      }
    }
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14441190a FUN_14441190a body=270 status=ok
// SIG undefined FUN_14441190a(void)

undefined8 FUN_14441190a(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  lVar3 = DAT_14c9d23d8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0 && param_2 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar7 = 1;
    }
    if (0 < *(int *)(lVar3 + uVar7 * 4)) {
      if ((*(char *)(param_2 + 0x30) == '\x01') && (*(longlong *)(param_2 + 0x58) != 0)) {
        local_38 = 0;
        uStack_30 = 0;
        FUN_149063220(param_1,0,&local_38);
        bVar2 = (int)uStack_30 < 2;
        bVar8 = (int)uStack_30 != 0;
        FUN_14596f385(local_38);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        if (bVar8 && bVar2) goto LAB_1444119dd;
      }
      uVar6 = 0;
      goto LAB_1444119df;
    }
  }
LAB_1444119dd:
  uVar6 = 1;
LAB_1444119df:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144411a1a FUN_144411a1a body=397 status=ok
// SIG undefined FUN_144411a1a(void)

undefined8 FUN_144411a1a(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  lVar9 = DAT_14c9d23d8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (longlong *)0x0 && param_2 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar7 = 1;
    }
    if (0 < *(int *)(lVar9 + uVar7 * 4)) {
      if ((*(longlong *)(param_2 + 0x38) != 0) &&
         (*(char *)(*(longlong *)(param_2 + 0x38) + 0x120) == '\x01')) {
        (**(code **)(*param_1 + 0x1c8))(param_1,&local_48);
        (**(code **)(**(longlong **)(param_2 + 0x38) + 0x1c8))
                  (*(longlong **)(param_2 + 0x38),&local_58);
        uVar6 = 0;
        if ((local_48 != local_58) || (local_40 != local_50)) goto LAB_144411b6b;
        iVar1 = (int)param_1[0x1f];
        if (iVar1 == *(int *)(param_2 + 0x70)) {
          if (iVar1 != 0) {
            iVar8 = 0;
            do {
              lVar10 = (longlong)iVar8 * 0x690;
              iVar2 = *(int *)(param_1[0x1e] + 8 + lVar10);
              lVar9 = (longlong)iVar8 * 0x10;
              if ((iVar2 != 0) && (iVar2 != *(int *)(*(longlong *)(param_2 + 0x68) + 8 + lVar9)))
              goto LAB_144411b69;
              cVar3 = FUN_144411ba8(param_1,iVar8);
              if (cVar3 != '\0') {
                iVar2 = *(int *)(param_1[0x1e] + 0x248 + lVar10);
                if ((iVar2 != 0) && (iVar2 != *(int *)(*(longlong *)(param_2 + 0x68) + lVar9)))
                goto LAB_144411b69;
              }
              iVar8 = iVar8 + 1;
            } while (iVar1 != iVar8);
          }
          goto LAB_144411b65;
        }
      }
LAB_144411b69:
      uVar6 = 0;
      goto LAB_144411b6b;
    }
  }
LAB_144411b65:
  uVar6 = 1;
LAB_144411b6b:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144411ba8 FUN_144411ba8 body=107 status=ok
// SIG undefined FUN_144411ba8(void)

undefined8 FUN_144411ba8(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_144b0f89b(0,0x9b);
  if (cVar2 != '\0') {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)param_2 * 0x10);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)param_2 * 0x10);
      lVar4 = 0;
      do {
        if ((*(char *)(lVar1 + 0x14 + lVar4) == '\x01') && (*(char *)(lVar1 + 0x15 + lVar4) == '\0')
           ) {
          return 1;
        }
        lVar4 = lVar4 + 0x1c;
      } while (lVar3 * 0x1c != lVar4);
    }
  }
  return 0;
}



// FUNCTION 144411c14 FUN_144411c14 body=241 status=ok
// SIG undefined FUN_144411c14(void)

ulonglong FUN_144411c14(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar2 = DAT_14c9d23d8;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    if (0 < *(int *)(lVar2 + uVar6 * 4)) {
      if ((*(char *)(param_1 + 0xb0) == '\x01') && (*(longlong *)(param_1 + 0x38) != 0)) {
        iVar1 = *(int *)(param_1 + 0x70);
        iVar7 = 0;
        if ((longlong)iVar1 != 0) {
          lVar2 = *(longlong *)(param_1 + 0x68);
          lVar9 = 0;
          do {
            if (*(int *)(lVar2 + 8 + lVar9) == 0) goto LAB_144411cda;
            cVar3 = FUN_144411ba8(*(undefined8 *)(param_1 + 0x38),iVar7);
            if (((cVar3 != '\0') && (*(int *)(lVar2 + lVar9) == 0)) &&
               (cVar3 = FUN_144b0f89b(0,0x9b), cVar3 != '\0')) goto LAB_144411cda;
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar9);
          goto LAB_144411cdc;
        }
      }
LAB_144411cda:
      uVar8 = 0;
    }
  }
LAB_144411cdc:
  return uVar8 & 0xffffffff;
}



// FUNCTION 144411d05 FUN_144411d05 body=69 status=ok
// SIG undefined FUN_144411d05(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144411d05(void)

{
  _DAT_14cbf7c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144411d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7c28,1);
  return;
}



// FUNCTION 144411f5a FUN_144411f5a body=1625 status=ok
// SIG undefined FUN_144411f5a(void)

char FUN_144411f5a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  code *local_b8;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar19 = DAT_14cbf9550 == '\0';
    if (bVar19) {
      DAT_14cbf9550 = '\x01';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_1447d2058(&DAT_14cbf9550);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cbf9548) {
      FUN_149079ab4(&DAT_14cbf9548,param_1,&DAT_14cbf7c48);
LAB_1444120af:
      bVar19 = false;
    }
    else {
      bVar19 = true;
      if (DAT_14cbf9558 != 0) {
        FUN_149079b4e(&DAT_14cbf9548,param_1,&DAT_14cbf7c48);
        goto LAB_1444120af;
      }
    }
    LOCK();
    bVar20 = DAT_14cbf9550 == '\x01';
    cVar7 = DAT_14cbf9550;
    if (bVar20) {
      DAT_14cbf9550 = '\0';
      cVar7 = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      cVar7 = FUN_14008cdb0(&DAT_14cbf9550);
    }
    if (!bVar19) goto LAB_1444121d6;
  }
  pcVar4 = (code *)*param_1;
  plVar14 = (longlong *)param_1[2];
  param_1[2] = 0;
  local_88 = *(undefined4 *)(param_1 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_98 = *(undefined4 *)(param_1 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_90 = *(undefined4 *)(param_1 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (pcVar4 != (code *)0x0) {
    *param_1 = 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar5 + 0xc60);
  local_b8 = pcVar4;
  local_a8 = plVar14;
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_14441205a;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_14441205f;
      goto LAB_1444120d1;
    }
LAB_14441205f:
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_98;
    }
    uVar11 = (**(code **)(*plVar14 + 8))(plVar14);
    cVar7 = (*pcVar4)(uVar11,&DAT_14ca85100);
  }
  else {
LAB_14441205a:
    if (iVar16 == 0x10) goto LAB_14441205f;
LAB_1444120d1:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar5 + 0xc60), iVar16 == 2))
      goto LAB_14441205f;
      if (iVar16 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_14441205f;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_14441229f;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_144411f32);
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
LAB_14441229f:
        puVar17 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar15 = (uint *)(puVar17 + 0x1e);
        uVar8 = puVar13[0x12];
        if (puVar15 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar8 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar8) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar17 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar17 + 0x1e);
          uVar8 = 0;
          if (puVar15 <= puVar13 + 0x4000) {
            uVar8 = 1;
            goto LAB_14441231f;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14441231f:
      *(uint **)(puVar13 + 0x10) = puVar15;
      puVar13[0x12] = uVar8;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ba9aff0;
      puVar17[0x16] = local_b8;
      puVar17[0x18] = local_a8;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(puVar17 + 0x1c) = local_88;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_84;
      *(undefined4 *)(puVar17 + 0x1d) = uStack_80;
      *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_7c;
      *(undefined4 *)(puVar17 + 0x1a) = local_98;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_94;
      *(undefined4 *)(puVar17 + 0x1b) = uStack_90;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_8c;
      if (local_b8 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        iVar16 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
          iVar16 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar6 = 1;
        if ((char)uVar18 != '\x06') {
          uVar6 = uVar18;
        }
        uVar18 = uVar6;
        uVar11 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar16;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          cVar7 = (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
      *local_68 = (longlong)&PTR_LAB_14ba9afd0;
      local_68[2] = (longlong)pcVar4;
      local_68[4] = (longlong)plVar14;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(local_68 + 8) = local_88;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_84;
      *(undefined4 *)(local_68 + 9) = uStack_80;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_7c;
      *(undefined4 *)(local_68 + 6) = local_98;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_94;
      *(undefined4 *)(local_68 + 7) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_8c;
      if (pcVar4 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (local_68 != (longlong *)&DAT_fffffffffffffff0) {
        local_78[0] = FUN_149079be8;
      }
      local_c8 = local_78;
      cVar7 = FUN_14005a792(&DAT_14ca9a440,L"ReleaseHairResourceCommand",&DAT_14cbf7c48);
      if (local_78[0] != (code *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        cVar7 = (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  if (local_b8 != (code *)0x0) {
    plVar14 = (longlong *)&local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar14 = local_a8;
    }
    cVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_1444121d6:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar7;
}



// FUNCTION 1444125b4 FUN_1444125b4 body=282 status=ok
// SIG undefined FUN_1444125b4(void)

undefined8 * FUN_1444125b4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144411f32);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1444126ce FUN_1444126ce body=148 status=ok
// SIG undefined FUN_1444126ce(void)

void FUN_1444126ce(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144412756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144412762 FUN_144412762 body=1625 status=ok
// SIG undefined FUN_144412762(void)

char FUN_144412762(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  code *local_b8;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar19 = DAT_14cbf9550 == '\0';
    if (bVar19) {
      DAT_14cbf9550 = '\x01';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_1447d2058(&DAT_14cbf9550);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cbf9548) {
      FUN_149079ab4(&DAT_14cbf9548,param_1,&DAT_14cbf7c4c);
LAB_1444128b7:
      bVar19 = false;
    }
    else {
      bVar19 = true;
      if (DAT_14cbf9558 != 0) {
        FUN_149079b4e(&DAT_14cbf9548,param_1,&DAT_14cbf7c4c);
        goto LAB_1444128b7;
      }
    }
    LOCK();
    bVar20 = DAT_14cbf9550 == '\x01';
    cVar7 = DAT_14cbf9550;
    if (bVar20) {
      DAT_14cbf9550 = '\0';
      cVar7 = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      cVar7 = FUN_14008cdb0(&DAT_14cbf9550);
    }
    if (!bVar19) goto LAB_1444129de;
  }
  pcVar4 = (code *)*param_1;
  plVar14 = (longlong *)param_1[2];
  param_1[2] = 0;
  local_88 = *(undefined4 *)(param_1 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_98 = *(undefined4 *)(param_1 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_90 = *(undefined4 *)(param_1 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (pcVar4 != (code *)0x0) {
    *param_1 = 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar5 + 0xc60);
  local_b8 = pcVar4;
  local_a8 = plVar14;
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_144412862;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_144412867;
      goto LAB_1444128d9;
    }
LAB_144412867:
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_98;
    }
    uVar11 = (**(code **)(*plVar14 + 8))(plVar14);
    cVar7 = (*pcVar4)(uVar11,&DAT_14ca85100);
  }
  else {
LAB_144412862:
    if (iVar16 == 0x10) goto LAB_144412867;
LAB_1444128d9:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar5 + 0xc60), iVar16 == 2))
      goto LAB_144412867;
      if (iVar16 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_144412867;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_144412aa7;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_144411f32);
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
LAB_144412aa7:
        puVar17 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar15 = (uint *)(puVar17 + 0x1e);
        uVar8 = puVar13[0x12];
        if (puVar15 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar8 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar8) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar17 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar17 + 0x1e);
          uVar8 = 0;
          if (puVar15 <= puVar13 + 0x4000) {
            uVar8 = 1;
            goto LAB_144412b27;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_144412b27:
      *(uint **)(puVar13 + 0x10) = puVar15;
      puVar13[0x12] = uVar8;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ba9b040;
      puVar17[0x16] = local_b8;
      puVar17[0x18] = local_a8;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(puVar17 + 0x1c) = local_88;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_84;
      *(undefined4 *)(puVar17 + 0x1d) = uStack_80;
      *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_7c;
      *(undefined4 *)(puVar17 + 0x1a) = local_98;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_94;
      *(undefined4 *)(puVar17 + 0x1b) = uStack_90;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_8c;
      if (local_b8 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        iVar16 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
          iVar16 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar6 = 1;
        if ((char)uVar18 != '\x06') {
          uVar6 = uVar18;
        }
        uVar18 = uVar6;
        uVar11 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar16;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          cVar7 = (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
      *local_68 = (longlong)&PTR_LAB_14ba9b020;
      local_68[2] = (longlong)pcVar4;
      local_68[4] = (longlong)plVar14;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(local_68 + 8) = local_88;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_84;
      *(undefined4 *)(local_68 + 9) = uStack_80;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_7c;
      *(undefined4 *)(local_68 + 6) = local_98;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_94;
      *(undefined4 *)(local_68 + 7) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_8c;
      if (pcVar4 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (local_68 != (longlong *)&DAT_fffffffffffffff0) {
        local_78[0] = FUN_149079cf4;
      }
      local_c8 = local_78;
      cVar7 = FUN_14005a792(&DAT_14ca9a440,L"ReleaseHairResourceCommand",&DAT_14cbf7c4c);
      if (local_78[0] != (code *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        cVar7 = (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  if (local_b8 != (code *)0x0) {
    plVar14 = (longlong *)&local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar14 = local_a8;
    }
    cVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_1444129de:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar7;
}



// FUNCTION 144412dbc FUN_144412dbc body=282 status=ok
// SIG undefined FUN_144412dbc(void)

undefined8 * FUN_144412dbc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144411f32);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144412ed6 FUN_144412ed6 body=148 status=ok
// SIG undefined FUN_144412ed6(void)

void FUN_144412ed6(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144412f5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144412f6a FUN_144412f6a body=1625 status=ok
// SIG undefined FUN_144412f6a(void)

char FUN_144412f6a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  code *local_b8;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar19 = DAT_14cbf9550 == '\0';
    if (bVar19) {
      DAT_14cbf9550 = '\x01';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_1447d2058(&DAT_14cbf9550);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cbf9548) {
      FUN_149079ab4(&DAT_14cbf9548,param_1,&DAT_14cbf7c50);
LAB_1444130bf:
      bVar19 = false;
    }
    else {
      bVar19 = true;
      if (DAT_14cbf9558 != 0) {
        FUN_149079b4e(&DAT_14cbf9548,param_1,&DAT_14cbf7c50);
        goto LAB_1444130bf;
      }
    }
    LOCK();
    bVar20 = DAT_14cbf9550 == '\x01';
    cVar7 = DAT_14cbf9550;
    if (bVar20) {
      DAT_14cbf9550 = '\0';
      cVar7 = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      cVar7 = FUN_14008cdb0(&DAT_14cbf9550);
    }
    if (!bVar19) goto LAB_1444131e6;
  }
  pcVar4 = (code *)*param_1;
  plVar14 = (longlong *)param_1[2];
  param_1[2] = 0;
  local_88 = *(undefined4 *)(param_1 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_98 = *(undefined4 *)(param_1 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_90 = *(undefined4 *)(param_1 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (pcVar4 != (code *)0x0) {
    *param_1 = 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar5 + 0xc60);
  local_b8 = pcVar4;
  local_a8 = plVar14;
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_14441306a;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_14441306f;
      goto LAB_1444130e1;
    }
LAB_14441306f:
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_98;
    }
    uVar11 = (**(code **)(*plVar14 + 8))(plVar14);
    cVar7 = (*pcVar4)(uVar11,&DAT_14ca85100);
  }
  else {
LAB_14441306a:
    if (iVar16 == 0x10) goto LAB_14441306f;
LAB_1444130e1:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar5 + 0xc60), iVar16 == 2))
      goto LAB_14441306f;
      if (iVar16 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_14441306f;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_1444132af;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_144411f32);
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
LAB_1444132af:
        puVar17 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar15 = (uint *)(puVar17 + 0x1e);
        uVar8 = puVar13[0x12];
        if (puVar15 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar8 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar8) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar17 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar17 + 0x1e);
          uVar8 = 0;
          if (puVar15 <= puVar13 + 0x4000) {
            uVar8 = 1;
            goto LAB_14441332f;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14441332f:
      *(uint **)(puVar13 + 0x10) = puVar15;
      puVar13[0x12] = uVar8;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ba9b090;
      puVar17[0x16] = local_b8;
      puVar17[0x18] = local_a8;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(puVar17 + 0x1c) = local_88;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_84;
      *(undefined4 *)(puVar17 + 0x1d) = uStack_80;
      *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_7c;
      *(undefined4 *)(puVar17 + 0x1a) = local_98;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_94;
      *(undefined4 *)(puVar17 + 0x1b) = uStack_90;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_8c;
      if (local_b8 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        iVar16 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
          iVar16 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar6 = 1;
        if ((char)uVar18 != '\x06') {
          uVar6 = uVar18;
        }
        uVar18 = uVar6;
        uVar11 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar16;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          cVar7 = (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
      *local_68 = (longlong)&PTR_LAB_14ba9b070;
      local_68[2] = (longlong)pcVar4;
      local_68[4] = (longlong)plVar14;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(local_68 + 8) = local_88;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_84;
      *(undefined4 *)(local_68 + 9) = uStack_80;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_7c;
      *(undefined4 *)(local_68 + 6) = local_98;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_94;
      *(undefined4 *)(local_68 + 7) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_8c;
      if (pcVar4 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (local_68 != (longlong *)&DAT_fffffffffffffff0) {
        local_78[0] = FUN_149079e00;
      }
      local_c8 = local_78;
      cVar7 = FUN_14005a792(&DAT_14ca9a440,L"ReleaseHairResourceCommand",&DAT_14cbf7c50);
      if (local_78[0] != (code *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        cVar7 = (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  if (local_b8 != (code *)0x0) {
    plVar14 = (longlong *)&local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar14 = local_a8;
    }
    cVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_1444131e6:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar7;
}



// FUNCTION 1444135c4 FUN_1444135c4 body=282 status=ok
// SIG undefined FUN_1444135c4(void)

undefined8 * FUN_1444135c4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144411f32);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1444136de FUN_1444136de body=148 status=ok
// SIG undefined FUN_1444136de(void)

void FUN_1444136de(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144413766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144413772 FUN_144413772 body=1625 status=ok
// SIG undefined FUN_144413772(void)

char FUN_144413772(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  code *local_b8;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar19 = DAT_14cbf9550 == '\0';
    if (bVar19) {
      DAT_14cbf9550 = '\x01';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_1447d2058(&DAT_14cbf9550);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cbf9548) {
      FUN_149079ab4(&DAT_14cbf9548,param_1,&DAT_14cbf7c54);
LAB_1444138c7:
      bVar19 = false;
    }
    else {
      bVar19 = true;
      if (DAT_14cbf9558 != 0) {
        FUN_149079b4e(&DAT_14cbf9548,param_1,&DAT_14cbf7c54);
        goto LAB_1444138c7;
      }
    }
    LOCK();
    bVar20 = DAT_14cbf9550 == '\x01';
    cVar7 = DAT_14cbf9550;
    if (bVar20) {
      DAT_14cbf9550 = '\0';
      cVar7 = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      cVar7 = FUN_14008cdb0(&DAT_14cbf9550);
    }
    if (!bVar19) goto LAB_1444139ee;
  }
  pcVar4 = (code *)*param_1;
  plVar14 = (longlong *)param_1[2];
  param_1[2] = 0;
  local_88 = *(undefined4 *)(param_1 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_98 = *(undefined4 *)(param_1 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_90 = *(undefined4 *)(param_1 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (pcVar4 != (code *)0x0) {
    *param_1 = 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar5 + 0xc60);
  local_b8 = pcVar4;
  local_a8 = plVar14;
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_144413872;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_144413877;
      goto LAB_1444138e9;
    }
LAB_144413877:
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_98;
    }
    uVar11 = (**(code **)(*plVar14 + 8))(plVar14);
    cVar7 = (*pcVar4)(uVar11,&DAT_14ca85100);
  }
  else {
LAB_144413872:
    if (iVar16 == 0x10) goto LAB_144413877;
LAB_1444138e9:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar5 + 0xc60), iVar16 == 2))
      goto LAB_144413877;
      if (iVar16 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_144413877;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_144413ab7;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_144411f32);
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
LAB_144413ab7:
        puVar17 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar15 = (uint *)(puVar17 + 0x1e);
        uVar8 = puVar13[0x12];
        if (puVar15 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar8 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar8) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar17 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar17 + 0x1e);
          uVar8 = 0;
          if (puVar15 <= puVar13 + 0x4000) {
            uVar8 = 1;
            goto LAB_144413b37;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_144413b37:
      *(uint **)(puVar13 + 0x10) = puVar15;
      puVar13[0x12] = uVar8;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ba9b0e0;
      puVar17[0x16] = local_b8;
      puVar17[0x18] = local_a8;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(puVar17 + 0x1c) = local_88;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_84;
      *(undefined4 *)(puVar17 + 0x1d) = uStack_80;
      *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_7c;
      *(undefined4 *)(puVar17 + 0x1a) = local_98;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_94;
      *(undefined4 *)(puVar17 + 0x1b) = uStack_90;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_8c;
      if (local_b8 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        iVar16 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
          iVar16 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar6 = 1;
        if ((char)uVar18 != '\x06') {
          uVar6 = uVar18;
        }
        uVar18 = uVar6;
        uVar11 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar16;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          cVar7 = (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
      *local_68 = (longlong)&PTR_LAB_14ba9b0c0;
      local_68[2] = (longlong)pcVar4;
      local_68[4] = (longlong)plVar14;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(local_68 + 8) = local_88;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_84;
      *(undefined4 *)(local_68 + 9) = uStack_80;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_7c;
      *(undefined4 *)(local_68 + 6) = local_98;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_94;
      *(undefined4 *)(local_68 + 7) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_8c;
      if (pcVar4 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (local_68 != (longlong *)&DAT_fffffffffffffff0) {
        local_78[0] = FUN_149079f0c;
      }
      local_c8 = local_78;
      cVar7 = FUN_14005a792(&DAT_14ca9a440,L"ReleaseHairResourceCommand",&DAT_14cbf7c54);
      if (local_78[0] != (code *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        cVar7 = (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  if (local_b8 != (code *)0x0) {
    plVar14 = (longlong *)&local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar14 = local_a8;
    }
    cVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_1444139ee:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar7;
}



// FUNCTION 144413dcc FUN_144413dcc body=282 status=ok
// SIG undefined FUN_144413dcc(void)

undefined8 * FUN_144413dcc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144411f32);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144413ee6 FUN_144413ee6 body=148 status=ok
// SIG undefined FUN_144413ee6(void)

void FUN_144413ee6(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144413f6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144413f7a FUN_144413f7a body=1625 status=ok
// SIG undefined FUN_144413f7a(void)

char FUN_144413f7a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  code *local_b8;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar19 = DAT_14cbf9550 == '\0';
    if (bVar19) {
      DAT_14cbf9550 = '\x01';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_1447d2058(&DAT_14cbf9550);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cbf9548) {
      FUN_149079ab4(&DAT_14cbf9548,param_1,&DAT_14cbf7c58);
LAB_1444140cf:
      bVar19 = false;
    }
    else {
      bVar19 = true;
      if (DAT_14cbf9558 != 0) {
        FUN_149079b4e(&DAT_14cbf9548,param_1,&DAT_14cbf7c58);
        goto LAB_1444140cf;
      }
    }
    LOCK();
    bVar20 = DAT_14cbf9550 == '\x01';
    cVar7 = DAT_14cbf9550;
    if (bVar20) {
      DAT_14cbf9550 = '\0';
      cVar7 = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      cVar7 = FUN_14008cdb0(&DAT_14cbf9550);
    }
    if (!bVar19) goto LAB_1444141f6;
  }
  pcVar4 = (code *)*param_1;
  plVar14 = (longlong *)param_1[2];
  param_1[2] = 0;
  local_88 = *(undefined4 *)(param_1 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_98 = *(undefined4 *)(param_1 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_90 = *(undefined4 *)(param_1 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (pcVar4 != (code *)0x0) {
    *param_1 = 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar5 + 0xc60);
  local_b8 = pcVar4;
  local_a8 = plVar14;
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_14441407a;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_14441407f;
      goto LAB_1444140f1;
    }
LAB_14441407f:
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_98;
    }
    uVar11 = (**(code **)(*plVar14 + 8))(plVar14);
    cVar7 = (*pcVar4)(uVar11,&DAT_14ca85100);
  }
  else {
LAB_14441407a:
    if (iVar16 == 0x10) goto LAB_14441407f;
LAB_1444140f1:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar5 + 0xc60), iVar16 == 2))
      goto LAB_14441407f;
      if (iVar16 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_14441407f;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_1444142bf;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_144411f32);
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
LAB_1444142bf:
        puVar17 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar15 = (uint *)(puVar17 + 0x1e);
        uVar8 = puVar13[0x12];
        if (puVar15 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar8 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar8) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar17 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar17 + 0x1e);
          uVar8 = 0;
          if (puVar15 <= puVar13 + 0x4000) {
            uVar8 = 1;
            goto LAB_14441433f;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14441433f:
      *(uint **)(puVar13 + 0x10) = puVar15;
      puVar13[0x12] = uVar8;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ba9b130;
      puVar17[0x16] = local_b8;
      puVar17[0x18] = local_a8;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(puVar17 + 0x1c) = local_88;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_84;
      *(undefined4 *)(puVar17 + 0x1d) = uStack_80;
      *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_7c;
      *(undefined4 *)(puVar17 + 0x1a) = local_98;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_94;
      *(undefined4 *)(puVar17 + 0x1b) = uStack_90;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_8c;
      if (local_b8 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        iVar16 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
          iVar16 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar6 = 1;
        if ((char)uVar18 != '\x06') {
          uVar6 = uVar18;
        }
        uVar18 = uVar6;
        uVar11 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar16;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          cVar7 = (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
      *local_68 = (longlong)&PTR_LAB_14ba9b110;
      local_68[2] = (longlong)pcVar4;
      local_68[4] = (longlong)plVar14;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(local_68 + 8) = local_88;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_84;
      *(undefined4 *)(local_68 + 9) = uStack_80;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_7c;
      *(undefined4 *)(local_68 + 6) = local_98;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_94;
      *(undefined4 *)(local_68 + 7) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_8c;
      if (pcVar4 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (local_68 != (longlong *)&DAT_fffffffffffffff0) {
        local_78[0] = FUN_14907a018;
      }
      local_c8 = local_78;
      cVar7 = FUN_14005a792(&DAT_14ca9a440,L"ReleaseHairResourceCommand",&DAT_14cbf7c58);
      if (local_78[0] != (code *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        cVar7 = (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  if (local_b8 != (code *)0x0) {
    plVar14 = (longlong *)&local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar14 = local_a8;
    }
    cVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_1444141f6:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar7;
}



// FUNCTION 1444145d4 FUN_1444145d4 body=282 status=ok
// SIG undefined FUN_1444145d4(void)

undefined8 * FUN_1444145d4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144411f32);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1444146ee FUN_1444146ee body=148 status=ok
// SIG undefined FUN_1444146ee(void)

void FUN_1444146ee(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144414776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144414782 FUN_144414782 body=1625 status=ok
// SIG undefined FUN_144414782(void)

char FUN_144414782(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  code *local_b8;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar19 = DAT_14cbf9550 == '\0';
    if (bVar19) {
      DAT_14cbf9550 = '\x01';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_1447d2058(&DAT_14cbf9550);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cbf9548) {
      FUN_149079ab4(&DAT_14cbf9548,param_1,&DAT_14cbf7c5c);
LAB_1444148d7:
      bVar19 = false;
    }
    else {
      bVar19 = true;
      if (DAT_14cbf9558 != 0) {
        FUN_149079b4e(&DAT_14cbf9548,param_1,&DAT_14cbf7c5c);
        goto LAB_1444148d7;
      }
    }
    LOCK();
    bVar20 = DAT_14cbf9550 == '\x01';
    cVar7 = DAT_14cbf9550;
    if (bVar20) {
      DAT_14cbf9550 = '\0';
      cVar7 = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      cVar7 = FUN_14008cdb0(&DAT_14cbf9550);
    }
    if (!bVar19) goto LAB_1444149fe;
  }
  pcVar4 = (code *)*param_1;
  plVar14 = (longlong *)param_1[2];
  param_1[2] = 0;
  local_88 = *(undefined4 *)(param_1 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_98 = *(undefined4 *)(param_1 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_90 = *(undefined4 *)(param_1 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (pcVar4 != (code *)0x0) {
    *param_1 = 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar5 + 0xc60);
  local_b8 = pcVar4;
  local_a8 = plVar14;
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_144414882;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_144414887;
      goto LAB_1444148f9;
    }
LAB_144414887:
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_98;
    }
    uVar11 = (**(code **)(*plVar14 + 8))(plVar14);
    cVar7 = (*pcVar4)(uVar11,&DAT_14ca85100);
  }
  else {
LAB_144414882:
    if (iVar16 == 0x10) goto LAB_144414887;
LAB_1444148f9:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar5 + 0xc60), iVar16 == 2))
      goto LAB_144414887;
      if (iVar16 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_144414887;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_144414ac7;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_144411f32);
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
LAB_144414ac7:
        puVar17 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar15 = (uint *)(puVar17 + 0x1e);
        uVar8 = puVar13[0x12];
        if (puVar15 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar8 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar8) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar17 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar17 + 0x1e);
          uVar8 = 0;
          if (puVar15 <= puVar13 + 0x4000) {
            uVar8 = 1;
            goto LAB_144414b47;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_144414b47:
      *(uint **)(puVar13 + 0x10) = puVar15;
      puVar13[0x12] = uVar8;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ba9b180;
      puVar17[0x16] = local_b8;
      puVar17[0x18] = local_a8;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(puVar17 + 0x1c) = local_88;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_84;
      *(undefined4 *)(puVar17 + 0x1d) = uStack_80;
      *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_7c;
      *(undefined4 *)(puVar17 + 0x1a) = local_98;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_94;
      *(undefined4 *)(puVar17 + 0x1b) = uStack_90;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_8c;
      if (local_b8 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        iVar16 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
          iVar16 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar6 = 1;
        if ((char)uVar18 != '\x06') {
          uVar6 = uVar18;
        }
        uVar18 = uVar6;
        uVar11 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar16;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          cVar7 = (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
      *local_68 = (longlong)&PTR_LAB_14ba9b160;
      local_68[2] = (longlong)pcVar4;
      local_68[4] = (longlong)plVar14;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(local_68 + 8) = local_88;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_84;
      *(undefined4 *)(local_68 + 9) = uStack_80;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_7c;
      *(undefined4 *)(local_68 + 6) = local_98;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_94;
      *(undefined4 *)(local_68 + 7) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_8c;
      if (pcVar4 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (local_68 != (longlong *)&DAT_fffffffffffffff0) {
        local_78[0] = FUN_14907a124;
      }
      local_c8 = local_78;
      cVar7 = FUN_14005a792(&DAT_14ca9a440,L"ReleaseHairResourceCommand",&DAT_14cbf7c5c);
      if (local_78[0] != (code *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        cVar7 = (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  if (local_b8 != (code *)0x0) {
    plVar14 = (longlong *)&local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar14 = local_a8;
    }
    cVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_1444149fe:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar7;
}



// FUNCTION 144414ddc FUN_144414ddc body=282 status=ok
// SIG undefined FUN_144414ddc(void)

undefined8 * FUN_144414ddc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144411f32);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144414ef6 FUN_144414ef6 body=148 status=ok
// SIG undefined FUN_144414ef6(void)

void FUN_144414ef6(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144414f7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144414f8a FUN_144414f8a body=1625 status=ok
// SIG undefined FUN_144414f8a(void)

char FUN_144414f8a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  code *local_b8;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar19 = DAT_14cbf9550 == '\0';
    if (bVar19) {
      DAT_14cbf9550 = '\x01';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_1447d2058(&DAT_14cbf9550);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cbf9548) {
      FUN_149079ab4(&DAT_14cbf9548,param_1,&DAT_14cbf7c60);
LAB_1444150df:
      bVar19 = false;
    }
    else {
      bVar19 = true;
      if (DAT_14cbf9558 != 0) {
        FUN_149079b4e(&DAT_14cbf9548,param_1,&DAT_14cbf7c60);
        goto LAB_1444150df;
      }
    }
    LOCK();
    bVar20 = DAT_14cbf9550 == '\x01';
    cVar7 = DAT_14cbf9550;
    if (bVar20) {
      DAT_14cbf9550 = '\0';
      cVar7 = '\x01';
    }
    UNLOCK();
    if (!bVar20) {
      cVar7 = FUN_14008cdb0(&DAT_14cbf9550);
    }
    if (!bVar19) goto LAB_144415206;
  }
  pcVar4 = (code *)*param_1;
  plVar14 = (longlong *)param_1[2];
  param_1[2] = 0;
  local_88 = *(undefined4 *)(param_1 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_80 = *(undefined4 *)(param_1 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_98 = *(undefined4 *)(param_1 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_90 = *(undefined4 *)(param_1 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  if (pcVar4 != (code *)0x0) {
    *param_1 = 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar5 + 0xc60);
  local_b8 = pcVar4;
  local_a8 = plVar14;
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_14441508a;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_14441508f;
      goto LAB_144415101;
    }
LAB_14441508f:
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_98;
    }
    uVar11 = (**(code **)(*plVar14 + 8))(plVar14);
    cVar7 = (*pcVar4)(uVar11,&DAT_14ca85100);
  }
  else {
LAB_14441508a:
    if (iVar16 == 0x10) goto LAB_14441508f;
LAB_144415101:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar5 + 0xc60), iVar16 == 2))
      goto LAB_14441508f;
      if (iVar16 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_14441508f;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_1444152cf;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_144411f32);
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
LAB_1444152cf:
        puVar17 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 0xfU & 0xfffffffffffffff0);
        puVar15 = (uint *)(puVar17 + 0x1e);
        uVar8 = puVar13[0x12];
        if (puVar15 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar8 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar8) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar17 = (undefined8 *)((longlong)puVar13 + 0x67U & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar17 + 0x1e);
          uVar8 = 0;
          if (puVar15 <= puVar13 + 0x4000) {
            uVar8 = 1;
            goto LAB_14441534f;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14441534f:
      *(uint **)(puVar13 + 0x10) = puVar15;
      puVar13[0x12] = uVar8;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ba9b1d0;
      puVar17[0x16] = local_b8;
      puVar17[0x18] = local_a8;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(puVar17 + 0x1c) = local_88;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_84;
      *(undefined4 *)(puVar17 + 0x1d) = uStack_80;
      *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_7c;
      *(undefined4 *)(puVar17 + 0x1a) = local_98;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_94;
      *(undefined4 *)(puVar17 + 0x1b) = uStack_90;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_8c;
      if (local_b8 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        iVar16 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
          iVar16 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar6 = 1;
        if ((char)uVar18 != '\x06') {
          uVar6 = uVar18;
        }
        uVar18 = uVar6;
        uVar11 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar16;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        cVar7 = FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          cVar7 = (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
      *local_68 = (longlong)&PTR_LAB_14ba9b1b0;
      local_68[2] = (longlong)pcVar4;
      local_68[4] = (longlong)plVar14;
      local_a8 = (longlong *)0x0;
      *(undefined4 *)(local_68 + 8) = local_88;
      *(undefined4 *)((longlong)local_68 + 0x44) = uStack_84;
      *(undefined4 *)(local_68 + 9) = uStack_80;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_7c;
      *(undefined4 *)(local_68 + 6) = local_98;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_94;
      *(undefined4 *)(local_68 + 7) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_8c;
      if (pcVar4 != (code *)0x0) {
        local_b8 = (code *)0x0;
      }
      if (local_68 != (longlong *)&DAT_fffffffffffffff0) {
        local_78[0] = FUN_14907a230;
      }
      local_c8 = local_78;
      cVar7 = FUN_14005a792(&DAT_14ca9a440,L"ReleaseHairResourceCommand",&DAT_14cbf7c60);
      if (local_78[0] != (code *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        cVar7 = (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  if (local_b8 != (code *)0x0) {
    plVar14 = (longlong *)&local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar14 = local_a8;
    }
    cVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_144415206:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar7;
}



// FUNCTION 1444155e4 FUN_1444155e4 body=282 status=ok
// SIG undefined FUN_1444155e4(void)

undefined8 * FUN_1444155e4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_144411f32);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1444156fe FUN_1444156fe body=148 status=ok
// SIG undefined FUN_1444156fe(void)

void FUN_1444156fe(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144415786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144415792 FUN_144415792 body=555 status=ok
// SIG undefined FUN_144415792(void)

void FUN_144415792(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar7 = DAT_14cbf7c40;
  if (DAT_14cbf7c40 != 0) {
    LOCK();
    *(int *)(DAT_14cbf7c40 + 8) = *(int *)(DAT_14cbf7c40 + 8) + 1;
    UNLOCK();
  }
  iVar4 = (int)param_1[2];
  FUN_14907a914(*param_1 + 0x128,iVar4);
  FUN_14907a9cc(*param_1 + 0x118,iVar4);
  *(int *)(*param_1 + 0x138) = (int)param_1[3];
  if (iVar4 != 0) {
    iVar11 = 0;
    do {
      lVar12 = (longlong)iVar11;
      lVar5 = *(longlong *)(param_1[1] + lVar12 * 8);
      if (lVar5 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x128) + 0x10);
        lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x128) + lVar12 * 8);
        if (lVar6 != lVar5) {
          *(longlong *)(*(longlong *)(*param_1 + 0x128) + lVar12 * 8) = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          if (lVar6 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar6 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar6 + 8);
              LOCK();
              uVar2 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar2 >> 0x1e & 1) == 0) {
                bVar3 = *(byte *)(lVar6 + 0xd);
                plVar8 = (longlong *)FUN_14001cc68(0x10,8);
                plVar8[1] = lVar6;
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c8;
                if ((bVar3 & 2) == 0) {
                  do {
                    *plVar8 = (longlong)plVar10;
                    LOCK();
                    bVar13 = plVar10 != DAT_14ca843c0;
                    plVar9 = plVar8;
                    if (bVar13) {
                      plVar10 = DAT_14ca843c0;
                      plVar9 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar9;
                    UNLOCK();
                  } while (bVar13);
                }
                else {
                  do {
                    *plVar8 = (longlong)plVar9;
                    LOCK();
                    bVar13 = plVar9 != DAT_14ca843c8;
                    plVar10 = plVar8;
                    if (bVar13) {
                      plVar9 = DAT_14ca843c8;
                      plVar10 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar10;
                    UNLOCK();
                  } while (bVar13);
                }
              }
            }
          }
        }
      }
      lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x118) + lVar12 * 8);
      if (lVar5 != lVar7) {
        *(longlong *)(*(longlong *)(*param_1 + 0x118) + lVar12 * 8) = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar5 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar5 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar5 + 0xd);
              plVar8 = (longlong *)FUN_14001cc68(0x10,8);
              plVar8[1] = lVar5;
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar8 = (longlong)plVar10;
                  LOCK();
                  bVar13 = plVar10 != DAT_14ca843c0;
                  plVar9 = plVar8;
                  if (bVar13) {
                    plVar10 = DAT_14ca843c0;
                    plVar9 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar9;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar8 = (longlong)plVar9;
                  LOCK();
                  bVar13 = plVar9 != DAT_14ca843c8;
                  plVar10 = plVar8;
                  if (bVar13) {
                    plVar9 = DAT_14ca843c8;
                    plVar10 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar10;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar4);
  }
  if (lVar7 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar7 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar13 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar13) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar13) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  return;
}



// FUNCTION 1444159ce FUN_1444159ce body=29 status=ok
// SIG undefined FUN_1444159ce(void)

void FUN_1444159ce(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444159ec FUN_1444159ec body=57 status=ok
// SIG undefined FUN_1444159ec(void)

undefined8 * FUN_1444159ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba9b200;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


