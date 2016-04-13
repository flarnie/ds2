//
// Copyright (c) 2014-present, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the University of Illinois/NCSA Open
// Source License found in the LICENSE file in the root directory of this
// source tree. An additional grant of patent rights can be found in the
// PATENTS file in the same directory.
//

#ifndef __DebugServer2_Architecture_ARM_SoftwareSingleStep_h
#define __DebugServer2_Architecture_ARM_SoftwareSingleStep_h

#include "DebugServer2/Architecture/CPUState.h"
#include "DebugServer2/Target/Process.h"

namespace ds2 {
namespace Architecture {
namespace ARM {

ErrorCode PrepareThumbSoftwareSingleStep(Target::Process *process, uint32_t pc,
                                         Architecture::CPUState const &state,
                                         bool &link, uint32_t &nextPC,
                                         uint32_t &nextPCSize,
                                         uint32_t &branchPC,
                                         uint32_t &branchPCSize);

ErrorCode PrepareARMSoftwareSingleStep(Target::Process *process, uint32_t pc,
                                       Architecture::CPUState const &state,
                                       bool &link, uint32_t &nextPC,
                                       uint32_t &nextPCSize, uint32_t &branchPC,
                                       uint32_t &branchPCSize);
}
}
}

#endif // !__DebugServer2_Architecture_ARM_SoftwareSingleStep_h
