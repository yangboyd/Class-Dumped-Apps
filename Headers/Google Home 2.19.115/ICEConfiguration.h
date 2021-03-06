//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ICEImageLoadingTracker;

@interface ICEConfiguration : NSObject
{
    _Bool _nilChecksEnabled;
    _Bool _forceInteractiveTranslateCard;
    _Bool _optimizeComponents;
    id <ICEImageLoadingTracker> _trackerDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <ICEImageLoadingTracker> trackerDelegate; // @synthesize trackerDelegate=_trackerDelegate;
@property(nonatomic) _Bool optimizeComponents; // @synthesize optimizeComponents=_optimizeComponents;
@property _Bool forceInteractiveTranslateCard; // @synthesize forceInteractiveTranslateCard=_forceInteractiveTranslateCard;
@property _Bool nilChecksEnabled; // @synthesize nilChecksEnabled=_nilChecksEnabled;
- (void).cxx_destruct;

@end

