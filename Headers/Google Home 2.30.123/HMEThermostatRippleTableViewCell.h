//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MDCRippleView;

@interface HMEThermostatRippleTableViewCell : UITableViewCell
{
    MDCRippleView *_rippleView;
    struct CGPoint _touchPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(retain, nonatomic) MDCRippleView *rippleView; // @synthesize rippleView=_rippleView;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initializeRippleView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

