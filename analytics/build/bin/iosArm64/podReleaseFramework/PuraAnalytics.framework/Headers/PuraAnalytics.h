#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PuraAnalyticsKotlinx_serialization_jsonJsonElement, PuraAnalyticsScreenEvent, PuraAnalyticsDefaultScreenViewedEventCompanion, PuraAnalyticsDefaultScreenViewedEvent, PuraAnalyticsAnalyticsEvent, PuraAnalyticsKoin_coreKoin, PuraAnalyticsDefaultButtonTappedEvent, PuraAnalyticsDefaultAppEvent, PuraAnalyticsAnalyticsAppFlow, PuraAnalyticsSchedulesVariant, PuraAnalyticsDeviceBayType, PuraAnalyticsKotlinEnumCompanion, PuraAnalyticsKotlinEnum<E>, PuraAnalyticsKotlinArray<T>, PuraAnalyticsAnalyticsKeyConstantsCompanion, PuraAnalyticsAppRatingAction, PuraAnalyticsDiffuserAnalyticsType, PuraAnalyticsAttemptToConnectToWiFiMethod, PuraAnalyticsAuthMethod, PuraAnalyticsAwayModeEventType, PuraAnalyticsAwayModeStatus, PuraAnalyticsBayEventType, PuraAnalyticsBayMode, PuraAnalyticsBleScannedDiffuserAnalyticData, PuraAnalyticsDiffuserSetupVersion, PuraAnalyticsDiffuserSetupScreenEvent, PuraAnalyticsPermissionState, PuraAnalyticsPermissionPlace, PuraAnalyticsCarOnboardingHelpPlace, PuraAnalyticsCarOnboarding, PuraAnalyticsCarSettings, PuraAnalyticsLearnMoreCarouselPageName, PuraAnalyticsDeviceControlVariant, PuraAnalyticsDeviceResetType, PuraAnalyticsDiffuserSettingsScreenEvent, PuraAnalyticsEventType, PuraAnalyticsFragranceInsertionMethod, PuraAnalyticsFragranceInputMethod, PuraAnalyticsFragranceRuntimeVariant, PuraAnalyticsFragranceScreenEvent, PuraAnalyticsCarouselPageScreenEvent, PuraAnalyticsOnboardingDiffusers, PuraAnalyticsOverMidnightWarningAction, PuraAnalyticsPermissionStateCompanion, PuraAnalyticsScheduleVariantEvent, PuraAnalyticsScheduleScreenEvent, PuraAnalyticsScheduleButtonPlace, PuraAnalyticsScheduleStateCompanion, PuraAnalyticsScheduleState, PuraAnalyticsScheduleType, PuraAnalyticsSchedulesViewType, PuraAnalyticsStatusBannerAction, PuraAnalyticsTrySchedulesClosedAction, PuraAnalyticsUnknownFragrance, PuraAnalyticsWifiConnectedResultErrorType, PuraAnalyticsWifiConnectedResultErrorTypeBluetoothDisabled, PuraAnalyticsWifiConnectedResultErrorTypeConnectionFailed, PuraAnalyticsWifiConnectedResultErrorTypeDiffuserDisconnected, PuraAnalyticsWifiConnectedResultErrorTypeDiffuserNotResponding, PuraAnalyticsWifiConnectedResultErrorTypeFrameError, PuraAnalyticsKotlinThrowable, PuraAnalyticsWifiConnectedResultErrorTypeUnknownError, PuraAnalyticsWifiConnectedResultErrorTypeWrongPassword, PuraAnalyticsKotlinPair<__covariant A, __covariant B>, PuraAnalyticsKotlinStringCompanion, PuraAnalyticsKotlinTriple<__covariant A, __covariant B, __covariant C>, PuraAnalyticsKotlinx_serialization_jsonJsonElementCompanion, PuraAnalyticsKoin_coreScope, PuraAnalyticsKoin_coreParametersHolder, PuraAnalyticsKotlinLazyThreadSafetyMode, PuraAnalyticsKoin_coreModule, PuraAnalyticsKoin_coreLogger, PuraAnalyticsKoin_coreInstanceRegistry, PuraAnalyticsKoin_corePropertyRegistry, PuraAnalyticsKoin_coreScopeRegistry, PuraAnalyticsKoin_coreLockable, PuraAnalyticsKoin_coreParametersHolderCompanion, PuraAnalyticsKoin_coreInstanceFactory<T>, PuraAnalyticsKoin_coreScopeDSL, PuraAnalyticsKoin_coreSingleInstanceFactory<T>, PuraAnalyticsKoin_coreLevel, PuraAnalyticsKoin_coreScopeRegistryCompanion, PuraAnalyticsKotlinx_serialization_coreSerializersModule, PuraAnalyticsKotlinx_serialization_coreSerialKind, PuraAnalyticsKotlinNothing, PuraAnalyticsKoin_coreBeanDefinition<T>, PuraAnalyticsKoin_coreInstanceFactoryCompanion, PuraAnalyticsKoin_coreInstanceContext, PuraAnalyticsKoin_coreKind, PuraAnalyticsKoin_coreCallbacks<T>;

