#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AACCAnalyticsEvent, AACCLoginResult, AACCKotlinUnit, AACCContainerAction, AACCContainerConfiguration, AACCCardFeedData, AACCAACCoreCompanion, AACCAACCoreIOS, AACCContainerActionResult, AACCContainerActionResultResultError, AACCKotlinThrowable, AACCKotlinArray<T>, AACCKotlinError, AACCContainerActionResultResultErrorTokenExpired, AACCContainerActionResultResultErrorTokenTimeout, AACCContainerActionResultSuccess, AACCServerSideFilter, AACCLoginResultLoginError, AACCLoginResultLoginErrorInvalidApiBaseUrl, AACCLoginResultLoginErrorInvalidApiKey, AACCLoginResultLoginErrorInvalidEnvironmentId, AACCLoginResultLoginErrorNotInitialized, AACCLoginResultSuccess, AACCDismissCardBodyCompanion, AACCDismissCardBody, AACCCardActionTypeCompanion, AACCCardActionType, AACCCardActionsCompanion, AACCCardActions, AACCCardCountResponseCompanion, AACCCardCountResponse, AACCCardInstance, AACCCardFeedCompanion, AACCCardFeed, AACCCardFeedDataCompanion, AACCCardLayout, AACCSubviewLayout, AACCCardInstanceMetadata, AACCCardMetadata, AACCRuntimeVariable, AACCCardInstanceCompanion, AACCCardInstanceMetadataCompanion, AACCLayoutNode, AACCCardLayoutCompanion, AACCCardMetadataCompanion, AACCClientCompanion, AACCClient, AACCClientAuthSuccessCompanion, AACCClientAuthSuccess, AACCClientErrorData, AACCClientErrorCompanion, AACCClientError, AACCClientErrorDataCompanion, AACCClientPongCompanion, AACCClientPong, AACCClientUpdateCardsData, AACCClientUpdateCardsCompanion, AACCClientUpdateCards, AACCClientUpdateCardsDataMeta, AACCClientUpdateCardsDataUpdate, AACCClientUpdateCardsDataCompanion, AACCClientUpdateCardsDataMetaSubscriptions, AACCClientUpdateCardsDataMetaCompanion, AACCClientUpdateCardsDataMetaSubscriptionsCompanion, AACCClientUpdateCardsDataUpdateCompanion, AACCClientUpdateCardsDataUpdateRemoveCardData, AACCClientUpdateCardsDataUpdateRemoveCardCompanion, AACCClientUpdateCardsDataUpdateRemoveCard, AACCClientUpdateCardsDataUpdateRemoveCardDataCompanion, AACCClientUpdateCardsDataUpdateReplaceFeedData, AACCClientUpdateCardsDataUpdateReplaceFeedCompanion, AACCClientUpdateCardsDataUpdateReplaceFeed, AACCClientUpdateCardsDataUpdateReplaceFeedDataCompanion, AACCClientUpdateCardsDataUpdateUpdateCardData, AACCClientUpdateCardsDataUpdateUpdateCardCompanion, AACCClientUpdateCardsDataUpdateUpdateCard, AACCClientUpdateCardsDataUpdateUpdateCardDataCompanion, AACCLayoutNodeAttributes, AACCLayoutNodeCompanion, AACCLayoutNodeAttributesCompanion, AACCRuntimeVariableCompanion, AACCRuntimeVariableResolutionCardCompanion, AACCRuntimeVariableResolutionCard, AACCServerCompanion, AACCServer, AACCServerAuthMessageCompanion, AACCServerAuthMessage, AACCServerCustomPingCompanion, AACCServerCustomPing, AACCServerSubscribeData, AACCServerSubscribeCompanion, AACCServerSubscribe, AACCWebsocketSubscriptionData, AACCServerSubscribeDataCompanion, AACCSubviewLayoutCompanion, AACCValidationCompanion, AACCValidation, AACCKotlinEnumCompanion, AACCKotlinEnum<E>, AACCValidationType, AACCWebsocketFilterCompanion, AACCWebsocketFilter, AACCWebsocketSubscriptionDataCompanion, AACCAACCoreJavascript, AACCKotlinException, AACCKotlinRuntimeException, AACCKotlinIllegalStateException, AACCKotlinx_serialization_coreSerializersModule, AACCKotlinx_serialization_coreSerialKind, AACCKotlinNothing;

