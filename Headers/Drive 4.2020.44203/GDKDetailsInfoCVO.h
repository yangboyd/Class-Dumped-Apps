//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

@class GDKDetailsInfoState, GDKTheme;

@interface GDKDetailsInfoCVO : GOOBaseContentViewObject
{
    GDKDetailsInfoState *_state;
    GDKTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GDKDetailsInfoState *state; // @synthesize state=_state;
- (Class)contentViewClass;
- (id)initWithState:(id)arg1 theme:(id)arg2;

@end