@protocol PuraAnalyticsKoin_coreKoinComponent, PuraAnalyticsKotlinComparable, PuraAnalyticsSegmentAnalytics, PuraAnalyticsKotlinIterator, PuraAnalyticsKotlinx_serialization_coreKSerializer, PuraAnalyticsKotlinKClass, PuraAnalyticsKotlinMapEntry, PuraAnalyticsKoin_coreKoinScopeComponent, PuraAnalyticsKoin_coreQualifier, PuraAnalyticsKotlinLazy, PuraAnalyticsKotlinx_serialization_coreEncoder, PuraAnalyticsKotlinx_serialization_coreSerialDescriptor, PuraAnalyticsKotlinx_serialization_coreSerializationStrategy, PuraAnalyticsKotlinx_serialization_coreDecoder, PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy, PuraAnalyticsKotlinKDeclarationContainer, PuraAnalyticsKotlinKAnnotatedElement, PuraAnalyticsKotlinKClassifier, PuraAnalyticsKoin_coreScopeCallback, PuraAnalyticsKotlinx_serialization_coreCompositeEncoder, PuraAnalyticsKotlinAnnotation, PuraAnalyticsKotlinx_serialization_coreCompositeDecoder, PuraAnalyticsKotlinx_serialization_coreSerializersModuleCollector;

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
@interface PuraAnalyticsBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PuraAnalyticsBase (PuraAnalyticsBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PuraAnalyticsMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PuraAnalyticsMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPuraAnalyticsKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PuraAnalyticsNumber : NSNumber
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
@interface PuraAnalyticsByte : PuraAnalyticsNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PuraAnalyticsUByte : PuraAnalyticsNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PuraAnalyticsShort : PuraAnalyticsNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PuraAnalyticsUShort : PuraAnalyticsNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PuraAnalyticsInt : PuraAnalyticsNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PuraAnalyticsUInt : PuraAnalyticsNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PuraAnalyticsLong : PuraAnalyticsNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PuraAnalyticsULong : PuraAnalyticsNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PuraAnalyticsFloat : PuraAnalyticsNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PuraAnalyticsDouble : PuraAnalyticsNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PuraAnalyticsBoolean : PuraAnalyticsNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("ScreenEvent")))
@interface PuraAnalyticsScreenEvent : PuraAnalyticsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, PuraAnalyticsKotlinx_serialization_jsonJsonElement *> * _Nullable)parameters __attribute__((swift_name("parameters()")));
- (NSDictionary<NSString *, id> *)parametersAsMap __attribute__((swift_name("parametersAsMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("DefaultScreenViewedEvent")))
@interface PuraAnalyticsDefaultScreenViewedEvent : PuraAnalyticsScreenEvent
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) PuraAnalyticsDefaultScreenViewedEventCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, PuraAnalyticsKotlinx_serialization_jsonJsonElement *> *)parameters __attribute__((swift_name("parameters()")));
- (NSDictionary<NSString *, id> *)parametersAsMap __attribute__((swift_name("parametersAsMap()")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountScreenEvent")))
@interface PuraAnalyticsAccountScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("AnalyticsEvent")))
@interface PuraAnalyticsAnalyticsEvent : PuraAnalyticsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<NSString *, PuraAnalyticsKotlinx_serialization_jsonJsonElement *> * _Nullable)parameters __attribute__((swift_name("parameters()")));
- (NSDictionary<NSString *, id> *)parametersAsMap __attribute__((swift_name("parametersAsMap()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol PuraAnalyticsKoin_coreKoinComponent
@required
- (PuraAnalyticsKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("DefaultButtonTappedEvent")))
@interface PuraAnalyticsDefaultButtonTappedEvent : PuraAnalyticsAnalyticsEvent <PuraAnalyticsKoin_coreKoinComponent>
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSDictionary<NSString *, PuraAnalyticsKotlinx_serialization_jsonJsonElement *> *)parameters __attribute__((swift_name("parameters()")));
- (NSDictionary<NSString *, id> *)parametersAsMap __attribute__((swift_name("parametersAsMap()")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable customProperties __attribute__((swift_name("customProperties")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddAnotherScheduleTapped")))
@interface PuraAnalyticsAddAnotherScheduleTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddDiffuserTapped")))
@interface PuraAnalyticsAddDiffuserTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddNetworkManuallyTapped")))
@interface PuraAnalyticsAddNetworkManuallyTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("DefaultAppEvent")))
@interface PuraAnalyticsDefaultAppEvent : PuraAnalyticsAnalyticsEvent
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSDictionary<NSString *, PuraAnalyticsKotlinx_serialization_jsonJsonElement *> * _Nullable)parameters __attribute__((swift_name("parameters()")));
- (NSDictionary<NSString *, id> *)parametersAsMap __attribute__((swift_name("parametersAsMap()")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable customProperties __attribute__((swift_name("customProperties")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddNewScheduleClicked")))
@interface PuraAnalyticsAddNewScheduleClicked : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId appFlow:(PuraAnalyticsAnalyticsAppFlow *)appFlow variant:(PuraAnalyticsSchedulesVariant *)variant __attribute__((swift_name("init(deviceId:appFlow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillAlexaCodeReceived")))
@interface PuraAnalyticsAlexaSkillAlexaCodeReceived : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillLearnMoreTapped")))
@interface PuraAnalyticsAlexaSkillLearnMoreTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillLinkScreenEvent")))
@interface PuraAnalyticsAlexaSkillLinkScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillLinkSkillTapped")))
@interface PuraAnalyticsAlexaSkillLinkSkillTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillLinked")))
@interface PuraAnalyticsAlexaSkillLinked : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillLoaded")))
@interface PuraAnalyticsAlexaSkillLoaded : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithIsAccountLinked:(BOOL)isAccountLinked source:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(isAccountLinked:source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillLoadingScreenEvent")))
@interface PuraAnalyticsAlexaSkillLoadingScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillPuraCodeReceived")))
@interface PuraAnalyticsAlexaSkillPuraCodeReceived : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillTapped")))
@interface PuraAnalyticsAlexaSkillTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillUnlinkScreenEvent")))
@interface PuraAnalyticsAlexaSkillUnlinkScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillUnlinkSkillConfirmed")))
@interface PuraAnalyticsAlexaSkillUnlinkSkillConfirmed : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillUnlinkSkillTapped")))
@interface PuraAnalyticsAlexaSkillUnlinkSkillTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillUnlinked")))
@interface PuraAnalyticsAlexaSkillUnlinked : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlexaSkillViewTutorialTapped")))
@interface PuraAnalyticsAlexaSkillViewTutorialTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlwaysOnActivated")))
@interface PuraAnalyticsAlwaysOnActivated : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithHasConflict:(BOOL)hasConflict bayType:(PuraAnalyticsDeviceBayType *)bayType deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(hasConflict:bayType:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmbientModeScreenEvent")))
@interface PuraAnalyticsAmbientModeScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmbientModeSet")))
@interface PuraAnalyticsAmbientModeSet : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithIsOn:(BOOL)isOn deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(isOn:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PuraAnalyticsKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PuraAnalyticsKotlinEnum<E> : PuraAnalyticsBase <PuraAnalyticsKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PuraAnalyticsKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsAppFlow")))
@interface PuraAnalyticsAnalyticsAppFlow : PuraAnalyticsKotlinEnum<PuraAnalyticsAnalyticsAppFlow *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsAnalyticsAppFlow *onboarding __attribute__((swift_name("onboarding")));
@property (class, readonly) PuraAnalyticsAnalyticsAppFlow *changeWifi __attribute__((swift_name("changeWifi")));
@property (class, readonly) PuraAnalyticsAnalyticsAppFlow *diffuserReset __attribute__((swift_name("diffuserReset")));
@property (class, readonly) PuraAnalyticsAnalyticsAppFlow *setupUpdate __attribute__((swift_name("setupUpdate")));
@property (class, readonly) PuraAnalyticsAnalyticsAppFlow *scheduleSetup __attribute__((swift_name("scheduleSetup")));
@property (class, readonly) PuraAnalyticsAnalyticsAppFlow *swapFragrance __attribute__((swift_name("swapFragrance")));
@property (class, readonly) PuraAnalyticsAnalyticsAppFlow *diffuserSettings __attribute__((swift_name("diffuserSettings")));
@property (class, readonly) PuraAnalyticsAnalyticsAppFlow *diffuserControl __attribute__((swift_name("diffuserControl")));
@property (class, readonly) PuraAnalyticsAnalyticsAppFlow *diffuserList __attribute__((swift_name("diffuserList")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsAnalyticsAppFlow *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsAnalyticsAppFlow *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsKeyConstants")))
@interface PuraAnalyticsAnalyticsKeyConstants : PuraAnalyticsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PuraAnalyticsAnalyticsKeyConstantsCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnalyticsKeyConstants.Companion")))
@interface PuraAnalyticsAnalyticsKeyConstantsCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsAnalyticsKeyConstantsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ACTION_KEY __attribute__((swift_name("ACTION_KEY")));
@property (readonly) NSString *APP_EVENT_KEY __attribute__((swift_name("APP_EVENT_KEY")));
@property (readonly) NSString *APP_PERMISSIONS_KEY __attribute__((swift_name("APP_PERMISSIONS_KEY")));
@property (readonly) NSString *APP_VERSION_KEY __attribute__((swift_name("APP_VERSION_KEY")));
@property (readonly) NSString *BAY_KEY __attribute__((swift_name("BAY_KEY")));
@property (readonly) NSString *BLUETOOTH_APP_PERMISSION_KEY __attribute__((swift_name("BLUETOOTH_APP_PERMISSION_KEY")));
@property (readonly) NSString *BLUETOOTH_ENABLED_KEY __attribute__((swift_name("BLUETOOTH_ENABLED_KEY")));
@property (readonly) NSString *BLUETOOTH_KEY __attribute__((swift_name("BLUETOOTH_KEY")));
@property (readonly) NSString *BLUETOOTH_NAME_KEY __attribute__((swift_name("BLUETOOTH_NAME_KEY")));
@property (readonly) NSString *BRAND_KEY __attribute__((swift_name("BRAND_KEY")));
@property (readonly) NSString *BUTTON_TAPPED_KEY __attribute__((swift_name("BUTTON_TAPPED_KEY")));
@property (readonly) NSString *BUTTON_TEXT_KEY __attribute__((swift_name("BUTTON_TEXT_KEY")));
@property (readonly) NSString *CAMERA_KEY __attribute__((swift_name("CAMERA_KEY")));
@property (readonly) NSString *CLICK_SOURCE_KEY __attribute__((swift_name("CLICK_SOURCE_KEY")));
@property (readonly) NSString *COLOR_KEY __attribute__((swift_name("COLOR_KEY")));
@property (readonly) NSString *CONFLICT_RUNNING_KEY __attribute__((swift_name("CONFLICT_RUNNING_KEY")));
@property (readonly) NSString *CONFLICT_SCHEDULE_KEY __attribute__((swift_name("CONFLICT_SCHEDULE_KEY")));
@property (readonly) NSString *CURRENT_FIRMWARE_KEY __attribute__((swift_name("CURRENT_FIRMWARE_KEY")));
@property (readonly) NSString *CUSTOM_PROPERTIES_KEY __attribute__((swift_name("CUSTOM_PROPERTIES_KEY")));
@property (readonly) NSString *DAYS_KEY __attribute__((swift_name("DAYS_KEY")));
@property (readonly) NSString *DAYS_SINCE_REFILL __attribute__((swift_name("DAYS_SINCE_REFILL")));
@property (readonly) NSString *DEVICE_COUNT_KEY __attribute__((swift_name("DEVICE_COUNT_KEY")));
@property (readonly) NSString *DEVICE_ID_KEY __attribute__((swift_name("DEVICE_ID_KEY")));
@property (readonly) NSString *DEVICE_SETUP_VERSION_KEY __attribute__((swift_name("DEVICE_SETUP_VERSION_KEY")));
@property (readonly) NSString *DEVICE_TYPE_KEY __attribute__((swift_name("DEVICE_TYPE_KEY")));
@property (readonly) NSString *DIFFUSERS_KEY __attribute__((swift_name("DIFFUSERS_KEY")));
@property (readonly) NSString *DIFFUSER_ID_KEY __attribute__((swift_name("DIFFUSER_ID_KEY")));
@property (readonly) NSString *DIFFUSER_NAME_KEY __attribute__((swift_name("DIFFUSER_NAME_KEY")));
@property (readonly) NSString *DIFFUSER_TYPE_KEY __attribute__((swift_name("DIFFUSER_TYPE_KEY")));
@property (readonly) NSString *DISPLAY_NAME_KEY __attribute__((swift_name("DISPLAY_NAME_KEY")));
@property (readonly) NSString *EMAIL_KEY __attribute__((swift_name("EMAIL_KEY")));
@property (readonly) NSString *END_KEY __attribute__((swift_name("END_KEY")));
@property (readonly) NSString *END_TIME_KEY __attribute__((swift_name("END_TIME_KEY")));
@property (readonly) NSString *ERROR_KEY __attribute__((swift_name("ERROR_KEY")));
@property (readonly) NSString *EVENT_KEY __attribute__((swift_name("EVENT_KEY")));
@property (readonly) NSString *EVENT_NAME_KEY __attribute__((swift_name("EVENT_NAME_KEY")));
@property (readonly) NSString *EVENT_TYPE_KEY __attribute__((swift_name("EVENT_TYPE_KEY")));
@property (readonly) NSString *FEATURE_FLAGS_KEY __attribute__((swift_name("FEATURE_FLAGS_KEY")));
@property (readonly) NSString *FLOW_KEY __attribute__((swift_name("FLOW_KEY")));
@property (readonly) NSString *FRAGRANCE_NAME_KEY __attribute__((swift_name("FRAGRANCE_NAME_KEY")));
@property (readonly) NSString *FRAGRANCE_REMAINING_KEY __attribute__((swift_name("FRAGRANCE_REMAINING_KEY")));
@property (readonly) NSString *FRAGRANCE_SKU_KEY __attribute__((swift_name("FRAGRANCE_SKU_KEY")));
@property (readonly) NSString *FRAGRANCE_TIMESTAMP_KEY __attribute__((swift_name("FRAGRANCE_TIMESTAMP_KEY")));
@property (readonly) NSString *FW_KEY __attribute__((swift_name("FW_KEY")));
@property (readonly) NSString *HW_KEY __attribute__((swift_name("HW_KEY")));
@property (readonly) NSString *INPUT_METHOD_KEY __attribute__((swift_name("INPUT_METHOD_KEY")));
@property (readonly) NSString *INTENSITY_KEY __attribute__((swift_name("INTENSITY_KEY")));
@property (readonly) NSString *IS_ONBOARDED_KEY __attribute__((swift_name("IS_ONBOARDED_KEY")));
@property (readonly) NSString *IS_RUNNING_KEY __attribute__((swift_name("IS_RUNNING_KEY")));
@property (readonly) NSString *LIGHT_KEY __attribute__((swift_name("LIGHT_KEY")));
@property (readonly) NSString *LOCATION_KEY __attribute__((swift_name("LOCATION_KEY")));
@property (readonly) NSString *METHOD_KEY __attribute__((swift_name("METHOD_KEY")));
@property (readonly) NSString *MODE_KEY __attribute__((swift_name("MODE_KEY")));
@property (readonly) NSString *NAME_KEY __attribute__((swift_name("NAME_KEY")));
@property (readonly) NSString *NETWORK_SECURED_KEY __attribute__((swift_name("NETWORK_SECURED_KEY")));
@property (readonly) NSString *NOTIFICATION_KEY __attribute__((swift_name("NOTIFICATION_KEY")));
@property (readonly) NSString *OLD_WEARING_TIME_KEY __attribute__((swift_name("OLD_WEARING_TIME_KEY")));
@property (readonly) NSString *ON_KEY __attribute__((swift_name("ON_KEY")));
@property (readonly) NSString *PAGE_KEY __attribute__((swift_name("PAGE_KEY")));
@property (readonly) NSString *PAYLOAD __attribute__((swift_name("PAYLOAD")));
@property (readonly) NSString *PLACE_KEY __attribute__((swift_name("PLACE_KEY")));
@property (readonly) NSString *PLATFORM_KEY __attribute__((swift_name("PLATFORM_KEY")));
@property (readonly) NSString *RATING_KEY __attribute__((swift_name("RATING_KEY")));
@property (readonly) NSString *REASON_KEY __attribute__((swift_name("REASON_KEY")));
@property (readonly) NSString *RESULT_KEY __attribute__((swift_name("RESULT_KEY")));
@property (readonly) NSString *ROOM_NAME_KEY __attribute__((swift_name("ROOM_NAME_KEY")));
@property (readonly) NSString *ROOM_TYPE_KEY __attribute__((swift_name("ROOM_TYPE_KEY")));
@property (readonly) NSString *RSSI_KEY __attribute__((swift_name("RSSI_KEY")));
@property (readonly) NSString *RUNTIME_KEY __attribute__((swift_name("RUNTIME_KEY")));
@property (readonly) NSString *SCREEN_NAME_KEY __attribute__((swift_name("SCREEN_NAME_KEY")));
@property (readonly) NSString *SCREEN_VIEWED_KEY __attribute__((swift_name("SCREEN_VIEWED_KEY")));
@property (readonly) NSString *SERVICE_KEY __attribute__((swift_name("SERVICE_KEY")));
@property (readonly) NSString *SIZE_KEY __attribute__((swift_name("SIZE_KEY")));
@property (readonly) NSString *SKU_KEY __attribute__((swift_name("SKU_KEY")));
@property (readonly) NSString *START_KEY __attribute__((swift_name("START_KEY")));
@property (readonly) NSString *START_TIME_KEY __attribute__((swift_name("START_TIME_KEY")));
@property (readonly) NSString *STATE_KEY __attribute__((swift_name("STATE_KEY")));
@property (readonly) NSString *STATUS_KEY __attribute__((swift_name("STATUS_KEY")));
@property (readonly) NSString *SUCCESS_KEY __attribute__((swift_name("SUCCESS_KEY")));
@property (readonly) NSString *SWAPPED_KEY __attribute__((swift_name("SWAPPED_KEY")));
@property (readonly) NSString *TIME_ZONE_KEY __attribute__((swift_name("TIME_ZONE_KEY")));
@property (readonly) NSString *TYPE_KEY __attribute__((swift_name("TYPE_KEY")));
@property (readonly) NSString *VALUE_KEY __attribute__((swift_name("VALUE_KEY")));
@property (readonly) NSString *VARIANT_KEY __attribute__((swift_name("VARIANT_KEY")));
@property (readonly) NSString *VARIANT_SKU_KEY __attribute__((swift_name("VARIANT_SKU_KEY")));
@property (readonly) NSString *VIEW_TYPE_KEY __attribute__((swift_name("VIEW_TYPE_KEY")));
@property (readonly) NSString *WEARING_TIME_KEY __attribute__((swift_name("WEARING_TIME_KEY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppRatingAction")))
@interface PuraAnalyticsAppRatingAction : PuraAnalyticsKotlinEnum<PuraAnalyticsAppRatingAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsAppRatingAction *dismiss __attribute__((swift_name("dismiss")));
@property (class, readonly) PuraAnalyticsAppRatingAction *never __attribute__((swift_name("never")));
@property (class, readonly) PuraAnalyticsAppRatingAction *notNow __attribute__((swift_name("notNow")));
@property (class, readonly) PuraAnalyticsAppRatingAction *rateInStore __attribute__((swift_name("rateInStore")));
@property (class, readonly) PuraAnalyticsAppRatingAction *submit __attribute__((swift_name("submit")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsAppRatingAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsAppRatingAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppRatingScreenEvent")))
@interface PuraAnalyticsAppRatingScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppRatingUpdated")))
@interface PuraAnalyticsAppRatingUpdated : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithAction:(PuraAnalyticsAppRatingAction *)action rating:(PuraAnalyticsFloat * _Nullable)rating __attribute__((swift_name("init(action:rating:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttemptToConnectToWiFi")))
@interface PuraAnalyticsAttemptToConnectToWiFi : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source diffuserId:(NSString *)diffuserId diffuserType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserType method:(PuraAnalyticsAttemptToConnectToWiFiMethod *)method rssi:(NSString * _Nullable)rssi flow:(NSString * _Nullable)flow __attribute__((swift_name("init(source:diffuserId:diffuserType:method:rssi:flow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AttemptToConnectToWiFi.Method")))
@interface PuraAnalyticsAttemptToConnectToWiFiMethod : PuraAnalyticsKotlinEnum<PuraAnalyticsAttemptToConnectToWiFiMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsAttemptToConnectToWiFiMethod *saved __attribute__((swift_name("saved")));
@property (class, readonly) PuraAnalyticsAttemptToConnectToWiFiMethod *searched __attribute__((swift_name("searched")));
@property (class, readonly) PuraAnalyticsAttemptToConnectToWiFiMethod *manual __attribute__((swift_name("manual")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsAttemptToConnectToWiFiMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsAttemptToConnectToWiFiMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthMethod")))
@interface PuraAnalyticsAuthMethod : PuraAnalyticsKotlinEnum<PuraAnalyticsAuthMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsAuthMethod *freeForm __attribute__((swift_name("freeForm")));
@property (class, readonly) PuraAnalyticsAuthMethod *facebook __attribute__((swift_name("facebook")));
@property (class, readonly) PuraAnalyticsAuthMethod *google __attribute__((swift_name("google")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsAuthMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsAuthMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwayModeEventType")))
@interface PuraAnalyticsAwayModeEventType : PuraAnalyticsKotlinEnum<PuraAnalyticsAwayModeEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsAwayModeEventType *leave __attribute__((swift_name("leave")));
@property (class, readonly) PuraAnalyticsAwayModeEventType *enter __attribute__((swift_name("enter")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsAwayModeEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsAwayModeEventType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwayModeScreenEvent")))
@interface PuraAnalyticsAwayModeScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwayModeSet")))
@interface PuraAnalyticsAwayModeSet : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithIsOn:(BOOL)isOn deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(isOn:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwayModeStatus")))
@interface PuraAnalyticsAwayModeStatus : PuraAnalyticsKotlinEnum<PuraAnalyticsAwayModeStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsAwayModeStatus *home __attribute__((swift_name("home")));
@property (class, readonly) PuraAnalyticsAwayModeStatus *away __attribute__((swift_name("away")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsAwayModeStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsAwayModeStatus *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwayModeTriggered")))
@interface PuraAnalyticsAwayModeTriggered : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithEventType:(PuraAnalyticsAwayModeEventType *)eventType deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(eventType:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BayButtonTapped")))
@interface PuraAnalyticsBayButtonTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source buttonText:(NSString *)buttonText flow:(PuraAnalyticsAnalyticsAppFlow *)flow deviceId:(NSString *)deviceId diffuserAnalyticsType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserAnalyticsType __attribute__((swift_name("init(source:buttonText:flow:deviceId:diffuserAnalyticsType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BayEventType")))
@interface PuraAnalyticsBayEventType : PuraAnalyticsKotlinEnum<PuraAnalyticsBayEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsBayEventType *started __attribute__((swift_name("started")));
@property (class, readonly) PuraAnalyticsBayEventType *stopped __attribute__((swift_name("stopped")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsBayEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsBayEventType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BayMode")))
@interface PuraAnalyticsBayMode : PuraAnalyticsKotlinEnum<PuraAnalyticsBayMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsBayMode *alwaysOn __attribute__((swift_name("alwaysOn")));
@property (class, readonly) PuraAnalyticsBayMode *timer __attribute__((swift_name("timer")));
@property (class, readonly) PuraAnalyticsBayMode *schedule __attribute__((swift_name("schedule")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsBayMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsBayMode *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaySkipped")))
@interface PuraAnalyticsBaySkipped : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithBayType:(PuraAnalyticsDeviceBayType *)bayType deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(bayType:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BayToggled")))
@interface PuraAnalyticsBayToggled : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithBayMode:(PuraAnalyticsBayMode *)bayMode eventType:(PuraAnalyticsBayEventType *)eventType bayType:(PuraAnalyticsDeviceBayType *)bayType deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(bayMode:eventType:bayType:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BleScannedDiffuserAnalyticData")))
@interface PuraAnalyticsBleScannedDiffuserAnalyticData : PuraAnalyticsBase
- (instancetype)initWithBluetoothName:(NSString *)bluetoothName isOnboarded:(BOOL)isOnboarded __attribute__((swift_name("init(bluetoothName:isOnboarded:)"))) __attribute__((objc_designated_initializer));
- (PuraAnalyticsBleScannedDiffuserAnalyticData *)doCopyBluetoothName:(NSString *)bluetoothName isOnboarded:(BOOL)isOnboarded __attribute__((swift_name("doCopy(bluetoothName:isOnboarded:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bluetoothName __attribute__((swift_name("bluetoothName")));
@property (readonly) BOOL isOnboarded __attribute__((swift_name("isOnboarded")));
@end

__attribute__((swift_name("DiffuserSetupScreenEvent")))
@interface PuraAnalyticsDiffuserSetupScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) PuraAnalyticsDiffuserSetupVersion *diffuserSetupVersion __attribute__((swift_name("diffuserSetupVersion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlueNightlightScreenEvent")))
@interface PuraAnalyticsBlueNightlightScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothPermissionUpdated")))
@interface PuraAnalyticsBluetoothPermissionUpdated : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithState:(PuraAnalyticsPermissionState *)state place:(PuraAnalyticsPermissionPlace *)place deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(state:place:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BluetoothPrimer")))
@interface PuraAnalyticsBluetoothPrimer : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithState:(PuraAnalyticsPermissionState *)state deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(state:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraPermissionScreenEvent")))
@interface PuraAnalyticsCameraPermissionScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraPermissionUpdated")))
@interface PuraAnalyticsCameraPermissionUpdated : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithState:(PuraAnalyticsPermissionState *)state place:(PuraAnalyticsPermissionPlace *)place deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(state:place:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraPrimer")))
@interface PuraAnalyticsCameraPrimer : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithState:(PuraAnalyticsPermissionState *)state deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(state:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarBannerTapped")))
@interface PuraAnalyticsCarBannerTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source deviceId:(NSString *)deviceId deviceName:(NSString *)deviceName __attribute__((swift_name("init(source:deviceId:deviceName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarDiffuserMainControlScreen")))
@interface PuraAnalyticsCarDiffuserMainControlScreen : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithSku:(NSString *)sku fragranceRemaining:(int64_t)fragranceRemaining __attribute__((swift_name("init(sku:fragranceRemaining:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarDontSeeDiffuserTapped")))
@interface PuraAnalyticsCarDontSeeDiffuserTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarNeedHelpTapped")))
@interface PuraAnalyticsCarNeedHelpTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source helpPlace:(PuraAnalyticsCarOnboardingHelpPlace *)helpPlace __attribute__((swift_name("init(source:helpPlace:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("CarOnboarding")))
@interface PuraAnalyticsCarOnboarding : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.AutoFeatureEducationScreen")))
@interface PuraAnalyticsCarOnboardingAutoFeatureEducationScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.ConnectingToDiffuserScreen")))
@interface PuraAnalyticsCarOnboardingConnectingToDiffuserScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.FragranceDetectedScreen")))
@interface PuraAnalyticsCarOnboardingFragranceDetectedScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.InsertFragranceScreen")))
@interface PuraAnalyticsCarOnboardingInsertFragranceScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.LegalAcknowledgmentScreen")))
@interface PuraAnalyticsCarOnboardingLegalAcknowledgmentScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.MagnetEducationScreen")))
@interface PuraAnalyticsCarOnboardingMagnetEducationScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.ManualControlEducationScreen")))
@interface PuraAnalyticsCarOnboardingManualControlEducationScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.NameDeviceScreen")))
@interface PuraAnalyticsCarOnboardingNameDeviceScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.PlugInAndTurnOnDiffuserScreen")))
@interface PuraAnalyticsCarOnboardingPlugInAndTurnOnDiffuserScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.ScanningForDiffuserScreen")))
@interface PuraAnalyticsCarOnboardingScanningForDiffuserScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.SetupCompleteScreen")))
@interface PuraAnalyticsCarOnboardingSetupCompleteScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboarding.StrapEducationScreen")))
@interface PuraAnalyticsCarOnboardingStrapEducationScreen : PuraAnalyticsCarOnboarding
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarOnboardingHelpPlace")))
@interface PuraAnalyticsCarOnboardingHelpPlace : PuraAnalyticsKotlinEnum<PuraAnalyticsCarOnboardingHelpPlace *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsCarOnboardingHelpPlace *pairingMode __attribute__((swift_name("pairingMode")));
@property (class, readonly) PuraAnalyticsCarOnboardingHelpPlace *detectFragrance __attribute__((swift_name("detectFragrance")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsCarOnboardingHelpPlace *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsCarOnboardingHelpPlace *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarPairingModeContinueTapped")))
@interface PuraAnalyticsCarPairingModeContinueTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarRescanTapped")))
@interface PuraAnalyticsCarRescanTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("CarSettings")))
@interface PuraAnalyticsCarSettings : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarSettings.ChangeFragranceScreen")))
@interface PuraAnalyticsCarSettingsChangeFragranceScreen : PuraAnalyticsCarSettings
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarSettings.DiffuserInfoScreen")))
@interface PuraAnalyticsCarSettingsDiffuserInfoScreen : PuraAnalyticsCarSettings
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarSettings.ForgetDiffuserScreen")))
@interface PuraAnalyticsCarSettingsForgetDiffuserScreen : PuraAnalyticsCarSettings
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarSettings.FragranceDetailsScreen")))
@interface PuraAnalyticsCarSettingsFragranceDetailsScreen : PuraAnalyticsCarSettings
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarSettings.HelpCenterScreen")))
@interface PuraAnalyticsCarSettingsHelpCenterScreen : PuraAnalyticsCarSettings
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarSettings.MainScreen")))
@interface PuraAnalyticsCarSettingsMainScreen : PuraAnalyticsCarSettings
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CarSettings.SettingsScreen")))
@interface PuraAnalyticsCarSettingsSettingsScreen : PuraAnalyticsCarSettings
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("CarouselPageScreenEvent")))
@interface PuraAnalyticsCarouselPageScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion page:(PuraAnalyticsLearnMoreCarouselPageName *)page __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) PuraAnalyticsLearnMoreCarouselPageName *page __attribute__((swift_name("page")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChangeFragranceVialsTapped")))
@interface PuraAnalyticsChangeFragranceVialsTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChangeWiFiScreenEvent")))
@interface PuraAnalyticsChangeWiFiScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithDiffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChooseDifferentNetworkTapped")))
@interface PuraAnalyticsChooseDifferentNetworkTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectDiffuserSetupDeviceIssueScreenEvent")))
@interface PuraAnalyticsConnectDiffuserSetupDeviceIssueScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectTapped")))
@interface PuraAnalyticsConnectTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectToPuraScreenEvent")))
@interface PuraAnalyticsConnectToPuraScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectToPuraSetupTipsScreenEvent")))
@interface PuraAnalyticsConnectToPuraSetupTipsScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectToWiFiAutomaticallyScreenEvent")))
@interface PuraAnalyticsConnectToWiFiAutomaticallyScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectToWiFiScreenEvent")))
@interface PuraAnalyticsConnectToWiFiScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectToWiFiSetupTipsScreenEvent")))
@interface PuraAnalyticsConnectToWiFiSetupTipsScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectingToDiffuserScreenEvent")))
@interface PuraAnalyticsConnectingToDiffuserScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContactUsScreenEvent")))
@interface PuraAnalyticsContactUsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContinueSetupTapped")))
@interface PuraAnalyticsContinueSetupTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContinueTapped")))
@interface PuraAnalyticsContinueTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateScentScheduleScreenEvent")))
@interface PuraAnalyticsCreateScentScheduleScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) PuraAnalyticsAnalyticsAppFlow *flow __attribute__((swift_name("flow")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataOptOutScreen")))
@interface PuraAnalyticsDataOptOutScreen : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultScreenViewedEvent.Companion")))
@interface PuraAnalyticsDefaultScreenViewedEventCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsDefaultScreenViewedEventCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *KEY __attribute__((swift_name("KEY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAccountConfirmed")))
@interface PuraAnalyticsDeleteAccountConfirmed : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithEmail:(NSString * _Nullable)email __attribute__((swift_name("init(email:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeliveriesScreenEvent")))
@interface PuraAnalyticsDeliveriesScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceBayType")))
@interface PuraAnalyticsDeviceBayType : PuraAnalyticsKotlinEnum<PuraAnalyticsDeviceBayType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsDeviceBayType *none __attribute__((swift_name("none")));
@property (class, readonly) PuraAnalyticsDeviceBayType *firstBay __attribute__((swift_name("firstBay")));
@property (class, readonly) PuraAnalyticsDeviceBayType *secondBay __attribute__((swift_name("secondBay")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsDeviceBayType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsDeviceBayType *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t bayIndex __attribute__((swift_name("bayIndex")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceControlTimerScreenEvent")))
@interface PuraAnalyticsDeviceControlTimerScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceControlVariant")))
@interface PuraAnalyticsDeviceControlVariant : PuraAnalyticsKotlinEnum<PuraAnalyticsDeviceControlVariant *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsDeviceControlVariant *legacyDeviceControl __attribute__((swift_name("legacyDeviceControl")));
@property (class, readonly) PuraAnalyticsDeviceControlVariant *v4DeviceControl __attribute__((swift_name("v4DeviceControl")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsDeviceControlVariant *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsDeviceControlVariant *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *variant __attribute__((swift_name("variant")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePositionChanged")))
@interface PuraAnalyticsDevicePositionChanged : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceReset")))
@interface PuraAnalyticsDeviceReset : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithResetType:(PuraAnalyticsDeviceResetType *)resetType deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(resetType:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceResetType")))
@interface PuraAnalyticsDeviceResetType : PuraAnalyticsKotlinEnum<PuraAnalyticsDeviceResetType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsDeviceResetType *factoryReset __attribute__((swift_name("factoryReset")));
@property (class, readonly) PuraAnalyticsDeviceResetType *softReset __attribute__((swift_name("softReset")));
@property (class, readonly) PuraAnalyticsDeviceResetType *wifiReset __attribute__((swift_name("wifiReset")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsDeviceResetType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsDeviceResetType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceSetupAbandoned")))
@interface PuraAnalyticsDeviceSetupAbandoned : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)setupVersion deviceId:(NSString * _Nullable)deviceId flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(setupVersion:deviceId:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceSetupStarted")))
@interface PuraAnalyticsDeviceSetupStarted : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)setupVersion deviceId:(NSString * _Nullable)deviceId flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(setupVersion:deviceId:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicesFound")))
@interface PuraAnalyticsDevicesFound : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserType diffusers:(NSArray<PuraAnalyticsBleScannedDiffuserAnalyticData *> *)diffusers __attribute__((swift_name("init(source:flow:diffuserType:diffusers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DidNotFindDiffuser")))
@interface PuraAnalyticsDidNotFindDiffuser : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source setupVersion:(PuraAnalyticsDiffuserSetupVersion *)setupVersion __attribute__((swift_name("init(source:setupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserAnalyticsType")))
@interface PuraAnalyticsDiffuserAnalyticsType : PuraAnalyticsKotlinEnum<PuraAnalyticsDiffuserAnalyticsType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsDiffuserAnalyticsType *puraCar __attribute__((swift_name("puraCar")));
@property (class, readonly) PuraAnalyticsDiffuserAnalyticsType *puraCarPro __attribute__((swift_name("puraCarPro")));
@property (class, readonly) PuraAnalyticsDiffuserAnalyticsType *pura3 __attribute__((swift_name("pura3")));
@property (class, readonly) PuraAnalyticsDiffuserAnalyticsType *pura4 __attribute__((swift_name("pura4")));
@property (class, readonly) PuraAnalyticsDiffuserAnalyticsType *puraPlus __attribute__((swift_name("puraPlus")));
@property (class, readonly) PuraAnalyticsDiffuserAnalyticsType *puraMini __attribute__((swift_name("puraMini")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsDiffuserAnalyticsType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsDiffuserAnalyticsType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationConnectionIssueScreenEvent")))
@interface PuraAnalyticsDiffuserConfigurationConnectionIssueScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationFinish")))
@interface PuraAnalyticsDiffuserConfigurationFinish : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString *)deviceId flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(deviceId:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationNetworkConnectionIssueScreenEvent")))
@interface PuraAnalyticsDiffuserConfigurationNetworkConnectionIssueScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationRestartWiFiSetupScreenEvent")))
@interface PuraAnalyticsDiffuserConfigurationRestartWiFiSetupScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationScreenEvent")))
@interface PuraAnalyticsDiffuserConfigurationScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationSomethingWentWrongScreenEvent")))
@interface PuraAnalyticsDiffuserConfigurationSomethingWentWrongScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationStart")))
@interface PuraAnalyticsDiffuserConfigurationStart : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString *)deviceId flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(deviceId:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationThisIsNotWorkingOutScreenEvent")))
@interface PuraAnalyticsDiffuserConfigurationThisIsNotWorkingOutScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationUnableToConnectToWiFiScreenEvent")))
@interface PuraAnalyticsDiffuserConfigurationUnableToConnectToWiFiScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConfigurationWrongNetworkPasswordScreenEvent")))
@interface PuraAnalyticsDiffuserConfigurationWrongNetworkPasswordScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserConnected")))
@interface PuraAnalyticsDiffuserConnected : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source diffuserId:(NSString *)diffuserId diffuserName:(NSString *)diffuserName hw:(NSString *)hw fw:(NSString *)fw diffuserType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserType flow:(NSString * _Nullable)flow __attribute__((swift_name("init(source:diffuserId:diffuserName:hw:fw:diffuserType:flow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserControlScreenEvent")))
@interface PuraAnalyticsDiffuserControlScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithDeviceId:(NSString *)deviceId roomName:(NSString *)roomName bay:(int32_t)bay intensity:(int32_t)intensity fragranceSKU:(NSString *)fragranceSKU fragranceAddedTimestamp:(int64_t)fragranceAddedTimestamp wearingTime:(int64_t)wearingTime isRunning:(BOOL)isRunning __attribute__((swift_name("init(deviceId:roomName:bay:intensity:fragranceSKU:fragranceAddedTimestamp:wearingTime:isRunning:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserInfoScreenEvent")))
@interface PuraAnalyticsDiffuserInfoScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserListLoaded")))
@interface PuraAnalyticsDiffuserListLoaded : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source deviceCount:(int32_t)deviceCount __attribute__((swift_name("init(source:deviceCount:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserListScreenEvent")))
@interface PuraAnalyticsDiffuserListScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserListStartedLoading")))
@interface PuraAnalyticsDiffuserListStartedLoading : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserLocationScreenEvent")))
@interface PuraAnalyticsDiffuserLocationScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserMainControlScreen")))
@interface PuraAnalyticsDiffuserMainControlScreen : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithFragranceSku:(NSString *)fragranceSku fragranceRemaining:(int64_t)fragranceRemaining __attribute__((swift_name("init(fragranceSku:fragranceRemaining:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("DiffuserSettingsScreenEvent")))
@interface PuraAnalyticsDiffuserSettingsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(screenName:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserOverviewScreenEvent")))
@interface PuraAnalyticsDiffuserOverviewScreenEvent : PuraAnalyticsDiffuserSettingsScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(screenName:flow:variant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserPositionMoreInfoScreenEvent")))
@interface PuraAnalyticsDiffuserPositionMoreInfoScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserPositionScreenEvent")))
@interface PuraAnalyticsDiffuserPositionScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserReadyScreenEvent")))
@interface PuraAnalyticsDiffuserReadyScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSelected")))
@interface PuraAnalyticsDiffuserSelected : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSettingsMainScreenEvent")))
@interface PuraAnalyticsDiffuserSettingsMainScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSettingsMoreScreenEvent")))
@interface PuraAnalyticsDiffuserSettingsMoreScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSetupCompleteScreenEvent")))
@interface PuraAnalyticsDiffuserSetupCompleteScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) PuraAnalyticsAnalyticsAppFlow *flow __attribute__((swift_name("flow")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSetupErrorScreenEvent")))
@interface PuraAnalyticsDiffuserSetupErrorScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSetupMainScreenEvent")))
@interface PuraAnalyticsDiffuserSetupMainScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSetupTipsScreenEvent")))
@interface PuraAnalyticsDiffuserSetupTipsScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSetupVersion")))
@interface PuraAnalyticsDiffuserSetupVersion : PuraAnalyticsKotlinEnum<PuraAnalyticsDiffuserSetupVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsDiffuserSetupVersion *legacy __attribute__((swift_name("legacy")));
@property (class, readonly) PuraAnalyticsDiffuserSetupVersion *v4OnboardingV1 __attribute__((swift_name("v4OnboardingV1")));
@property (class, readonly) PuraAnalyticsDiffuserSetupVersion *plusOnboardingV1 __attribute__((swift_name("plusOnboardingV1")));
@property (class, readonly) PuraAnalyticsDiffuserSetupVersion *miniOnboardingV1 __attribute__((swift_name("miniOnboardingV1")));
@property (class, readonly) PuraAnalyticsDiffuserSetupVersion *carOnboardingV1 __attribute__((swift_name("carOnboardingV1")));
@property (class, readonly) PuraAnalyticsDiffuserSetupVersion *carOnboardingV2 __attribute__((swift_name("carOnboardingV2")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsDiffuserSetupVersion *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsDiffuserSetupVersion *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSetupVideoScreenEvent")))
@interface PuraAnalyticsDiffuserSetupVideoScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserSetupWebScreenEvent")))
@interface PuraAnalyticsDiffuserSetupWebScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserUpdatingMoreInfoScreenEvent")))
@interface PuraAnalyticsDiffuserUpdatingMoreInfoScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffuserUpdatingScreenEvent")))
@interface PuraAnalyticsDiffuserUpdatingScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiffusersScreenEvent")))
@interface PuraAnalyticsDiffusersScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnterRoomNameScreenEvent")))
@interface PuraAnalyticsEnterRoomNameScreenEvent : PuraAnalyticsDiffuserSettingsScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(screenName:flow:variant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnterWiFiCredentialsManualScreenEvent")))
@interface PuraAnalyticsEnterWiFiCredentialsManualScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnterWiFiCredentialsPasswordEvent")))
@interface PuraAnalyticsEnterWiFiCredentialsPasswordEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnterWiFiCredentialsPasswordScreenEvent")))
@interface PuraAnalyticsEnterWiFiCredentialsPasswordScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType")))
@interface PuraAnalyticsEventType : PuraAnalyticsKotlinEnum<PuraAnalyticsEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsEventType *user __attribute__((swift_name("user")));
@property (class, readonly) PuraAnalyticsEventType *app __attribute__((swift_name("app")));
@property (class, readonly) PuraAnalyticsEventType *device __attribute__((swift_name("device")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsEventType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactoryResetDiffuserScreenEvent")))
@interface PuraAnalyticsFactoryResetDiffuserScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithDiffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareUpdateFinish")))
@interface PuraAnalyticsFirmwareUpdateFinish : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceType:(PuraAnalyticsDiffuserAnalyticsType *)deviceType deviceId:(NSString *)deviceId success:(BOOL)success currentFirmware:(NSString * _Nullable)currentFirmware flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(deviceType:deviceId:success:currentFirmware:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareUpdateStart")))
@interface PuraAnalyticsFirmwareUpdateStart : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source diffuserType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserType diffuserId:(NSString *)diffuserId currentFirmware:(NSString * _Nullable)currentFirmware flow:(NSString * _Nullable)flow __attribute__((swift_name("init(source:diffuserType:diffuserId:currentFirmware:flow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FixMyDiffuserScreenEvent")))
@interface PuraAnalyticsFixMyDiffuserScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithDiffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgetDeviceCompleted")))
@interface PuraAnalyticsForgetDeviceCompleted : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotYourPasswordTapped")))
@interface PuraAnalyticsForgotYourPasswordTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceAdded")))
@interface PuraAnalyticsFragranceAdded : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source diffuserId:(NSString *)diffuserId bay:(PuraAnalyticsDeviceBayType *)bay fragranceCode:(NSString *)fragranceCode fragranceName:(NSString *)fragranceName insertionMethod:(PuraAnalyticsFragranceInsertionMethod *)insertionMethod evenType:(PuraAnalyticsEventType *)evenType flow:(PuraAnalyticsAnalyticsAppFlow *)flow deviceType:(PuraAnalyticsDiffuserAnalyticsType *)deviceType __attribute__((swift_name("init(source:diffuserId:bay:fragranceCode:fragranceName:insertionMethod:evenType:flow:deviceType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceDescriptionScreenEvent")))
@interface PuraAnalyticsFragranceDescriptionScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceInputMethod")))
@interface PuraAnalyticsFragranceInputMethod : PuraAnalyticsKotlinEnum<PuraAnalyticsFragranceInputMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsFragranceInputMethod *manual __attribute__((swift_name("manual")));
@property (class, readonly) PuraAnalyticsFragranceInputMethod *smart __attribute__((swift_name("smart")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsFragranceInputMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsFragranceInputMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceInsertionMethod")))
@interface PuraAnalyticsFragranceInsertionMethod : PuraAnalyticsKotlinEnum<PuraAnalyticsFragranceInsertionMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsFragranceInsertionMethod *smartVial __attribute__((swift_name("smartVial")));
@property (class, readonly) PuraAnalyticsFragranceInsertionMethod *qrScan __attribute__((swift_name("qrScan")));
@property (class, readonly) PuraAnalyticsFragranceInsertionMethod *codeInput __attribute__((swift_name("codeInput")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsFragranceInsertionMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsFragranceInsertionMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceIntensitySet")))
@interface PuraAnalyticsFragranceIntensitySet : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithValue:(int32_t)value bayType:(PuraAnalyticsDeviceBayType *)bayType wearingTime:(PuraAnalyticsLong * _Nullable)wearingTime deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(value:bayType:wearingTime:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("FragranceScreenEvent")))
@interface PuraAnalyticsFragranceScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithScreenName:(NSString *)screenName fragranceRuntime:(PuraAnalyticsFragranceRuntimeVariant *)fragranceRuntime __attribute__((swift_name("init(screenName:fragranceRuntime:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceRuntimeScreenEvent")))
@interface PuraAnalyticsFragranceRuntimeScreenEvent : PuraAnalyticsFragranceScreenEvent
- (instancetype)initWithFragranceRuntime:(PuraAnalyticsFragranceRuntimeVariant *)fragranceRuntime __attribute__((swift_name("init(fragranceRuntime:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName fragranceRuntime:(PuraAnalyticsFragranceRuntimeVariant *)fragranceRuntime __attribute__((swift_name("init(screenName:fragranceRuntime:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceRuntimeVariant")))
@interface PuraAnalyticsFragranceRuntimeVariant : PuraAnalyticsKotlinEnum<PuraAnalyticsFragranceRuntimeVariant *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsFragranceRuntimeVariant *general __attribute__((swift_name("general")));
@property (class, readonly) PuraAnalyticsFragranceRuntimeVariant *scentSpecific __attribute__((swift_name("scentSpecific")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsFragranceRuntimeVariant *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsFragranceRuntimeVariant *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *runtime __attribute__((swift_name("runtime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSetUpInsertFragranceVialScreenEvent")))
@interface PuraAnalyticsFragranceSetUpInsertFragranceVialScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithDeviceControlVariant:(PuraAnalyticsDeviceControlVariant *)deviceControlVariant __attribute__((swift_name("init(deviceControlVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSetUpRemoveFragranceVialScreenEvent")))
@interface PuraAnalyticsFragranceSetUpRemoveFragranceVialScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithDeviceControlVariant:(PuraAnalyticsDeviceControlVariant *)deviceControlVariant __attribute__((swift_name("init(deviceControlVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSetUpScanFragranceQRCodeScreenEvent")))
@interface PuraAnalyticsFragranceSetUpScanFragranceQRCodeScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithDeviceControlVariant:(PuraAnalyticsDeviceControlVariant *)deviceControlVariant __attribute__((swift_name("init(deviceControlVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSetupInsertVialScreenEvent")))
@interface PuraAnalyticsFragranceSetupInsertVialScreenEvent : PuraAnalyticsDiffuserSettingsScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(screenName:flow:variant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSetupMainScreenEvent")))
@interface PuraAnalyticsFragranceSetupMainScreenEvent : PuraAnalyticsDiffuserSettingsScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(screenName:flow:variant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSetupRemoveVialScreenEvent")))
@interface PuraAnalyticsFragranceSetupRemoveVialScreenEvent : PuraAnalyticsDiffuserSettingsScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(screenName:flow:variant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSetupScanQRCodeScreenEvent")))
@interface PuraAnalyticsFragranceSetupScanQRCodeScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSetupScreenEvent")))
@interface PuraAnalyticsFragranceSetupScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSetupSearchFragranceEvent")))
@interface PuraAnalyticsFragranceSetupSearchFragranceEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FragranceSwapped")))
@interface PuraAnalyticsFragranceSwapped : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithVariantSku:(NSString *)variantSku fragranceName:(NSString *)fragranceName brand:(NSString *)brand roomName:(NSString *)roomName roomType:(NSString *)roomType swapped:(BOOL)swapped bayNumber:(int32_t)bayNumber wearingTime:(int64_t)wearingTime oldWearingTime:(int64_t)oldWearingTime deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(variantSku:fragranceName:brand:roomName:roomType:swapped:bayNumber:wearingTime:oldWearingTime:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HelpCenterScreenEvent")))
@interface PuraAnalyticsHelpCenterScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IDontSeeMyDiffuserTapped")))
@interface PuraAnalyticsIDontSeeMyDiffuserTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("INeedHelpTapped")))
@interface PuraAnalyticsINeedHelpTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("SegmentAnalytics")))
@protocol PuraAnalyticsSegmentAnalytics
@required
- (void)configureKey:(NSString *)key __attribute__((swift_name("configure(key:)")));
- (void)configureEventAction:(void (^)(PuraAnalyticsAnalyticsEvent *))eventAction screenAction:(void (^)(PuraAnalyticsScreenEvent *))screenAction __attribute__((swift_name("configure(eventAction:screenAction:)")));
- (BOOL)isConfigured __attribute__((swift_name("isConfigured()")));
- (void)logEventEvent:(PuraAnalyticsAnalyticsEvent *)event __attribute__((swift_name("logEvent(event:)")));
- (void)logScreenScreen:(PuraAnalyticsScreenEvent *)screen __attribute__((swift_name("logScreen(screen:)")));
- (void)resetUserData __attribute__((swift_name("resetUserData()")));
- (void)setUserDataUserId:(NSString *)userId properties:(NSDictionary<id, id> *)properties __attribute__((swift_name("setUserData(userId:properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSSegmentAnalytics")))
@interface PuraAnalyticsIOSSegmentAnalytics : PuraAnalyticsBase <PuraAnalyticsSegmentAnalytics>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)configureKey:(NSString *)key __attribute__((swift_name("configure(key:)")));
- (void)configureEventAction:(void (^)(PuraAnalyticsAnalyticsEvent *))eventAction screenAction:(void (^)(PuraAnalyticsScreenEvent *))screenAction __attribute__((swift_name("configure(eventAction:screenAction:)")));
- (BOOL)isConfigured __attribute__((swift_name("isConfigured()")));
- (void)logEventEvent:(PuraAnalyticsAnalyticsEvent *)event __attribute__((swift_name("logEvent(event:)")));
- (void)logScreenScreen:(PuraAnalyticsScreenEvent *)screen __attribute__((swift_name("logScreen(screen:)")));
- (void)resetUserData __attribute__((swift_name("resetUserData()")));
- (void)setUserDataUserId:(NSString *)userId properties:(NSDictionary<id, id> *)properties __attribute__((swift_name("setUserData(userId:properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdontSeeChipTapped")))
@interface PuraAnalyticsIdontSeeChipTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdontSeeMyWifiNetworkTapped")))
@interface PuraAnalyticsIdontSeeMyWifiNetworkTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InsertFragranceVialDoneTapped")))
@interface PuraAnalyticsInsertFragranceVialDoneTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source deviceId:(NSString *)deviceId bay:(PuraAnalyticsDeviceBayType *)bay fragranceCode:(NSString *)fragranceCode __attribute__((swift_name("init(source:deviceId:bay:fragranceCode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteCodeCopied")))
@interface PuraAnalyticsInviteCodeCopied : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatestVersionTapped")))
@interface PuraAnalyticsLatestVersionTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LearnMoreCarouselContinueTapped")))
@interface PuraAnalyticsLearnMoreCarouselContinueTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source page:(PuraAnalyticsLearnMoreCarouselPageName *)page flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:page:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LearnMoreCarouselNextTapped")))
@interface PuraAnalyticsLearnMoreCarouselNextTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source page:(PuraAnalyticsLearnMoreCarouselPageName *)page flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:page:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LearnMoreCarouselPageName")))
@interface PuraAnalyticsLearnMoreCarouselPageName : PuraAnalyticsKotlinEnum<PuraAnalyticsLearnMoreCarouselPageName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsLearnMoreCarouselPageName *fragranceTimer __attribute__((swift_name("fragranceTimer")));
@property (class, readonly) PuraAnalyticsLearnMoreCarouselPageName *awayMode __attribute__((swift_name("awayMode")));
@property (class, readonly) PuraAnalyticsLearnMoreCarouselPageName *schedules __attribute__((swift_name("schedules")));
@property (class, readonly) PuraAnalyticsLearnMoreCarouselPageName *smartAssistant __attribute__((swift_name("smartAssistant")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsLearnMoreCarouselPageName *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsLearnMoreCarouselPageName *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LearnMoreCarouselScreenEvent")))
@interface PuraAnalyticsLearnMoreCarouselScreenEvent : PuraAnalyticsCarouselPageScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion page:(PuraAnalyticsLearnMoreCarouselPageName *)page __attribute__((swift_name("init(flow:diffuserSetupVersion:page:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion page:(PuraAnalyticsLearnMoreCarouselPageName *)page __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:page:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) PuraAnalyticsLearnMoreCarouselPageName *page __attribute__((swift_name("page")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LearnMoreCarouselSkipTapped")))
@interface PuraAnalyticsLearnMoreCarouselSkipTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source page:(PuraAnalyticsLearnMoreCarouselPageName *)page flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:page:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LearnMoreTapped")))
@interface PuraAnalyticsLearnMoreTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeaveDiffuserSetupScreenEvent")))
@interface PuraAnalyticsLeaveDiffuserSetupScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyVialsEducationScreenEvent")))
@interface PuraAnalyticsLegacyVialsEducationScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LightBrightnessChanged")))
@interface PuraAnalyticsLightBrightnessChanged : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithValue:(int32_t)value deviceId:(NSString *)deviceId __attribute__((swift_name("init(value:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LightColorChanged")))
@interface PuraAnalyticsLightColorChanged : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithHexColor:(NSString *)hexColor deviceId:(NSString *)deviceId __attribute__((swift_name("init(hexColor:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LightTurned")))
@interface PuraAnalyticsLightTurned : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithIsOn:(BOOL)isOn deviceId:(NSString *)deviceId __attribute__((swift_name("init(isOn:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationPermissionScreenEvent")))
@interface PuraAnalyticsLocationPermissionScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationPermissionUpdated")))
@interface PuraAnalyticsLocationPermissionUpdated : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithState:(PuraAnalyticsPermissionState *)state place:(PuraAnalyticsPermissionPlace *)place __attribute__((swift_name("init(state:place:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationPrimer")))
@interface PuraAnalyticsLocationPrimer : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithState:(PuraAnalyticsPermissionState *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogInHomeScreenEvent")))
@interface PuraAnalyticsLogInHomeScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketPlaceOpened")))
@interface PuraAnalyticsMarketPlaceOpened : PuraAnalyticsDefaultAppEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NearbyDiffusersPermissionScreenEvent")))
@interface PuraAnalyticsNearbyDiffusersPermissionScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NightlightSettingsScreenEvent")))
@interface PuraAnalyticsNightlightSettingsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoDiffusersFoundScreenEvent")))
@interface PuraAnalyticsNoDiffusersFoundScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoFragranceSmellAcknowledgementScreenEvent")))
@interface PuraAnalyticsNoFragranceSmellAcknowledgementScreenEvent : PuraAnalyticsFragranceScreenEvent
- (instancetype)initWithFragranceRuntime:(PuraAnalyticsFragranceRuntimeVariant *)fragranceRuntime __attribute__((swift_name("init(fragranceRuntime:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName fragranceRuntime:(PuraAnalyticsFragranceRuntimeVariant *)fragranceRuntime __attribute__((swift_name("init(screenName:fragranceRuntime:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoFragranceSmelled")))
@interface PuraAnalyticsNoFragranceSmelled : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithWearingTime:(PuraAnalyticsLong * _Nullable)wearingTime daysSinceRefill:(PuraAnalyticsLong * _Nullable)daysSinceRefill fragranceName:(NSString * _Nullable)fragranceName variantSku:(NSString * _Nullable)variantSku deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(wearingTime:daysSinceRefill:fragranceName:variantSku:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoWifiFoundScreenEvent")))
@interface PuraAnalyticsNoWifiFoundScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationCenterScreenEvent")))
@interface PuraAnalyticsNotificationCenterScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationMarkedAsRead")))
@interface PuraAnalyticsNotificationMarkedAsRead : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationMarkedAsUnread")))
@interface PuraAnalyticsNotificationMarkedAsUnread : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationPermissionScreenEvent")))
@interface PuraAnalyticsNotificationPermissionScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationPermissionUpdated")))
@interface PuraAnalyticsNotificationPermissionUpdated : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithState:(PuraAnalyticsPermissionState *)state place:(PuraAnalyticsPermissionPlace *)place deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(state:place:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationPrimer")))
@interface PuraAnalyticsNotificationPrimer : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithState:(PuraAnalyticsPermissionState *)state deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(state:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationSnoozeTapped")))
@interface PuraAnalyticsNotificationSnoozeTapped : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationTapped")))
@interface PuraAnalyticsNotificationTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source notificationTitle:(NSString *)notificationTitle __attribute__((swift_name("init(source:notificationTitle:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("OnboardingDiffusers")))
@interface PuraAnalyticsOnboardingDiffusers : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingDiffusers.SelectDiffuserTypeScreen")))
@interface PuraAnalyticsOnboardingDiffusersSelectDiffuserTypeScreen : PuraAnalyticsOnboardingDiffusers
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName __attribute__((swift_name("init(screenName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingDone")))
@interface PuraAnalyticsOnboardingDone : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent * _Nullable)source diffuserId:(NSString * _Nullable)diffuserId flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserType hw:(NSString *)hw fw:(NSString *)fw __attribute__((swift_name("init(source:diffuserId:flow:diffuserType:hw:fw:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingResultScreenEvent")))
@interface PuraAnalyticsOnboardingResultScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverMidnightWarningAction")))
@interface PuraAnalyticsOverMidnightWarningAction : PuraAnalyticsKotlinEnum<PuraAnalyticsOverMidnightWarningAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsOverMidnightWarningAction *learnMore __attribute__((swift_name("learnMore")));
@property (class, readonly) PuraAnalyticsOverMidnightWarningAction *dismiss __attribute__((swift_name("dismiss")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsOverMidnightWarningAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsOverMidnightWarningAction *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverMidnightWarningClicked")))
@interface PuraAnalyticsOverMidnightWarningClicked : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithAction:(PuraAnalyticsOverMidnightWarningAction *)action __attribute__((swift_name("init(action:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionPlace")))
@interface PuraAnalyticsPermissionPlace : PuraAnalyticsKotlinEnum<PuraAnalyticsPermissionPlace *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsPermissionPlace *deviceSetup __attribute__((swift_name("deviceSetup")));
@property (class, readonly) PuraAnalyticsPermissionPlace *setting __attribute__((swift_name("setting")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsPermissionPlace *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsPermissionPlace *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionState")))
@interface PuraAnalyticsPermissionState : PuraAnalyticsKotlinEnum<PuraAnalyticsPermissionState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PuraAnalyticsPermissionStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PuraAnalyticsPermissionState *granted __attribute__((swift_name("granted")));
@property (class, readonly) PuraAnalyticsPermissionState *denied __attribute__((swift_name("denied")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsPermissionState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsPermissionState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionState.Companion")))
@interface PuraAnalyticsPermissionStateCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsPermissionStateCompanion *shared __attribute__((swift_name("shared")));
- (PuraAnalyticsPermissionState *)getStateIsGranted:(BOOL)isGranted __attribute__((swift_name("getState(isGranted:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PermissionsScreenEvent")))
@interface PuraAnalyticsPermissionsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrebuiltScheduleClicked")))
@interface PuraAnalyticsPrebuiltScheduleClicked : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId variant:(PuraAnalyticsSchedulesVariant *)variant days:(NSArray<NSString *> *)days startTime:(NSString *)startTime endTime:(NSString *)endTime name:(NSString *)name appFlow:(PuraAnalyticsAnalyticsAppFlow *)appFlow __attribute__((swift_name("init(deviceId:variant:days:startTime:endTime:name:appFlow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pura3Detected")))
@interface PuraAnalyticsPura3Detected : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString *)flow diffuserType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserType __attribute__((swift_name("init(source:flow:diffuserType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pura3DetectedModalButtonTapped")))
@interface PuraAnalyticsPura3DetectedModalButtonTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source buttonText:(NSString *)buttonText flow:(NSString *)flow diffuserType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserType __attribute__((swift_name("init(source:buttonText:flow:diffuserType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pura3DetectedModalScreenEvent")))
@interface PuraAnalyticsPura3DetectedModalScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PushNotificationReceived")))
@interface PuraAnalyticsPushNotificationReceived : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithPayload:(NSString *)payload __attribute__((swift_name("init(payload:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("ScheduleScreenEvent")))
@interface PuraAnalyticsScheduleScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow screenName:(NSString *)screenName scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:screenName:scheduleVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuickSchedulesScreenEvent")))
@interface PuraAnalyticsQuickSchedulesScreenEvent : PuraAnalyticsScheduleScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:scheduleVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow screenName:(NSString *)screenName scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:screenName:scheduleVariant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadFullSupportArticleTapped")))
@interface PuraAnalyticsReadFullSupportArticleTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReferAFriendPastReferralsScreenEvent")))
@interface PuraAnalyticsReferAFriendPastReferralsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReferAFriendReferralsScreenEvent")))
@interface PuraAnalyticsReferAFriendReferralsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReferralSent")))
@interface PuraAnalyticsReferralSent : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemindMeLaterTapped")))
@interface PuraAnalyticsRemindMeLaterTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveFragranceVialContinueTapped")))
@interface PuraAnalyticsRemoveFragranceVialContinueTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source bay:(PuraAnalyticsDeviceBayType *)bay __attribute__((swift_name("init(source:bay:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetButtonScreenEvent")))
@interface PuraAnalyticsResetButtonScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordEmailScreenEvent")))
@interface PuraAnalyticsResetPasswordEmailScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordInstructionsScreenEvent")))
@interface PuraAnalyticsResetPasswordInstructionsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordNewPasswordScreenEvent")))
@interface PuraAnalyticsResetPasswordNewPasswordScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestartScanTapped")))
@interface PuraAnalyticsRestartScanTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoomNameSet")))
@interface PuraAnalyticsRoomNameSet : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithRoomName:(NSString *)roomName roomType:(NSString *)roomType deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(roomName:roomType:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveScheduleClicked")))
@interface PuraAnalyticsSaveScheduleClicked : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId appFlow:(PuraAnalyticsAnalyticsAppFlow *)appFlow variant:(PuraAnalyticsSchedulesVariant *)variant __attribute__((swift_name("init(deviceId:appFlow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScanFragranceQRCodeContinueTapped")))
@interface PuraAnalyticsScanFragranceQRCodeContinueTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source bay:(PuraAnalyticsDeviceBayType *)bay fragranceCode:(NSString *)fragranceCode __attribute__((swift_name("init(source:bay:fragranceCode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScanFragranceVialTapped")))
@interface PuraAnalyticsScanFragranceVialTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScanFragranceVialsTapped")))
@interface PuraAnalyticsScanFragranceVialsTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScanningForDiffusersScreenEvent")))
@interface PuraAnalyticsScanningForDiffusersScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleButtonClicked")))
@interface PuraAnalyticsScheduleButtonClicked : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId place:(PuraAnalyticsScheduleButtonPlace *)place __attribute__((swift_name("init(deviceId:place:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleButtonPlace")))
@interface PuraAnalyticsScheduleButtonPlace : PuraAnalyticsKotlinEnum<PuraAnalyticsScheduleButtonPlace *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsScheduleButtonPlace *deviceList __attribute__((swift_name("deviceList")));
@property (class, readonly) PuraAnalyticsScheduleButtonPlace *deviceSettings __attribute__((swift_name("deviceSettings")));
@property (class, readonly) PuraAnalyticsScheduleButtonPlace *deviceControl __attribute__((swift_name("deviceControl")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsScheduleButtonPlace *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsScheduleButtonPlace *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleDeleted")))
@interface PuraAnalyticsScheduleDeleted : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId fragranceName:(NSString *)fragranceName variantSku:(NSString *)variantSku bayType:(PuraAnalyticsDeviceBayType *)bayType variant:(PuraAnalyticsSchedulesVariant *)variant appFlow:(PuraAnalyticsAnalyticsAppFlow *)appFlow __attribute__((swift_name("init(deviceId:fragranceName:variantSku:bayType:variant:appFlow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleSetupAbandoned")))
@interface PuraAnalyticsScheduleSetupAbandoned : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId appFlow:(PuraAnalyticsAnalyticsAppFlow *)appFlow __attribute__((swift_name("init(deviceId:appFlow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleSetupEditScreenEvent")))
@interface PuraAnalyticsScheduleSetupEditScreenEvent : PuraAnalyticsScheduleScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:scheduleVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow screenName:(NSString *)screenName scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:screenName:scheduleVariant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleSetupEvent")))
@interface PuraAnalyticsScheduleSetupEvent : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithIsEditing:(BOOL)isEditing scheduleName:(NSString *)scheduleName days:(NSArray<NSString *> *)days startTime:(NSString *)startTime endTime:(NSString *)endTime isLightOn:(BOOL)isLightOn lightColorHex:(NSString *)lightColorHex fragranceName:(NSString *)fragranceName variantSku:(NSString *)variantSku fragranceIntensity:(int32_t)fragranceIntensity deviceId:(NSString * _Nullable)deviceId bayType:(PuraAnalyticsDeviceBayType *)bayType appFlow:(PuraAnalyticsAnalyticsAppFlow *)appFlow variant:(PuraAnalyticsSchedulesVariant *)variant __attribute__((swift_name("init(isEditing:scheduleName:days:startTime:endTime:isLightOn:lightColorHex:fragranceName:variantSku:fragranceIntensity:deviceId:bayType:appFlow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleSetupNewScreenEvent")))
@interface PuraAnalyticsScheduleSetupNewScreenEvent : PuraAnalyticsScheduleScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:scheduleVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow screenName:(NSString *)screenName scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:screenName:scheduleVariant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleState")))
@interface PuraAnalyticsScheduleState : PuraAnalyticsKotlinEnum<PuraAnalyticsScheduleState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PuraAnalyticsScheduleStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PuraAnalyticsScheduleState *active __attribute__((swift_name("active")));
@property (class, readonly) PuraAnalyticsScheduleState *inactive __attribute__((swift_name("inactive")));
@property (class, readonly) PuraAnalyticsScheduleState *ignored __attribute__((swift_name("ignored")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsScheduleState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsScheduleState *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleState.Companion")))
@interface PuraAnalyticsScheduleStateCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsScheduleStateCompanion *shared __attribute__((swift_name("shared")));
- (PuraAnalyticsScheduleState *)fromBooleanIsSelected:(BOOL)isSelected __attribute__((swift_name("fromBoolean(isSelected:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleStateChanged")))
@interface PuraAnalyticsScheduleStateChanged : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId scheduleState:(PuraAnalyticsScheduleState *)scheduleState bayType:(PuraAnalyticsDeviceBayType *)bayType variant:(PuraAnalyticsSchedulesVariant *)variant scheduleName:(NSString *)scheduleName days:(NSArray<NSString *> *)days startTime:(NSString *)startTime endTime:(NSString *)endTime fragranceName:(NSString *)fragranceName fragranceCode:(NSString *)fragranceCode __attribute__((swift_name("init(deviceId:scheduleState:bayType:variant:scheduleName:days:startTime:endTime:fragranceName:fragranceCode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleType")))
@interface PuraAnalyticsScheduleType : PuraAnalyticsKotlinEnum<PuraAnalyticsScheduleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsScheduleType *prebuilt __attribute__((swift_name("prebuilt")));
@property (class, readonly) PuraAnalyticsScheduleType *custom __attribute__((swift_name("custom")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsScheduleType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsScheduleType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleTypeSelected")))
@interface PuraAnalyticsScheduleTypeSelected : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId variant:(PuraAnalyticsSchedulesVariant *)variant type:(PuraAnalyticsScheduleType *)type appFlow:(PuraAnalyticsAnalyticsAppFlow *)appFlow __attribute__((swift_name("init(deviceId:variant:type:appFlow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleVariantEvent")))
@interface PuraAnalyticsScheduleVariantEvent : PuraAnalyticsKotlinEnum<PuraAnalyticsScheduleVariantEvent *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsScheduleVariantEvent *legacySchedules __attribute__((swift_name("legacySchedules")));
@property (class, readonly) PuraAnalyticsScheduleVariantEvent *intuitiveSchedulesV1 __attribute__((swift_name("intuitiveSchedulesV1")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsScheduleVariantEvent *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsScheduleVariantEvent *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *variant __attribute__((swift_name("variant")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchedulesCalendarScreenEvent")))
@interface PuraAnalyticsSchedulesCalendarScreenEvent : PuraAnalyticsScheduleScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:scheduleVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow screenName:(NSString *)screenName scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:screenName:scheduleVariant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchedulesListScreenEvent")))
@interface PuraAnalyticsSchedulesListScreenEvent : PuraAnalyticsScheduleScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:scheduleVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow screenName:(NSString *)screenName scheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(flow:screenName:scheduleVariant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchedulesVariant")))
@interface PuraAnalyticsSchedulesVariant : PuraAnalyticsKotlinEnum<PuraAnalyticsSchedulesVariant *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsSchedulesVariant *legacy __attribute__((swift_name("legacy")));
@property (class, readonly) PuraAnalyticsSchedulesVariant *intuitiveV1 __attribute__((swift_name("intuitiveV1")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsSchedulesVariant *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsSchedulesVariant *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchedulesViewType")))
@interface PuraAnalyticsSchedulesViewType : PuraAnalyticsKotlinEnum<PuraAnalyticsSchedulesViewType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsSchedulesViewType *calendar __attribute__((swift_name("calendar")));
@property (class, readonly) PuraAnalyticsSchedulesViewType *list __attribute__((swift_name("list")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsSchedulesViewType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsSchedulesViewType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectDifferentDiffuserTapped")))
@interface PuraAnalyticsSelectDifferentDiffuserTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectRoomNameScreenEvent")))
@interface PuraAnalyticsSelectRoomNameScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectTimeZoneScreenEvent")))
@interface PuraAnalyticsSelectTimeZoneScreenEvent : PuraAnalyticsDiffuserSettingsScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow variant:(PuraAnalyticsDiffuserSetupVersion *)variant __attribute__((swift_name("init(screenName:flow:variant:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendWiFiPasswordTapped")))
@interface PuraAnalyticsSendWiFiPasswordTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetRoomNameMoreInfoScreenEvent")))
@interface PuraAnalyticsSetRoomNameMoreInfoScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetRoomNameScreenEvent")))
@interface PuraAnalyticsSetRoomNameScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetUpDiffuserTapped")))
@interface PuraAnalyticsSetUpDiffuserTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsAppTapped")))
@interface PuraAnalyticsSettingsAppTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsScreenEvent")))
@interface PuraAnalyticsSettingsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetupStartedButtonTapped")))
@interface PuraAnalyticsSetupStartedButtonTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source diffuserAnalyticsType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserAnalyticsType bluetoothEnabled:(BOOL)bluetoothEnabled bluetoothAppPermissionAllowed:(BOOL)bluetoothAppPermissionAllowed flow:(PuraAnalyticsAnalyticsAppFlow *)flow __attribute__((swift_name("init(source:diffuserAnalyticsType:bluetoothEnabled:bluetoothAppPermissionAllowed:flow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetupVideoOpened")))
@interface PuraAnalyticsSetupVideoOpened : PuraAnalyticsDefaultAppEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShopAsGuestScreenEvent")))
@interface PuraAnalyticsShopAsGuestScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShopAsGuestTapped")))
@interface PuraAnalyticsShopAsGuestTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShopDiffusersTapped")))
@interface PuraAnalyticsShopDiffusersTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShopScreenEvent")))
@interface PuraAnalyticsShopScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignInComplete")))
@interface PuraAnalyticsSignInComplete : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithMethod:(PuraAnalyticsAuthMethod *)method email:(NSString * _Nullable)email isSuccess:(BOOL)isSuccess __attribute__((swift_name("init(method:email:isSuccess:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignInScreenEvent")))
@interface PuraAnalyticsSignInScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignInTapped")))
@interface PuraAnalyticsSignInTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignInWithServiceTapped")))
@interface PuraAnalyticsSignInWithServiceTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source authMethod:(PuraAnalyticsAuthMethod *)authMethod __attribute__((swift_name("init(source:authMethod:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignOutConfirmed")))
@interface PuraAnalyticsSignOutConfirmed : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithEmail:(NSString * _Nullable)email __attribute__((swift_name("init(email:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpCompleted")))
@interface PuraAnalyticsSignUpCompleted : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithMethod:(PuraAnalyticsAuthMethod *)method email:(NSString *)email __attribute__((swift_name("init(method:email:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpScreenEvent")))
@interface PuraAnalyticsSignUpScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpTapped")))
@interface PuraAnalyticsSignUpTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpWithServiceTapped")))
@interface PuraAnalyticsSignUpWithServiceTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source authMethod:(PuraAnalyticsAuthMethod *)authMethod __attribute__((swift_name("init(source:authMethod:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkipBayConfirmCancelTapped")))
@interface PuraAnalyticsSkipBayConfirmCancelTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source deviceId:(NSString *)deviceId inputMethod:(PuraAnalyticsFragranceInputMethod *)inputMethod flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:deviceId:inputMethod:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkipBayConfirmContinueTapped")))
@interface PuraAnalyticsSkipBayConfirmContinueTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source deviceId:(NSString *)deviceId inputMethod:(PuraAnalyticsFragranceInputMethod *)inputMethod flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:deviceId:inputMethod:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SmartVialsEducationScreenEvent")))
@interface PuraAnalyticsSmartVialsEducationScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundsGoodTapped")))
@interface PuraAnalyticsSoundsGoodTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTimerFailed")))
@interface PuraAnalyticsStartTimerFailed : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithBayType:(PuraAnalyticsDeviceBayType *)bayType deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(bayType:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTimerSucceeded")))
@interface PuraAnalyticsStartTimerSucceeded : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithBayType:(PuraAnalyticsDeviceBayType *)bayType deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(bayType:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTimerTapped")))
@interface PuraAnalyticsStartTimerTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source hasRunningConflict:(BOOL)hasRunningConflict hasFutureConflict:(BOOL)hasFutureConflict timerRuntime:(int64_t)timerRuntime bayType:(PuraAnalyticsDeviceBayType *)bayType fragranceName:(NSString * _Nullable)fragranceName variantSku:(NSString * _Nullable)variantSku deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(source:hasRunningConflict:hasFutureConflict:timerRuntime:bayType:fragranceName:variantSku:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusBannerAction")))
@interface PuraAnalyticsStatusBannerAction : PuraAnalyticsKotlinEnum<PuraAnalyticsStatusBannerAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsStatusBannerAction *lowFragrance __attribute__((swift_name("lowFragrance")));
@property (class, readonly) PuraAnalyticsStatusBannerAction *deviceOffline __attribute__((swift_name("deviceOffline")));
@property (class, readonly) PuraAnalyticsStatusBannerAction *alwaysOn __attribute__((swift_name("alwaysOn")));
@property (class, readonly) PuraAnalyticsStatusBannerAction *timer __attribute__((swift_name("timer")));
@property (class, readonly) PuraAnalyticsStatusBannerAction *awayMode __attribute__((swift_name("awayMode")));
@property (class, readonly) PuraAnalyticsStatusBannerAction *schedule __attribute__((swift_name("schedule")));
@property (class, readonly) PuraAnalyticsStatusBannerAction *nextSchedule __attribute__((swift_name("nextSchedule")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsStatusBannerAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsStatusBannerAction *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StatusBannerClicked")))
@interface PuraAnalyticsStatusBannerClicked : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId statusBannerAction:(PuraAnalyticsStatusBannerAction *)statusBannerAction __attribute__((swift_name("init(deviceId:statusBannerAction:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwapFragranceScreenEvent")))
@interface PuraAnalyticsSwapFragranceScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithDeviceControlVariant:(PuraAnalyticsDeviceControlVariant *)deviceControlVariant __attribute__((swift_name("init(deviceControlVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TermsAndConditionsScreenEvent")))
@interface PuraAnalyticsTermsAndConditionsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TermsOfServiceScreenEvent")))
@interface PuraAnalyticsTermsOfServiceScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerScreenEvent")))
@interface PuraAnalyticsTimerScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimezoneSet")))
@interface PuraAnalyticsTimezoneSet : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithTimezone:(NSString *)timezone deviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(timezone:deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TryAgainTapped")))
@interface PuraAnalyticsTryAgainTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant __attribute__((swift_name("init(source:flow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrySchedulesClosed")))
@interface PuraAnalyticsTrySchedulesClosed : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithAction:(PuraAnalyticsTrySchedulesClosedAction *)action __attribute__((swift_name("init(action:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrySchedulesClosedAction")))
@interface PuraAnalyticsTrySchedulesClosedAction : PuraAnalyticsKotlinEnum<PuraAnalyticsTrySchedulesClosedAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsTrySchedulesClosedAction *tryNow __attribute__((swift_name("tryNow")));
@property (class, readonly) PuraAnalyticsTrySchedulesClosedAction *dismiss __attribute__((swift_name("dismiss")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsTrySchedulesClosedAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsTrySchedulesClosedAction *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrySchedulesScreenEvent")))
@interface PuraAnalyticsTrySchedulesScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)initWithScheduleVariant:(PuraAnalyticsScheduleVariantEvent *)scheduleVariant __attribute__((swift_name("init(scheduleVariant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialClosed")))
@interface PuraAnalyticsTutorialClosed : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent * _Nullable)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialCompleted")))
@interface PuraAnalyticsTutorialCompleted : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialControlScreenEvent")))
@interface PuraAnalyticsTutorialControlScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialFragrancesScreenEvent")))
@interface PuraAnalyticsTutorialFragrancesScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialIngredientsScreenEvent")))
@interface PuraAnalyticsTutorialIngredientsScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialIntensityScreenEvent")))
@interface PuraAnalyticsTutorialIntensityScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialLightScreenEvent")))
@interface PuraAnalyticsTutorialLightScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialMarketplaceScreenEvent")))
@interface PuraAnalyticsTutorialMarketplaceScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialNextTapped")))
@interface PuraAnalyticsTutorialNextTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialSchedulesScreenEvent")))
@interface PuraAnalyticsTutorialSchedulesScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialStarted")))
@interface PuraAnalyticsTutorialStarted : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId __attribute__((swift_name("init(deviceId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TutorialSubscriptionScreenEvent")))
@interface PuraAnalyticsTutorialSubscriptionScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnableToConnectToDiffuserScreenEvent")))
@interface PuraAnalyticsUnableToConnectToDiffuserScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("UnknownFragrance")))
@interface PuraAnalyticsUnknownFragrance : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownFragrance.CloseTapped")))
@interface PuraAnalyticsUnknownFragranceCloseTapped : PuraAnalyticsUnknownFragrance
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownFragrance.ScanFragranceCodeTapped")))
@interface PuraAnalyticsUnknownFragranceScanFragranceCodeTapped : PuraAnalyticsUnknownFragrance
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownFragrance.ScanVialToAddTapped")))
@interface PuraAnalyticsUnknownFragranceScanVialToAddTapped : PuraAnalyticsUnknownFragrance
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownFragranceScanScreen")))
@interface PuraAnalyticsUnknownFragranceScanScreen : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateScheduleClicked")))
@interface PuraAnalyticsUpdateScheduleClicked : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId viewType:(PuraAnalyticsSchedulesViewType *)viewType appFlow:(PuraAnalyticsAnalyticsAppFlow *)appFlow variant:(PuraAnalyticsSchedulesVariant *)variant __attribute__((swift_name("init(deviceId:viewType:appFlow:variant:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyEmailScreenEvent")))
@interface PuraAnalyticsVerifyEmailScreenEvent : PuraAnalyticsDefaultScreenViewedEvent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(NSString *)flow customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:flow:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WatchSetupVideoTapped")))
@interface PuraAnalyticsWatchSetupVideoTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhereIsTheResetButtonTapped")))
@interface PuraAnalyticsWhereIsTheResetButtonTapped : PuraAnalyticsDefaultButtonTappedEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source __attribute__((swift_name("init(source:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName buttonText:(NSString *)buttonText flow:(NSString *)flow eventType:(NSString *)eventType customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(screenName:buttonText:flow:eventType:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WiFiSetupTipsScreenEvent")))
@interface PuraAnalyticsWiFiSetupTipsScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WiFiSetupTipsWebScreenEvent")))
@interface PuraAnalyticsWiFiSetupTipsWebScreenEvent : PuraAnalyticsDiffuserSetupScreenEvent
- (instancetype)initWithFlow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithScreenName:(NSString *)screenName flow:(PuraAnalyticsAnalyticsAppFlow *)flow diffuserSetupVersion:(PuraAnalyticsDiffuserSetupVersion *)diffuserSetupVersion __attribute__((swift_name("init(screenName:flow:diffuserSetupVersion:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiConnectedResult")))
@interface PuraAnalyticsWifiConnectedResult : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source diffuserId:(NSString *)diffuserId diffuserType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserType isConnected:(BOOL)isConnected rssi:(NSString * _Nullable)rssi error:(PuraAnalyticsWifiConnectedResultErrorType * _Nullable)error flow:(NSString * _Nullable)flow __attribute__((swift_name("init(source:diffuserId:diffuserType:isConnected:rssi:error:flow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("WifiConnectedResult.ErrorType")))
@interface PuraAnalyticsWifiConnectedResultErrorType : PuraAnalyticsBase
- (instancetype)initWithSerializedName:(NSString *)serializedName __attribute__((swift_name("init(serializedName:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *serializedName __attribute__((swift_name("serializedName")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiConnectedResult.ErrorTypeBluetoothDisabled")))
@interface PuraAnalyticsWifiConnectedResultErrorTypeBluetoothDisabled : PuraAnalyticsWifiConnectedResultErrorType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerializedName:(NSString *)serializedName __attribute__((swift_name("init(serializedName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)bluetoothDisabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsWifiConnectedResultErrorTypeBluetoothDisabled *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiConnectedResult.ErrorTypeConnectionFailed")))
@interface PuraAnalyticsWifiConnectedResultErrorTypeConnectionFailed : PuraAnalyticsWifiConnectedResultErrorType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerializedName:(NSString *)serializedName __attribute__((swift_name("init(serializedName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)connectionFailed __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsWifiConnectedResultErrorTypeConnectionFailed *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiConnectedResult.ErrorTypeDiffuserDisconnected")))
@interface PuraAnalyticsWifiConnectedResultErrorTypeDiffuserDisconnected : PuraAnalyticsWifiConnectedResultErrorType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerializedName:(NSString *)serializedName __attribute__((swift_name("init(serializedName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)diffuserDisconnected __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsWifiConnectedResultErrorTypeDiffuserDisconnected *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiConnectedResult.ErrorTypeDiffuserNotResponding")))
@interface PuraAnalyticsWifiConnectedResultErrorTypeDiffuserNotResponding : PuraAnalyticsWifiConnectedResultErrorType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerializedName:(NSString *)serializedName __attribute__((swift_name("init(serializedName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)diffuserNotResponding __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsWifiConnectedResultErrorTypeDiffuserNotResponding *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiConnectedResult.ErrorTypeFrameError")))
@interface PuraAnalyticsWifiConnectedResultErrorTypeFrameError : PuraAnalyticsWifiConnectedResultErrorType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerializedName:(NSString *)serializedName __attribute__((swift_name("init(serializedName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)frameError __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsWifiConnectedResultErrorTypeFrameError *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiConnectedResult.ErrorTypeUnknownError")))
@interface PuraAnalyticsWifiConnectedResultErrorTypeUnknownError : PuraAnalyticsWifiConnectedResultErrorType
- (instancetype)initWithError:(PuraAnalyticsKotlinThrowable * _Nullable)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSerializedName:(NSString *)serializedName __attribute__((swift_name("init(serializedName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (PuraAnalyticsWifiConnectedResultErrorTypeUnknownError *)doCopyError:(PuraAnalyticsKotlinThrowable * _Nullable)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PuraAnalyticsKotlinThrowable * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiConnectedResult.ErrorTypeWrongPassword")))
@interface PuraAnalyticsWifiConnectedResultErrorTypeWrongPassword : PuraAnalyticsWifiConnectedResultErrorType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerializedName:(NSString *)serializedName __attribute__((swift_name("init(serializedName:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)wrongPassword __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsWifiConnectedResultErrorTypeWrongPassword *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiListReceived")))
@interface PuraAnalyticsWifiListReceived : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source size:(int32_t)size deviceId:(NSString *)deviceId diffuserAnalyticsType:(PuraAnalyticsDiffuserAnalyticsType *)diffuserAnalyticsType flow:(NSString * _Nullable)flow __attribute__((swift_name("init(source:size:deviceId:diffuserAnalyticsType:flow:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiNetworkSelected")))
@interface PuraAnalyticsWifiNetworkSelected : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithSource:(PuraAnalyticsScreenEvent *)source networkSecured:(BOOL)networkSecured flow:(NSString * _Nullable)flow variant:(NSString * _Nullable)variant diffuserId:(NSString *)diffuserId __attribute__((swift_name("init(source:networkSecured:flow:variant:diffuserId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WifiSetupResult")))
@interface PuraAnalyticsWifiSetupResult : PuraAnalyticsDefaultAppEvent
- (instancetype)initWithDeviceId:(NSString * _Nullable)deviceId isSuccess:(BOOL)isSuccess failureReason:(NSString * _Nullable)failureReason __attribute__((swift_name("init(deviceId:isSuccess:failureReason:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEventName:(NSString *)eventName diffuserId:(NSString * _Nullable)diffuserId flow:(NSString *)flow eventType:(NSString *)eventType screenName:(NSString * _Nullable)screenName customProperties:(NSDictionary<NSString *, id> * _Nullable)customProperties __attribute__((swift_name("init(eventName:diffuserId:flow:eventType:screenName:customProperties:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PuraAnalyticsKotlinArray<T> : PuraAnalyticsBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PuraAnalyticsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PuraAnalyticsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface PuraAnalyticsKotlinArray (Extensions)
- (NSArray<PuraAnalyticsKotlinx_serialization_jsonJsonElement *> *)toJsonElement __attribute__((swift_name("toJsonElement()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface PuraAnalyticsKotlinPair<__covariant A, __covariant B> : PuraAnalyticsBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (PuraAnalyticsKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

@interface PuraAnalyticsKotlinPair (Extensions)
- (PuraAnalyticsKotlinx_serialization_jsonJsonElement *)toJsonElement __attribute__((swift_name("toJsonElement()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinString.Companion")))
@interface PuraAnalyticsKotlinStringCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsKotlinStringCompanion *shared __attribute__((swift_name("shared")));
@end

@interface PuraAnalyticsKotlinStringCompanion (Extensions)
@property (readonly) NSString *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface PuraAnalyticsKotlinTriple<__covariant A, __covariant B, __covariant C> : PuraAnalyticsBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (PuraAnalyticsKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end

@interface PuraAnalyticsKotlinTriple (Extensions)
- (PuraAnalyticsKotlinx_serialization_jsonJsonElement *)toJsonElement __attribute__((swift_name("toJsonElement()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SegmentAnalyticsKt")))
@interface PuraAnalyticsSegmentAnalyticsKt : PuraAnalyticsBase
+ (id<PuraAnalyticsSegmentAnalytics>)getSegmentAnalytics __attribute__((swift_name("getSegmentAnalytics()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilsKt")))
@interface PuraAnalyticsUtilsKt : PuraAnalyticsBase
+ (id<PuraAnalyticsKotlinx_serialization_coreKSerializer> _Nullable)serializerForValue:(id<PuraAnalyticsKotlinKClass>)value __attribute__((swift_name("serializerFor(value:)")));
+ (PuraAnalyticsKotlinx_serialization_jsonJsonElement *)toJsonElement:(id)receiver __attribute__((swift_name("toJsonElement(_:)")));
+ (NSArray<PuraAnalyticsKotlinx_serialization_jsonJsonElement *> *)toJsonElement_:(id)receiver __attribute__((swift_name("toJsonElement(__:)")));
+ (PuraAnalyticsKotlinx_serialization_jsonJsonElement *)toJsonElement__:(id<PuraAnalyticsKotlinMapEntry>)receiver __attribute__((swift_name("toJsonElement(___:)")));
+ (PuraAnalyticsKotlinx_serialization_jsonJsonElement *)toJsonElement___:(NSDictionary<NSString *, id> *)receiver __attribute__((swift_name("toJsonElement(____:)")));
@property (class, readonly) NSDictionary<NSString *, PuraAnalyticsKotlinx_serialization_jsonJsonElement *> *emptyJsonObject __attribute__((swift_name("emptyJsonObject")));
@property (class, readonly) NSDictionary<id<PuraAnalyticsKotlinKClass>, id<PuraAnalyticsKotlinx_serialization_coreKSerializer>> *primitiveSerializers __attribute__((swift_name("primitiveSerializers")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface PuraAnalyticsKotlinx_serialization_jsonJsonElement : PuraAnalyticsBase
@property (class, readonly, getter=companion) PuraAnalyticsKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface PuraAnalyticsKoin_coreKoin : PuraAnalyticsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (PuraAnalyticsKoin_coreScope *)createScopeT:(id<PuraAnalyticsKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (PuraAnalyticsKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (PuraAnalyticsKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (PuraAnalyticsKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<PuraAnalyticsKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<PuraAnalyticsKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<PuraAnalyticsKotlinKClass>)clazz qualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (PuraAnalyticsKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (PuraAnalyticsKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<PuraAnalyticsKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<PuraAnalyticsKotlinKClass>)clazz qualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (PuraAnalyticsKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (PuraAnalyticsKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<PuraAnalyticsKotlinLazy>)injectQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier mode:(PuraAnalyticsKotlinLazyThreadSafetyMode *)mode parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<PuraAnalyticsKotlinLazy>)injectOrNullQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier mode:(PuraAnalyticsKotlinLazyThreadSafetyMode *)mode parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<PuraAnalyticsKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(PuraAnalyticsKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<PuraAnalyticsKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) PuraAnalyticsKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) PuraAnalyticsKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) PuraAnalyticsKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) PuraAnalyticsKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PuraAnalyticsKotlinEnumCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PuraAnalyticsKotlinThrowable : PuraAnalyticsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PuraAnalyticsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PuraAnalyticsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (PuraAnalyticsKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PuraAnalyticsKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PuraAnalyticsKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PuraAnalyticsKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PuraAnalyticsKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PuraAnalyticsKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PuraAnalyticsKotlinx_serialization_coreKSerializer <PuraAnalyticsKotlinx_serialization_coreSerializationStrategy, PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PuraAnalyticsKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PuraAnalyticsKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PuraAnalyticsKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PuraAnalyticsKotlinKClass <PuraAnalyticsKotlinKDeclarationContainer, PuraAnalyticsKotlinKAnnotatedElement, PuraAnalyticsKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol PuraAnalyticsKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface PuraAnalyticsKotlinx_serialization_jsonJsonElementCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<PuraAnalyticsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface PuraAnalyticsKoin_coreLockable : PuraAnalyticsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface PuraAnalyticsKoin_coreScope : PuraAnalyticsKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<PuraAnalyticsKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(PuraAnalyticsKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (PuraAnalyticsKoin_coreScope *)doCopyScopeQualifier:(id<PuraAnalyticsKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(PuraAnalyticsKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<PuraAnalyticsKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id)getQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<PuraAnalyticsKotlinKClass>)clazz qualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<PuraAnalyticsKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (PuraAnalyticsKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<PuraAnalyticsKotlinKClass>)clazz qualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (PuraAnalyticsKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<PuraAnalyticsKotlinLazy>)injectQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier mode:(PuraAnalyticsKotlinLazyThreadSafetyMode *)mode parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<PuraAnalyticsKotlinLazy>)injectOrNullQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier mode:(PuraAnalyticsKotlinLazyThreadSafetyMode *)mode parameters:(PuraAnalyticsKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(PuraAnalyticsKotlinArray<PuraAnalyticsKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<PuraAnalyticsKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(PuraAnalyticsKotlinArray<PuraAnalyticsKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<PuraAnalyticsKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) PuraAnalyticsKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<PuraAnalyticsKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol PuraAnalyticsKoin_coreKoinScopeComponent <PuraAnalyticsKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) PuraAnalyticsKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol PuraAnalyticsKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface PuraAnalyticsKoin_coreParametersHolder : PuraAnalyticsBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PuraAnalyticsKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (PuraAnalyticsKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<PuraAnalyticsKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<PuraAnalyticsKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (PuraAnalyticsKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol PuraAnalyticsKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface PuraAnalyticsKotlinLazyThreadSafetyMode : PuraAnalyticsKotlinEnum<PuraAnalyticsKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) PuraAnalyticsKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) PuraAnalyticsKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PuraAnalyticsKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface PuraAnalyticsKoin_coreModule : PuraAnalyticsBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (PuraAnalyticsKotlinPair<PuraAnalyticsKoin_coreModule *, PuraAnalyticsKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PuraAnalyticsKoin_coreScope *, PuraAnalyticsKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(PuraAnalyticsKotlinArray<PuraAnalyticsKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<PuraAnalyticsKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (NSArray<PuraAnalyticsKoin_coreModule *> *)plusModules:(NSArray<PuraAnalyticsKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<PuraAnalyticsKoin_coreModule *> *)plusModule:(PuraAnalyticsKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeScopeSet:(void (^)(PuraAnalyticsKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<PuraAnalyticsKoin_coreQualifier>)qualifier scopeSet:(void (^)(PuraAnalyticsKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (PuraAnalyticsKotlinPair<PuraAnalyticsKoin_coreModule *, PuraAnalyticsKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(PuraAnalyticsKoin_coreScope *, PuraAnalyticsKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) PuraAnalyticsMutableSet<PuraAnalyticsKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface PuraAnalyticsKoin_coreLogger : PuraAnalyticsBase
- (instancetype)initWithLevel:(PuraAnalyticsKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(PuraAnalyticsKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(PuraAnalyticsKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(PuraAnalyticsKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property PuraAnalyticsKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface PuraAnalyticsKoin_coreInstanceRegistry : PuraAnalyticsBase
- (instancetype)initWith_koin:(PuraAnalyticsKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(PuraAnalyticsKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) PuraAnalyticsKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, PuraAnalyticsKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface PuraAnalyticsKoin_corePropertyRegistry : PuraAnalyticsBase
- (instancetype)initWith_koin:(PuraAnalyticsKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface PuraAnalyticsKoin_coreScopeRegistry : PuraAnalyticsBase
- (instancetype)initWith_koin:(PuraAnalyticsKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PuraAnalyticsKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<PuraAnalyticsKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) PuraAnalyticsKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<PuraAnalyticsKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PuraAnalyticsKotlinx_serialization_coreEncoder
@required
- (id<PuraAnalyticsKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PuraAnalyticsKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PuraAnalyticsKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<PuraAnalyticsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PuraAnalyticsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PuraAnalyticsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PuraAnalyticsKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<PuraAnalyticsKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

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
@property (readonly) NSArray<id<PuraAnalyticsKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

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
@property (readonly) PuraAnalyticsKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PuraAnalyticsKotlinx_serialization_coreDecoder
@required
- (id<PuraAnalyticsKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PuraAnalyticsKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (PuraAnalyticsKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PuraAnalyticsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol PuraAnalyticsKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(PuraAnalyticsKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface PuraAnalyticsKoin_coreParametersHolderCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface PuraAnalyticsKoin_coreInstanceFactory<T> : PuraAnalyticsKoin_coreLockable
- (instancetype)initWithBeanDefinition:(PuraAnalyticsKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) PuraAnalyticsKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(PuraAnalyticsKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(PuraAnalyticsKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(PuraAnalyticsKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(PuraAnalyticsKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) PuraAnalyticsKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface PuraAnalyticsKoin_coreScopeDSL : PuraAnalyticsBase
- (instancetype)initWithScopeQualifier:(id<PuraAnalyticsKoin_coreQualifier>)scopeQualifier module:(PuraAnalyticsKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (PuraAnalyticsKotlinPair<PuraAnalyticsKoin_coreModule *, PuraAnalyticsKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PuraAnalyticsKoin_coreScope *, PuraAnalyticsKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (PuraAnalyticsKotlinPair<PuraAnalyticsKoin_coreModule *, PuraAnalyticsKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PuraAnalyticsKoin_coreScope *, PuraAnalyticsKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (PuraAnalyticsKotlinPair<PuraAnalyticsKoin_coreModule *, PuraAnalyticsKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PuraAnalyticsKoin_coreScope *, PuraAnalyticsKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) PuraAnalyticsKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<PuraAnalyticsKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface PuraAnalyticsKoin_coreSingleInstanceFactory<T> : PuraAnalyticsKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(PuraAnalyticsKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(PuraAnalyticsKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(PuraAnalyticsKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(PuraAnalyticsKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(PuraAnalyticsKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface PuraAnalyticsKoin_coreLevel : PuraAnalyticsKotlinEnum<PuraAnalyticsKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) PuraAnalyticsKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) PuraAnalyticsKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) PuraAnalyticsKoin_coreLevel *none __attribute__((swift_name("none")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface PuraAnalyticsKoin_coreScopeRegistryCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PuraAnalyticsKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PuraAnalyticsKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PuraAnalyticsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PuraAnalyticsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PuraAnalyticsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PuraAnalyticsKotlinx_serialization_coreSerializersModule : PuraAnalyticsBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PuraAnalyticsKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PuraAnalyticsKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PuraAnalyticsKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PuraAnalyticsKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PuraAnalyticsKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PuraAnalyticsKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PuraAnalyticsKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PuraAnalyticsKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PuraAnalyticsKotlinx_serialization_coreSerialKind : PuraAnalyticsBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PuraAnalyticsKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PuraAnalyticsKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PuraAnalyticsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PuraAnalyticsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PuraAnalyticsKotlinNothing : PuraAnalyticsBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface PuraAnalyticsKoin_coreBeanDefinition<T> : PuraAnalyticsBase
- (instancetype)initWithScopeQualifier:(id<PuraAnalyticsKoin_coreQualifier>)scopeQualifier primaryType:(id<PuraAnalyticsKotlinKClass>)primaryType qualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(PuraAnalyticsKoin_coreScope *, PuraAnalyticsKoin_coreParametersHolder *))definition kind:(PuraAnalyticsKoin_coreKind *)kind secondaryTypes:(NSArray<id<PuraAnalyticsKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (PuraAnalyticsKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<PuraAnalyticsKoin_coreQualifier>)scopeQualifier primaryType:(id<PuraAnalyticsKotlinKClass>)primaryType qualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(PuraAnalyticsKoin_coreScope *, PuraAnalyticsKoin_coreParametersHolder *))definition kind:(PuraAnalyticsKoin_coreKind *)kind secondaryTypes:(NSArray<id<PuraAnalyticsKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<PuraAnalyticsKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<PuraAnalyticsKotlinKClass>)clazz qualifier:(id<PuraAnalyticsKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<PuraAnalyticsKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property PuraAnalyticsKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(PuraAnalyticsKoin_coreScope *, PuraAnalyticsKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) PuraAnalyticsKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<PuraAnalyticsKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<PuraAnalyticsKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<PuraAnalyticsKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<PuraAnalyticsKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface PuraAnalyticsKoin_coreInstanceFactoryCompanion : PuraAnalyticsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PuraAnalyticsKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface PuraAnalyticsKoin_coreInstanceContext : PuraAnalyticsBase
- (instancetype)initWithKoin:(PuraAnalyticsKoin_coreKoin *)koin scope:(PuraAnalyticsKoin_coreScope *)scope parameters:(PuraAnalyticsKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PuraAnalyticsKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) PuraAnalyticsKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) PuraAnalyticsKoin_coreScope *scope __attribute__((swift_name("scope")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PuraAnalyticsKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PuraAnalyticsKotlinKClass>)kClass provider:(id<PuraAnalyticsKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PuraAnalyticsKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PuraAnalyticsKotlinKClass>)kClass serializer:(id<PuraAnalyticsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PuraAnalyticsKotlinKClass>)baseClass actualClass:(id<PuraAnalyticsKotlinKClass>)actualClass actualSerializer:(id<PuraAnalyticsKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PuraAnalyticsKotlinKClass>)baseClass defaultDeserializerProvider:(id<PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PuraAnalyticsKotlinKClass>)baseClass defaultDeserializerProvider:(id<PuraAnalyticsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PuraAnalyticsKotlinKClass>)baseClass defaultSerializerProvider:(id<PuraAnalyticsKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface PuraAnalyticsKoin_coreKind : PuraAnalyticsKotlinEnum<PuraAnalyticsKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PuraAnalyticsKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) PuraAnalyticsKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) PuraAnalyticsKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (PuraAnalyticsKotlinArray<PuraAnalyticsKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface PuraAnalyticsKoin_coreCallbacks<T> : PuraAnalyticsBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (PuraAnalyticsKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