@protocol AACCAACCore, AACCKotlinx_serialization_coreKSerializer, AACCKotlinComparable, AACCConfiguration, AACCConfigurationProvider, AACCTokenProvider, AACCKotlinIterator, AACCKotlinx_serialization_coreEncoder, AACCKotlinx_serialization_coreSerialDescriptor, AACCKotlinx_serialization_coreSerializationStrategy, AACCKotlinx_serialization_coreDecoder, AACCKotlinx_serialization_coreDeserializationStrategy, AACCKotlinx_serialization_coreCompositeEncoder, AACCKotlinAnnotation, AACCKotlinx_serialization_coreCompositeDecoder, AACCKotlinx_serialization_coreSerializersModuleCollector, AACCKotlinKClass, AACCKotlinKDeclarationContainer, AACCKotlinKAnnotatedElement, AACCKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface AACCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface AACCBase (AACCBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface AACCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AACCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorAACCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface AACCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface AACCByte : AACCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface AACCUByte : AACCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface AACCShort : AACCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface AACCUShort : AACCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface AACCInt : AACCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface AACCUInt : AACCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface AACCLong : AACCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface AACCULong : AACCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface AACCFloat : AACCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface AACCDouble : AACCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface AACCBoolean : AACCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("AACCore")))
@protocol AACCAACCore
@required
- (void)analyticsEventAnalyticsEvent:(AACCAnalyticsEvent *)analyticsEvent __attribute__((swift_name("analyticsEvent(analyticsEvent:)")));
- (AACCLoginResult *)loginEnvironmentId:(NSString *)environmentId apiKey:(NSString *)apiKey apiHost:(NSString *)apiHost sessionDelegate:(void (^)(AACCKotlinUnit *(^)(NSString *)))sessionDelegate __attribute__((swift_name("login(environmentId:apiKey:apiHost:sessionDelegate:)")));
- (void)performActionOnContainerId:(NSString *)containerId action:(AACCContainerAction *)action onComplete:(void (^)(void))onComplete __attribute__((swift_name("performActionOn(containerId:action:onComplete:)")));
- (NSString *)subscribeToUpdatesForContainerContainerConfiguration:(AACCContainerConfiguration *)containerConfiguration onUpdate:(void (^)(AACCCardFeedData *))onUpdate __attribute__((swift_name("subscribeToUpdatesForContainer(containerConfiguration:onUpdate:)")));
- (void)unsubscribeToUpdatesForContainerSubscriptionToken:(NSString *)subscriptionToken __attribute__((swift_name("unsubscribeToUpdatesForContainer(subscriptionToken:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AACCoreCompanion")))
@interface AACCAACCoreCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCAACCoreCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<AACCAACCore> shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AACCoreIOS")))
@interface AACCAACCoreIOS : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aACCoreIOS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCAACCoreIOS *shared __attribute__((swift_name("shared")));
@property (readonly) id<AACCAACCore> shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AACCoreImpl")))
@interface AACCAACCoreImpl : AACCBase <AACCAACCore>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)analyticsEventAnalyticsEvent:(AACCAnalyticsEvent *)analyticsEvent __attribute__((swift_name("analyticsEvent(analyticsEvent:)")));
- (AACCLoginResult *)loginEnvironmentId:(NSString *)environmentId apiKey:(NSString *)apiKey apiHost:(NSString *)apiHost sessionDelegate:(void (^)(AACCKotlinUnit *(^)(NSString *)))sessionDelegate __attribute__((swift_name("login(environmentId:apiKey:apiHost:sessionDelegate:)")));
- (void)performActionOnContainerId:(NSString *)containerId action:(AACCContainerAction *)action onComplete:(void (^)(void))onComplete __attribute__((swift_name("performActionOn(containerId:action:onComplete:)")));
- (NSString *)subscribeToUpdatesForContainerContainerConfiguration:(AACCContainerConfiguration *)containerConfiguration onUpdate:(void (^)(AACCCardFeedData *))onUpdate __attribute__((swift_name("subscribeToUpdatesForContainer(containerConfiguration:onUpdate:)")));
- (void)unsubscribeToUpdatesForContainerSubscriptionToken:(NSString *)subscriptionToken __attribute__((swift_name("unsubscribeToUpdatesForContainer(subscriptionToken:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AACCoreJavascript")))
@interface AACCAACCoreJavascript : AACCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AACCLoginResult *)loginEnvironmentId:(NSString *)environmentId apiKey:(NSString *)apiKey apiHost:(NSString *)apiHost sessionDelegate:(void (^)(AACCKotlinUnit *(^)(NSString *)))sessionDelegate __attribute__((swift_name("login(environmentId:apiKey:apiHost:sessionDelegate:)")));
- (void)subscribeToContainerUpdatesContainerId:(NSString *)containerId onUpdate:(void (^)(AACCCardFeedData *))onUpdate __attribute__((swift_name("subscribeToContainerUpdates(containerId:onUpdate:)")));
- (NSString *)subscribeToContainerUpdatesWithConfigurationConfiguration:(AACCContainerConfiguration *)configuration onUpdate:(void (^)(AACCCardFeedData *))onUpdate __attribute__((swift_name("subscribeToContainerUpdatesWithConfiguration(configuration:onUpdate:)")));
- (void)unsubscribeToContainerUpdatesToken:(NSString *)token __attribute__((swift_name("unsubscribeToContainerUpdates(token:)")));
@end

__attribute__((swift_name("AnalyticsEvent")))
@interface AACCAnalyticsEvent : AACCBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardFeedConfiguration")))
@interface AACCCardFeedConfiguration : AACCBase
- (instancetype)initWithUseWebSockets:(BOOL)useWebSockets pollingIntervalTimeMillis:(int64_t)pollingIntervalTimeMillis __attribute__((swift_name("init(useWebSockets:pollingIntervalTimeMillis:)"))) __attribute__((objc_designated_initializer));
@property int64_t pollingIntervalTimeMillis __attribute__((swift_name("pollingIntervalTimeMillis")));
@property BOOL useWebSockets __attribute__((swift_name("useWebSockets")));
@end

