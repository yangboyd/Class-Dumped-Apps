//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGActivityStorySectionControllerSwipeDelegate-Protocol.h>

@class IGActivityStoryItemConfiguration, IGListAdapter, NSString;
@protocol IGUserExperimentSetProviding;

@interface IGNewsCollectionViewCellSwipeCoordinator : NSObject <IGActivityStorySectionControllerSwipeDelegate>
{
    id <IGUserExperimentSetProviding> _experimentSetProvider;
    IGActivityStoryItemConfiguration *_currentlyOpenConfiguration;
    IGListAdapter *_listAdapter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
@property(retain, nonatomic) IGActivityStoryItemConfiguration *currentlyOpenConfiguration; // @synthesize currentlyOpenConfiguration=_currentlyOpenConfiguration;
- (void)activityStorySectionController:(id)arg1 didSwipeOpenConfiguration:(id)arg2;
- (void)scrollViewDidEndDragging;
- (void)viewWillDisappear;
- (id)initWithListAdapter:(id)arg1 experimentSetProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

