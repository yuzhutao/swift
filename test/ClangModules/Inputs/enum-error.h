#define NS_ERROR_ENUM(_type, _name, _domain)                                   \
  enum _name : _type _name;                                                    \
  enum __attribute__((ns_error_domain(_domain))) _name : _type

@class NSString;
extern NSString *const TestErrorDomain;
typedef NS_ERROR_ENUM(int, TestError, TestErrorDomain) {
  TENone,
  TEOne,
  TETwo,
};

TestError getErr();
