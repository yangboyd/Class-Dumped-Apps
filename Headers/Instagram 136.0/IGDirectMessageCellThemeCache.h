//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectMessageCellThemeReading-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMessageCellThemeWriting-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IGDirectMessageCellThemeCache : NSObject <IGDirectMessageCellThemeReading, IGDirectMessageCellThemeWriting>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_internalThreadMessageAppearanceCache;
}

@property(retain) NSDictionary *internalThreadMessageAppearanceCache; // @synthesize internalThreadMessageAppearanceCache=_internalThreadMessageAppearanceCache;
- (void).cxx_destruct;
- (void)writeMessageCellTheme:(id)arg1 forCacheKey:(id)arg2;
- (id)themeForCacheKey:(id)arg1;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

