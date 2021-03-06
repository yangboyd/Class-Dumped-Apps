//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class UIImageView, UIView, WAMessageTextWithImageSlice;

@interface WAMessageTextWithImageSliceView : WAMessageContainerSliceView
{
    UIView *_containerView;
    UIImageView *_imageView;
}

+ (_Bool)supportsPreviewing;
+ (_Bool)isUserInteractionEnabled;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (_Bool)roundTopCornersOnly;
- (void)fetchImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageTextWithImageSlice *slice; // @dynamic slice;

@end

