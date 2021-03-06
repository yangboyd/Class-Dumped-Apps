//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASTSettingsClientDataSource-Protocol.h"
#import "ASTSettingsClientDelegate-Protocol.h"
#import "ASTSettingsMenuServiceDataSource-Protocol.h"
#import "ASTSettingsMenuServiceDelegate-Protocol.h"
#import "ASTStyleableContent-Protocol.h"
#import "ASTThemeContainer-Protocol.h"

@class ARIServiceProvider, ASTAvocadoEnrollmentDeepLinkController, ASTConsentChecker, ASTGALHandler, ASTPersonalResultsDeepLinkController, ASTSettingsClient, ASTSettingsMenuService, NSArray, NSMutableArray, NSPointerArray, NSString, UIViewController, ULRManager;
@protocol ASTAuthProvider, ASTSettingsDelegate, ASTSettingsFactory, ASTThemeContainer;

@interface ASTSettings : NSObject <ASTSettingsMenuServiceDataSource, ASTSettingsMenuServiceDelegate, ASTSettingsClientDataSource, ASTSettingsClientDelegate, ASTStyleableContent, ASTThemeContainer>
{
    ASTConsentChecker *_consentChecker;
    _Bool _hidingNavigation;
    _Bool _boundToTraitCollection;
    _Bool _needsToHighlightNewFeatures;
    ASTSettingsMenuService *_service;
    NSString *_assistantSettingsLocale;
    unsigned long long _ast_theme;
    id <ASTSettingsDelegate> _delegate;
    NSString *_sandboxAssistantServer;
    unsigned long long _displayStyle;
    NSArray *_logSources;
    UIViewController *_presentedNavigationController;
    NSMutableArray *_URLOpeners;
    NSMutableArray *_customUIAdapterURLHandlers;
    ASTGALHandler *_galHandler;
    NSString *_clientID;
    id <ASTAuthProvider> _authProvider;
    NSString *_placesAPIKey;
    long long _serverEnvironment;
    id <ASTSettingsFactory> _settingsFactory;
    ULRManager *_ULRManager;
    ARIServiceProvider *_ariServiceProvider;
    long long _currentMainSettingsTabIndex;
    ASTSettingsClient *_webSettingsClient;
}

