//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface YTEditTrimHandleView : UIView
{
    UIView *_handleView;
    _Bool _panning;
    _Bool _longPressing;
}

+ (struct CGSize)desiredSize;
@property(nonatomic, getter=isLongPressing) _Bool longPressing; // @synthesize longPressing=_longPressing;
@property(nonatomic, getter=isPanning) _Bool panning; // @synthesize panning=_panning;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct UIEdgeInsets)visibleInsets;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

