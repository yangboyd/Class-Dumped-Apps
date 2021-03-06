//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGServiceHelperProtocol-Protocol.h>

@class IGAnalyticsStructuredLogger, IGCrosspostingDestinationOptionsFetcher, IGFacebookHelper, IGFacebookInfoFetcher, IGFacebookXPostingUpsellLoggingManager, IGFacebookXpostingDestinationPickerPresenter, IGUser, IGUserDefaults, IGUserSession, NSString;
@protocol IGAPIClient;

@interface IGFacebookServiceHelper : NSObject <IGServiceHelperProtocol>
{
    IGUserSession *_userSession;
    IGUser *_currentUser;
    IGUserDefaults *_sessionUserDefaults;
    id <IGAPIClient> _networker;
    IGFacebookHelper *_facebookHelper;
    _Bool _isConfiguredOnlyOnServer;
    NSString *_serverUsername;
    IGFacebookInfoFetcher *_facebookInfoFetcher;
    NSString *_fbName;
    IGFacebookXPostingUpsellLoggingManager *_xPostingUpsellLoggingManager;
    IGCrosspostingDestinationOptionsFetcher *_crosspostingDestinationOptionsFetcher;
    IGAnalyticsStructuredLogger *_logger;
    IGFacebookXpostingDestinationPickerPresenter *_facebookXpostingDestinationPickerPresenter;
    _Bool _isAvailableForSharing;
    _Bool _wantsToShare;
    _Bool _disabled;
    _Bool _isEligibleToShowUpsellInFeedAfterSharingToStory;
    _Bool _isCrossPostingFeedAudienceSettingOnlyMe;
    NSString *_facebookDatingUserId;
}

