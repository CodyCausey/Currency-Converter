#include <iostream>

int main()
{

  std::cout << "US Dollar amount to be converted: ";
  float user_input_to_be_converted{0};
  std::cin >> user_input_to_be_converted;

  std::cout << "Results:\n";

  float euro{.90};
  std::cout << "Euro: " << euro * user_input_to_be_converted << "\n";
  float british_pound{.78};
  std::cout << "British Pound: " << british_pound * user_input_to_be_converted << "\n";
  float indian_rupee{82.29};
  std::cout << "Indian Rupee: " << indian_rupee * user_input_to_be_converted << "\n";
  float australian_dollar{1.51};
  std::cout << "Australian Dollar: " << australian_dollar * user_input_to_be_converted << "\n";
  float canadian_dollar{1.32};
  std::cout << "Canadian Dollar: " << canadian_dollar * user_input_to_be_converted << "\n";
  float singapore_dollar{1.33};
  std::cout << "Singapore Dollar: " << singapore_dollar * user_input_to_be_converted << "\n";
  float swiss_franc{.87};
  std::cout << "Swiss Franc: " << swiss_franc * user_input_to_be_converted << "\n";
  float malaysian_ringgit{4.51};
  std::cout << "Malaysian Ringgit: " << malaysian_ringgit * user_input_to_be_converted << "\n";
  float japanese_yen{142.88};
  std::cout << "Japanese Yen: " << japanese_yen * user_input_to_be_converted << "\n";
  float chinese_yuan_renminbi{7.16};
  std::cout << "Chinese Yuan Renminbi: " << chinese_yuan_renminbi * user_input_to_be_converted << "\n";

  return 0;
}