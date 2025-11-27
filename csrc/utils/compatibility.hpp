#pragma once

#include <cuda.h>

// `torch::kFloat8_e4m3fn` is supported since PyTorch 2.1
#define DG_FP8_COMPATIBLE true

// `cuTensorMapEncodeTiled` is supported since CUDA Driver API 12.1
#define DG_TENSORMAP_COMPATIBLE true