//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FollowModelObserver-Protocol.h"

@class MultipleFollowModel, NSString;
@protocol SPTFeedFollowHandlerDelegate, SPTFollowModelFactory, SPTLinkDispatcher;

@interface SPTFeedFollowHandler : NSObject <FollowModelObserver>
{
    id <SPTFeedFollowHandlerDelegate> _delegate;
    id <SPTFollowModelFactory> _followModelFactory;
    id <SPTLinkDispatcher> _linkDispatcher;
    MultipleFollowModel *_multipleFollowModel;
}

@property(retain, nonatomic) MultipleFollowModel *multipleFollowModel; // @synthesize multipleFollowModel=_multipleFollowModel;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(nonatomic) __weak id <SPTFeedFollowHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)navigateToPageForItem:(id)arg1;
- (void)toggleFollowStateForItem:(id)arg1;
- (_Bool)followStatusForItem:(id)arg1;
- (void)loadFollowModelForItems:(id)arg1;
- (id)initWithFollowModelFactory:(id)arg1 linkDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

