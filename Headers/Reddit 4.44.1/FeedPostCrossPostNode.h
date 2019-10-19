//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ASTextNodeDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"

@class ASDisplayNode, ASTextNode, FeedPostAwardsNode, FeedPostHlsVideoView, FeedPostMediaContentNode, FeedPostOptions, FeedPostThumbnailNode, NSString, Post, _TtC6Reddit20FeedPostMetadataNode;
@protocol FeedPostCrossPostNodeDelegate;

@interface FeedPostCrossPostNode : BaseFeedDisplayNode <ASTextNodeDelegate, ObjectObserverProtocol>
{
    Post *_post;
    FeedPostThumbnailNode *_thumbnailNode;
    id <FeedPostCrossPostNodeDelegate> _delegate;
    ASTextNode *_textNode;
    ASTextNode *_headerNode;
    FeedPostMediaContentNode *_mediaNode;
    FeedPostAwardsNode *_awardsNode;
    FeedPostOptions *_options;
    ASDisplayNode *_footerNode;
    ASTextNode *_metaTextNode;
    _TtC6Reddit20FeedPostMetadataNode *_metadataNode;
}

@property(retain, nonatomic) _TtC6Reddit20FeedPostMetadataNode *metadataNode; // @synthesize metadataNode=_metadataNode;
@property(retain, nonatomic) ASTextNode *metaTextNode; // @synthesize metaTextNode=_metaTextNode;
@property(readonly, nonatomic) ASDisplayNode *footerNode; // @synthesize footerNode=_footerNode;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) FeedPostAwardsNode *awardsNode; // @synthesize awardsNode=_awardsNode;
@property(retain, nonatomic) FeedPostMediaContentNode *mediaNode; // @synthesize mediaNode=_mediaNode;
@property(retain, nonatomic) ASTextNode *headerNode; // @synthesize headerNode=_headerNode;
@property(retain, nonatomic) ASTextNode *textNode; // @synthesize textNode=_textNode;
@property(nonatomic) __weak id <FeedPostCrossPostNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FeedPostThumbnailNode *thumbnailNode; // @synthesize thumbnailNode=_thumbnailNode;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (_Bool)textNode:(id)arg1 shouldHighlightLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)determineHeaderExclusionRectWithTextNodeWidth:(double)arg1;
- (void)determineTextExclusionRectWithThumbnailYOriginDistanceFromTextNodeOrigin:(double)arg1 textNodeWidth:(double)arg2;
- (id)layoutSpecForMediaContent:(CDStruct_90e057aa)arg1;
- (id)layoutSpecForTextAndThumbnail:(CDStruct_90e057aa)arg1;
- (id)layoutSpecForTextOnlyContent:(CDStruct_90e057aa)arg1;
- (_Bool)shouldDisplayAwardsNode;
- (void)configureAwardsNodeForTextAndThumbnailWithMaxWidth:(double)arg1;
- (void)didTapThumbnail:(id)arg1;
- (void)didTapBody:(id)arg1;
- (_Bool)shouldCreateMediaNode;
- (_Bool)shouldCreateThumbnailNode;
- (struct CGSize)compactThumbnailSizeWithInsets;
- (struct CGSize)thumbnailSize;
- (_Bool)isCompactMode;
- (void)configureTextNode;
- (void)configureHeaderAndFooter;
- (void)configureNodes;
- (void)createNodes;
- (void)createFooterNode;
- (void)createAwardsNodeIfNecessary;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didLoad;
- (void)noLongerPastVisibilityThreshold;
- (void)didPassVisibilityThreshold;
- (void)didBecomeFullyVisible;
@property(readonly, nonatomic) FeedPostHlsVideoView *hlsVideoView;
- (void)postAttributedStringChanged:(id)arg1;
- (void)dealloc;
- (id)initWithPost:(id)arg1 options:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

