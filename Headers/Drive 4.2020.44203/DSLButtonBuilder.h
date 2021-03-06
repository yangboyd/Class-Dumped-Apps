//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface DSLButtonBuilder : NSObject
{
    _Bool _useMDCAppBarInsets;
    _Bool _useGrayScheme;
    UIImage *_templateImage;
    UIColor *_inkColor;
    UIColor *_defaultTintColor;
    UIColor *_selectedTintColor;
    UIColor *_highlightedTintColor;
    UIColor *_disabledTintColor;
}

+ (id)builder;
+ (id)arrowUpButtonBuilder;
+ (id)arrowDownButtonBuilder;
+ (id)nextButtonBuilder;
+ (id)previousButtonBuilder;
+ (id)moreButtonBuilder;
+ (id)doneButtonBuilder;
+ (id)closeButtonBuilder;
+ (id)backButtonBuilder;
- (void).cxx_destruct;
@property(nonatomic) _Bool useGrayScheme; // @synthesize useGrayScheme=_useGrayScheme;
@property(nonatomic) _Bool useMDCAppBarInsets; // @synthesize useMDCAppBarInsets=_useMDCAppBarInsets;
@property(retain, nonatomic) UIColor *disabledTintColor; // @synthesize disabledTintColor=_disabledTintColor;
@property(retain, nonatomic) UIColor *highlightedTintColor; // @synthesize highlightedTintColor=_highlightedTintColor;
@property(retain, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=_selectedTintColor;
@property(retain, nonatomic) UIColor *defaultTintColor; // @synthesize defaultTintColor=_defaultTintColor;
@property(retain, nonatomic) UIColor *inkColor; // @synthesize inkColor=_inkColor;
@property(retain, nonatomic) UIImage *templateImage; // @synthesize templateImage=_templateImage;
- (id)build;
- (id)init;

@end

