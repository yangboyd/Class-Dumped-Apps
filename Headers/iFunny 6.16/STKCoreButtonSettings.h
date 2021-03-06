//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface STKCoreButtonSettings : NSObject
{
    _Bool _shadowHide;
    _Bool _inversTimer;
    float _shadowStrong;
    float _shadowRadius;
    float _lineWidth;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    UIColor *_borderStrokeColor;
    long long _mode;
    struct CGSize _shadowSize;
    struct CGSize _shadowInsetSize;
    struct CGRect _drawRect;
}

+ (id)defaultSettings;
@property(nonatomic) _Bool inversTimer; // @synthesize inversTimer=_inversTimer;
@property(nonatomic) struct CGRect drawRect; // @synthesize drawRect=_drawRect;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) struct CGSize shadowInsetSize; // @synthesize shadowInsetSize=_shadowInsetSize;
@property(nonatomic) float shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool shadowHide; // @synthesize shadowHide=_shadowHide;
@property(nonatomic) float shadowStrong; // @synthesize shadowStrong=_shadowStrong;
@property(nonatomic) struct CGSize shadowSize; // @synthesize shadowSize=_shadowSize;
@property(retain, nonatomic) UIColor *borderStrokeColor; // @synthesize borderStrokeColor=_borderStrokeColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;

@end

