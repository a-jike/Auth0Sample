// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Auth0",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;

/// User’s credentials obtained from Auth0.
/// What values are available depends on what type of Auth request you perfomed,
/// so if you used WebAuth (<code>/authorize</code> call) the <code>response_type</code> and <code>scope</code> will determine what tokens you get
SWIFT_CLASS_NAMED("Credentials")
@interface A0Credentials : NSObject <NSSecureCoding>
/// Token used that allows calling to the requested APIs (audience sent on Auth)
@property (nonatomic, readonly, copy) NSString * _Nullable accessToken;
/// Type of the access token
@property (nonatomic, readonly, copy) NSString * _Nullable tokenType;
/// When the access_token expires
@property (nonatomic, readonly, copy) NSDate * _Nullable expiresIn;
/// If the API allows you to request new access tokens and the scope <code>offline_access</code> was included on Auth
@property (nonatomic, readonly, copy) NSString * _Nullable refreshToken;
@property (nonatomic, readonly, copy) NSString * _Nullable idToken;
@property (nonatomic, readonly, copy) NSString * _Nullable scope;
- (nonnull instancetype)initWithAccessToken:(NSString * _Nullable)accessToken tokenType:(NSString * _Nullable)tokenType idToken:(NSString * _Nullable)idToken refreshToken:(NSString * _Nullable)refreshToken expiresIn:(NSDate * _Nullable)expiresIn scope:(NSString * _Nullable)scope OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL supportsSecureCoding;)
+ (BOOL)supportsSecureCoding SWIFT_WARN_UNUSED_RESULT;
+ (void)setSupportsSecureCoding:(BOOL)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Auth0 user identity
SWIFT_CLASS_NAMED("Identity")
@interface A0Identity : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
@property (nonatomic, readonly, copy) NSString * _Nonnull provider;
@property (nonatomic, readonly, copy) NSString * _Nonnull connection;
@property (nonatomic, readonly) BOOL social;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull profileData;
@property (nonatomic, readonly, copy) NSString * _Nullable accessToken;
@property (nonatomic, readonly, copy) NSDate * _Nullable expiresIn;
@property (nonatomic, readonly, copy) NSString * _Nullable accessTokenSecret;
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
- (nonnull instancetype)initWithIdentifier:(NSString * _Nonnull)identifier provider:(NSString * _Nonnull)provider connection:(NSString * _Nonnull)connection social:(BOOL)social profileData:(NSDictionary<NSString *, id> * _Nonnull)profileData accessToken:(NSString * _Nullable)accessToken expiresIn:(NSDate * _Nullable)expiresIn accessTokenSecret:(NSString * _Nullable)accessTokenSecret OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithJson:(NSDictionary<NSString *, id> * _Nonnull)json;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface NSError (SWIFT_EXTENSION(Auth0))
@property (nonatomic, readonly) BOOL a0_isManagementError;
@property (nonatomic, readonly) BOOL a0_isAuthenticationError;
@end


/// Auth0 normalized user profile returned by Auth0
/// seealso:
/// <a href="https://auth0.com/docs/user-profile/normalized">Normalized User Profile</a>
SWIFT_CLASS_NAMED("Profile")
@interface A0Profile : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// OIDC Standard Claims user information
/// note:
/// <a href="https://auth0.com/docs/protocols/oidc#claims">Claims</a>
SWIFT_CLASS("_TtC5Auth08UserInfo")
@interface UserInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class NSURLSession;

