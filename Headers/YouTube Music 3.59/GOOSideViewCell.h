//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MDCInkView, OGLOnPressHighlightView, UIView;

@interface GOOSideViewCell : UICollectionViewCell
{
    _Bool _highlightWhenSelected;
    MDCInkView *_inkView;
    OGLOnPressHighlightView *_highlightView;
    UIView *_backdropView;
}

@property(nonatomic) _Bool highlightWhenSelected; // @synthesize highlightWhenSelected=_highlightWhenSelected;
@property(retain, nonatomic) UIView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) OGLOnPressHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) MDCInkView *inkView; // @synthesize inkView=_inkView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)setupSubviewsIfNeeded;

@end

