//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface MLCaptionWindowStyle : NSObject
{
    _Bool _hasFillOpacity;
    _Bool _hasBorderOpacity;
    unsigned long long _ID;
    long long _modeHint;
    long long _justification;
    long long _scrollDirection;
    long long _printDirection;
    UIColor *_fillColor;
    double _fillOpacity;
    UIColor *_borderColor;
    double _borderOpacity;
    long long _borderType;
}

+ (id)defaultWindowStyle;
@property(readonly, nonatomic) long long borderType; // @synthesize borderType=_borderType;
@property(readonly, nonatomic) _Bool hasBorderOpacity; // @synthesize hasBorderOpacity=_hasBorderOpacity;
@property(readonly, nonatomic) double borderOpacity; // @synthesize borderOpacity=_borderOpacity;
@property(readonly, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, nonatomic) _Bool hasFillOpacity; // @synthesize hasFillOpacity=_hasFillOpacity;
@property(readonly, nonatomic) double fillOpacity; // @synthesize fillOpacity=_fillOpacity;
@property(readonly, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly, nonatomic) long long printDirection; // @synthesize printDirection=_printDirection;
@property(readonly, nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) long long justification; // @synthesize justification=_justification;
@property(readonly, nonatomic) long long modeHint; // @synthesize modeHint=_modeHint;
@property(readonly, nonatomic) unsigned long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithID:(unsigned long long)arg1 modeHint:(long long)arg2 justification:(long long)arg3 scrollDirection:(long long)arg4 printDirection:(long long)arg5 fillColor:(id)arg6 fillOpacity:(double)arg7 hasFillOpacity:(_Bool)arg8 borderColor:(id)arg9 borderOpacity:(double)arg10 hasBorderOpacity:(_Bool)arg11 borderType:(long long)arg12;

@end

