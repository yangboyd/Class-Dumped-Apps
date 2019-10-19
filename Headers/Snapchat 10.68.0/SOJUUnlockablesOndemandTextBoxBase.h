//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandTextBoxBase-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandTextShadowParametersList;

@interface SOJUUnlockablesOndemandTextBoxBase : NSObject <SOJUUnlockablesOndemandTextBoxBase>
{
    NSNumber *_posX;
    NSNumber *_posY;
    NSString *_fontName;
    NSString *_fontUrl;
    NSNumber *_fontSize;
    NSString *_defaultText;
    NSNumber *_rotation;
    NSNumber *_zPriority;
    NSString *_textAlignment;
    NSNumber *_shadowIndex;
    NSString *_presetStylizedTextId;
    SOJUUnlockablesOndemandTextShadowParametersList *_textShadowParametersList;
    NSNumber *_width;
    NSNumber *_height;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandTextShadowParametersList *textShadowParametersList; // @synthesize textShadowParametersList=_textShadowParametersList;
@property(readonly, copy, nonatomic) NSString *presetStylizedTextId; // @synthesize presetStylizedTextId=_presetStylizedTextId;
@property(readonly, copy, nonatomic) NSNumber *shadowIndex; // @synthesize shadowIndex=_shadowIndex;
@property(readonly, copy, nonatomic) NSString *textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, copy, nonatomic) NSNumber *zPriority; // @synthesize zPriority=_zPriority;
@property(readonly, copy, nonatomic) NSNumber *rotation; // @synthesize rotation=_rotation;
@property(readonly, copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(readonly, copy, nonatomic) NSNumber *fontSize; // @synthesize fontSize=_fontSize;
@property(readonly, copy, nonatomic) NSString *fontUrl; // @synthesize fontUrl=_fontUrl;
@property(readonly, copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, copy, nonatomic) NSNumber *posY; // @synthesize posY=_posY;
@property(readonly, copy, nonatomic) NSNumber *posX; // @synthesize posX=_posX;
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
- (id)initWithPosX:(id)arg1 posY:(id)arg2 fontName:(id)arg3 fontUrl:(id)arg4 fontSize:(id)arg5 defaultText:(id)arg6 rotation:(id)arg7 zPriority:(id)arg8 textAlignment:(id)arg9 shadowIndex:(id)arg10 presetStylizedTextId:(id)arg11 textShadowParametersList:(id)arg12 width:(id)arg13 height:(id)arg14;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (double)heightValue;
- (double)widthValue;
- (int)shadowIndexValue;
- (long long)textAlignmentEnum;
- (int)zPriorityValue;
- (int)rotationValue;
- (int)fontSizeValue;
- (int)posYValue;
- (int)posXValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

