//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface SPTLyricsV2Colors : NSObject
{
    UIColor *_activeColor;
    UIColor *_brightColor;
    UIColor *_darkColor;
}

+ (id)defaultColorsWithTheme:(id)arg1;
@property(retain, nonatomic) UIColor *darkColor; // @synthesize darkColor=_darkColor;
@property(retain, nonatomic) UIColor *brightColor; // @synthesize brightColor=_brightColor;
@property(retain, nonatomic) UIColor *activeColor; // @synthesize activeColor=_activeColor;
- (void).cxx_destruct;
- (id)initWithActiveColor:(id)arg1 brightColor:(id)arg2 darkColor:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end

