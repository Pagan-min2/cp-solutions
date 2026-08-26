from collections import Counter

t = int(input())

for _ in range(t):
    n = int(input())
    cards = list(map(int, input().split()))
    
    counts = Counter(cards)
    most_common_card, max_freq = counts.most_common(1)[0]
    
    other_cards_count = n - max_freq
    
    if max_freq <= other_cards_count + 1:
        print(sum(cards))
    else:
        sum_other_cards = sum(cards) - (max_freq * most_common_card)
        max_damage = sum_other_cards + ((other_cards_count + 2) * most_common_card)
        print(max_damage)