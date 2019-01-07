import java.util.BitSet;

public class criba_eratostenes {
	static final int MAX = 1000000;
	public static void main(String[] args) {
		BitSet bitSet = iniciar_criba();
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				System.out.printf("[%3d%6s]",
						(i * 10) + j,
						bitSet.get((i * 10) + j) ? " ** " : ""
					);
			}
			System.out.println();
		}
	}

	public static BitSet iniciar_criba() {
		BitSet primos = new BitSet(MAX + 1);
		primos.set(2, MAX + 2);
		for (int i = 2; i <= MAX; i++) {
			if (primos.get(i)) {
				for (int j = i + i; j <= MAX; j += i) {
					primos.set(j, false);
				}
			}
		}
		return primos;
	}
}