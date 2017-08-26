#include <cstdint>
#include <cstdio>
#include <iostream>

namespace pk
{
    template <int N> void print(const char(&data)[N])
    {
        auto _data = (uint64_t*) u"∢∢∢∢††††    帺ꂈ袈⊈衠悈袈≠衞⠨蠨≞塀袈墈≀⢠䀨⠨⊠⢠䀨⠨∨衞頨袈≞袈ꂈ袈⊈㩞㨺㨺≞劚剒塒∾墈぀塀⊈⠨⠨⠨⊠࿨⇧邈ꂠ袘⊈衞袈袈≞衠悈⠨∨衞袈庈⊒衠悈塀⊈衞帨袂≞㪠㨺㨺∺袈袈袈≞袈袈庈∺ဟ⇨袈㩞衞⊈袈庈㨺∺芠㩒⠮⊠";
        for(int i = 0; i < N; i += 56)
        {
            uint64_t character = 0;
            for(int d = 49; d--;) character += [&](int b) mutable{ return (uint64_t) ((char) (*(const uint64_t*) &data[(N * (b / 7) + i) / 7] - _data[1] >> (7 - (b % 7) << 3) << 7 - (b % 7))) << ((b / 7) << 3); }(d);

            auto tranlation = "ABCDEFGHIJKLMNOPQRSTUVWXYZ "[([&](){int it = 3; while(it < 30 && character != _data[it++] - _data[0]) {}  return it - 4; }())];
            printf("%c", tranlation);
        }
        printf("\n");
    }
}

int main()
{
    pk::print(
        " !!  !!  !!!!!!  !!      !!       !!!!           !!   !!  !!!!   !!!!!   !!      !!!!   "
        " !!  !!  !!      !!      !!      !!  !!          !!   !! !!  !!  !!  !!  !!      !! !!  "
        " !!  !!  !!      !!      !!      !!  !!          !!   !! !!  !!  !!  !!  !!      !!  !! "
        " !!!!!!  !!!!    !!      !!      !!  !!          !! ! !! !!  !!  !!!!!   !!      !!  !! "
        " !!  !!  !!      !!      !!      !!  !!          !!!!!!! !!  !!  !!!!    !!      !!  !! "
        " !!  !!  !!      !!      !!      !!  !!          !!! !!! !!  !!  !! !!   !!      !! !!  "
        " !!  !!  !!!!!!  !!!!!!  !!!!!!   !!!!           !!   !!  !!!!   !!  !!  !!!!!!  !!!!   ");

    std::cin.get();
    return 0;
}