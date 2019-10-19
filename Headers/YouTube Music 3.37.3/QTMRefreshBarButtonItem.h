//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class QTMRefreshControlIndicator, UIButton;

@interface QTMRefreshBarButtonItem : UIBarButtonItem
{
    UIButton *_button;
    QTMRefreshControlIndicator *_indicator;
}

+ (id)barButtonItemWithStrokeColor:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInsets;
- (void)stopAnimating;
- (void)startAnimating;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
- (void)buttonTapped;
- (id)initWithButton:(id)arg1 strokeColor:(id)arg2;

@end

