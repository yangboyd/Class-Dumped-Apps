//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IESLiveMTFeedMessageListReactions-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HTSLiveMessageActionCreator, IESLiveMTFeedMessageListStore, IESLiveMTFeedMessageListTableView, NSNumber, NSString;
@protocol IESLiveFeedMessageListViewControllerDelegate, IESLiveMTFeedMessageListActions;

@interface IESLiveMTFeedMessageListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, IESLiveMTFeedMessageListReactions>
{
    id <IESLiveFeedMessageListViewControllerDelegate> _delegate;
    CDUnknownBlockType _roomFinishMessageHandler;
    HTSLiveMessageActionCreator *_messageActionCreator;
    NSNumber *_roomID;
    IESLiveMTFeedMessageListStore *_store;
    id <IESLiveMTFeedMessageListActions> _dispatcher;
    IESLiveMTFeedMessageListTableView *_messageListView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTFeedMessageListTableView *messageListView; // @synthesize messageListView=_messageListView;
@property(retain, nonatomic) id <IESLiveMTFeedMessageListActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) IESLiveMTFeedMessageListStore *store; // @synthesize store=_store;
@property(copy, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) HTSLiveMessageActionCreator *messageActionCreator; // @synthesize messageActionCreator=_messageActionCreator;
@property(copy, nonatomic) CDUnknownBlockType roomFinishMessageHandler; // @synthesize roomFinishMessageHandler=_roomFinishMessageHandler;
@property(nonatomic) __weak id <IESLiveFeedMessageListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableAnimationIfNeeded;
- (void)disableAnimationIfNeeded;
- (void)loadMessageListView;
- (void)loadOtherUIAsync;
- (void)unloadMessageClient;
- (void)loadMessageClient;
- (void)roomFinished;
- (void)adjustMessageListWidth:(double)arg1;
- (void)setupTopGradient;
- (void)updateMessageList;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)startShowMessages:(id)arg1 shouldShowKeyMessage:(_Bool)arg2 shouldShowRollingMessage:(_Bool)arg3;
- (void)refreshWithRoom:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

