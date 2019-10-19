//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTLogCenter;

@interface SPTShareScreenshotBannerLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    NSString *_logContext;
}

@property(retain, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionWithPageURI:(id)arg1 interactionType:(id)arg2 userIntent:(id)arg3;
- (void)logUIImpressionWithPageURI:(id)arg1 impressionType:(id)arg2;
- (void)logShareScreenshotBannerButtonInteractionWithContextURI:(id)arg1;
- (void)logShareScreenshotBannerImpressionWithContextURI:(id)arg1;
- (id)initWithLogCenter:(id)arg1 logContext:(id)arg2;

@end

