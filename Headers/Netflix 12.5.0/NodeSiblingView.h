//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUILabel, NodeView;

@interface NodeSiblingView : UIView
{
    _Bool _canCopy;
    _Bool _animating;
    NFUILabel *_titleLabel;
    NodeView *_siblingView;
}

+ (id)hintForObject:(id)arg1;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool canCopy; // @synthesize canCopy=_canCopy;
@property(nonatomic) __weak NodeView *siblingView; // @synthesize siblingView=_siblingView;
@property(nonatomic) __weak NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)longTapDetected:(id)arg1;
- (void)showHintFor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

