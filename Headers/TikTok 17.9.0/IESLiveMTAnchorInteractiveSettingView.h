//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESLiveMTPopupBaseViewController.h"

#import "IESLiveMTMicSettingSwitchCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LiveRoomModel, NSArray, NSString, UITableView;
@protocol HTSKVStore, IESLiveMTAnchorMicProvider;

@interface IESLiveMTAnchorInteractiveSettingView : IESLiveMTPopupBaseViewController <UITableViewDataSource, UITableViewDelegate, IESLiveMTMicSettingSwitchCellDelegate>
{
    LiveRoomModel *_roomModel;
    UITableView *_tableView;
    NSArray *_settings;
    id <IESLiveMTAnchorMicProvider> _anchorMicProvider;
    id <HTSKVStore> _kvStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) id <IESLiveMTAnchorMicProvider> anchorMicProvider; // @synthesize anchorMicProvider=_anchorMicProvider;
@property(retain, nonatomic) NSArray *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(readonly, nonatomic) long long linkMicStats;
- (void)sendSettingsWithStats:(long long)arg1;
- (void)onClickSettingSwitchCell:(unsigned long long)arg1 on:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupViews;
- (void)onSetupNavBar:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

