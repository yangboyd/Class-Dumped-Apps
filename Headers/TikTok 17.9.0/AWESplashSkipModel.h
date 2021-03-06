//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWESplashSkipModel : MTLModel <MTLJSONSerializing>
{
    _Bool _enableCountdown;
    NSString *_textColor;
    double _widthExtra;
    double _heightExtra;
    NSString *_text;
    NSString *_countdownUnit;
    NSString *_backgroundColor;
    long long _buttonExtraStyle;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) long long buttonExtraStyle; // @synthesize buttonExtraStyle=_buttonExtraStyle;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *countdownUnit; // @synthesize countdownUnit=_countdownUnit;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double heightExtra; // @synthesize heightExtra=_heightExtra;
@property(nonatomic) double widthExtra; // @synthesize widthExtra=_widthExtra;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool enableCountdown; // @synthesize enableCountdown=_enableCountdown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

