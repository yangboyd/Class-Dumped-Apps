//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPAlertControllerThemeBase.h"

@class BDPAlertControllerActionTheme, BDPAlertControllerAlertViewTheme, BDPAlertControllerContentTheme, BDPAlertControllerSeparatorTheme, BDPAlertControllerTitleTheme;

@interface BDPAlertControllerTheme : BDPAlertControllerThemeBase
{
    BDPAlertControllerAlertViewTheme *_alertView;
    BDPAlertControllerTitleTheme *_title;
    BDPAlertControllerContentTheme *_content;
    BDPAlertControllerSeparatorTheme *_separator;
    BDPAlertControllerActionTheme *_action;
}

+ (id)defaultAlertTheme;
+ (id)hostCustomedAlertTheme;
@property(retain, nonatomic) BDPAlertControllerActionTheme *action; // @synthesize action=_action;
@property(retain, nonatomic) BDPAlertControllerSeparatorTheme *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) BDPAlertControllerContentTheme *content; // @synthesize content=_content;
@property(retain, nonatomic) BDPAlertControllerTitleTheme *title; // @synthesize title=_title;
@property(retain, nonatomic) BDPAlertControllerAlertViewTheme *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (id)init;

@end

