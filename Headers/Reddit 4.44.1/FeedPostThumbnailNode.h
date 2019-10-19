//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASImageNode, ASNetworkImageNode, FeedPostOptions, Post, UIImage, UrlLabelNode;

@interface FeedPostThumbnailNode : BaseFeedDisplayNode
{
    _Bool _isShowingOriginalThumbnail;
    _Bool _blurImage;
    _Bool _shouldApplyStyling;
    ASNetworkImageNode *_thumbnailNode;
    Post *_post;
    ASImageNode *_postTypeIconNode;
    ASImageNode *_linkTypeIconNode;
    UrlLabelNode *_urlLabelNode;
    FeedPostOptions *_options;
    struct CGSize _size;
}

+ (_Bool)shouldShowUrlLabelForPost:(id)arg1;
@property(nonatomic) _Bool shouldApplyStyling; // @synthesize shouldApplyStyling=_shouldApplyStyling;
@property(nonatomic) _Bool blurImage; // @synthesize blurImage=_blurImage;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(nonatomic) _Bool isShowingOriginalThumbnail; // @synthesize isShowingOriginalThumbnail=_isShowingOriginalThumbnail;
@property(retain, nonatomic) UrlLabelNode *urlLabelNode; // @synthesize urlLabelNode=_urlLabelNode;
@property(retain, nonatomic) ASImageNode *linkTypeIconNode; // @synthesize linkTypeIconNode=_linkTypeIconNode;
@property(retain, nonatomic) ASImageNode *postTypeIconNode; // @synthesize postTypeIconNode=_postTypeIconNode;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) ASNetworkImageNode *thumbnailNode; // @synthesize thumbnailNode=_thumbnailNode;
- (void).cxx_destruct;
- (void)configurePlaceholderImage;
- (void)configureNodes;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
@property(readonly, nonatomic) UIImage *thumbnailImage;
- (id)initWithPost:(id)arg1 options:(id)arg2 targetSize:(struct CGSize)arg3 blurImage:(_Bool)arg4 shouldApplyStyling:(_Bool)arg5;

@end

