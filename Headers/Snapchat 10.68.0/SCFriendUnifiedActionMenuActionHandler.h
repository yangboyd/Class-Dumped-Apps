//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCFriendUnifiedActionMenuSettingsActionHandlerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedActionMenuPresenterDelegate-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCFeatureSettingsManager, SCFriendUnifiedActionMenuSettingsActionHandler, SCFriendUnifiedProfileDataSource, SCUnifiedActionMenuPresenter, SCUnifiedProfileLoggingService;
@protocol SCFriendUnifiedActionMenuActionHandlerDelegate;

@interface SCFriendUnifiedActionMenuActionHandler : NSObject <SCFriendUnifiedActionMenuSettingsActionHandlerDelegate, SCUnifiedActionMenuPresenterDelegate, SCUpdateListener, SCTraceEnabled, SCActionHandling, SCEventAnnouncing>
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCFriendUnifiedActionMenuSettingsActionHandler *_settingsActionHandler;
    SCUnifiedActionMenuPresenter *_settingsActionMenuPresenter;
    SCUnifiedActionMenuPresenter *_retentionPolicyActionMenuPresenter;
    NSString *_sourcePageType;
    id <SCFriendUnifiedActionMenuActionHandlerDelegate> _delegate;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCUnifiedProfileLoggingService *_loggingService;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCUnifiedProfileLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(readonly, nonatomic) SCFriendUnifiedProfileDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak SCUnifiedActionMenuPresenter *actionMenuPresenter; // @synthesize actionMenuPresenter=_actionMenuPresenter;
@property(nonatomic) __weak id <SCFriendUnifiedActionMenuActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissRetentionPolicyActionSheet;
- (void)_goBackToLastActionSheet;
- (void)dismissAllActionMenus;
- (void)_presentActionMenuWithDataProvider:(id)arg1;
- (void)_presentRetentionPolicyActionMenu;
- (void)_presentManageFriendshipActionMenu;
- (void)_presentStorySettingsActionMenu;
- (void)_presentChatSettingsActionMenu;
- (void)_presentSettingsActionMenu;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;
- (void)willClearFriendConversation:(id)arg1 presentingViewController:(id)arg2;
- (_Bool)_handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithUserSession:(id)arg1 friendScoreCoordinator:(id)arg2 snapchattersDataMutator:(id)arg3 tempSnapchatterDataCoordinator:(id)arg4 userInfoProvider:(id)arg5 friendsFeedDataAccess:(id)arg6 conversationManager:(id)arg7 arroyoConversationIdsManager:(id)arg8 pinnedConversationsDataCoordinator:(id)arg9 dataSource:(id)arg10 sourcePageType:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

