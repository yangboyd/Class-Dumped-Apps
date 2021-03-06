//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEGradientStyle, GLUEImageStyle, NSString, SPTEncoreTypeStyle;

@interface SPTHomeUIPromoV2ViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_gradientStyle;
    GLUEImageStyle *_backgroundImageStyle;
    GLUEImageStyle *_logoImageStyle;
    SPTEncoreTypeStyle *_backgroundLabelStyle;
    SPTEncoreTypeStyle *_titleLabelStyle;
    SPTEncoreTypeStyle *_subtitleLabelStyle;
}

+ (id)defaultStyleWithTheme:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) SPTEncoreTypeStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) SPTEncoreTypeStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) SPTEncoreTypeStyle *backgroundLabelStyle; // @synthesize backgroundLabelStyle=_backgroundLabelStyle;
@property(copy, nonatomic) GLUEImageStyle *logoImageStyle; // @synthesize logoImageStyle=_logoImageStyle;
@property(copy, nonatomic) GLUEImageStyle *backgroundImageStyle; // @synthesize backgroundImageStyle=_backgroundImageStyle;
@property(copy, nonatomic) GLUEGradientStyle *gradientStyle; // @synthesize gradientStyle=_gradientStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

