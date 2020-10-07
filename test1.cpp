/* TEST 1 */
		std::cout << "Test 1...";
		ASSERT_TRUE(saq.balancedBrackets(""));
		std::cout << "PASSED.\nTest 2...";

		/* TEST 2 */
		ASSERT_TRUE(saq.balancedBrackets("(7)"));
		std::cout << "PASSED.\nTest 3...";

		/* TEST 3 */
		ASSERT_TRUE(saq.balancedBrackets("[]{}()([]{})"));
		std::cout << "PASSED.\nTest 4...";

		/* TEST 4 */
		ASSERT_TRUE(saq.balancedBrackets("[({(([[{}][{}][{}]]))})]"));
		std::cout << "PASSED.\nTest 5...";

		/* TEST 5 */
		ASSERT_FALSE(saq.balancedBrackets("{"));
		std::cout << "PASSED.\nTest 6...";

		/* TEST 6 */
		ASSERT_FALSE(saq.balancedBrackets("]({})"));
		std::cout << "PASSED.\nTest 7...";

		/* TEST 7 */
		ASSERT_FALSE(saq.balancedBrackets("(((("));
		std::cout << "PASSED.\nTest 8...";

		/* TEST 8 */
		ASSERT_FALSE(saq.balancedBrackets("))))"));
		std::cout << "PASSED.\nTest 9...";

		/* TEST 9 */
		ASSERT_FALSE(saq.balancedBrackets("(]{)[}"));
		std::cout << "PASSED.\nTest 10...";

		/* TEST 10 */
		ASSERT_FALSE(saq.balancedBrackets("[]{}()[]{})([])"));
		std::cout << "PASSED.\nTest 11...";

		/* TEST 11 */
		ASSERT_FALSE(saq.balancedBrackets("[[({(([[{}][{}][{}]]))})]"));
		std::cout << "PASSED.\nTest 12...";
