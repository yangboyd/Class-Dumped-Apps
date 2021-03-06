//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface IFBorderedButton : UIButton
{
    NSMutableDictionary *_borderColors;
    NSMutableDictionary *_backgroundColors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(retain, nonatomic) NSMutableDictionary *borderColors; // @synthesize borderColors=_borderColors;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)updateBackgroundColorForCurrentState;
- (void)updateBorderColorForCurrentState;
- (void)updateStateDependentValues;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)init;

@end