+ (_Bool)isAssistantOOBEURL:(id)arg1;
+ (id)queryItemForName:(id)arg1 urlComponents:(id)arg2;
+ (_Bool)isGoogleAssistantSettingsURL:(id)arg1;
+ (_Bool)isSetUp;
+ (_Bool)openURL:(id)arg1 launchOptions:(id)arg2 presentationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)openURL:(id)arg1 launchOptions:(id)arg2 completion:(CDUnknownBlockType)arg3 presentingViewController:(id)arg4;
+ (_Bool)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2 presentingViewController:(id)arg3;
+ (void)registerWithPhenotype;
+ (_Bool)ishotwordSensitivitySettingEnabled;
+ (void)checkOOBEAssistantVoiceSelectionAvailableForDeviceLocaleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)handleContinueUserActivity:(id)arg1;
+ (_Bool)isAssistantLocationHistoryURL:(id)arg1;
+ (_Bool)isAssistantSettingsURL:(id)arg1;
+ (_Bool)openURL:(id)arg1;
+ (_Bool)canOpenURL:(id)arg1;
+ (void)setupSharedInstanceWithClientID:(id)arg1 authProvider:(id)arg2 delegate:(id)arg3 placesAPIKey:(id)arg4 serverEnvironment:(long long)arg5 ULRManager:(id)arg6 logSources:(id)arg7;
+ (void)setupSharedInstanceWithClientID:(id)arg1 authProvider:(id)arg2 delegate:(id)arg3 placesAPIKey:(id)arg4 serverEnvironment:(long long)arg5 ULRManager:(id)arg6;
+ (void)setupSharedInstanceWithClientID:(id)arg1 authProvider:(id)arg2 delegate:(id)arg3 placesAPIKey:(id)arg4 serverEnvironment:(long long)arg5;
+ (void)setupSharedInstanceWithClientID:(id)arg1 authProvider:(id)arg2 delegate:(id)arg3 placesAPIKey:(id)arg4;
+ (id)sharedInstance;
+ (int)versionNumber;
+ (_Bool)openCapabilitiesUniversalLink:(id)arg1 presentingViewController:(id)arg2 settingsDelegate:(id)arg3;
+ (_Bool)canOpenCapabilitiesUniversalLink:(id)arg1;
+ (_Bool)isAssistantHandoffURL:(id)arg1;
+ (_Bool)isHomeDeviceLocaleSupportedForMultiUserEnrollment:(id)arg1;
+ (_Bool)isPhoneSpeakerIDEnrollmentEnabled;
+ (id)localeIDForCastDeviceLocaleID:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ASTSettingsClient *webSettingsClient; // @synthesize webSettingsClient=_webSettingsClient;
@property(nonatomic) _Bool needsToHighlightNewFeatures; // @synthesize needsToHighlightNewFeatures=_needsToHighlightNewFeatures;
@property(nonatomic) long long currentMainSettingsTabIndex; // @synthesize currentMainSettingsTabIndex=_currentMainSettingsTabIndex;
@property(retain, nonatomic) ARIServiceProvider *ariServiceProvider; // @synthesize ariServiceProvider=_ariServiceProvider;
@property(retain, nonatomic) ULRManager *ULRManager; // @synthesize ULRManager=_ULRManager;
@property(retain, nonatomic) id <ASTSettingsFactory> settingsFactory; // @synthesize settingsFactory=_settingsFactory;
@property(nonatomic) long long serverEnvironment; // @synthesize serverEnvironment=_serverEnvironment;
@property(copy, nonatomic) NSString *placesAPIKey; // @synthesize placesAPIKey=_placesAPIKey;
@property(retain, nonatomic) id <ASTAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) ASTGALHandler *galHandler; // @synthesize galHandler=_galHandler;
@property(nonatomic) _Bool boundToTraitCollection; // @synthesize boundToTraitCollection=_boundToTraitCollection;
@property(retain, nonatomic) NSMutableArray *customUIAdapterURLHandlers; // @synthesize customUIAdapterURLHandlers=_customUIAdapterURLHandlers;
@property(retain, nonatomic) NSMutableArray *URLOpeners; // @synthesize URLOpeners=_URLOpeners;
@property(retain, nonatomic) UIViewController *presentedNavigationController; // @synthesize presentedNavigationController=_presentedNavigationController;
@property(retain, nonatomic) NSArray *logSources; // @synthesize logSources=_logSources;
@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(copy, nonatomic) NSString *sandboxAssistantServer; // @synthesize sandboxAssistantServer=_sandboxAssistantServer;
@property(nonatomic) __weak id <ASTSettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long ast_theme; // @synthesize ast_theme=_ast_theme;
@property(retain, nonatomic) ASTSettingsMenuService *service; // @synthesize service=_service;
- (void)updateViewControllerStyle:(id)arg1;
- (_Bool)assistantSettingsClient:(id)arg1 willOpenURL:(id)arg2 fromViewController:(id)arg3;
- (id)authenticationProvider;
- (void)applicationDidEnterBackground;
- (_Bool)handleDeeplinkWithURL:(id)arg1 launchOptions:(id)arg2 presentingViewController:(id)arg3 presentationBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestASTWebViewControllerForUrl:(id)arg1 needsGoogleAuthToken:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestWebViewControllerForUrl:(id)arg1 title:(id)arg2 needsGoogleAuthToken:(_Bool)arg3 useGOOWebViewController:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)supportedFeaturesDictionary;
- (void)dismissPresentedNavigationController;
- (void)pushOrPresentViewController:(id)arg1 presentingViewController:(id)arg2 hideNavigation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)storeLocation:(id)arg1 placeID:(id)arg2 isHome:(_Bool)arg3;
- (id)settingsTypeForFeature:(id)arg1;
- (void)requestGOOWebViewControllerForUrl:(id)arg1 title:(id)arg2 needsGoogleAuthToken:(_Bool)arg3 delegate:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)requestSafariViewControllerForUrl:(id)arg1 title:(id)arg2 needsGoogleAuthToken:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)requestViewControllerForUIAdapter:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestViewControllerForType:(long long)arg1 callback:(CDUnknownBlockType)arg2 toPresentModally:(_Bool)arg3;
- (void)requestViewControllerForType:(long long)arg1 callback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *clientURLScheme;
- (void)didFinishFetchSettingWithLogContext:(id)arg1;
- (void)willStartFetchSettingWithLogContext:(id)arg1;
- (id)featureCenter;
- (id)dataService;
- (id)paymentClientToken;
- (id)supportedFeatures;
- (void)ast_updateTheme:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateThemeWithCollectionTrait;
- (void)fetchSupportedLocalesForDeviceType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)supportedLocaleIDsForDeviceType:(long long)arg1;
@property(readonly, nonatomic) NSArray *assistantDeviceSupportedLocales;
- (void)fetchPreferredAssistantVoice:(CDUnknownBlockType)arg1;
- (void)clearSettingsCache;
- (void)show3PConsentWithPresentationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showDSCWithDeviceID:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)checkUDCWithValuePropID:(id)arg1 isAndroidTVDevice:(_Bool)arg2 presentationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)checkUDCWithValuePropID:(id)arg1 presentationBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)checkUDCConsentWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)openURL:(id)arg1 launchOptions:(id)arg2 presentingViewController:(id)arg3 presentationBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestViewControllerForURL:(id)arg1 toPresentModally:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestViewControllerForURL:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)viewControllerForURL:(id)arg1;
- (id)requestViewControllerForType:(long long)arg1;
- (id)viewControllerForType:(long long)arg1;
- (void)requestViewControllerForMyActivitiesWithCallback:(CDUnknownBlockType)arg1 toPresentModally:(_Bool)arg2;
@property(copy, nonatomic) NSString *assistantSettingsLocale; // @synthesize assistantSettingsLocale=_assistantSettingsLocale;
@property(retain, nonatomic) NSString *assistantSettingsVersionInfo;
@property(nonatomic) _Bool mainSettingsHomeTabViewed;
@property(readonly, nonatomic) _Bool newFeaturesAvailable;
- (id)userPreferences;
- (void)dealloc;
@property(retain, nonatomic) ASTAvocadoEnrollmentDeepLinkController *avocadoEnrollmentDeepLinkController; // @dynamic avocadoEnrollmentDeepLinkController;
- (void)startAvocadoEnrollmentFlowWithURL:(id)arg1 presentingViewController:(id)arg2 previousResult:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSPointerArray *mutableDeviceInfoProviders; // @dynamic mutableDeviceInfoProviders;
- (void)setiPhonePersonalResultPermissionSettings:(_Bool)arg1;
- (_Bool)iPhonePersonalResultPermissionGranted;
- (id)deviceInfoProviders;
- (void)addDeviceInfoProvider:(id)arg1;
- (id)viewControllerForDeviceWithDeviceInfoProvider:(id)arg1;
- (id)handoffWebViewControllerWithURL:(id)arg1;
- (id)handoffWebViewControllerWithURL:(id)arg1 isForFoodOrdering:(_Bool)arg2;
- (id)localizedRoomTypeStringForRoomType:(id)arg1;
@property(readonly, nonatomic) NSArray *predefinedHomeAutomationRoomTypes;
@property(retain, nonatomic) ASTPersonalResultsDeepLinkController *personalResultsDeepLinkController; // @dynamic personalResultsDeepLinkController;
- (void)startPersonalResultsFlowWithURL:(id)arg1 presentingViewController:(id)arg2 previousResult:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool placesAPIKeyProvided; // @dynamic placesAPIKeyProvided;
- (void)provideAPIKeyToGMSPlacesClient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSObject<ASTThemeContainer> *themeSource;

@end

