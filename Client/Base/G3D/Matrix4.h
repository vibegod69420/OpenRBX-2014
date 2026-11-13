#pragma once

// Row-major 4x4 with a 16-byte row stride; the matched helper copies the first
// column out into three floats.
void copyColumn0(float* dst, const float* matrix);
