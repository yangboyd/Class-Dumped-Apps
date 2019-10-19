//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGeofilterDisplayParameters-Protocol.h"

@class NSNumber, NSString, SOJUTextShadowParameters;

@interface SOJUGeofilterDisplayParameters : NSObject <SOJUGeofilterDisplayParameters>
{
    NSNumber *_size;
    NSString *_color;
    NSString *_font;
    NSString *_staticText;
    NSString *_align;
    NSNumber *_textAlpha;
    SOJUTextShadowParameters *_textShadow;
    NSNumber *_autoResizeEnabled;
    NSString *_fallbackText;
    NSNumber *_maxFontSize;
    NSString *_dynamicText;
    NSString *_targetDatetime;
    NSString *_targetDatetimeDirection;
    NSString *_capitalization;
    NSString *_calculatedDynamicText;
    NSString *_fallbackMethod;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *fallbackMethod; // @synthesize fallbackMethod=_fallbackMethod;
@property(readonly, copy, nonatomic) NSString *calculatedDynamicText; // @synthesize calculatedDynamicText=_calculatedDynamicText;
@property(readonly, copy, nonatomic) NSString *capitalization; // @synthesize capitalization=_capitalization;
@property(readonly, copy, nonatomic) NSString *targetDatetimeDirection; // @synthesize targetDatetimeDirection=_targetDatetimeDirection;
@property(readonly, copy, nonatomic) NSString *targetDatetime; // @synthesize targetDatetime=_targetDatetime;
@property(readonly, copy, nonatomic) NSString *dynamicText; // @synthesize dynamicText=_dynamicText;
@property(readonly, copy, nonatomic) NSNumber *maxFontSize; // @synthesize maxFontSize=_maxFontSize;
@property(readonly, copy, nonatomic) NSString *fallbackText; // @synthesize fallbackText=_fallbackText;
@property(readonly, copy, nonatomic) NSNumber *autoResizeEnabled; // @synthesize autoResizeEnabled=_autoResizeEnabled;
@property(readonly, copy, nonatomic) SOJUTextShadowParameters *textShadow; // @synthesize textShadow=_textShadow;
@property(readonly, copy, nonatomic) NSNumber *textAlpha; // @synthesize textAlpha=_textAlpha;
@property(readonly, copy, nonatomic) NSString *align; // @synthesize align=_align;
@property(readonly, copy, nonatomic) NSString *staticText; // @synthesize staticText=_staticText;
@property(readonly, copy, nonatomic) NSString *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSNumber *size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 color:(id)arg2 font:(id)arg3 staticText:(id)arg4 align:(id)arg5 textAlpha:(id)arg6 textShadow:(id)arg7 autoResizeEnabled:(id)arg8 fallbackText:(id)arg9 maxFontSize:(id)arg10 dynamicText:(id)arg11 targetDatetime:(id)arg12 targetDatetimeDirection:(id)arg13 capitalization:(id)arg14 calculatedDynamicText:(id)arg15 fallbackMethod:(id)arg16;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)fallbackMethodEnum;
- (long long)capitalizationEnum;
- (long long)targetDatetimeDirectionEnum;
- (int)maxFontSizeValue;
- (_Bool)autoResizeEnabledValue;
- (float)textAlphaValue;
- (int)sizeValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