+ (id)shortServiceName;
+ (id)sharedHelperForUserServiceManager:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *facebookDatingUserId; // @synthesize facebookDatingUserId=_facebookDatingUserId;
@property(readonly, nonatomic) _Bool isCrossPostingFeedAudienceSettingOnlyMe; // @synthesize isCrossPostingFeedAudienceSettingOnlyMe=_isCrossPostingFeedAudienceSettingOnlyMe;
@property(readonly, nonatomic) _Bool isEligibleToShowUpsellInFeedAfterSharingToStory; // @synthesize isEligibleToShowUpsellInFeedAfterSharingToStory=_isEligibleToShowUpsellInFeedAfterSharingToStory;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool wantsToShare; // @synthesize wantsToShare=_wantsToShare;
@property(nonatomic) _Bool isAvailableForSharing; // @synthesize isAvailableForSharing=_isAvailableForSharing;
- (id)_crosspostingDestinationOptionsForDestinationPicker;
- (_Bool)hasValidDestinationsForDestinationPickerAtEntrypoint:(id)arg1;
- (void)presentDestinationPickerWithPrimaryActionBlock:(CDUnknownBlockType)arg1 dismissActionBlock:(CDUnknownBlockType)arg2 surface:(long long)arg3;
- (void)_logFacebookCrossPostingSettingsLegacyScreenOpen;
- (void)_logFacebookCrossPostingSettingsCALScreenOpen;
- (void)_syncFeedAutoCrossPostingSettingToServer:(_Bool)arg1 isFromUserInteraction:(_Bool)arg2 surface:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)fetchFeedAutoCrossPostingSettingWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 surface:(long long)arg3;
- (_Bool)feedAutoXpostingSetting;
- (void)setFeedCrossPostingAudienceSettingForAudienceEnum:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setFeedAutoCrossPostingSetting:(_Bool)arg1 isFromUserInteraction:(_Bool)arg2 surface:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setFeedAutoCrossPostingSetting:(_Bool)arg1 isFromUserInteraction:(_Bool)arg2 surface:(long long)arg3;
@property(readonly, nonatomic) _Bool shouldSimulcastLiveToFacebookLive;
@property(readonly, nonatomic) _Bool isEligibleToEnableFacebookLiveSimulcast;
- (void)setShouldSimulcastLiveToFacebookLive:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isHardLinkedOnServer;
@property(readonly, nonatomic) _Bool isPostingToManagedPage;
- (_Bool)_isCreatorAccountEligibleForXpostingIfOnlyLinkedOnServer;
- (_Bool)_isPersonalAccountEligibleForXpostingIfOnlyLinkedOnServer;
- (_Bool)_isBusinessAccountEligibleForXpostingIfOnlyLinkedOnServer;
@property(readonly, nonatomic) _Bool isLoggedInBasedOnServer;
@property(readonly, nonatomic) _Bool isEligibleForCrossPostingBasedOnServer;
- (_Bool)canPostStoryToLinkedFacebookAccount;
@property(readonly, nonatomic) _Bool isEligibleToShowFbButtonOnSelfStory;
@property(readonly, nonatomic) _Bool isEligibleToListenToStorySharePostedNotificationForUpsellAfterSharingToStory;
@property(readonly, nonatomic) _Bool isEligibleToShowExpandedXPostingUpsellAfterSharingToStory;
@property(readonly, nonatomic) _Bool isEligibleToFetchExpandedXPostingUpsellAfterSharingToStoryEligibilityCheck;
@property(readonly, nonatomic) _Bool isEligibleToShowXPostingUpsellAfterSharingToStory;
@property(readonly, nonatomic) _Bool isEligibleToFetchXPostingUpsellAfterSharingToStoryEligibilityCheck;
- (_Bool)_isEligibleToShowExpandedUpsellAfterSharingToStoryBasedOnFrequency;
- (_Bool)_isEligibleToShowUpsellAfterSharingToStoryBasedOnFrequency;
- (void)showSharingToFacebookForStoryAndFeedUpsellWithPrimaryClickBlock:(CDUnknownBlockType)arg1 surface:(long long)arg2;
@property(readonly, nonatomic) _Bool isEligibleToShowShareToFacebookOptionDialogSelfStory;
- (void)_logStoryAutoCrossPostingSettingEvent:(id)arg1 setting:(_Bool)arg2 userInteraction:(_Bool)arg3 surface:(id)arg4;
- (void)logXPostingUpsellEventWithName:(id)arg1 eventName:(id)arg2 moduleName:(id)arg3 surface:(long long)arg4 extraDict:(id)arg5;
- (void)_logXPostingSettingChangeWithSuccess:(_Bool)arg1 syncFromServer:(_Bool)arg2 autoCrossPosting:(_Bool)arg3 userInteraction:(_Bool)arg4 serverSettingVersion:(unsigned long long)arg5 surface:(id)arg6;
- (void)_syncAutoCrossPostingOptionToServerV3:(_Bool)arg1 userInteraction:(_Bool)arg2 surface:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setCrossPostingFeedAudienceSettingToFriendsWithUploadID:(id)arg1 mediaID:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)syncAutoCrossPostingOptionToServer:(_Bool)arg1 userInteraction:(_Bool)arg2 surface:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_fetchAutoCrossPostingV3WithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)fetchCrossPostingFeedAudienceSettingForAudienceEnumWithSucessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)fetchCrossPostingFeedAudienceOnlyMeSettingWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)fetchShowFbButtonOnSelfStoryToNonFBCEligibility;
- (void)fetchEligibilityForUpsellAfterSharingToStory;
- (void)fetchAutoCrossPostingWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)_setAutoCrossPostingBeenTurnedOnAfterSharingOptionDialogSelfStory:(_Bool)arg1;
- (void)updateClientFeedAutoCrosspostingSetting:(_Bool)arg1 surface:(long long)arg2;
- (void)updateClientStoryAutoCrosspostingSetting:(_Bool)arg1 surface:(long long)arg2;
- (void)setAutoCrossPostingSynchronously:(_Bool)arg1 surface:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool autoCrossPosting;
- (void)fetchCrossPostingDestinationOptionsIfNeededAtEntryPoint:(id)arg1;
- (_Bool)canShowFeedXpostingAudienceSettingSheet;
- (_Bool)shouldShowDestinationPicker;
- (void)fetchServerDestinationAtEntryPoint:(id)arg1;
- (void)fetchFBNameUsingBigBlueTokenWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)logoutAndUnlinkOnSurface:(unsigned long long)arg1;
- (void)logoutAndUnlink;
- (void)logout;
- (id)fbDatingSharingInfo;
- (id)sharingInfo;
- (id)detailText;
- (id)_usernameText;
- (_Bool)shouldUseSubtitleCellStyle;
- (_Bool)hidden;
- (_Bool)_shouldHideForMultiParentAccounts;
- (_Bool)isConfiguredOnlyOnServer;
- (_Bool)_isBusinessConfigured;
- (_Bool)isConfiguredForCrossPosting;
- (_Bool)_isValidUser;
- (_Bool)_isUserConfigured;
- (_Bool)isConfigured;
- (_Bool)supportsMediaType:(long long)arg1;
- (_Bool)isAvailableInCurrentLocale;
- (void)_handleServerXpostingDestination:(id)arg1 atEntryPoint:(id)arg2;
- (void)_handleServerLinkage:(_Bool)arg1 name:(id)arg2 userID:(id)arg3 atEntryPoint:(id)arg4;
- (void)storeServerLinkageStatus:(_Bool)arg1 facebookUserID:(id)arg2;
- (void)setupServerLinkage:(id)arg1 atEntryPoint:(id)arg2;
- (void)setupServerLinkage:(id)arg1;
- (_Bool)needsToReauthorize;
- (void)reauthorizeIfNeeded;
- (_Bool)requiresLocationCoordinate;
- (id)viewControllerForAdvancedOptionsWithUserSession:(id)arg1;
- (id)viewControllerForAdvancedOptionsWithUserSession:(id)arg1 isNewlyLinked:(_Bool)arg2 isFBPayConnected:(_Bool)arg3;
- (id)shareKey;
- (id)serviceName;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

