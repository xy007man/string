## 目录结构

```shell
└─string
    │  CMakeLists.txt
    │  readme.md
    │
    ├─3rd_party # gtest 依赖库和头文件
    │  ├─gmock
    │  │  │  gmock-actions.h
    │  │  │  gmock-cardinalities.h
    │  │  │  gmock-function-mocker.h
    │  │  │  gmock-matchers.h
    │  │  │  gmock-more-actions.h
    │  │  │  gmock-more-matchers.h
    │  │  │  gmock-nice-strict.h
    │  │  │  gmock-spec-builders.h
    │  │  │  gmock.h
    │  │  │
    │  │  └─internal
    │  │      │  gmock-internal-utils.h
    │  │      │  gmock-port.h
    │  │      │  gmock-pp.h
    │  │      │
    │  │      └─custom
    │  │              gmock-generated-actions.h
    │  │              gmock-matchers.h
    │  │              gmock-port.h
    │  │              README.md
    │  │
    │  ├─gtest
    │  │  │  gtest-death-test.h
    │  │  │  gtest-matchers.h
    │  │  │  gtest-message.h
    │  │  │  gtest-param-test.h
    │  │  │  gtest-printers.h
    │  │  │  gtest-spi.h
    │  │  │  gtest-test-part.h
    │  │  │  gtest-typed-test.h
    │  │  │  gtest.h
    │  │  │  gtest_pred_impl.h
    │  │  │  gtest_prod.h
    │  │  │
    │  │  └─internal
    │  │      │  gtest-death-test-internal.h
    │  │      │  gtest-filepath.h
    │  │      │  gtest-internal.h
    │  │      │  gtest-param-util.h
    │  │      │  gtest-port-arch.h
    │  │      │  gtest-port.h
    │  │      │  gtest-string.h
    │  │      │  gtest-type-util.h
    │  │      │
    │  │      └─custom
    │  │              gtest-port.h
    │  │              gtest-printers.h
    │  │              gtest.h
    │  │              README.md
    │  │
    │  └─lib
    │          libgmock.a
    │          libgmock_main.a
    │          libgtest.a
    │          libgtest_main.a
    │
    ├─app # 测试二进制存放路径
    │      test
    │
    ├─build
    ├─inc # String 共享库对外提供的头文件
    │      String.h
    │
    ├─lib # String 共享库存放路径
    │      libstring.so
    │
    ├─src # String 类的实现
    │      CMakeLists.txt
    │      String.cpp
    │
    └─test # gtest 测试目录
            CMakeLists.txt
            gtest.cpp
            main.cpp
```

---

## 工程编译方法

```shell
cd build # 进入工程根目录下build目录
cmake ..
make
../app/test # 执行app目录下可执行文件
```

---

## 调试环境

* cmake version 3.16.3
* Linux version 5.11.0-34-generic
* gcc 9.3.0
* ubuntu 20.04.1