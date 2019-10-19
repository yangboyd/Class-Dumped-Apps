//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ObjectObserverProtocol-Protocol.h"

@class ASDisplayNode, BaseButtonNode, FeedPostOptions, NSString, Post;
@protocol FeedPostModerateBarNodeDelegate;

@interface FeedPostModerateBarNode : BaseFeedDisplayNode <ObjectObserverProtocol>
{
    Post *_post;
    id <FeedPostModerateBarNodeDelegate> _delegate;
    FeedPostOptions *_options;
    BaseButtonNode *_approveButtonNode;
    BaseButtonNode *_deleteButtonNode;
    BaseButtonNode *_deleteAsSpamButtonNode;
    BaseButtonNode *_distinguishButtonNode;
    BaseButtonNode *_overflowButtonNode;
    BaseButtonNode *_flairButtonNode;
    ASDisplayNode *_topSeparatorNode;
}

+ (id)buttonNodeWithIconName:(id)arg1 selectedColor:(id)arg2;
@property(retain, nonatomic) ASDisplayNode *topSeparatorNode; // @synthesize topSeparatorNode=_topSeparatorNode;
@property(retain, nonatomic) BaseButtonNode *flairButtonNode; // @synthesize flairButtonNode=_flairButtonNode;
@property(retain, nonatomic) BaseButtonNode *overflowButtonNode; // @synthesize overflowButtonNode=_overflowButtonNode;
@property(retain, nonatomic) BaseButtonNode *distinguishButtonNode; // @synthesize distinguishButtonNode=_distinguishButtonNode;
@property(retain, nonatomic) BaseButtonNode *deleteAsSpamButtonNode; // @synthesize deleteAsSpamButtonNode=_deleteAsSpamButtonNode;
@property(retain, nonatomic) BaseButtonNode *deleteButtonNode; // @synthesize deleteButtonNode=_deleteButtonNode;
@property(retain, nonatomic) BaseButtonNode *approveButtonNode; // @synthesize approveButtonNode=_approveButtonNode;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <FeedPostModerateBarNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)updateContentViewsForData:(id)arg1;
- (void)flairButtonTapped:(id)arg1;
- (void)overflowButtonTapped:(id)arg1;
- (void)distinguishButtonTapped:(id)arg1;
- (void)spamButtonTapped:(id)arg1;
- (void)deleteButtonTapped:(id)arg1;
- (void)approveButtonTapped:(id)arg1;
- (void)configureNodes;
- (void)createNodes;
- (void)reconfigure;
- (void)addKeyValueObservations;
- (void)didLoad;
- (id)initWithPost:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

