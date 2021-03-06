//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, BaseCollectionView, ContactActionSheetDelegate, DirectChannel, NSArray, NSString, NSURL, RedditService, _TtC6Reddit26ChatGroupMembersDataSource;
@protocol AccountContext, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface ChatMembersViewController : BaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    id <AccountContext> _accountContext;
    BaseCollectionView *_collectionView;
    DirectChannel *_channel;
    ContactActionSheetDelegate *_contactActionSheetDelegate;
    NSArray *_memberViewModels;
    _TtC6Reddit26ChatGroupMembersDataSource *_groupMembersDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC6Reddit26ChatGroupMembersDataSource *groupMembersDataSource; // @synthesize groupMembersDataSource=_groupMembersDataSource;
@property(copy, nonatomic) NSArray *memberViewModels; // @synthesize memberViewModels=_memberViewModels;
@property(retain, nonatomic) ContactActionSheetDelegate *contactActionSheetDelegate; // @synthesize contactActionSheetDelegate=_contactActionSheetDelegate;
@property(retain, nonatomic) DirectChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (void)trackAnalyticsEventWithAction:(id)arg1 noun:(id)arg2 reportedContact:(id)arg3 blockedContact:(id)arg4;
- (void)showContactActionSheetWithContact:(id)arg1 sourceView:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)viewModelForIndexPath:(id)arg1;
- (id)contactForIndexPath:(id)arg1;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 channel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

