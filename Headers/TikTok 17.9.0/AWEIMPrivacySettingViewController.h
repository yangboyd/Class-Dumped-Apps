//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEComplianceMessage-Protocol.h"
#import "AWERouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEPrivacySettingUserControlViewController, NSMutableArray, NSString, UITableView;

@interface AWEIMPrivacySettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEComplianceMessage, AWERouterViewControllerProtocol>
{
    _Bool _trackLeaveOnce;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    long long _sourceType;
    AWEPrivacySettingUserControlViewController *_privacySettingUserControlViewController;
    CDUnknownBlockType _callbackBlock;
    double _activeTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool trackLeaveOnce; // @synthesize trackLeaveOnce=_trackLeaveOnce;
@property(nonatomic) double activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) AWEPrivacySettingUserControlViewController *privacySettingUserControlViewController; // @synthesize privacySettingUserControlViewController=_privacySettingUserControlViewController;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (double)tableHieghtOfHeader;
- (_Bool)needResetUnloginStatus;
- (id)i18NUnloginDataSource;
- (void)configDataSource;
- (void)tempSeperateCellTap;
- (void)fetchBlockUsersCount;
- (_Bool)isCommentFilterUsed:(id)arg1;
- (void)p_startCountingTime;
- (void)p_pauseCountingTime;
- (void)p_trackLeavingPage;
- (void)listControlDidChange;
- (void)p_addModel:(id)arg1 intoArray:(id)arg2;
- (void)refreshSettings:(CDUnknownBlockType)arg1;
- (void)refresh;
- (id)_settingModel:(id)arg1 withIndex:(long long)arg2 isSelected:(_Bool)arg3;
- (struct CGSize)labelStringSize:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_configData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

