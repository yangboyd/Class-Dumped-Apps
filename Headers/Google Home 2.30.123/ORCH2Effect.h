//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ORCH2OpacityEffect, ORCH2TranslationEffect;

@interface ORCH2Effect : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int effectType; // @dynamic effectType;
@property(nonatomic) _Bool hasEffectType; // @dynamic hasEffectType;
@property(nonatomic) _Bool hasOpacityEffect; // @dynamic hasOpacityEffect;
@property(nonatomic) _Bool hasTranslationEffect; // @dynamic hasTranslationEffect;
@property(retain, nonatomic) ORCH2OpacityEffect *opacityEffect; // @dynamic opacityEffect;
@property(retain, nonatomic) ORCH2TranslationEffect *translationEffect; // @dynamic translationEffect;

@end

