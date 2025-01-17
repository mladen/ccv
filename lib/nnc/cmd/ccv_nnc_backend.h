/**
 * @addtogroup available_backends Available Backends
 * @{
 */
enum {
	CCV_NNC_NO_BACKEND = 0,
	CCV_NNC_BACKEND_CPU_OPT = 0x46deb194,
	CCV_NNC_BACKEND_CPU_REF = 0x3d9883e5,
	CCV_NNC_BACKEND_GPU_CUBLAS = 0x9b8cfed,
	CCV_NNC_BACKEND_GPU_CUDNN = 0x854b679a,
	CCV_NNC_BACKEND_GPU_NCCL = 0x7afed9c7,
	CCV_NNC_BACKEND_GPU_REF = 0x5f19790a,
	CCV_NNC_BACKEND_MPS = 0xb2f325e2,
	CCV_NNC_BACKEND_COUNT = 7,
};
/** @} */
