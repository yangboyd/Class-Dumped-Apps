//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface SCAlertViewActionButton : UIButton
{
    NSMutableDictionary *_backgroundColors;
    NSMutableDictionary *_borderColors;
}

+ (id)keyForControlState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

