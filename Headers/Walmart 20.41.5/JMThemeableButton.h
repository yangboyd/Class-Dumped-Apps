//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface JMThemeableButton : UIButton
{
    double _cornerRadius;
    NSMutableDictionary *_backgroundColorsForStates;
}

@property(retain, nonatomic) NSMutableDictionary *backgroundColorsForStates; // @synthesize backgroundColorsForStates=_backgroundColorsForStates;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (id)backgroundColorForState:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1;
- (void)setDefaultValues;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;

@end

