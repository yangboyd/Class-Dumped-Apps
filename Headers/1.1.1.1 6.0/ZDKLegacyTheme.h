//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface ZDKLegacyTheme : NSObject
{
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    UIColor *_primaryBackgroundColor;
    UIColor *_secondaryBackgroundColor;
    UIColor *_emptyBackgroundColor;
    UIColor *_metaTextColor;
    UIColor *_separatorColor;
    UIColor *_inputFieldTextColor;
    UIColor *_inputFieldBackgroundColor;
    UIFont *_mainFont;
    UIFont *_headerFont;
    UIFont *_metaTextFont;
    UIFont *_subtitleFont;
    UIFont *_subHeaderFont;
    UIFont *_boldMainFont;
    UIFont *_boldHeaderFont;
    UIFont *_boldMetaTextFont;
    UIFont *_boldSubtitleFont;
    UIFont *_boldSubHeaderFont;
}

+ (id)currentAppliedTheme;
+ (id)baseTheme;
@property(retain, nonatomic) UIFont *boldSubHeaderFont; // @synthesize boldSubHeaderFont=_boldSubHeaderFont;
@property(retain, nonatomic) UIFont *boldSubtitleFont; // @synthesize boldSubtitleFont=_boldSubtitleFont;
@property(retain, nonatomic) UIFont *boldMetaTextFont; // @synthesize boldMetaTextFont=_boldMetaTextFont;
@property(retain, nonatomic) UIFont *boldHeaderFont; // @synthesize boldHeaderFont=_boldHeaderFont;
@property(retain, nonatomic) UIFont *boldMainFont; // @synthesize boldMainFont=_boldMainFont;
@property(retain, nonatomic) UIFont *subHeaderFont; // @synthesize subHeaderFont=_subHeaderFont;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *metaTextFont; // @synthesize metaTextFont=_metaTextFont;
@property(retain, nonatomic) UIFont *headerFont; // @synthesize headerFont=_headerFont;
@property(retain, nonatomic) UIFont *mainFont; // @synthesize mainFont=_mainFont;
@property(retain, nonatomic) UIColor *inputFieldBackgroundColor; // @synthesize inputFieldBackgroundColor=_inputFieldBackgroundColor;
@property(retain, nonatomic) UIColor *inputFieldTextColor; // @synthesize inputFieldTextColor=_inputFieldTextColor;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *metaTextColor; // @synthesize metaTextColor=_metaTextColor;
@property(retain, nonatomic) UIColor *emptyBackgroundColor; // @synthesize emptyBackgroundColor=_emptyBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryBackgroundColor; // @synthesize secondaryBackgroundColor=_secondaryBackgroundColor;
@property(retain, nonatomic) UIColor *primaryBackgroundColor; // @synthesize primaryBackgroundColor=_primaryBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
- (void).cxx_destruct;
- (void)apply;
- (id)__privateInit;

@end

