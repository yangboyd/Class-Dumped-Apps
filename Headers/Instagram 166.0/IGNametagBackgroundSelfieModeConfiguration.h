//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGNametagBackgroundModeConfiguration.h>

@class NSURL;

@interface IGNametagBackgroundSelfieModeConfiguration : IGNametagBackgroundModeConfiguration
{
    _Bool _isInNuxMode;
    NSURL *_selfieImageURL;
}

+ (id)configWithSelfieURL:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInNuxMode; // @synthesize isInNuxMode=_isInNuxMode;
@property(retain, nonatomic) NSURL *selfieImageURL; // @synthesize selfieImageURL=_selfieImageURL;
- (id)_initWithBarStyle:(long long)arg1 mode:(long long)arg2 selfie:(id)arg3 backgroundConfigurations:(id)arg4;

@end