__attribute__((swift_name("ContainerAction")))
@interface AACCContainerAction : AACCBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerAction.DismissCard")))
@interface AACCContainerActionDismissCard : AACCContainerAction
- (instancetype)initWithCardInstanceId:(NSString *)cardInstanceId __attribute__((swift_name("init(cardInstanceId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *cardInstanceId __attribute__((swift_name("cardInstanceId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerAction.SnoozeCard")))
@interface AACCContainerActionSnoozeCard : AACCContainerAction
- (instancetype)initWithCardInstanceId:(NSString *)cardInstanceId __attribute__((swift_name("init(cardInstanceId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *cardInstanceId __attribute__((swift_name("cardInstanceId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerAction.SubmitCard")))
@interface AACCContainerActionSubmitCard : AACCContainerAction
- (instancetype)initWithCardInstanceId:(NSString *)cardInstanceId __attribute__((swift_name("init(cardInstanceId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *cardInstanceId __attribute__((swift_name("cardInstanceId")));
@end

__attribute__((swift_name("ContainerActionResult")))
@interface AACCContainerActionResult : AACCBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerActionResult.Failure")))
@interface AACCContainerActionResultFailure : AACCContainerActionResult
- (instancetype)initWithError:(AACCContainerActionResultResultError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface AACCKotlinThrowable : AACCBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (AACCKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinError")))
@interface AACCKotlinError : AACCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ContainerActionResult.ResultError")))
@interface AACCContainerActionResultResultError : AACCKotlinError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerActionResult.ResultErrorNetworkError")))
@interface AACCContainerActionResultResultErrorNetworkError : AACCContainerActionResultResultError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerActionResult.ResultErrorTokenExpired")))
@interface AACCContainerActionResultResultErrorTokenExpired : AACCContainerActionResultResultError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tokenExpired __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCContainerActionResultResultErrorTokenExpired *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerActionResult.ResultErrorTokenTimeout")))
@interface AACCContainerActionResultResultErrorTokenTimeout : AACCContainerActionResultResultError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tokenTimeout __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCContainerActionResultResultErrorTokenTimeout *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerActionResult.Success")))
@interface AACCContainerActionResultSuccess : AACCContainerActionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCContainerActionResultSuccess *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContainerConfiguration")))
@interface AACCContainerConfiguration : AACCBase
- (instancetype)initWithContainerId:(NSString *)containerId __attribute__((swift_name("init(containerId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContainerId:(NSString *)containerId filters:(AACCKotlinArray<AACCServerSideFilter *> *)filters __attribute__((swift_name("init(containerId:filters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContainerId:(NSString *)containerId instanceId:(NSString *)instanceId filters:(AACCKotlinArray<AACCServerSideFilter *> *)filters __attribute__((swift_name("init(containerId:instanceId:filters:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *containerId __attribute__((swift_name("containerId")));
@property (readonly) AACCKotlinArray<AACCServerSideFilter *> *filters __attribute__((swift_name("filters")));
@property (readonly) NSString *instanceId __attribute__((swift_name("instanceId")));
@property int32_t pollingIntervalInMilli __attribute__((swift_name("pollingIntervalInMilli")));
@property BOOL useWebSockets __attribute__((swift_name("useWebSockets")));
@end

__attribute__((swift_name("LoginResult")))
@interface AACCLoginResult : AACCBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResult.Failure")))
@interface AACCLoginResultFailure : AACCLoginResult
- (instancetype)initWithError:(AACCLoginResultLoginError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("LoginResult.LoginError")))
@interface AACCLoginResultLoginError : AACCKotlinError
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResult.LoginErrorInvalidApiBaseUrl")))
@interface AACCLoginResultLoginErrorInvalidApiBaseUrl : AACCLoginResultLoginError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)invalidApiBaseUrl __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCLoginResultLoginErrorInvalidApiBaseUrl *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResult.LoginErrorInvalidApiKey")))
@interface AACCLoginResultLoginErrorInvalidApiKey : AACCLoginResultLoginError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)invalidApiKey __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCLoginResultLoginErrorInvalidApiKey *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResult.LoginErrorInvalidEnvironmentId")))
@interface AACCLoginResultLoginErrorInvalidEnvironmentId : AACCLoginResultLoginError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)invalidEnvironmentId __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCLoginResultLoginErrorInvalidEnvironmentId *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResult.LoginErrorNotInitialized")))
@interface AACCLoginResultLoginErrorNotInitialized : AACCLoginResultLoginError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)notInitialized __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCLoginResultLoginErrorNotInitialized *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResult.Success")))
@interface AACCLoginResultSuccess : AACCLoginResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCLoginResultSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerSideFilter")))
@interface AACCServerSideFilter : AACCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DismissCardBody")))
@interface AACCDismissCardBody : AACCBase
- (instancetype)initWithStreamContainerId:(NSString *)streamContainerId cardInstanceId:(NSString *)cardInstanceId __attribute__((swift_name("init(streamContainerId:cardInstanceId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCDismissCardBodyCompanion *companion __attribute__((swift_name("companion")));
- (AACCDismissCardBody *)doCopyStreamContainerId:(NSString *)streamContainerId cardInstanceId:(NSString *)cardInstanceId __attribute__((swift_name("doCopy(streamContainerId:cardInstanceId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cardInstanceId __attribute__((swift_name("cardInstanceId")));
@property (readonly) NSString *streamContainerId __attribute__((swift_name("streamContainerId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DismissCardBody.Companion")))
@interface AACCDismissCardBodyCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCDismissCardBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardActionType")))
@interface AACCCardActionType : AACCBase
- (instancetype)initWithOverflow:(BOOL)overflow __attribute__((swift_name("init(overflow:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCCardActionTypeCompanion *companion __attribute__((swift_name("companion")));
- (AACCCardActionType *)doCopyOverflow:(BOOL)overflow __attribute__((swift_name("doCopy(overflow:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL overflow __attribute__((swift_name("overflow")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardActionType.Companion")))
@interface AACCCardActionTypeCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCCardActionTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardActions")))
@interface AACCCardActions : AACCBase
- (instancetype)initWithDismiss:(AACCCardActionType *)dismiss snooze:(AACCCardActionType *)snooze voteDown:(AACCCardActionType *)voteDown voteUp:(AACCCardActionType *)voteUp __attribute__((swift_name("init(dismiss:snooze:voteDown:voteUp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCCardActionsCompanion *companion __attribute__((swift_name("companion")));
- (AACCCardActions *)doCopyDismiss:(AACCCardActionType *)dismiss snooze:(AACCCardActionType *)snooze voteDown:(AACCCardActionType *)voteDown voteUp:(AACCCardActionType *)voteUp __attribute__((swift_name("doCopy(dismiss:snooze:voteDown:voteUp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCCardActionType *dismiss __attribute__((swift_name("dismiss")));
@property (readonly) AACCCardActionType *snooze __attribute__((swift_name("snooze")));
@property (readonly) AACCCardActionType *voteDown __attribute__((swift_name("voteDown")));
@property (readonly) AACCCardActionType *voteUp __attribute__((swift_name("voteUp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardActions.Companion")))
@interface AACCCardActionsCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCCardActionsCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardCountResponse")))
@interface AACCCardCountResponse : AACCBase
- (instancetype)initWithTotalCards:(int32_t)totalCards __attribute__((swift_name("init(totalCards:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCCardCountResponseCompanion *companion __attribute__((swift_name("companion")));
- (AACCCardCountResponse *)doCopyTotalCards:(int32_t)totalCards __attribute__((swift_name("doCopy(totalCards:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t totalCards __attribute__((swift_name("totalCards")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardCountResponse.Companion")))
@interface AACCCardCountResponseCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCCardCountResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardFeed")))
@interface AACCCardFeed : AACCBase
- (instancetype)initWithInstances:(NSArray<AACCCardInstance *> * _Nullable)instances __attribute__((swift_name("init(instances:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCCardFeedCompanion *companion __attribute__((swift_name("companion")));
- (AACCCardFeed *)doCopyInstances:(NSArray<AACCCardInstance *> * _Nullable)instances __attribute__((swift_name("doCopy(instances:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AACCCardInstance *> * _Nullable instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardFeed.Companion")))
@interface AACCCardFeedCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCCardFeedCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardFeedData")))
@interface AACCCardFeedData : AACCBase
- (instancetype)initWithCardInstances:(NSArray<AACCCardInstance *> *)cardInstances metadata:(AACCCardCountResponse *)metadata __attribute__((swift_name("init(cardInstances:metadata:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCCardFeedDataCompanion *companion __attribute__((swift_name("companion")));
- (AACCCardFeedData *)doCopyCardInstances:(NSArray<AACCCardInstance *> *)cardInstances metadata:(AACCCardCountResponse *)metadata __attribute__((swift_name("doCopy(cardInstances:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AACCCardInstance *> *cardInstances __attribute__((swift_name("cardInstances")));
@property (readonly) AACCKotlinArray<AACCCardInstance *> *jsCardInstances __attribute__((swift_name("jsCardInstances")));
@property (readonly) AACCCardCountResponse *metadata __attribute__((swift_name("metadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardFeedData.Companion")))
@interface AACCCardFeedDataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCCardFeedDataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInstance")))
@interface AACCCardInstance : AACCBase
- (instancetype)initWithDefaultView:(AACCCardLayout *)defaultView actions:(AACCCardActions *)actions subviews:(NSDictionary<NSString *, AACCSubviewLayout *> *)subviews instance:(AACCCardInstanceMetadata *)instance metadata:(AACCCardMetadata *)metadata runtimeVariables:(NSArray<AACCRuntimeVariable *> * _Nullable)runtimeVariables __attribute__((swift_name("init(defaultView:actions:subviews:instance:metadata:runtimeVariables:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCCardInstanceCompanion *companion __attribute__((swift_name("companion")));
- (AACCCardInstance *)doCopyDefaultView:(AACCCardLayout *)defaultView actions:(AACCCardActions *)actions subviews:(NSDictionary<NSString *, AACCSubviewLayout *> *)subviews instance:(AACCCardInstanceMetadata *)instance metadata:(AACCCardMetadata *)metadata runtimeVariables:(NSArray<AACCRuntimeVariable *> * _Nullable)runtimeVariables __attribute__((swift_name("doCopy(defaultView:actions:subviews:instance:metadata:runtimeVariables:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCCardActions *actions __attribute__((swift_name("actions")));
@property (readonly) AACCCardLayout *defaultView __attribute__((swift_name("defaultView")));
@property (readonly) AACCCardInstanceMetadata *instance __attribute__((swift_name("instance")));
@property (readonly) AACCCardMetadata *metadata __attribute__((swift_name("metadata")));
@property (readonly) NSArray<AACCRuntimeVariable *> * _Nullable runtimeVariables __attribute__((swift_name("runtimeVariables")));
@property (readonly) NSDictionary<NSString *, AACCSubviewLayout *> *subviews __attribute__((swift_name("subviews")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInstance.Companion")))
@interface AACCCardInstanceCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCCardInstanceCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInstanceMetadata")))
@interface AACCCardInstanceMetadata : AACCBase
- (instancetype)initWithId:(NSString *)id status:(NSString *)status created:(NSString *)created lifecycleId:(NSString *)lifecycleId eventName:(NSString *)eventName __attribute__((swift_name("init(id:status:created:lifecycleId:eventName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCCardInstanceMetadataCompanion *companion __attribute__((swift_name("companion")));
- (AACCCardInstanceMetadata *)doCopyId:(NSString *)id status:(NSString *)status created:(NSString *)created lifecycleId:(NSString *)lifecycleId eventName:(NSString *)eventName __attribute__((swift_name("doCopy(id:status:created:lifecycleId:eventName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *created __attribute__((swift_name("created")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lifecycleId __attribute__((swift_name("lifecycleId")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardInstanceMetadata.Companion")))
@interface AACCCardInstanceMetadataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCCardInstanceMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardLayout")))
@interface AACCCardLayout : AACCBase
- (instancetype)initWithNodes:(NSArray<AACCLayoutNode *> *)nodes __attribute__((swift_name("init(nodes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCCardLayoutCompanion *companion __attribute__((swift_name("companion")));
- (AACCCardLayout *)doCopyNodes:(NSArray<AACCLayoutNode *> *)nodes __attribute__((swift_name("doCopy(nodes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCKotlinArray<AACCLayoutNode *> *jsNodes __attribute__((swift_name("jsNodes")));
@property (readonly) NSArray<AACCLayoutNode *> *nodes __attribute__((swift_name("nodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardLayout.Companion")))
@interface AACCCardLayoutCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCCardLayoutCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardMetadata")))
@interface AACCCardMetadata : AACCBase
- (instancetype)initWithLastCardActiveTime:(NSString *)lastCardActiveTime receivedAt:(NSString *)receivedAt priority:(int32_t)priority __attribute__((swift_name("init(lastCardActiveTime:receivedAt:priority:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCCardMetadataCompanion *companion __attribute__((swift_name("companion")));
- (AACCCardMetadata *)doCopyLastCardActiveTime:(NSString *)lastCardActiveTime receivedAt:(NSString *)receivedAt priority:(int32_t)priority __attribute__((swift_name("doCopy(lastCardActiveTime:receivedAt:priority:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *lastCardActiveTime __attribute__((swift_name("lastCardActiveTime")));
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
@property (readonly) NSString *receivedAt __attribute__((swift_name("receivedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardMetadata.Companion")))
@interface AACCCardMetadataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCCardMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Client")))
@interface AACCClient : AACCBase
@property (class, readonly, getter=companion) AACCClientCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.AuthSuccess")))
@interface AACCClientAuthSuccess : AACCClient
- (instancetype)initWithMessageType:(NSString *)messageType __attribute__((swift_name("init(messageType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientAuthSuccessCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientAuthSuccess *)doCopyMessageType:(NSString *)messageType __attribute__((swift_name("doCopy(messageType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.AuthSuccessCompanion")))
@interface AACCClientAuthSuccessCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientAuthSuccessCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.Companion")))
@interface AACCClientCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(AACCKotlinArray<id<AACCKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.Error")))
@interface AACCClientError : AACCClient
- (instancetype)initWithMessageType:(NSString *)messageType data:(AACCClientErrorData *)data __attribute__((swift_name("init(messageType:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientErrorCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientError *)doCopyMessageType:(NSString *)messageType data:(AACCClientErrorData *)data __attribute__((swift_name("doCopy(messageType:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCClientErrorData *data __attribute__((swift_name("data")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.ErrorCompanion")))
@interface AACCClientErrorCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.ErrorData")))
@interface AACCClientErrorData : AACCBase
- (instancetype)initWithErrorType:(NSString *)errorType messageId:(NSString *)messageId errorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorType:messageId:errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientErrorDataCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientErrorData *)doCopyErrorType:(NSString *)errorType messageId:(NSString *)messageId errorMessage:(NSString *)errorMessage __attribute__((swift_name("doCopy(errorType:messageId:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) NSString *errorType __attribute__((swift_name("errorType")));
@property (readonly) NSString *messageId __attribute__((swift_name("messageId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.ErrorDataCompanion")))
@interface AACCClientErrorDataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientErrorDataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.Pong")))
@interface AACCClientPong : AACCClient
- (instancetype)initWithMessageType:(NSString *)messageType __attribute__((swift_name("init(messageType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientPongCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientPong *)doCopyMessageType:(NSString *)messageType __attribute__((swift_name("doCopy(messageType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.PongCompanion")))
@interface AACCClientPongCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientPongCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCards")))
@interface AACCClientUpdateCards : AACCClient
- (instancetype)initWithMessageType:(NSString *)messageType data:(AACCClientUpdateCardsData *)data __attribute__((swift_name("init(messageType:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCards *)doCopyMessageType:(NSString *)messageType data:(AACCClientUpdateCardsData *)data __attribute__((swift_name("doCopy(messageType:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCClientUpdateCardsData *data __attribute__((swift_name("data")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsCompanion")))
@interface AACCClientUpdateCardsCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsData")))
@interface AACCClientUpdateCardsData : AACCBase
- (instancetype)initWithMeta:(AACCClientUpdateCardsDataMeta *)meta updates:(NSArray<AACCClientUpdateCardsDataUpdate *> *)updates __attribute__((swift_name("init(meta:updates:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCardsData *)doCopyMeta:(AACCClientUpdateCardsDataMeta *)meta updates:(NSArray<AACCClientUpdateCardsDataUpdate *> *)updates __attribute__((swift_name("doCopy(meta:updates:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCClientUpdateCardsDataMeta *meta __attribute__((swift_name("meta")));
@property (readonly) NSArray<AACCClientUpdateCardsDataUpdate *> *updates __attribute__((swift_name("updates")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataCompanion")))
@interface AACCClientUpdateCardsDataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataMeta")))
@interface AACCClientUpdateCardsDataMeta : AACCBase
- (instancetype)initWithSubscriptions:(NSDictionary<NSString *, AACCClientUpdateCardsDataMetaSubscriptions *> *)subscriptions __attribute__((swift_name("init(subscriptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataMetaCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCardsDataMeta *)doCopySubscriptions:(NSDictionary<NSString *, AACCClientUpdateCardsDataMetaSubscriptions *> *)subscriptions __attribute__((swift_name("doCopy(subscriptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, AACCClientUpdateCardsDataMetaSubscriptions *> *subscriptions __attribute__((swift_name("subscriptions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataMetaCompanion")))
@interface AACCClientUpdateCardsDataMetaCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataMetaSubscriptions")))
@interface AACCClientUpdateCardsDataMetaSubscriptions : AACCBase
- (instancetype)initWithTotalCards:(int32_t)totalCards __attribute__((swift_name("init(totalCards:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataMetaSubscriptionsCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCardsDataMetaSubscriptions *)doCopyTotalCards:(int32_t)totalCards __attribute__((swift_name("doCopy(totalCards:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t totalCards __attribute__((swift_name("totalCards")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataMetaSubscriptionsCompanion")))
@interface AACCClientUpdateCardsDataMetaSubscriptionsCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataMetaSubscriptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Client.UpdateCardsDataUpdate")))
@interface AACCClientUpdateCardsDataUpdate : AACCBase
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataUpdateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateCompanion")))
@interface AACCClientUpdateCardsDataUpdateCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataUpdateCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(AACCKotlinArray<id<AACCKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateRemoveCard")))
@interface AACCClientUpdateCardsDataUpdateRemoveCard : AACCClientUpdateCardsDataUpdate
- (instancetype)initWithType:(NSString *)type data:(AACCClientUpdateCardsDataUpdateRemoveCardData *)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataUpdateRemoveCardCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCardsDataUpdateRemoveCard *)doCopyType:(NSString *)type data:(AACCClientUpdateCardsDataUpdateRemoveCardData *)data __attribute__((swift_name("doCopy(type:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCClientUpdateCardsDataUpdateRemoveCardData *data __attribute__((swift_name("data")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateRemoveCardCompanion")))
@interface AACCClientUpdateCardsDataUpdateRemoveCardCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataUpdateRemoveCardCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateRemoveCardData")))
@interface AACCClientUpdateCardsDataUpdateRemoveCardData : AACCBase
- (instancetype)initWithActionType:(NSString *)actionType cardInstanceId:(NSString *)cardInstanceId subscriptionId:(NSString *)subscriptionId __attribute__((swift_name("init(actionType:cardInstanceId:subscriptionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataUpdateRemoveCardDataCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCardsDataUpdateRemoveCardData *)doCopyActionType:(NSString *)actionType cardInstanceId:(NSString *)cardInstanceId subscriptionId:(NSString *)subscriptionId __attribute__((swift_name("doCopy(actionType:cardInstanceId:subscriptionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *actionType __attribute__((swift_name("actionType")));
@property (readonly) NSString *cardInstanceId __attribute__((swift_name("cardInstanceId")));
@property (readonly) NSString *subscriptionId __attribute__((swift_name("subscriptionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateRemoveCardDataCompanion")))
@interface AACCClientUpdateCardsDataUpdateRemoveCardDataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataUpdateRemoveCardDataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateReplaceFeed")))
@interface AACCClientUpdateCardsDataUpdateReplaceFeed : AACCClientUpdateCardsDataUpdate
- (instancetype)initWithType:(NSString *)type data:(AACCClientUpdateCardsDataUpdateReplaceFeedData *)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataUpdateReplaceFeedCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCardsDataUpdateReplaceFeed *)doCopyType:(NSString *)type data:(AACCClientUpdateCardsDataUpdateReplaceFeedData *)data __attribute__((swift_name("doCopy(type:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCClientUpdateCardsDataUpdateReplaceFeedData *data __attribute__((swift_name("data")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateReplaceFeedCompanion")))
@interface AACCClientUpdateCardsDataUpdateReplaceFeedCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataUpdateReplaceFeedCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateReplaceFeedData")))
@interface AACCClientUpdateCardsDataUpdateReplaceFeedData : AACCBase
- (instancetype)initWithCardInstances:(AACCCardFeed *)cardInstances subscriptionId:(NSString *)subscriptionId __attribute__((swift_name("init(cardInstances:subscriptionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataUpdateReplaceFeedDataCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCardsDataUpdateReplaceFeedData *)doCopyCardInstances:(AACCCardFeed *)cardInstances subscriptionId:(NSString *)subscriptionId __attribute__((swift_name("doCopy(cardInstances:subscriptionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCCardFeed *cardInstances __attribute__((swift_name("cardInstances")));
@property (readonly) NSString *subscriptionId __attribute__((swift_name("subscriptionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateReplaceFeedDataCompanion")))
@interface AACCClientUpdateCardsDataUpdateReplaceFeedDataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataUpdateReplaceFeedDataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateUpdateCard")))
@interface AACCClientUpdateCardsDataUpdateUpdateCard : AACCClientUpdateCardsDataUpdate
- (instancetype)initWithType:(NSString *)type data:(AACCClientUpdateCardsDataUpdateUpdateCardData *)data __attribute__((swift_name("init(type:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataUpdateUpdateCardCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCardsDataUpdateUpdateCard *)doCopyType:(NSString *)type data:(AACCClientUpdateCardsDataUpdateUpdateCardData *)data __attribute__((swift_name("doCopy(type:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCClientUpdateCardsDataUpdateUpdateCardData *data __attribute__((swift_name("data")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateUpdateCardCompanion")))
@interface AACCClientUpdateCardsDataUpdateUpdateCardCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataUpdateUpdateCardCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateUpdateCardData")))
@interface AACCClientUpdateCardsDataUpdateUpdateCardData : AACCBase
- (instancetype)initWithActionType:(NSString *)actionType cardInstance:(AACCCardInstance *)cardInstance subscriptionId:(NSString *)subscriptionId __attribute__((swift_name("init(actionType:cardInstance:subscriptionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCClientUpdateCardsDataUpdateUpdateCardDataCompanion *companion __attribute__((swift_name("companion")));
- (AACCClientUpdateCardsDataUpdateUpdateCardData *)doCopyActionType:(NSString *)actionType cardInstance:(AACCCardInstance *)cardInstance subscriptionId:(NSString *)subscriptionId __attribute__((swift_name("doCopy(actionType:cardInstance:subscriptionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *actionType __attribute__((swift_name("actionType")));
@property (readonly) AACCCardInstance *cardInstance __attribute__((swift_name("cardInstance")));
@property (readonly) NSString *subscriptionId __attribute__((swift_name("subscriptionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Client.UpdateCardsDataUpdateUpdateCardDataCompanion")))
@interface AACCClientUpdateCardsDataUpdateUpdateCardDataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCClientUpdateCardsDataUpdateUpdateCardDataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutNode")))
@interface AACCLayoutNode : AACCBase
- (instancetype)initWithType:(NSString *)type key:(NSString * _Nullable)key attributes:(AACCLayoutNodeAttributes * _Nullable)attributes children:(NSArray<AACCLayoutNode *> * _Nullable)children __attribute__((swift_name("init(type:key:attributes:children:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCLayoutNodeCompanion *companion __attribute__((swift_name("companion")));
- (AACCLayoutNode *)doCopyType:(NSString *)type key:(NSString * _Nullable)key attributes:(AACCLayoutNodeAttributes * _Nullable)attributes children:(NSArray<AACCLayoutNode *> * _Nullable)children __attribute__((swift_name("doCopy(type:key:attributes:children:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCLayoutNodeAttributes * _Nullable attributes __attribute__((swift_name("attributes")));
@property (readonly) NSArray<AACCLayoutNode *> * _Nullable children __attribute__((swift_name("children")));
@property (readonly) AACCKotlinArray<AACCLayoutNode *> * _Nullable jsChildren __attribute__((swift_name("jsChildren")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutNode.Companion")))
@interface AACCLayoutNodeCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCLayoutNodeCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutNodeAttributes")))
@interface AACCLayoutNodeAttributes : AACCBase
- (instancetype)initWithText:(NSString * _Nullable)text src:(NSString * _Nullable)src format:(NSString * _Nullable)format thumbnailSrc:(NSString * _Nullable)thumbnailSrc name:(NSString * _Nullable)name placeholder:(NSString * _Nullable)placeholder __attribute__((swift_name("init(text:src:format:thumbnailSrc:name:placeholder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCLayoutNodeAttributesCompanion *companion __attribute__((swift_name("companion")));
- (AACCLayoutNodeAttributes *)doCopyText:(NSString * _Nullable)text src:(NSString * _Nullable)src format:(NSString * _Nullable)format thumbnailSrc:(NSString * _Nullable)thumbnailSrc name:(NSString * _Nullable)name placeholder:(NSString * _Nullable)placeholder __attribute__((swift_name("doCopy(text:src:format:thumbnailSrc:name:placeholder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable format __attribute__((swift_name("format")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable placeholder __attribute__((swift_name("placeholder")));
@property (readonly) NSString * _Nullable src __attribute__((swift_name("src")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable thumbnailSrc __attribute__((swift_name("thumbnailSrc")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutNodeAttributes.Companion")))
@interface AACCLayoutNodeAttributesCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCLayoutNodeAttributesCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeVariable")))
@interface AACCRuntimeVariable : AACCBase
- (instancetype)initWithName:(NSString *)name defaultValue:(NSString *)defaultValue type:(NSString *)type defaultFormatterOption:(NSString * _Nullable)defaultFormatterOption __attribute__((swift_name("init(name:defaultValue:type:defaultFormatterOption:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCRuntimeVariableCompanion *companion __attribute__((swift_name("companion")));
- (AACCRuntimeVariable *)doCopyName:(NSString *)name defaultValue:(NSString *)defaultValue type:(NSString *)type defaultFormatterOption:(NSString * _Nullable)defaultFormatterOption __attribute__((swift_name("doCopy(name:defaultValue:type:defaultFormatterOption:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable defaultFormatterOption __attribute__((swift_name("defaultFormatterOption")));
@property (readonly) NSString *defaultValue __attribute__((swift_name("defaultValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeVariable.Companion")))
@interface AACCRuntimeVariableCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCRuntimeVariableCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeVariableResolutionCard")))
@interface AACCRuntimeVariableResolutionCard : AACCBase
- (instancetype)initWithEventName:(NSString *)eventName lifecycleId:(NSString *)lifecycleId id:(NSString *)id runtimeVariables:(NSDictionary<NSString *, NSString *> *)runtimeVariables __attribute__((swift_name("init(eventName:lifecycleId:id:runtimeVariables:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCRuntimeVariableResolutionCardCompanion *companion __attribute__((swift_name("companion")));
- (AACCRuntimeVariableResolutionCard *)doCopyEventName:(NSString *)eventName lifecycleId:(NSString *)lifecycleId id:(NSString *)id runtimeVariables:(NSDictionary<NSString *, NSString *> *)runtimeVariables __attribute__((swift_name("doCopy(eventName:lifecycleId:id:runtimeVariables:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lifecycleId __attribute__((swift_name("lifecycleId")));
@property (readonly) NSDictionary<NSString *, NSString *> *runtimeVariables __attribute__((swift_name("runtimeVariables")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeVariableResolutionCard.Companion")))
@interface AACCRuntimeVariableResolutionCardCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCRuntimeVariableResolutionCardCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Server")))
@interface AACCServer : AACCBase
@property (class, readonly, getter=companion) AACCServerCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *messageId __attribute__((swift_name("messageId")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server.AuthMessage")))
@interface AACCServerAuthMessage : AACCServer
- (instancetype)initWithMessageType:(NSString *)messageType authToken:(NSString *)authToken messageId:(NSString *)messageId __attribute__((swift_name("init(messageType:authToken:messageId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCServerAuthMessageCompanion *companion __attribute__((swift_name("companion")));
- (AACCServerAuthMessage *)doCopyMessageType:(NSString *)messageType authToken:(NSString *)authToken messageId:(NSString *)messageId __attribute__((swift_name("doCopy(messageType:authToken:messageId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property (readonly) NSString *messageId __attribute__((swift_name("messageId")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server.AuthMessageCompanion")))
@interface AACCServerAuthMessageCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCServerAuthMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server.Companion")))
@interface AACCServerCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCServerCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(AACCKotlinArray<id<AACCKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server.CustomPing")))
@interface AACCServerCustomPing : AACCServer
- (instancetype)initWithMessageType:(NSString *)messageType messageId:(NSString *)messageId __attribute__((swift_name("init(messageType:messageId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCServerCustomPingCompanion *companion __attribute__((swift_name("companion")));
- (AACCServerCustomPing *)doCopyMessageType:(NSString *)messageType messageId:(NSString *)messageId __attribute__((swift_name("doCopy(messageType:messageId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *messageId __attribute__((swift_name("messageId")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server.CustomPingCompanion")))
@interface AACCServerCustomPingCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCServerCustomPingCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server.Subscribe")))
@interface AACCServerSubscribe : AACCServer
- (instancetype)initWithMessageType:(NSString *)messageType messageId:(NSString *)messageId data:(AACCServerSubscribeData *)data __attribute__((swift_name("init(messageType:messageId:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCServerSubscribeCompanion *companion __attribute__((swift_name("companion")));
- (AACCServerSubscribe *)doCopyMessageType:(NSString *)messageType messageId:(NSString *)messageId data:(AACCServerSubscribeData *)data __attribute__((swift_name("doCopy(messageType:messageId:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCServerSubscribeData *data __attribute__((swift_name("data")));
@property (readonly) NSString *messageId __attribute__((swift_name("messageId")));
@property (readonly) NSString *messageType __attribute__((swift_name("messageType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server.SubscribeCompanion")))
@interface AACCServerSubscribeCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCServerSubscribeCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server.SubscribeData")))
@interface AACCServerSubscribeData : AACCBase
- (instancetype)initWithSubscriptions:(NSArray<AACCWebsocketSubscriptionData *> *)subscriptions __attribute__((swift_name("init(subscriptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCServerSubscribeDataCompanion *companion __attribute__((swift_name("companion")));
- (AACCServerSubscribeData *)doCopySubscriptions:(NSArray<AACCWebsocketSubscriptionData *> *)subscriptions __attribute__((swift_name("doCopy(subscriptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AACCWebsocketSubscriptionData *> *subscriptions __attribute__((swift_name("subscriptions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Server.SubscribeDataCompanion")))
@interface AACCServerSubscribeDataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCServerSubscribeDataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubviewLayout")))
@interface AACCSubviewLayout : AACCBase
- (instancetype)initWithTitle:(NSString *)title nodes:(NSArray<AACCLayoutNode *> *)nodes __attribute__((swift_name("init(title:nodes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCSubviewLayoutCompanion *companion __attribute__((swift_name("companion")));
- (AACCSubviewLayout *)doCopyTitle:(NSString *)title nodes:(NSArray<AACCLayoutNode *> *)nodes __attribute__((swift_name("doCopy(title:nodes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCKotlinArray<AACCLayoutNode *> *jsNodes __attribute__((swift_name("jsNodes")));
@property (readonly) NSArray<AACCLayoutNode *> *nodes __attribute__((swift_name("nodes")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubviewLayout.Companion")))
@interface AACCSubviewLayoutCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCSubviewLayoutCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Validation")))
@interface AACCValidation : AACCBase
- (instancetype)initWithAttributes:(NSDictionary<NSString *, NSString *> *)attributes errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("init(attributes:errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCValidationCompanion *companion __attribute__((swift_name("companion")));
- (AACCValidation *)doCopyAttributes:(NSDictionary<NSString *, NSString *> *)attributes errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("doCopy(attributes:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> *attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Validation.Companion")))
@interface AACCValidationCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCValidationCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol AACCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface AACCKotlinEnum<E> : AACCBase <AACCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationType")))
@interface AACCValidationType : AACCKotlinEnum<AACCValidationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AACCValidationType *required __attribute__((swift_name("required")));
+ (AACCKotlinArray<AACCValidationType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AACCValidationType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebsocketFilter")))
@interface AACCWebsocketFilter : AACCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) AACCWebsocketFilterCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebsocketFilter.Companion")))
@interface AACCWebsocketFilterCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCWebsocketFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebsocketSubscriptionData")))
@interface AACCWebsocketSubscriptionData : AACCBase
- (instancetype)initWithSubscriptionId:(NSString *)subscriptionId streamContainerId:(NSString *)streamContainerId filters:(AACCWebsocketFilter *)filters __attribute__((swift_name("init(subscriptionId:streamContainerId:filters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AACCWebsocketSubscriptionDataCompanion *companion __attribute__((swift_name("companion")));
- (AACCWebsocketSubscriptionData *)doCopySubscriptionId:(NSString *)subscriptionId streamContainerId:(NSString *)streamContainerId filters:(AACCWebsocketFilter *)filters __attribute__((swift_name("doCopy(subscriptionId:streamContainerId:filters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AACCWebsocketFilter *filters __attribute__((swift_name("filters")));
@property (readonly) NSString *streamContainerId __attribute__((swift_name("streamContainerId")));
@property (readonly) NSString *subscriptionId __attribute__((swift_name("subscriptionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebsocketSubscriptionData.Companion")))
@interface AACCWebsocketSubscriptionDataCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCWebsocketSubscriptionDataCompanion *shared __attribute__((swift_name("shared")));
- (id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Configuration")))
@protocol AACCConfiguration
@required
@property (readonly) NSString *apiHost __attribute__((swift_name("apiHost")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) NSString *environmentId __attribute__((swift_name("environmentId")));
@property (readonly) NSString *wsApiHost __attribute__((swift_name("wsApiHost")));
@end

__attribute__((swift_name("ConfigurationProvider")))
@protocol AACCConfigurationProvider
@required
- (id<AACCConfiguration>)getConfiguration __attribute__((swift_name("getConfiguration()")));
@property id<AACCConfiguration> (^ _Nullable configurationDelegate)(void) __attribute__((swift_name("configurationDelegate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultConfiguration")))
@interface AACCDefaultConfiguration : AACCBase <AACCConfiguration>
- (instancetype)initWithWsApiHost:(NSString *)wsApiHost apiHost:(NSString *)apiHost apiKey:(NSString *)apiKey environmentId:(NSString *)environmentId __attribute__((swift_name("init(wsApiHost:apiHost:apiKey:environmentId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *apiHost __attribute__((swift_name("apiHost")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) NSString *environmentId __attribute__((swift_name("environmentId")));
@property (readonly) NSString *wsApiHost __attribute__((swift_name("wsApiHost")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultConfigurationProvider")))
@interface AACCDefaultConfigurationProvider : AACCBase <AACCConfigurationProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<AACCConfiguration>)getConfiguration __attribute__((swift_name("getConfiguration()")));
@property id<AACCConfiguration> (^ _Nullable configurationDelegate)(void) __attribute__((swift_name("configurationDelegate")));
@end

__attribute__((swift_name("TokenProvider")))
@protocol AACCTokenProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTokenWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getToken(completionHandler:)")));
@property void (^ _Nullable tokenDelegate)(AACCKotlinUnit *(^)(NSString *)) __attribute__((swift_name("tokenDelegate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenProviderImpl")))
@interface AACCTokenProviderImpl : AACCBase <AACCTokenProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTokenWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getToken(completionHandler:)")));
@property void (^ _Nullable tokenDelegate)(AACCKotlinUnit *(^)(NSString *)) __attribute__((swift_name("tokenDelegate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AACCoreJsKt")))
@interface AACCAACCoreJsKt : AACCBase
@property (class, readonly) AACCAACCoreJavascript *JSCore __attribute__((swift_name("JSCore")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface AACCKotlinUnit : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AACCKotlinArray<T> : AACCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AACCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AACCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AACCKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AACCKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AACCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AACCKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AACCKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AACCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AACCKotlinx_serialization_coreKSerializer <AACCKotlinx_serialization_coreSerializationStrategy, AACCKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface AACCKotlinEnumCompanion : AACCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AACCKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinException")))
@interface AACCKotlinException : AACCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface AACCKotlinRuntimeException : AACCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AACCKotlinIllegalStateException : AACCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface AACCKotlinCancellationException : AACCKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AACCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol AACCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AACCKotlinx_serialization_coreEncoder
@required
- (id<AACCKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AACCKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<AACCKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<AACCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AACCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AACCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AACCKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<AACCKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AACCKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<AACCKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) AACCKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AACCKotlinx_serialization_coreDecoder
@required
- (id<AACCKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<AACCKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (AACCKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AACCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AACCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AACCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AACCKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<AACCKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AACCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AACCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AACCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AACCKotlinx_serialization_coreSerializersModule : AACCBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<AACCKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AACCKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<AACCKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<AACCKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AACCKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AACCKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AACCKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AACCKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol AACCKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AACCKotlinx_serialization_coreSerialKind : AACCBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AACCKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<AACCKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AACCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AACCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AACCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AACCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AACCKotlinNothing : AACCBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AACCKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AACCKotlinKClass>)kClass provider:(id<AACCKotlinx_serialization_coreKSerializer> (^)(NSArray<id<AACCKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<AACCKotlinKClass>)kClass serializer:(id<AACCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AACCKotlinKClass>)baseClass actualClass:(id<AACCKotlinKClass>)actualClass actualSerializer:(id<AACCKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AACCKotlinKClass>)baseClass defaultDeserializerProvider:(id<AACCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<AACCKotlinKClass>)baseClass defaultDeserializerProvider:(id<AACCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<AACCKotlinKClass>)baseClass defaultSerializerProvider:(id<AACCKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AACCKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AACCKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol AACCKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol AACCKotlinKClass <AACCKotlinKDeclarationContainer, AACCKotlinKAnnotatedElement, AACCKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
