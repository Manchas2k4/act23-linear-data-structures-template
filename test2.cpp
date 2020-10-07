/* TEST 17 */
		ASSERT_TRUE(!strcmp("42", saq.convertInfixToPostfix("42").c_str()));
		std::cout << "PASSED.\nTest 18...";

		/* TEST 18 */
		ASSERT_TRUE(!strcmp("1 2 +", saq.convertInfixToPostfix("(1 + 2)").c_str()));
		std::cout << "PASSED.\nTest 19...";

		/* TEST 19 */
		ASSERT_TRUE(!strcmp("1 2 * 3 +", saq.convertInfixToPostfix("1 * 2 + 3").c_str()));
		std::cout << "PASSED.\nTest 20...";

		/* TEST 20 */
		ASSERT_TRUE(!strcmp("1 2 + 3 + 4 +", saq.convertInfixToPostfix("1 + 2 + 3 + 4").c_str()));
		std::cout << "PASSED.\nTest 21...";

		/* TEST 21 */
		ASSERT_TRUE(!strcmp("1 2 +", saq.convertInfixToPostfix("(1 + 2)").c_str()));
		std::cout << "PASSED.\nTest 22...";

		/* TEST 22 */
		ASSERT_TRUE(!strcmp("1 2 3 4 + + +", saq.convertInfixToPostfix("(1 + (2 + (3 + 4)))").c_str()));
		std::cout << "PASSED.\nTest 23...";

		/* TEST 23 */
		ASSERT_TRUE(!strcmp("1 2 3 * +", saq.convertInfixToPostfix("1 + 2 * 3").c_str()));
		std::cout << "PASSED.\nTest 24...";

		/* TEST 24 */
		ASSERT_TRUE(!strcmp("1 2 + 3 *", saq.convertInfixToPostfix("(1 + 2) * 3").c_str()));
		std::cout << "PASSED.\nTest 25...";

		/* TEST 25 */
		ASSERT_TRUE(!strcmp("1 2 3 * + 4 +", saq.convertInfixToPostfix("1 + 2 * 3 + 4").c_str()));
		std::cout << "PASSED.\nTest 26...";

		/* TEST 26 */
		ASSERT_TRUE(!strcmp("1 2 + 3 4 + *", saq.convertInfixToPostfix("(1 + 2) * (3 + 4)").c_str()));
		std::cout << "PASSED.\nTest 27...";

		/* TEST 27 */
		ASSERT_TRUE(!strcmp("1 2 + 3 4 * 5 / -", saq.convertInfixToPostfix("1 + 2 - 3 * 4 / 5").c_str()));
		std::cout << "PASSED.\nTest 28...";

		/* TEST 28 */
		ASSERT_TRUE(!strcmp("1 2 / 3 * 4 - 5 +", saq.convertInfixToPostfix("1 / 2 * 3 - 4 + 5").c_str()));
		std::cout << "PASSED.\nTest 29...";

		/* TEST 29 */
		ASSERT_TRUE(!strcmp("1 2 / 3 4 * - 5 +", saq.convertInfixToPostfix("1 / 2 - 3 * 4 + 5").c_str()));
		std::cout << "PASSED.\nTest 30...";

		/* TEST 30 */
		ASSERT_TRUE(!strcmp("1 2 3 - + 4 5 / *", saq.convertInfixToPostfix("(1 + (2 - 3)) * (4 / 5)").c_str()));
		std::cout << "PASSED.\nTest 31...";

		/* TEST 31 */
		ASSERT_TRUE(!strcmp("1 2 3 - / 4 5 + *", saq.convertInfixToPostfix("1 / (2 - 3) * (4 + 5)").c_str()));
		std::cout << "PASSED.\nTest 32...";

		/* TEST 32 */
		ASSERT_TRUE(!strcmp("1 2 3 - 4 5 + * /", saq.convertInfixToPostfix("1 / ((2 - 3) * (4 + 5))").c_str()));
		std::cout << "PASSED.\nTest 33...";

		/* TEST 33 */
		ASSERT_TRUE(!strcmp("1 2 3 4 * - 5 + /", saq.convertInfixToPostfix("1 / (2 - 3 * 4 + 5)").c_str()));
		std::cout << "PASSED.\nTest 34...";

		/* TEST 34 */
		ASSERT_TRUE(!strcmp("42", saq.convertInfixToPostfix("(42)").c_str()));
		std::cout << "PASSED.\nTest 35...";

		/* TEST 35 */
		ASSERT_TRUE(!strcmp("42", saq.convertInfixToPostfix("(((42)))").c_str()));
		std::cout << "PASSED.\nTest 36...";

		/* TEST 36 */
		ASSERT_TRUE(!strcmp("1 2 +", saq.convertInfixToPostfix("(1 + 2)").c_str()));
		std::cout << "PASSED.\nTest 37...";

		/* TEST 37 */
		ASSERT_TRUE(!strcmp("1 2 *", saq.convertInfixToPostfix("(((1) * (2)))").c_str()));
		std::cout << "PASSED.\n";
