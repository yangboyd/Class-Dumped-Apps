//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>

@interface _TtC11IGTVProfile43IGTVProfileFollowRelationshipViewController : IGViewController <IGListAdapterDataSource>
{
    // Error parsing type: , name: userSession
    // Error parsing type: , name: user
    // Error parsing type: , name: followController
    // Error parsing type: , name: $__lazy_storage_$_collectionView
    // Error parsing type: , name: $__lazy_storage_$_listAdapter
}

- (void).cxx_destruct;
- (id)initWithAnalyticsModule:(id)arg1 performanceListener:(id)arg2;
- (id)initWithPerformanceListener:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserSession:(id)arg1 user:(id)arg2 followController:(id)arg3;
@property(nonatomic, readonly) _Bool prefersStatusBarHidden;

@end

