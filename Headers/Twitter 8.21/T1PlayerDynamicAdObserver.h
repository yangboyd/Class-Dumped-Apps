//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@class TFNTwitterAccount, TFNTwitterDynamicVideoAdManager;

@interface T1PlayerDynamicAdObserver : NSObject <TAVPlaybackObserver>
{
    _Bool _didFlushAdManager;
    TFNTwitterAccount *_account;
    TFNTwitterDynamicVideoAdManager *_dynamicVideoAdManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterDynamicVideoAdManager *dynamicVideoAdManager; // @synthesize dynamicVideoAdManager=_dynamicVideoAdManager;
@property(nonatomic) _Bool didFlushAdManager; // @synthesize didFlushAdManager=_didFlushAdManager;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (id)initWithAccount:(id)arg1 dynamicVideoAdManager:(id)arg2;
- (id)init;

@end

