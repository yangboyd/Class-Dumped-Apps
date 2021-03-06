//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface TikTokBubbleContentContainerView : UIView
{
    CDUnknownBlockType _tapBlock;
    long long _style;
    unsigned long long _direction;
    UIView *_contentView;
    UIImageView *_bodyImageView;
    UIImageView *_pointerImageView;
    double _pointerOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double pointerOffset; // @synthesize pointerOffset=_pointerOffset;
@property(retain, nonatomic) UIImageView *pointerImageView; // @synthesize pointerImageView=_pointerImageView;
@property(retain, nonatomic) UIImageView *bodyImageView; // @synthesize bodyImageView=_bodyImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void)setContentColor:(id)arg1;
- (void)calculateAndSetAnchor;
- (void)safeSetPointerOffset:(double)arg1;
- (double)safeGetPointerOffset:(double)arg1;
- (id)pointerImage;
- (struct CGPoint)anchorPositionRelatedToLeftTop;
- (void)tapped;
- (id)initWithDirection:(unsigned long long)arg1 contentView:(id)arg2;

@end

