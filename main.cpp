//
//  main.cpp
//  ArkLibrary
//
//  Created by Fangzhou Wang on 3/11/18.
//  Copyright © 2018 ArkLibrary. All rights reserved.
//

#include <iostream>
#include "ArkCLP_test.hpp"

int main(int argc, const char * argv[]) {
    ::testing::InitGoogleTest(&argc, (char**)argv);
    return RUN_ALL_TESTS();
}
