class Solution:
    MOD = 10**9 + 7
    def productQueries(self, n: int, queries: list[list[int]]) -> list[int]:
        powers = []
        power = 1

        while n > 0:
            if n & 1:
                powers.append(power)
            power <<= 1
            n >>= 1

        result = []
        for left, right in queries:
            p = 1
            for j in range(left, right + 1):
                p = (p * powers[j]) % self.MOD
            result.append(p)

        return result
