static const bool __boost = [] (){
    std::cin.tie (nullptr);
    std::cout.tie (nullptr);
    return std::ios_base::sync_with_stdio (false);
}();

// Custom memory pool for dynamic allocation using a pre-allocated buffer
const size_t BUFFER_SIZE = 0x30000000;
alignas (std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;

void *
operator new (size_t size){
    constexpr std::size_t alignment = alignof (std::max_align_t);
    size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
    size_t total_size = size + padding;
    char *aligned_ptr = &buffer[buffer_pos + padding];
    buffer_pos += total_size;
    return aligned_ptr;
}

void operator delete (void * /*unused*/, unsigned long /*unused*/) noexcept {}
void operator delete (void * /*unused*/) noexcept {}
void operator delete[] (void * /*unused*/) noexcept {}
void operator delete[] (void * /*unused*/, size_t /*unused*/) noexcept {}