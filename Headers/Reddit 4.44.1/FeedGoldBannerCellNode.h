//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCollectionViewCellNode.h"

@class ASDisplayNode, ASImageNode, ASTextNode, BaseButtonNode, GoldBanner;
@protocol FeedGoldBannerCellNodeDelegate;

@interface FeedGoldBannerCellNode : BaseCollectionViewCellNode
{
    GoldBanner *_banner;
    id <FeedGoldBannerCellNodeDelegate> _delegate;
    ASImageNode *_imageNode;
    ASTextNode *_textNode;
    BaseButtonNode *_actionButtonNode;
    BaseButtonNode *_closeButtonNode;
    ASDisplayNode *_gradientNode;
}

@property(retain, nonatomic) ASDisplayNode *gradientNode; // @synthesize gradientNode=_gradientNode;
@property(retain, nonatomic) BaseButtonNode *closeButtonNode; // @synthesize closeButtonNode=_closeButtonNode;
@property(retain, nonatomic) BaseButtonNode *actionButtonNode; // @synthesize actionButtonNode=_actionButtonNode;
@property(retain, nonatomic) ASTextNode *textNode; // @synthesize textNode=_textNode;
@property(retain, nonatomic) ASImageNode *imageNode; // @synthesize imageNode=_imageNode;
@property(nonatomic) __weak id <FeedGoldBannerCellNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GoldBanner *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;
- (id)createGradientNodeIfNeeded;
- (id)createCloseButtonNode;
- (id)createActionButtonNode;
- (id)createTextNode;
- (id)createImageNode;
- (void)closeButtonDidTap:(id)arg1;
- (void)actionButtonDidTap:(id)arg1;
- (void)didEnterFullyVisibleStateWithVisibilityContext:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithBanner:(id)arg1 visibilityTracker:(id)arg2;

@end

