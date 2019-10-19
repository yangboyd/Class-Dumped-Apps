//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCLoginKitAppPermissionsViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SCNetworkImage, SCSnapKitLogger, SCSnapKitProtoConnection, SCUserSession;
@protocol SCLoginKitAppPermissionsDelegate;

@interface SCLoginKitAppPermissionsViewController : SCLeftSwipableViewController <SCLoginKitAppPermissionsViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    SCUserSession *_userSession;
    SCSnapKitProtoConnection *_appConnection;
    NSMutableDictionary *_permissionToggleStates;
    SCNetworkImage *_appIconView;
    SCSnapKitLogger *_logger;
    id <SCLoginKitAppPermissionsDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLoginKitAppPermissionsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showErrorMessage:(id)arg1;
- (void)_makeUpdatePermissionsRequestWithAccessToken:(id)arg1 permissions:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)_makeRemoveAppConnectionRequestWithAccessToken:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)_updatePermissionsBlockWithPermissions:(id)arg1;
- (CDUnknownBlockType)_removeAppConnectionBlock;
- (void)_updatePermissionsIfNeeded;
- (_Bool)_permissionsShouldBeUpdatedWithNewPermissions:(id)arg1;
- (void)leftSwipeSucceed;
- (void)didPressbackButton;
- (void)didPressConfirmRemoveButton;
- (void)_switchChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithConnection:(id)arg1 userSession:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

