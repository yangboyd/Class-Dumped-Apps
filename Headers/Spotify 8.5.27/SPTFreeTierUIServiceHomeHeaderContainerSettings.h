//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUEGradientStyle, NSString;
@protocol GLUETheme;

@interface SPTFreeTierUIServiceHomeHeaderContainerSettings : NSObject
{
    NSString *_gradientName;
    id <GLUETheme> _theme;
}

@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *gradientName; // @synthesize gradientName=_gradientName;
- (void).cxx_destruct;
@property(readonly, nonatomic) GLUEGradientStyle *gradientStyle;
- (id)initWithDictionary:(id)arg1 theme:(id)arg2;

@end