SWIFT_CLASS_NAMED("_ObjectiveAuthenticationAPI")
@interface A0AuthenticationAPI : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId url:(NSURL * _Nonnull)url;
- (nonnull instancetype)initWithClientId:(NSString * _Nonnull)clientId url:(NSURL * _Nonnull)url session:(NSURLSession * _Nonnull)session OBJC_DESIGNATED_INITIALIZER;
- (void)loginWithUsernameOrEmail:(NSString * _Nonnull)username password:(NSString * _Nonnull)password connection:(NSString * _Nonnull)connection scope:(NSString * _Nonnull)scope parameters:(NSDictionary<NSString *, id> * _Nullable)parameters callback:(void (^ _Nonnull)(NSError * _Nullable, A0Credentials * _Nullable))callback;
- (void)createUserWithEmail:(NSString * _Nonnull)email username:(NSString * _Nullable)username password:(NSString * _Nonnull)password connection:(NSString * _Nonnull)connection userMetadata:(NSDictionary<NSString *, id> * _Nullable)userMetadata callback:(void (^ _Nonnull)(NSError * _Nullable, NSDictionary<NSString *, id> * _Nullable))callback;
- (void)resetPasswordWithEmail:(NSString * _Nonnull)email connection:(NSString * _Nonnull)connection callback:(void (^ _Nonnull)(NSError * _Nullable))callback;
- (void)signUpWithEmail:(NSString * _Nonnull)email username:(NSString * _Nullable)username password:(NSString * _Nonnull)password connection:(NSString * _Nonnull)connection userMetadata:(NSDictionary<NSString *, id> * _Nullable)userMetadata scope:(NSString * _Nonnull)scope parameters:(NSDictionary<NSString *, id> * _Nullable)parameters callback:(void (^ _Nonnull)(NSError * _Nullable, A0Credentials * _Nullable))callback;
- (void)startPasswordlessWithCodeToEmail:(NSString * _Nonnull)email connection:(NSString * _Nonnull)connection callback:(void (^ _Nonnull)(NSError * _Nullable))callback;
- (void)startPasswordlessWithLinkToEmail:(NSString * _Nonnull)email connection:(NSString * _Nonnull)connection callback:(void (^ _Nonnull)(NSError * _Nullable))callback;
- (void)startPasswordlessWithCodeToPhoneNumber:(NSString * _Nonnull)phoneNumber connection:(NSString * _Nonnull)connection callback:(void (^ _Nonnull)(NSError * _Nullable))callback;
- (void)startPasswordlessWithLinkToPhoneNumber:(NSString * _Nonnull)phoneNumber connection:(NSString * _Nonnull)connection callback:(void (^ _Nonnull)(NSError * _Nullable))callback;
- (void)tokenInfoFromToken:(NSString * _Nonnull)token callback:(void (^ _Nonnull)(NSError * _Nullable, A0Profile * _Nullable))callback SWIFT_DEPRECATED_MSG("see userInfoWithToken:callback:");
- (void)userInfoWithToken:(NSString * _Nonnull)token callback:(void (^ _Nonnull)(NSError * _Nullable, A0Profile * _Nullable))callback;
- (void)loginSocialWithToken:(NSString * _Nonnull)token connection:(NSString * _Nonnull)connection scope:(NSString * _Nonnull)scope parameters:(NSDictionary<NSString *, id> * _Nullable)parameters callback:(void (^ _Nonnull)(NSError * _Nullable, A0Credentials * _Nullable))callback;
@end


SWIFT_CLASS_NAMED("_ObjectiveManagementAPI")
@interface A0ManagementAPI : NSObject
- (nonnull instancetype)initWithToken:(NSString * _Nonnull)token OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithToken:(NSString * _Nonnull)token url:(NSURL * _Nonnull)url;
- (nonnull instancetype)initWithToken:(NSString * _Nonnull)token url:(NSURL * _Nonnull)url session:(NSURLSession * _Nonnull)session OBJC_DESIGNATED_INITIALIZER;
- (void)patchUserWithIdentifier:(NSString * _Nonnull)identifier userMetadata:(NSDictionary<NSString *, id> * _Nonnull)userMetadata callback:(void (^ _Nonnull)(NSError * _Nullable, NSDictionary<NSString *, id> * _Nullable))callback;
- (void)linkUserWithIdentifier:(NSString * _Nonnull)identifier withUserUsingToken:(NSString * _Nonnull)token callback:(void (^ _Nonnull)(NSError * _Nullable, NSArray<NSDictionary<NSString *, id> *> * _Nullable))callback;
- (void)unlinkUserWithIdentifier:(NSString * _Nonnull)identifier provider:(NSString * _Nonnull)provider fromUserId:(NSString * _Nonnull)userId callback:(void (^ _Nonnull)(NSError * _Nullable, NSArray<NSDictionary<NSString *, id> *> * _Nullable))callback;
/// Avoid Auth0.swift sending its version on every request to Auth0 API.
/// By default we collect our libraries and SDKs versions to help us during support and evaluate usage.
/// \param enabled if Auth0.swift should send it’s version on every request.
///
- (void)setTelemetryWithEnabled:(BOOL)enabled;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
